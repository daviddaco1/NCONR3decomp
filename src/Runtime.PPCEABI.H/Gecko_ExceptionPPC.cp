#include "PowerPC_EABI_Support/Runtime/MWCPlusLib.h"
#include <exception.h>
#include "PowerPC_EABI_Support/Runtime/Gecko_ExceptionPPC.h"
#include "PowerPC_EABI_Support/Runtime/NMWException.h"
#include "PowerPC_EABI_Support/Runtime/__ppc_eabi_linker.h"


#define RETURN_ADDRESS 4

union MWE_GeckoVector64 {
    double d;
    float f[2];
};

typedef union MWE_GeckoVector64 MWE_GeckoVector64;

struct GeckoFPRContext {
    double d;
    MWE_GeckoVector64 v;
};

typedef struct GeckoFPRContext GeckoFPRContext;

typedef struct ThrowContext {
    GeckoFPRContext FPR[32];
    long GPR[32];
    long CR;
    char* SP;
    char* FP;
    char* throwSP;
    char* returnaddr;
    char* throwtype;
    void* location;
    void* dtor;
    CatchInfo *catchinfo;
} ThrowContext;

typedef ThrowContext* ThrowContextPtr;

typedef struct MWExceptionInfo {
    ExceptionTableSmall* exception_record;
    char* current_function;
    char* action_pointer;
    char* code_section;
    char* data_section;
    char* TOC;
} MWExceptionInfo;

typedef struct FragmentInfo {
    ExceptionTableIndex* exception_start;
    ExceptionTableIndex* exception_end;
    char* code_start;
    char* code_end;
    char* data_start;
    char* data_end;
    char* TOC;
    int active;
} FragmentInfo;

typedef struct ProcessInfo {
    __eti_init_info* exception_info;
    char* TOC;
    int active;
} ProcessInfo;

typedef struct ActionIterator {
    MWExceptionInfo info;
    char* current_SP;
    char* current_FP;
    long current_R31;
} ActionIterator;

#define MAXFRAGMENTS 32
static ProcessInfo fragmentinfo[MAXFRAGMENTS];

typedef void (*DeleteFunc)(void *);



//Likely a fakematch
#pragma schedule once
// __register_fragment: definicion C reemplazada por asm (ver abajo)

#pragma schedule twice

// __unregister_fragment: definicion C reemplazada por asm (ver abajo)


static int ExPPC_FindExceptionFragment(char* returnaddr, FragmentInfo* frag)
{
    ProcessInfo* f;
    int i;
    __eti_init_info* eti_info;
    
    for(i = 0, f = fragmentinfo; i < MAXFRAGMENTS; ++i, ++f){
        if(f->active){
            eti_info = f->exception_info;
            while (1) {
                if(eti_info->code_size == 0) break;
                if(returnaddr >= eti_info->code_start && returnaddr < (char*)eti_info->code_start+eti_info->code_size) {
                    frag->exception_start = (ExceptionTableIndex*)eti_info->eti_start;
                    frag->exception_end = (ExceptionTableIndex*)eti_info->eti_end;
                    frag->code_start = 0;
                    frag->code_end = 0;
                    frag->data_start = 0;
                    frag->data_end = 0;
                    frag->TOC = f->TOC;
                    frag->active = f->active;
                    return 1;
                }
                 eti_info++;
            }
        }
    }
    
    return 0;
}


static void ExPPC_FindExceptionRecord(char* returnaddr, MWExceptionInfo* info){
    FragmentInfo* fragment;
    FragmentInfo frag;
    ExceptionTableIndex *exceptionindex,*p;
    unsigned long returnoffset;
    long i, m, n;

    info->exception_record = 0;
    info->action_pointer = 0;
    
    if ((ExPPC_FindExceptionFragment(returnaddr, &frag)) == 0) return;
    fragment = &frag;

    info->code_section = fragment->code_start;
    info->data_section = fragment->data_start;
    info->TOC = fragment->TOC;
    
    returnoffset = returnaddr-fragment->code_start;
    exceptionindex = fragment->exception_start;
    for(i = 0, n = fragment->exception_end-fragment->exception_start;;){
        if(i > n) return;
        p = &exceptionindex[m = (i+n)/2];

        if(returnoffset < p->functionoffset){
            n = m - 1;
        }else if(returnoffset > p->functionoffset + ETI_GetFunctionSize(p->eti_field)){
            i = m + 1;
        }else break;
    }
    info->current_function = fragment->code_start + p->functionoffset;
    info->exception_record = ETI_GetDirectStore(p->eti_field) ? (ExceptionTableSmall*)(&p->exceptionoffset) : (ExceptionTableSmall*)(fragment->data_start + p->exceptionoffset);
    
    returnoffset -= p->functionoffset;
    
    if (ET_IsLargeTable(info->exception_record->et_field)){
        ExceptionTableLarge* etl = (ExceptionTableLarge*)info->exception_record;
        ExceptionRangeLarge* erl;
        
        for(erl = etl->ranges; erl->start != 0; erl++){
            unsigned long range_end = erl->start + (erl->size * 4);
            
            if (erl->start <= returnoffset && range_end >= returnoffset){
                info->action_pointer = (char*)etl + erl->action;
                break;
            }
        }
    }else{
        ExceptionTableSmall* ets = (ExceptionTableSmall*)info->exception_record;
        ExceptionRangeSmall* ers;

        for(ers = ets->ranges; ers->start != 0; ers++){
            if(ers->start <= returnoffset && ers->end >= returnoffset){
                info->action_pointer = (char*)ets + ers->action;
                break;
            }
        }

    }
}

static long ExPPC_PopR31(char *SP,MWExceptionInfo *info){
    double* FPR_save_area;
    long* GPR_save_area;
    int saved_GPRs, saved_FPRs;
    
    saved_FPRs = ET_GetSavedFPRs(info->exception_record->et_field);
    FPR_save_area = (double*)(SP-saved_FPRs * 8);
    saved_GPRs = ET_GetSavedGPRs(info->exception_record->et_field);
    GPR_save_area = (long*)FPR_save_area;

    return GPR_save_area[-1];
}

static exaction_type ExPPC_CurrentAction(const ActionIterator* iter){
    if(iter->info.action_pointer == 0){
        return EXACTION_ENDOFLIST;
    }

    return ((ex_destroylocal*)iter->info.action_pointer)->action & EXACTION_MASK;
}

static exaction_type ExPPC_NextAction(ActionIterator* iter){
    exaction_type action;

    for(;;){
        if(iter->info.action_pointer == 0 || ((action = ((ex_destroylocal*)iter->info.action_pointer)->action) & EXACTION_ENDBIT) != 0){
            char* return_addr, *callers_SP;
            
            callers_SP = *(char**)iter->current_SP;

            if(ET_GetSavedGPRs(iter->info.exception_record->et_field)){
                iter->current_R31 = ExPPC_PopR31(callers_SP, &iter->info);
            }

            return_addr = *(char**)(callers_SP + RETURN_ADDRESS);

            ExPPC_FindExceptionRecord(return_addr, &iter->info);

            if(iter->info.exception_record == 0){
                terminate();
            }

            iter->current_SP = callers_SP;
            iter->current_FP = (ET_GetHasFramePtr(iter->info.exception_record->et_field)) ? (char*)iter->current_R31 : iter->current_SP;

            if(iter->info.action_pointer == 0) continue;
        }else{
            switch(action){
                case EXACTION_DESTROYLOCAL:
                    iter->info.action_pointer += sizeof(ex_destroylocal);
                    break;
                case EXACTION_DESTROYLOCALCOND:
                    iter->info.action_pointer += sizeof(ex_destroylocalcond);
                    break;
                case EXACTION_DESTROYLOCALPOINTER:
                    iter->info.action_pointer += sizeof(ex_destroylocalpointer);
                    break;
                case EXACTION_DESTROYLOCALARRAY:
                    iter->info.action_pointer += sizeof(ex_destroylocalarray);
                    break;
                case EXACTION_DESTROYBASE:
                case EXACTION_DESTROYMEMBER:
                    iter->info.action_pointer += sizeof(ex_destroymember);
                    break;
                case EXACTION_DESTROYMEMBERCOND:
                    iter->info.action_pointer += sizeof(ex_destroymembercond);
                    break;
                case EXACTION_DESTROYMEMBERARRAY:
                    iter->info.action_pointer += sizeof(ex_destroymemberarray);
                    break;
                case EXACTION_DELETEPOINTER:
                    iter->info.action_pointer += sizeof(ex_deletepointer);
                    break;
                case EXACTION_DELETEPOINTERCOND:
                    iter->info.action_pointer += sizeof(ex_deletepointercond);
                    break;
                case EXACTION_CATCHBLOCK:
                    iter->info.action_pointer += sizeof(ex_catchblock);
                    break;
                case EXACTION_CATCHBLOCK_32:
                    iter->info.action_pointer += sizeof(ex_catchblock_32);
                    break;
                case EXACTION_ACTIVECATCHBLOCK:
                    iter->info.action_pointer += sizeof(ex_activecatchblock);
                    break;
                case EXACTION_SPECIFICATION:
                    iter->info.action_pointer += sizeof(ex_specification) + ((ex_specification*)iter->info.action_pointer)->specs * sizeof(void*);
                    break;
                default:
                    terminate();
            }
        }

        action = ((ex_destroylocal*)iter->info.action_pointer)->action & EXACTION_MASK;

        if(action == EXACTION_BRANCH){
            iter->info.action_pointer = ((char*)iter->info.exception_record) + ((ex_branch*)iter->info.action_pointer)->target;
            action = ((ex_destroylocal*)iter->info.action_pointer)->action & EXACTION_MASK;
        }
        return action;
    }
}

static char* ExPPC_PopStackFrame(ThrowContext* context, MWExceptionInfo* info){
    char *SP, *callers_SP;
    double* FPR_save_area;
    long* GPR_save_area;
    int saved_GPRs, saved_FPRs;
    GeckoFPRContext* Vector_save_area;
    int i, j;
    
    SP = context->SP;
    callers_SP = *(char**)SP;
    saved_FPRs = ET_GetSavedFPRs(info->exception_record->et_field);

    if(ET_HasElfVector(info->exception_record->et_field)){
        Vector_save_area = (GeckoFPRContext *)(callers_SP - saved_FPRs*16);
        FPR_save_area = (double*)Vector_save_area;
    }else{
        FPR_save_area = (double*)(callers_SP - saved_FPRs*8);
    }

    if (ET_HasElfVector(info->exception_record->et_field)){
        for(i = 32 - saved_FPRs, j = 0; i < 32; ++i, ++j){
            context->FPR[i].v.f[0] = Vector_save_area[j].v.f[0];
            context->FPR[i].v.f[1] = Vector_save_area[j].v.f[1];
            context->FPR[i].d = Vector_save_area[j].d;
        }
    }else{
        for(i = 32 - saved_FPRs, j = 0; i < 32; ++i, ++j){
             context->FPR[i].d = FPR_save_area[j];
        }
    }

    saved_GPRs = ET_GetSavedGPRs(info->exception_record->et_field);
    GPR_save_area = (long*)FPR_save_area;
    GPR_save_area -= saved_GPRs;

    for(i = 32 - saved_GPRs, j = 0; i < 32; ++i, ++j){
        context->GPR[i] = GPR_save_area[j];
    }

    context->SP = callers_SP;
    return *(char**)(callers_SP + RETURN_ADDRESS);
}

static void ExPPC_DestroyLocal(ThrowContext* context, const ex_destroylocal* ex){
    DTORCALL_COMPLETE(ex->dtor, context->FP + ex->local);
}

static void ExPPC_DestroyLocalCond(ThrowContext* context, const ex_destroylocalcond* ex){
    int cond = ex_destroylocalcond_GetRegCond(ex->dlc_field) ? (local_cond_type)context->GPR[ex->cond] : *(local_cond_type*)(context->FP + ex->cond);

    if(cond){
        DTORCALL_COMPLETE(ex->dtor, context->FP + ex->local);
    }
}

static void ExPPC_DestroyLocalPointer(ThrowContext* context, const ex_destroylocalpointer* ex){
    void *pointer = ex_destroylocalpointer_GetRegPointer(ex->dlp_field) ? (void*)context->GPR[ex->pointer] : *(void**)(context->FP + ex->pointer);

    DTORCALL_COMPLETE(ex->dtor, pointer);
}

static void ExPPC_DestroyLocalArray(ThrowContext* context, const ex_destroylocalarray* ex){
    char* ptr = context->FP + ex->localarray;
    long n = ex->elements;
    long size = ex->element_size;

    for(ptr = ptr + size*n; n > 0; n--){
        ptr -= size;
        DTORCALL_COMPLETE(ex->dtor, ptr);
    }
}

static void ExPPC_DestroyMember(ThrowContext* context, const ex_destroymember* ex){
    char *objectptr = ex_destroymember_GetRegPointer(ex->dm_field) ? (char*)context->GPR[ex->objectptr] : *(char**)(context->FP + ex->objectptr);

    DTORCALL_COMPLETE(ex->dtor,objectptr + ex->offset);
}

static void ExPPC_DestroyBase(ThrowContext* context, const ex_destroymember* ex){
    char* objectptr = ex_destroymember_GetRegPointer(ex->dm_field) ? (char*)context->GPR[ex->objectptr] : *(char**)(context->FP + ex->objectptr);

    DTORCALL_PARTIAL(ex->dtor,objectptr + ex->offset);
}

static void ExPPC_DestroyMemberCond(ThrowContext* context, const ex_destroymembercond* ex){
    char* objectptr = ex_destroymembercond_GetRegPointer(ex->dmc_field) ? (char*)context->GPR[ex->objectptr] : *(char**)(context->FP + ex->objectptr);
    int cond = ex_destroymembercond_GetRegCond(ex->dmc_field) ? (vbase_ctor_arg_type)context->GPR[ex->cond] : *(vbase_ctor_arg_type*)(context->FP + ex->cond);

    if(cond){
        DTORCALL_PARTIAL(ex->dtor, objectptr + ex->offset);
    }
}

static void ExPPC_DestroyMemberArray(ThrowContext* context, const ex_destroymemberarray* ex){
    char* ptr = ex_destroymemberarray_GetRegPointer(ex->dma_field) ? (char*)context->GPR[ex->objectptr] : *(char**)(context->FP + ex->objectptr);
    long n = ex->elements;
    long size = ex->element_size;

    ptr += ex->offset;

    for(ptr = ptr + size*n; n > 0; n--){
        ptr -= size;
        DTORCALL_COMPLETE(ex->dtor, ptr);
    }
}

static void ExPPC_DeletePointer(ThrowContext* context, const ex_deletepointer* ex){
    char* objectptr = ex_deletepointer_GetRegPointer(ex->dp_field) ? (char*)context->GPR[ex->objectptr] : *(char**)(context->FP + ex->objectptr);

    ((DeleteFunc)ex->deletefunc)(objectptr);
}

static void ExPPC_DeletePointerCond(ThrowContext* context, const ex_deletepointercond* ex){
    char* objectptr = ex_deletepointercond_GetRegPointer(ex->dpc_field) ? (char*)context->GPR[ex->objectptr] : *(char**)(context->FP + ex->objectptr);
    int cond = ex_deletepointercond_GetRegCond(ex->dpc_field) ? (local_cond_type)context->GPR[ex->cond] : *(local_cond_type*)(context->FP+ex->cond);

    if(cond){
        ((DeleteFunc)ex->deletefunc)(objectptr);
    }
}

static void ExPPC_UnwindStack(ThrowContext* context, MWExceptionInfo* info, void* catcher){
    exaction_type action;

    #pragma exception_terminate

    for(;;){
        if(info->action_pointer == 0){
            char* return_addr;
    
            return_addr = ExPPC_PopStackFrame(context, info);
            ExPPC_FindExceptionRecord(return_addr, info);

            if(info->exception_record == 0){
                terminate();
            }

            context->FP = (ET_GetHasFramePtr(info->exception_record->et_field)) ? (char*)context->GPR[31] : context->SP;
            continue;
        }

        action = ((ex_destroylocal*)info->action_pointer)->action;

        switch(action & EXACTION_MASK){
            case EXACTION_BRANCH:
                info->action_pointer = ((char*)info->exception_record) + ((ex_branch*)info->action_pointer)->target;
                break;
            case EXACTION_DESTROYLOCAL:
                ExPPC_DestroyLocal(context, (ex_destroylocal*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroylocal);
                break;
            case EXACTION_DESTROYLOCALCOND:
                ExPPC_DestroyLocalCond(context, (ex_destroylocalcond*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroylocalcond);
                break;
            case EXACTION_DESTROYLOCALPOINTER:
                ExPPC_DestroyLocalPointer(context, (ex_destroylocalpointer*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroylocalpointer);
                break;
            case EXACTION_DESTROYLOCALARRAY:
                ExPPC_DestroyLocalArray(context, (ex_destroylocalarray*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroylocalarray);
                break;
            case EXACTION_DESTROYBASE:
                ExPPC_DestroyBase(context, (ex_destroymember*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroymember);
                break;
            case EXACTION_DESTROYMEMBER:
                ExPPC_DestroyMember(context, (ex_destroymember*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroymember);
                break;
            case EXACTION_DESTROYMEMBERCOND:
                ExPPC_DestroyMemberCond(context, (ex_destroymembercond*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroymembercond);
                break;
            case EXACTION_DESTROYMEMBERARRAY:
                ExPPC_DestroyMemberArray(context, (ex_destroymemberarray*)info->action_pointer);
                info->action_pointer += sizeof(ex_destroymemberarray);
                break;
            case EXACTION_DELETEPOINTER:
                ExPPC_DeletePointer(context, (ex_deletepointer*)info->action_pointer);
                info->action_pointer += sizeof(ex_deletepointer);
                break;
            case EXACTION_DELETEPOINTERCOND:
                ExPPC_DeletePointerCond(context, (ex_deletepointercond*)info->action_pointer);
                info->action_pointer += sizeof(ex_deletepointercond);
                break;
            case EXACTION_CATCHBLOCK:
                if(catcher == (void *)info->action_pointer) return;
                info->action_pointer += sizeof(ex_catchblock);
                break;
            case EXACTION_CATCHBLOCK_32:
                if(catcher == (void *)info->action_pointer) return;
                info->action_pointer += sizeof(ex_catchblock_32);
                break;
            case EXACTION_ACTIVECATCHBLOCK:
                {
                    CatchInfo* catchinfo;

                    catchinfo = (CatchInfo*)(context->FP + ((ex_activecatchblock*)info->action_pointer)->cinfo_ref);
                    
                    if (catchinfo->dtor){
                        if (context->location == catchinfo->location){
                            context->dtor = catchinfo->dtor;
                        }else{
                            DTORCALL_COMPLETE(catchinfo->dtor, catchinfo->location);
                        }
                       }
                    info->action_pointer += sizeof(ex_activecatchblock);
                }
                break;
            case EXACTION_SPECIFICATION:
                if(catcher == (void*)info->action_pointer) return;
                info->action_pointer += sizeof(ex_specification) + ((ex_specification*)info->action_pointer)->specs * sizeof(void*);
                break;
            default:
                terminate();
        }

        if(action & EXACTION_ENDBIT) info->action_pointer = 0;
    }
}

static int ExPPC_IsInSpecification(char* extype, ex_specification* spec){
    long i, offset;

    for(i = 0; i < spec->specs; i++){
        if(__throw_catch_compare(extype, spec->spec[i], &offset)) return 1;
    }

    return 0;
}

//unused
extern void __unexpected(CatchInfo* catchinfo){
    ex_specification* unexp = (ex_specification*)catchinfo->stacktop;

    #pragma exception_magic //allow access to __exception_magic in try/catch blocks

    try {
        unexpected();
    }
    catch(...){
        if(ExPPC_IsInSpecification((char*)((CatchInfo*)&__exception_magic)->typeinfo, unexp)){
            throw;
        }
        if(ExPPC_IsInSpecification("!bad_exception!!",unexp)){
            throw bad_exception();
        }
        if(ExPPC_IsInSpecification("!std::bad_exception!!",unexp)){
            throw bad_exception();
        }
    }
    terminate();
}

static asm void ExPPC_LongJump(register ThrowContext* context, register void* newRTOC, register void* newPC){
    nofralloc

    mr r8, newPC
    mr RTOC, newRTOC
    lwz r0, context->CR
    mtcrf 255, r0

    lmw r13, context->GPR[13]

    la r7, context->FPR[14].v
    psq_lx fp14, 0, r7, 0, 0
    lfd fp14, context->FPR[14].d

    la r7, context->FPR[15].v
    psq_lx fp15, 0, r7, 0, 0
    lfd fp15, context->FPR[15].d

    la r7, context->FPR[16].v
    psq_lx fp16, 0, r7, 0, 0
    lfd fp16, context->FPR[16].d

    la r7, context->FPR[17].v
    psq_lx fp17, 0, r7, 0, 0
    lfd fp17, context->FPR[17].d

    la r7, context->FPR[18].v
    psq_lx fp18, 0, r7, 0, 0
    lfd fp18, context->FPR[18].d

    la r7, context->FPR[19].v
    psq_lx fp19, 0, r7, 0, 0
    lfd fp19, context->FPR[19].d
    
    la r7, context->FPR[20].v
    psq_lx fp20, 0, r7, 0, 0
    lfd fp20, context->FPR[20].d

    la r7, context->FPR[21].v
    psq_lx fp21, 0, r7, 0, 0
    lfd fp21, context->FPR[21].d

    la r7, context->FPR[22].v
    psq_lx fp22, 0, r7, 0, 0
    lfd fp22, context->FPR[22].d

    la r7, context->FPR[23].v
    psq_lx fp23, 0, r7, 0, 0
    lfd fp23, context->FPR[23].d

    la r7, context->FPR[24].v
    psq_lx fp24, 0, r7, 0, 0
    lfd fp24, context->FPR[24].d

    la r7, context->FPR[25].v
    psq_lx fp25, 0, r7, 0, 0
    lfd fp25, context->FPR[25].d

    la r7, context->FPR[26].v
    psq_lx fp26, 0, r7, 0, 0
    lfd fp26, context->FPR[26].d

    la r7, context->FPR[27].v
    psq_lx fp27, 0, r7, 0, 0
    lfd fp27, context->FPR[27].d

    la r7, context->FPR[28].v
    psq_lx fp28, 0, r7, 0, 0
    lfd fp28, context->FPR[28].d

    la r7, context->FPR[29].v
    psq_lx fp29, 0, r7, 0, 0
    lfd fp29, context->FPR[29].d

    la r7, context->FPR[30].v
    psq_lx fp30, 0, r7, 0, 0
    lfd fp30, context->FPR[30].d

    la r7, context->FPR[31].v
    psq_lx fp31, 0, r7, 0, 0
    lfd fp31, context->FPR[31].d
    
    mtlr r8

    lwz SP, context->throwSP
    lwz r3, context->SP
    lwz r3, 0(r3)
    stw r3, 0(SP)
    blr
}

static void ExPPC_HandleUnexpected(ThrowContext* context, MWExceptionInfo* info, ex_specification* unexp){
    CatchInfo* catchinfo;

    #pragma exception_terminate

    ExPPC_UnwindStack(context, info, unexp);

    catchinfo = (CatchInfo*)(context->FP + unexp->cinfo_ref);
    catchinfo->location = context->location;
    catchinfo->typeinfo = context->throwtype;
    catchinfo->dtor = context->dtor;
    catchinfo->stacktop = unexp;

    ExPPC_LongJump(context, info->TOC, info->current_function + unexp->pcoffset);
}

static void ExPPC_ThrowHandler(ThrowContext* context){
    ActionIterator iter;
    MWExceptionInfo info;
    exaction_type action;
    CatchInfo* catchinfo;
    long offset;
    
    ExPPC_FindExceptionRecord(context->returnaddr, &info);

    if(info.exception_record == 0){
        terminate();
    }

    context->FP = (ET_GetHasFramePtr(info.exception_record->et_field)) ? (char*)context->GPR[31] : context->SP;

    if(context->throwtype == 0){
        iter.info = info;
        iter.current_SP = context->SP;
        iter.current_FP = context->FP;
        iter.current_R31 = context->GPR[31];

        for(action = ExPPC_CurrentAction(&iter);; action = ExPPC_NextAction(&iter)){
            switch(action){
                case EXACTION_ACTIVECATCHBLOCK:
                    break;
                case EXACTION_ENDOFLIST:
                case EXACTION_DESTROYLOCAL:
                case EXACTION_DESTROYLOCALCOND:
                case EXACTION_DESTROYLOCALPOINTER:
                case EXACTION_DESTROYLOCALARRAY:
                case EXACTION_DESTROYBASE:
                case EXACTION_DESTROYMEMBER:
                case EXACTION_DESTROYMEMBERCOND:
                case EXACTION_DESTROYMEMBERARRAY:
                case EXACTION_DELETEPOINTER:
                case EXACTION_DELETEPOINTERCOND:
                case EXACTION_CATCHBLOCK:
                case EXACTION_CATCHBLOCK_32:
                case EXACTION_SPECIFICATION:
                    continue;
                case EXACTION_TERMINATE:
                default:
                    terminate();
            }
            break;
        }

        catchinfo = (CatchInfo*)(iter.current_FP + ((ex_activecatchblock*)iter.info.action_pointer)->cinfo_ref);
        context->throwtype = (char*)catchinfo->typeinfo;
        context->location = catchinfo->location;
        context->dtor = 0;
        context->catchinfo = catchinfo;
    }else{
        context->catchinfo = 0L;
    }

    iter.info = info;
    iter.current_SP = context->SP;
    iter.current_FP = context->FP;
    iter.current_R31 = context->GPR[31];

    for(action = ExPPC_CurrentAction(&iter);; action = ExPPC_NextAction(&iter)){
        switch(action){
            case EXACTION_CATCHBLOCK_32:
                if(__throw_catch_compare(context->throwtype, ((ex_catchblock_32*)iter.info.action_pointer)->catch_type, &offset)){
                    break;
                }
                continue;
            case EXACTION_CATCHBLOCK:
                if(__throw_catch_compare(context->throwtype, ((ex_catchblock*)iter.info.action_pointer)->catch_type, &offset)){
                    break;
                }
                continue;
            case EXACTION_SPECIFICATION:
                if(!ExPPC_IsInSpecification(context->throwtype, (ex_specification*)iter.info.action_pointer)){
                    ExPPC_HandleUnexpected(context, &info, (ex_specification *)iter.info.action_pointer);
                }
                continue;
            case EXACTION_ENDOFLIST:
            case EXACTION_DESTROYLOCAL:
            case EXACTION_DESTROYLOCALCOND:
            case EXACTION_DESTROYLOCALPOINTER:
            case EXACTION_DESTROYLOCALARRAY:
            case EXACTION_DESTROYBASE:
            case EXACTION_DESTROYMEMBER:
            case EXACTION_DESTROYMEMBERCOND:
            case EXACTION_DESTROYMEMBERARRAY:
            case EXACTION_DELETEPOINTER:
            case EXACTION_DELETEPOINTERCOND:
            case EXACTION_ACTIVECATCHBLOCK:
                continue;
            case EXACTION_TERMINATE:
            default:
                terminate();
        }
        break;
    }

    if (action == EXACTION_CATCHBLOCK_32) {
        ex_catchblock_32* catchblock_32;
        catchblock_32 = (ex_catchblock_32*)iter.info.action_pointer;

        ExPPC_UnwindStack(context, &info, catchblock_32);

        catchinfo = (CatchInfo*)(context->FP + catchblock_32->cinfo_ref);
        catchinfo->location = context->location;
        catchinfo->typeinfo = context->throwtype;
        catchinfo->dtor = context->dtor;

        if(*context->throwtype == '*'){
            catchinfo->sublocation = &catchinfo->pointercopy;
            catchinfo->pointercopy = *(long*)context->location + offset;
        }else{
            catchinfo->sublocation = (char*)context->location + offset;
        }

        ExPPC_LongJump(context, info.TOC, info.current_function + catchblock_32->catch_pcoffset);
    }else{
        ex_catchblock* catchblock;
    
        catchblock = (ex_catchblock*)iter.info.action_pointer;
        ExPPC_UnwindStack(context, &info, catchblock);
    
        catchinfo = (CatchInfo*)(context->FP+catchblock->cinfo_ref);
        catchinfo->location = context->location;
        catchinfo->typeinfo = context->throwtype;
        catchinfo->dtor = context->dtor;

        if(*context->throwtype == '*'){
            catchinfo->sublocation = &catchinfo->pointercopy;
            catchinfo->pointercopy = *(long*)context->location+offset;
        }else{
            catchinfo->sublocation = (char*)context->location+offset;
        }

        ExPPC_LongJump(context, info.TOC, info.current_function + catchblock->catch_pcoffset);
    }
}

asm void __throw(char* throwtype, void* location, void* dtor){
    ThrowContext throwcontext;

    fralloc

    stmw r13, throwcontext.GPR[13]

    stfd fp14, throwcontext.FPR[14].d
    la r3, throwcontext.FPR[14].v
    psq_stx fp14, 0, r3,0,0

    stfd fp15, throwcontext.FPR[15].d
    la r3, throwcontext.FPR[15].v
    psq_stx fp15, 0, r3, 0, 0

    stfd fp16, throwcontext.FPR[16].d
    la r3, throwcontext.FPR[16].v
    psq_stx fp16, 0, r3, 0, 0

    stfd fp17, throwcontext.FPR[17].d
    la r3, throwcontext.FPR[17].v
    psq_stx fp17, 0, r3, 0, 0

    stfd fp18, throwcontext.FPR[18].d
    la r3, throwcontext.FPR[18].v
    psq_stx fp18, 0, r3, 0, 0

    stfd fp19, throwcontext.FPR[19].d
    la r3, throwcontext.FPR[19].v
    psq_stx fp19, 0, r3, 0, 0

    stfd fp20, throwcontext.FPR[20].d
    la r3, throwcontext.FPR[20].v
    psq_stx fp20, 0, r3, 0, 0

    stfd fp21, throwcontext.FPR[21].d
    la r3, throwcontext.FPR[21].v
    psq_stx fp21, 0, r3, 0, 0

    stfd fp22, throwcontext.FPR[22].d
    la r3, throwcontext.FPR[22].v
    psq_stx fp22, 0, r3, 0, 0

    stfd fp23, throwcontext.FPR[23].d
    la r3, throwcontext.FPR[23].v
    psq_stx fp23, 0, r3, 0, 0

    stfd fp24, throwcontext.FPR[24].d
    la r3, throwcontext.FPR[24].v
    psq_stx fp24, 0, r3, 0, 0

    stfd fp25, throwcontext.FPR[25].d
    la r3, throwcontext.FPR[25].v
    psq_stx fp25, 0, r3, 0, 0

    stfd fp26, throwcontext.FPR[26].d
    la r3, throwcontext.FPR[26].v
    psq_stx fp26, 0, r3, 0, 0

    stfd fp27, throwcontext.FPR[27].d
    la r3, throwcontext.FPR[27].v
    psq_stx fp27, 0, r3, 0, 0

    stfd fp28, throwcontext.FPR[28].d
    la r3, throwcontext.FPR[28].v
    psq_stx fp28, 0, r3, 0, 0

    stfd fp29, throwcontext.FPR[29].d
    la r3, throwcontext.FPR[29].v
    psq_stx fp29, 0, r3, 0, 0

    stfd fp30, throwcontext.FPR[30].d
    la r3, throwcontext.FPR[30].v
    psq_stx fp30, 0, r3, 0, 0

    stfd fp31, throwcontext.FPR[31].d
    la r3, throwcontext.FPR[31].v
    psq_stx fp31, 0, r3, 0, 0


    mfcr r3
    stw r3, throwcontext.CR;

    lwz r3, 0(sp)
    lwz r4, RETURN_ADDRESS(r3)
    stw r3, throwcontext.SP;
    stw r3, throwcontext.throwSP;
    stw r4, throwcontext.returnaddr;

    lwz r3,throwtype
    stw r3, throwcontext.throwtype
    lwz r3,location
    stw r3, throwcontext.location
    lwz r3,dtor
    stw r3, throwcontext.dtor
    la r3, throwcontext
    bl ExPPC_ThrowHandler
    nop
    frfree
    blr
}

//unused
void __end__catch(CatchInfo* catchinfo){
    if (catchinfo->location && catchinfo->dtor){
        DTORCALL_COMPLETE(catchinfo->dtor,catchinfo->location);
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" u8 fragmentinfo_803D7500[];
extern "C" u8 lbl_8033B2DC[];
extern "C" u8 lbl_8035F750[];
extern "C" u8 lbl_8035F76C[];
extern "C" void dtor_80136CFC();
extern "C" void fn_801936E8();
extern "C" void fn_801943E8();
extern "C" void fn_80195230();
extern "C" void fn_801953E8();
extern "C" void fn_80195A78();
extern "C" void fn_80195AA4();
extern "C" void terminate__3stdFv();

// asm_to_cpp: __register_fragment
extern "C" asm int __register_fragment(struct __eti_init_info* info, char* TOC) {
    nofralloc
    lis r5, fragmentinfo_803D7500@ha
    addi r5, r5, fragmentinfo_803D7500@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl_801943B8
    stw r3, 0x0(r5)
    li r0, 0x1
    li r3, 0x0
    stw r4, 0x4(r5)
    stw r0, 0x8(r5)
    blr
lbl_801943B8:
    li r3, -0x1
    blr
}

// asm_to_cpp: __unregister_fragment
extern "C" asm void __unregister_fragment(int fragmentID) {
    nofralloc
    cmpwi r3, 0x0
    bnelr
    mulli r4, r3, 0xc
    lis r3, fragmentinfo_803D7500@ha
    li r0, 0x0
    addi r3, r3, fragmentinfo_803D7500@l
    stwux r0, r3, r4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

// asm_to_cpp: fn_801943E8
extern "C" asm void fn_801943E8() {
    nofralloc
    lis r6, fragmentinfo_803D7500@ha
    addi r6, r6, fragmentinfo_803D7500@l
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_80194468
    lwz r7, 0x0(r6)
lbl_80194400:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x0
    beq lbl_80194468
    lwz r5, 0x8(r7)
    cmplw r3, r5
    blt lbl_80194460
    add r0, r5, r0
    cmplw r3, r0
    bge lbl_80194460
    lwz r3, 0x0(r7)
    li r0, 0x0
    stw r3, 0x0(r4)
    li r3, 0x1
    lwz r5, 0x4(r7)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x4(r6)
    stw r0, 0x18(r4)
    lwz r0, 0x8(r6)
    stw r0, 0x1c(r4)
    blr
lbl_80194460:
    addi r7, r7, 0x10
    b lbl_80194400
lbl_80194468:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80195230
extern "C" asm void fn_80195230() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r31, r1
    lwz r30, 0x14(r3)
    stw r1, 0x34(r1)
    bl terminate__3stdFv
    b lbl_801953C8
    lwz r29, 0x24(r31)
    mr r27, r30
    li r28, 0x0
    b lbl_8019528C
lbl_80195264:
    lwz r4, 0xc(r27)
    mr r3, r29
    addi r5, r31, 0x10
    bl __throw_catch_compare
    extsb. r0, r3
    beq lbl_80195284
    li r0, 0x1
    b lbl_8019529C
lbl_80195284:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_8019528C:
    lhz r0, 0x2(r30)
    cmpw r28, r0
    blt lbl_80195264
    li r0, 0x0
lbl_8019529C:
    cmpwi r0, 0x0
    beq lbl_801952B4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_801952B4:
    lis r28, lbl_8033B2DC@ha
    mr r27, r30
    addi r28, r28, lbl_8033B2DC@l
    li r29, 0x0
    b lbl_801952F0
lbl_801952C8:
    lwz r4, 0xc(r27)
    mr r3, r28
    addi r5, r31, 0xc
    bl __throw_catch_compare
    extsb. r0, r3
    beq lbl_801952E8
    li r0, 0x1
    b lbl_80195300
lbl_801952E8:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_801952F0:
    lhz r0, 0x2(r30)
    cmpw r29, r0
    blt lbl_801952C8
    li r0, 0x0
lbl_80195300:
    cmpwi r0, 0x0
    beq lbl_80195330
    lis r4, lbl_8035F750@ha
    lis r3, lbl_8033B2DC@ha
    addi r4, r4, lbl_8035F750@l
    lis r5, fn_801953E8@ha
    addi r3, r3, lbl_8033B2DC@l
    stw r4, 0x18(r31)
    addi r3, r3, 0x11
    addi r4, r31, 0x18
    addi r5, r5, fn_801953E8@l
    bl __throw
lbl_80195330:
    lis r3, lbl_8033B2DC@ha
    mr r27, r30
    addi r3, r3, lbl_8033B2DC@l
    li r29, 0x0
    addi r28, r3, 0x37
    b lbl_80195370
lbl_80195348:
    lwz r4, 0xc(r27)
    mr r3, r28
    addi r5, r31, 0x8
    bl __throw_catch_compare
    extsb. r0, r3
    beq lbl_80195368
    li r0, 0x1
    b lbl_80195380
lbl_80195368:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_80195370:
    lhz r0, 0x2(r30)
    cmpw r29, r0
    blt lbl_80195348
    li r0, 0x0
lbl_80195380:
    cmpwi r0, 0x0
    beq lbl_801953B0
    lis r4, lbl_8035F750@ha
    lis r3, lbl_8033B2DC@ha
    addi r4, r4, lbl_8035F750@l
    lis r5, fn_801953E8@ha
    addi r3, r3, lbl_8033B2DC@l
    stw r4, 0x14(r31)
    addi r3, r3, 0x11
    addi r4, r31, 0x14
    addi r5, r5, fn_801953E8@l
    bl __throw
lbl_801953B0:
    addi r3, r31, 0x20
    bl fn_80195A78
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0x34(r31)
    stw r0, 0x0(r1)
lbl_801953C8:
    bl fn_801936E8
    mr r10, r31
    lmw r27, 0x3c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_801953E8
extern "C" asm void fn_801953E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80195410
    cmpwi r4, 0x0
    ble lbl_80195410
    bl dtor_80136CFC
lbl_80195410:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80195A78
extern "C" asm void fn_80195A78() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beqlr
    mr r3, r0
    li r4, -0x1
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: fn_80195AA4
extern "C" asm void fn_80195AA4() {
    nofralloc
    lis r3, lbl_8035F76C@ha
    addi r3, r3, lbl_8035F76C@l
    blr
}
