#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

typedef struct HbmGroupNode { struct HbmGroupNode* next; struct HbmGroupNode* prev; } HbmGroupNode;
typedef struct HbmGroupView { u32 vtable; HbmGroupNode link; u8 members[12]; char name[16]; } HbmGroupView;
typedef struct HbmGroupContainerView { u32 count; HbmGroupNode sentinel; } HbmGroupContainerView;
s32 EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc(const char* a,const char* b);

s8 *fn_8030CAF0();                    /* extern */
M2C_UNK fn_8030CB00();                    /* extern */
M2C_UNK memcpy(); /* extern */
M2C_UNK memset();      /* extern */

s8 * fn_802F3D6C();
s32 fn_802F3DE8();
s8 * __ct__Q36nw4hbm3lyt5GroupFPCQ46nw4hbm3lyt3res5GroupPQ36nw4hbm3lyt4Pane();
s8 * fn_802F3F34();
s8 * fn_802F3FDC();
void AppendGroup__Q36nw4hbm3lyt14GroupContainerFPQ36nw4hbm3lyt5Group();
s32 fn_802F40D8(HbmGroupContainerView* p,const char* name);

s32 fn_802F3DE8(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

s8 *fn_802F3F34(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

void AppendGroup__Q36nw4hbm3lyt14GroupContainerFPQ36nw4hbm3lyt5Group(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    sp8 = arg0 + 4;
    fn_802FF2E8((s32 *) arg0, &sp8, arg1 + 4, arg3);
}

s32 fn_802F40D8(HbmGroupContainerView* p,const char* name);

s8 *fn_802F3D6C(s8 *arg0);
s8 *__ct__Q36nw4hbm3lyt5GroupFPCQ46nw4hbm3lyt3res5GroupPQ36nw4hbm3lyt4Pane(s8 *arg0, s8 *arg1, s8 **arg2, M2C_UNK arg_sp0);
s8 * fn_802F3F34();
s8 *fn_802F3FDC(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_802F40D8(HbmGroupContainerView* p,const char* name);

s32 fn_802F40D8(HbmGroupContainerView* p,const char* name) {
 HbmGroupNode* it=p->sentinel.next;
 HbmGroupNode* end=&p->sentinel;
 for (;it!=end;it=it->next) {
  HbmGroupView* group=(HbmGroupView*)((u8*)it-4);
  if (EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc(group->name,name)) return (s32)group;
 }
 return 0;
}
