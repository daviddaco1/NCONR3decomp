#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

#define OS_BUS_CLOCK (*(u32*)0x800000F8)
#define OS_TIMER_CLOCK (OS_BUS_CLOCK / 4)
#define OSMillisecondsToTicks(msec) ((s64)((msec) * (OS_TIMER_CLOCK / 1000)))

typedef struct HbmGuiList { void* head; void* tail; u16 count; u16 offset; } HbmGuiList;
typedef void (*HbmGuiMethod)(void);
struct HbmGuiManager;
class HbmGuiEventHandler;
struct HbmHomeButton;
class HbmGuiComponent {
public:
    virtual void create();
    virtual void init();
    virtual void calc();
    virtual void drawMatrix();
    virtual void draw();
    virtual void unused5(s32 flag);
    virtual u32 getID();
    virtual int isPointed(int n);
    virtual void setPointed(int n, bool b);
    virtual void onPoint();
    virtual void offPoint();
    virtual void onDrag(f32, f32);
    virtual void onMove(f32, f32);
    virtual void onTrig(u32 flag, Vec& rPos);
    virtual void setDraggingButton(u32 draggingButton);
    virtual bool updateKpad(int, const void*, f32, f32, void*);
    virtual bool update(int i, f32 x, f32 y, u32 trig, u32 hold, u32 release, void* pData);
    virtual bool isTriggerTarger();
    virtual void setTriggerTarget(s32 target);
    virtual void setManager(HbmGuiManager* manager);
    virtual bool isVisible();
    virtual bool contain(f32 x, f32 y);

    bool mabPointed[8];   // at 0x4
    Vec mDragStartPos;    // at 0xC
    bool mbDragging;      // at 0x18
    u32 muDraggingButton; // at 0x1C
    u32 muID;             // at 0x20
    bool mbTriggerTarger; // at 0x24
    HbmGuiManager* mpManager; // at 0x28
};

typedef struct HbmGuiMapping {
    u32 id;
    HbmGuiComponent* component;
    void* next;
    void* prev;
} HbmGuiMapping;

class HbmGuiManager {
public:
    virtual void unused0();
    virtual void init();
    virtual void calc();
    virtual void draw();
    virtual void unused4();
    virtual void unused5();
    virtual void addComponent(HbmGuiComponent* pComponent);
    virtual void delComponent(HbmGuiComponent* pComponent);
    virtual HbmGuiComponent* getComponent(u32 id);
    virtual bool updateKpad(int, const void*, f32, f32, void*);
    virtual bool update(int i, f32 x, f32 y, u32 trig, u32 hold, u32 release, void* pData);
    virtual void onEvent(u32 id, u32 event, void* pData);

    void* eventHandler;
    HbmGuiList components;
    void* allocator;
};

typedef struct HbmGuiPaneMapping { void* pane; HbmGuiComponent* component; void* next; void* prev; } HbmGuiPaneMapping;
typedef struct HbmGuiPaneManager { HbmGuiManager manager; HbmGuiList panes; const void* drawInfo; u16 pointCount; u16 padding; } HbmGuiPaneManager;

struct HbmRuntimeInfo { const HbmRuntimeInfo* parent;
 bool isDerivedFrom(const HbmRuntimeInfo* type) const {
  for (const HbmRuntimeInfo* it=this;it!=NULL;it=it->parent) if (it==type) return true;
  return false;
 }
};
class HbmPaneRuntime { public: virtual void reserved(); virtual const HbmRuntimeInfo* getRuntimeTypeInfo() const; };

typedef struct HbmControllerData { s32 chan; f32 volume; f32 x,y; u32 trig,hold,release; } HbmControllerData;
typedef struct HbmController { s32 mChan; u8 pad[0x18]; u8 mRumbling; } HbmController;
typedef struct HbmKpadView { u32 hold,trig,release; u8 gap0[0x14]; f32 x,y; u8 gap1[0x34]; u8 devtype; u8 gap2[3]; u32 clHold,clTrig,clRelease; } HbmKpadView;
typedef struct HbmKpadData { HbmKpadView* kpad; f32 x,y; u32 useDevtype; } HbmKpadData;

extern "C" {

extern f32 lbl_80341A38;

/*
Decompilation failure in function fn_802E7190:

Found bctr instruction at unk_802E657C.s line 956, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802E71B4:

Unable to determine jump table for bctr instruction at unk_802E657C.s line 966.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function fn_802E7470:

Unable to determine jump table for bctr instruction at unk_802E657C.s line 1178.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

/*
Decompilation failure in function fn_802EB568:

Found bctr instruction at unk_802E657C.s line 6142, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802ED764:

Found bctr instruction at unk_802E657C.s line 8432, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802EEC48:

Found bctr instruction at unk_802E657C.s line 9988, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802EFA78:

Found bctr instruction at unk_802E657C.s line 11021, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function fn_802F0538:

Found bctr instruction at unk_802E657C.s line 11911, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

struct S_fn_802E75A4_temp_r3 {
    u32 f_0;
    s32 f_4;
};
struct S_fn_802E761C_temp_r3 {
    s8 ** f_0;
    s8 ** f_4;
};
struct S_fn_802E7E34_temp_r31 {
    s32 f_0;
    u8 pad_4[0x3D];
    s8 f_41;
};
struct S_fn_802E8074_temp_r7 {
    s32 f_0;
    s32 f_4;
    s32 f_8;
    u8 pad_C[0x50];
    u8 f_5C;
    u8 pad_5D[0x3];
    s32 f_60;
    s32 f_64;
    s32 f_68;
};
struct SK_fn_802E8EE8_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
extern f32 lbl_80341A38;
extern u8 lbl_8037B380[];
extern u8 lbl_8037B420[];
extern u8 lbl_8037B548[];
extern u8 lbl_80462230[];
extern u8 lbl_804622F8[];
extern u8 lbl_804623B8[];
extern s8 *lbl_804623C8[];
extern s8 *lbl_804623E8[];
extern u8 lbl_80462408[];
extern s32 lbl_80462440[];

s32 ARCGetLength(s32 arg0);
s32 ARCGetStartOffset(s32 arg0);
s32 ARCInitHandle(s32 arg0, s32 arg1);
void GXClearVtxDesc(void);
void GXLoadPosMtxImm(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetCullMode(s32 arg0);
void GXSetCurrentMtx(s32 arg0);
void GXSetDispCopyGamma(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetTevSwapModeTable(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv(s8 *arg0, s32 arg1);
s32 List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv(s8 *arg0, s32 arg1);
s32 List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs(const HbmGuiList* list, u16 index);
void List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv(s8 *arg0, s32 arg1);
void OSCancelAlarm(s32 arg0);
void OSCreateAlarm(s32 arg0);
s32 OSGetAlarmUserData(s32 arg0);
void OSSetAlarm(void* alarm, s64 tick, void (*handler)(s32));
void OSSetAlarmUserData(s32 arg0, s32 arg1);
void PSMTXIdentity(s32 arg0);
s32 WPADControlSpeaker(s32 chan, s32 command, void* callback);
s32 WPADGetInfoAsync(s32, s8 *, void (*)(s32, s32));
void dtor_80136CFC(s32 arg0);
s32 fn_80136C54(s32 arg0);
s32 fn_8028AACC(s32 arg0, s32 arg1);
s32 fn_8028AB54(s32 arg0, s32 arg1);
void fn_8028AF20(s32 arg0, s32 arg1);
s32 fn_8028B6F8(s32 arg0);
void fn_8028EE58(s32 arg0);
s32 fn_8029B4EC(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_8029B968(s8 *arg0);
void fn_802E430C(s32 arg0);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_802E4A28(s32 arg0);
s32 fn_802E6740(HbmGuiComponent* self, int i, f32 x, f32 y, u32 trig, u32 hold, u32 release, void* pData);
s32 fn_802E6948(void);
u8 fn_802E6950(s32 arg0, s32 arg1);
void fn_802E695C(void);
void fn_802E6960(HbmGuiManager* self, u32 id, u32 event, void* data);
void fn_802E6980(void);
s32 fn_802E6984(s8 *arg0);
void fn_802E698C(u8 *arg0, s32 arg1, u8 arg2);
void fn_802E6998(void);
void fn_802E699C(void);
HbmGuiManager* fn_802E69A0(HbmGuiManager* p, s32 flag);
void fn_802E6A5C(HbmGuiManager* p);
void fn_802E6AC4(s8 *arg0);
void fn_802E6AF0(HbmGuiManager* p, HbmGuiComponent* component);
void fn_802E6BB4(s8 *arg0, s32 arg1);
HbmGuiComponent* fn_802E6C5C(HbmGuiManager* self, u32 id);
s32 fn_802E6C88(HbmGuiManager* self, int i, f32 x, f32 y, u32 trig, u32 hold, u32 release, void* pData);
u8 fn_802E6E2C(s8 *arg0);
void fn_802E6E34(s8 *arg0, s32 arg1, s8 *arg2);
void fn_802E6E64(HbmGuiManager* p);
void fn_802E6ECC(void);
void fn_802E6ED0(HbmGuiManager* p);
void fn_802E6F38(void);
void fn_802E6F3C(HbmGuiManager* p, s32 target);
void fn_802E6FB4(u8 *arg0, u8 arg1);
HbmGuiPaneManager* fn_802E6FBC(HbmGuiPaneManager* p, s32 flag);
s32 fn_802E7110(s32 arg0, s32 arg1);
s32 fn_802E7150(s32 arg0, s32 arg1);
M2C_UNK fn_802E7190(s32 arg0, s32 arg1);
M2C_UNK fn_802E71B4(s32 arg0, s32 arg1);
void fn_802E745C(s8 *arg0, s32 arg1);
s32 * fn_802E7464(void);
M2C_UNK fn_802E7470(s32 arg0, s32 arg1);
HbmGuiComponent* fn_802E75A4(HbmGuiPaneManager* p, void* pane);
void fn_802E761C(HbmGuiPaneManager* p, s32 target);
s32 fn_802E7818(s8 *arg0);
void fn_802E7820(s8 *arg0);
s32 fn_802E79C0(s8 *arg0);
s32 fn_802E7AC0(s8 *arg0);
s32 fn_802E7ACC(s8 *arg0);
s32 fn_802E7AD4(s8 *arg0);
void fn_802E7BA8(void);
void fn_802E7BAC(void);
s32 fn_802E7BB0(void);
void fn_802E7BB8(s8 *arg0, s32 arg1);
void fn_802E7BC0(void);
s32 fn_802E7BC4(s8 *arg0);
void fn_802E7BCC(HbmGuiManager* self, HbmGuiEventHandler* handler);
void fn_802E7BF8(s8 *arg0, s32 arg1);
s32 fn_802E7C00(void);
void fn_802E7C08(s8 *arg0, s32 arg1);
void fn_802E7D24(s32 chan, s32 result);
void fn_802E7E34(s32 alarm);
M2C_UNK fn_802E7F5C(s32 arg0);
void fn_802E8000(s8 *arg0);
void fn_802E8074(HbmControllerData* p, const HbmKpadData* data, s32 update);
void fn_802E81F8(s32 *arg0);
void fn_802E8228(s32 *arg0);
void fn_802E8238(s32 arg0);
void fn_802E823C(s8 *arg0, f32 farg0);
s32 fn_802E82E0(s8 *arg0, s32 arg1);
void fn_802E8340(s32 *arg0);
void fn_802E8350(s8 *arg0);
void fn_802E8588(s32 *arg0);
s32 fn_802E8598(s32 arg0);
void fn_802E8600(HbmController* self);
s32 fn_802E8630(s32 *arg0, s8 *arg1);
void fn_802E86B4(s32 arg0, s32 arg1);
void fn_802E86FC(const s32 *arg0);
void fn_802E8984(s8 *arg0);
s8* fn_802E89B0(s8* p, s32 archive);
M2C_UNK ** fn_802E8A6C(M2C_UNK **arg0, s32 arg1);
void fn_802E8B10(s8 *arg0);
void fn_802E8BE4(M2C_UNK **arg0);
void fn_802E8C38(s32 arg0);
void fn_802E8C68(s32 arg0, s32 arg1);
void fn_802E8D48(s32 arg0);
void fn_802E8D78(s32 arg0, s32 arg1);
void fn_802E8E5C(s8 *arg0, s32 arg1);
void fn_802E8EE8(s8* p,s32 chan,s32 id,s8 vol);
s32 fn_802E8F80(s32 arg0, s32 arg1);
s32 fn_802E8F9C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_802E8FCC(s32 arg0, s32 arg1);
void fn_802E95A4(s32 arg0, s8 *arg1, u32 arg2);
void fn_802E9798(void);
void fn_802E9A9C(s32 arg0);
void fn_802E9C54(void);
s32 fn_802E9C78(void);
void fn_802E9C9C(s8 *arg0);
void fn_802E9CD0(void);
void fn_802E9CF4(s32 arg0, s8 *arg1, u32 arg2);
void fn_802E9D48(void);
void fn_802E9D6C(s32 arg0, s32 arg1);
s8 * fn_802E9F24(s8 *arg0, s32 arg1);
s32 ** fn_802EA030(s32 **arg0, s32 arg1);
s8 * fn_802EA0E8(void);
void fn_802EAAAC(HbmHomeButton *self);
void fn_802EAFD0(s8 *arg0);
void fn_802EB1D0(s8 *arg0);
s32 fn_802EB300(s8 *arg0, s32 *arg1);
M2C_UNK fn_802EB568();
void fn_802ED238(s8 *arg0, s32 arg1);
void fn_802ED438(s8 *arg0);
void fn_802ED674(s32 arg0);
M2C_UNK fn_802ED764(s32 arg0);
s32 fn_802EE980(s8 *arg0);
M2C_UNK fn_802EEC48();
M2C_UNK fn_802EFA78();
M2C_UNK fn_802F0538();
s32 fn_802F1774(s8 *arg0);
s32 fn_802F1A84(s8 *arg0);
void fn_802F1AA0(s8 *arg0, s32 arg1);
void fn_802F1BC4(s8 *arg0, s32 arg1, s32 arg2, s8 *arg3);
void fn_802F1C84(s8 *arg0);
void fn_802F1E7C(s8 *arg0);
u16 fn_802F2180(s8 *arg0);
M2C_UNK fn_802F218C(s8 *arg0);
M2C_UNK ** fn_802F21C4(M2C_UNK **arg0, s32 arg1);
s8 * fn_802F2A34(s8 *arg0, u32 arg1);
s32 fn_802F96E0(s32 arg0, s32 arg1);
s8 * fn_802FF21C(s8 *arg0, s32 arg1);
void fn_80302248(u32 arg0);
void* fn_8030CAF0(void* allocator, u32 size);
void fn_8030CB00(void* allocator, void* ptr);

s32 fn_802E6948(void) {
    return 1;
}

u8 fn_802E6950(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + arg1), u8 *, 4);
}

void fn_802E695C(void) {

}

void fn_802E6980(void) {

}

s32 fn_802E6984(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

void fn_802E6998(void) {

}

void fn_802E699C(void) {

}

void fn_802E6AC4(s8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = 0;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

void fn_802E6BB4(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}

u8 fn_802E6E2C(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x24);
}

void fn_802E6E34(s8 *arg0, s32 arg1, s8 *arg2) {
    if (arg1 & M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(arg0, s8 *, 0x18) = 1;
    }
}

void fn_802E6ECC(void) {

}

void fn_802E6F38(void) {

}

s32 fn_802E7110(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

s32 fn_802E7150(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

void fn_802E745C(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
}

s32 fn_802E7818(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_802E7AC0(s8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xCF) & 1;
}

s32 fn_802E7ACC(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_802E7BA8(void) {

}

void fn_802E7BAC(void) {

}

s32 fn_802E7BB0(void) {
    return 0;
}

void fn_802E7BB8(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void fn_802E7BC0(void) {

}

s32 fn_802E7BC4(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void fn_802E7BF8(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_802E7C00(void) {
    return 0;
}

void fn_802E7C08(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

void fn_802E81F8(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_802E8228(s32 *arg0) {
    fn_802E8E5C(M2C_FIELD(arg0, s8 **, 0x20), M2C_FIELD(arg0, s32 *, 0));
}

void fn_802E8238(s32 arg0) {

}

s32 fn_802E82E0(s8 *arg0, s32 arg1) {
    if (fn_802E8F80(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0)) == 0) {
        return 0;
    }
    return fn_802E8F9C(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0), arg1);
}

void fn_802E8340(s32 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
}

void fn_802E8588(s32 *arg0) {
    fn_802E8FCC(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_802E8598(s32 arg0) {
    return arg0;
}

s32 fn_802E8630(s32 *arg0, s8 *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 4) {
        return -2;
    }
    if ((fn_802E8F80(M2C_FIELD(arg0, s32 *, 0x20), temp_r0) != 0) || ((s32) M2C_FIELD(arg0, u8 *, 0x1C) != 0)) {
        return -2;
    }
    return WPADGetInfoAsync(M2C_FIELD(arg0, s32 *, 0), arg1, fn_802E86B4);
}

void fn_802E8984(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = -1;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = -1;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = -1;
}

s32 fn_802E8F80(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 0x68)), s32 *, 0x50) != 0;
}

s32 fn_802E8FCC(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 0x68)), u8 *, 0x62) != 0;
}

void fn_802E9798(void) {

}

void fn_802E9A9C(s32 arg0) {
    fn_80302248((u32) arg0);
}

void fn_802E9C54(void) {
    fn_802ED438(fn_802EA0E8());
}

s32 fn_802E9C78(void) {
    return fn_802F1A84(fn_802EA0E8());
}

void fn_802E9C9C(s8 *arg0) {
    fn_802F1AA0(fn_802EA0E8(), (s32) arg0);
}

void fn_802E9CD0(void) {
    fn_802F1C84(fn_802EA0E8());
}

void fn_802E9CF4(s32 arg0, s8 *arg1, u32 arg2) {
    fn_802EA0E8();
    fn_802E95A4(arg0, arg1, arg2);
}

void fn_802E9D48(void) {
    fn_802F1E7C(fn_802EA0E8());
}

void fn_802ED674(s32 arg0) {
    fn_802E8600((HbmController*)OSGetAlarmUserData(arg0));
}

s32 fn_802F1A84(s8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0x12) {
        return -1;
    }
    return M2C_FIELD(arg0, s32 *, 0xB8);
}

u16 fn_802F2180(s8 *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), u16 *, 8);
}

#pragma dont_inline on
void fn_802E698C(u8 *arg0, s32 arg1, u8 arg2) {
    arg0[arg1 + 4] = arg2;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E6FB4(u8 *arg0, u8 arg1) {
    arg0[0x24] = arg1;
}
#pragma dont_inline reset

s32 * fn_802E7464(void) {
    return lbl_80462440;
}

void fn_802E823C(s8 *arg0, f32 farg0) {
    *(f32 *)(arg0 + 4) = farg0;
}

#pragma dont_inline on
void fn_802E86B4(s32 arg0, s32 arg1) {
    if (arg1 != 0) return;
    if (arg0 >= 4) return;
    lbl_80462230[arg0] = 1;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E86FC(const s32 *arg0) {
    s32 val = *arg0;
    if (val >= 4) return;
    lbl_80462230[val] = 0;
}
#pragma dont_inline reset

s32 ** fn_802EA030(s32 **arg0, s32 arg1) {
    s32 **temp_r3;

    if (arg0 != NULL) {
        temp_r3 = (s32 **)((s8 *)arg0 + 0x24);
        if (temp_r3 != NULL) {
            fn_802FF21C((s8*)temp_r3, 0);
        }
        fn_802F96E0((s32) arg0, 0);
        if (arg1 > 0) {
            dtor_80136CFC((s32) arg0);
        }
    }
    return arg0;
}

s8 * fn_802EA0E8(void) {
    return lbl_804623E8[0];
}

#pragma dont_inline on
s32 fn_802E6740(HbmGuiComponent* self, int i, f32 x, f32 y, u32 trig, u32 hold, u32 release, void* pData) {
    bool touch = false;

    if (self->isVisible()) {
        if (self->contain(x, y)) {
            if (self->isPointed(i)) {
                self->onMove(x, y);
                self->mpManager->onEvent(self->getID(), 3, pData);
            } else {
                self->setPointed(i, true);
                self->onPoint();
                self->mpManager->onEvent(self->getID(), 1, pData);
            }

            touch = true;
        } else {
            if (self->isPointed(i)) {
                self->setPointed(i, false);
                self->offPoint();
                self->mpManager->onEvent(self->getID(), 2, pData);
            }
        }
    }

    return touch;
}

s32 fn_802E6C88(HbmGuiManager* self, int i, f32 x, f32 y, u32 trig, u32 hold, u32 release, void* pData) {
    bool touch = false;
    HbmGuiComponent* pLastContained = 0;

    for (u32 n = 0; n < self->components.count; n++) {
        const HbmGuiMapping* pIt = (const HbmGuiMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs(&self->components, (u16)n);

        if (pIt->component->update(i, x, y, trig, hold, release, pData)) {
            if (pIt->component->isTriggerTarger()) {
                pLastContained = pIt->component;
            }

            touch = true;
        }
    }

    if (pLastContained != 0) {
        if (trig) {
            Vec pos;
            pLastContained->onTrig(trig, pos);

            self->onEvent(pLastContained->getID(), 0, pData);
        }

        if (release) {
            Vec pos;
            pLastContained->onTrig(release, pos);

            self->onEvent(pLastContained->getID(), 5, pData);
        }
    }

    return touch;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E6A5C(HbmGuiManager* p) {
    u32 i;
    for (i=0; i<p->components.count; i++) {
        const HbmGuiMapping* entry=(const HbmGuiMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs((const HbmGuiList*) (&p->components), (u16) ((u16)i));
        HbmGuiComponent* c=entry->component;
        c->init();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E6E64(HbmGuiManager* p) {
    u32 i;
    for (i=0; i<p->components.count; i++) {
        const HbmGuiMapping* entry=(const HbmGuiMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs((const HbmGuiList*) (&p->components), (u16) ((u16)i));
        HbmGuiComponent* c=entry->component;
        c->calc();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E6ED0(HbmGuiManager* p) {
    u32 i;
    for (i=0; i<p->components.count; i++) {
        const HbmGuiMapping* entry=(const HbmGuiMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs((const HbmGuiList*) (&p->components), (u16) ((u16)i));
        HbmGuiComponent* c=entry->component;
        c->draw();
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E6F3C(HbmGuiManager* p, s32 target) {
    u32 i;
    for (i=0; i<p->components.count; i++) {
        const HbmGuiMapping* entry=(const HbmGuiMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs((const HbmGuiList*) (&p->components), (u16) ((u16)i));
        HbmGuiComponent* c=entry->component;
        c->setTriggerTarget(target);
    }
}
#pragma dont_inline reset

HbmGuiComponent* fn_802E75A4(HbmGuiPaneManager* p, void* pane) {
    u32 i;
    for (i=0; i<p->manager.components.count; i++) {
        HbmGuiPaneMapping* entry=(HbmGuiPaneMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs(&p->panes,(u16)i);
        if (entry->pane == pane) return entry->component;
    }
    return NULL;
}

HbmGuiManager* fn_802E69A0(HbmGuiManager* p, s32 flag) {
 if (p != NULL) {
  *(HbmGuiMethod**)p=(HbmGuiMethod*)lbl_8037B420;
  void* entry=(void*)List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv((s8*)&p->components,0);
  for (;entry != NULL;entry=(void*)List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv((s8*)&p->components,0)) {
   List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv((s8*)&p->components,(s32)entry);
   if (p->allocator != NULL) fn_8030CB00(p->allocator,entry);
   else dtor_80136CFC((s32)entry);
  }
  if (flag>0) dtor_80136CFC((s32)p);
 }
 return p;
}

void fn_802E6AF0(HbmGuiManager* p, HbmGuiComponent* component) {
 u32 id=component->getID();
 component->setManager(p);
 if (p->allocator != NULL) {
  HbmGuiMapping* entry=(HbmGuiMapping*)fn_8030CAF0(p->allocator,16);
  if (entry != NULL) { entry->id=id; entry->component=component; }
  List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv((s8*)&p->components,(s32)entry);
 } else {
  HbmGuiMapping* entry=(HbmGuiMapping*)fn_80136C54(16);
  if (entry != NULL) { entry->id=id; entry->component=component; }
  List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv((s8*)&p->components,(s32)entry);
 }
}

#pragma push
#pragma opt_propagation off
#pragma dont_inline reset
void fn_802E761C(HbmGuiPaneManager* p, s32 target) {
 HbmPaneRuntime* pane;
 const HbmRuntimeInfo* type=(const HbmRuntimeInfo*)lbl_80462408;
 u32 i;
 for (i=0;i<p->manager.components.count;i++) {
  HbmGuiPaneMapping* entry=(HbmGuiPaneMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs(&p->panes,(u16)i);
  pane=(HbmPaneRuntime*)entry->pane;
  HbmPaneRuntime* bounding;
  if (pane->getRuntimeTypeInfo()->isDerivedFrom(type)) bounding=pane;
  else bounding=NULL;
  if (bounding!=NULL) entry->component->setTriggerTarget(target);
 }
}
#pragma pop

#pragma dont_inline on
s32 fn_802E79C0(s8 *arg0) {
    s8 *temp_r31;
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;

    if (!(M2C_FIELD(arg0, u8 *, 0xCF) & 1)) {
        return (s32) (0);
    }
    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0xC));
    if (temp_r3 == NULL) {
        return (s32) (1);
    }
    if (!(M2C_FIELD(temp_r3, u8 *, 0xCF) & 1)) {
        return (s32) (0);
    }
    temp_r3_2 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 0xC));
    if (temp_r3_2 == NULL) {
        return (s32) (1);
    }
    if (!(M2C_FIELD(temp_r3_2, u8 *, 0xCF) & 1)) {
        return (s32) (0);
    }
    temp_r3_3 = (s8 *) (M2C_FIELD(temp_r3_2, s8 **, 0xC));
    if (temp_r3_3 == NULL) {
        return (s32) (1);
    }
    if (!(M2C_FIELD(temp_r3_3, u8 *, 0xCF) & 1)) {
        return (s32) (0);
    }
    temp_r31 = (s8 *) (M2C_FIELD(temp_r3_3, s8 **, 0xC));
    if (temp_r31 == NULL) {
        return (s32) (1);
    }
    if (fn_802E7AC0((s8 *) (temp_r31)) == 0) {
        return (s32) (0);
    }
    if (fn_802E7ACC((s8 *) (temp_r31)) == 0) {
        return (s32) (1);
    }
    return (s32) (fn_802E79C0((s8 *) (fn_802E7ACC((s8 *) (temp_r31)))));
}
#pragma dont_inline reset

void fn_802E7E34(s32 alarm) {
 s32 chan=OSGetAlarmUserData(alarm);
 s8* p=((s8**)&lbl_804623B8)[chan];
 s32 channel=*(s32*)p;
 if (fn_8028B6F8(channel)) WPADControlSpeaker(channel,3,0);
 p[0x41]=0;
}

void fn_802E8074(HbmControllerData* p, const HbmKpadData* data, s32 update) {
 if (data->kpad == NULL) return;
 if (update) {
  if (data->kpad->devtype == 2 && data->useDevtype == 2) { p->x=data->x; p->y=data->y; }
  else { p->x=data->kpad->x; p->y=data->kpad->y; }
 }
 p->trig=data->kpad->trig; p->hold=data->kpad->hold; p->release=data->kpad->release;
 if (data->kpad->devtype == 2 && data->useDevtype == 2) {
  u32 h=data->kpad->clHold,t=data->kpad->clTrig,r=data->kpad->clRelease;
  if (h & 16) p->hold |= 2048;
  if (t & 16) p->trig |= 2048;
  if (r & 16) p->release |= 2048;
  if (h & 1024) p->hold |= 16;
  if (t & 1024) p->trig |= 16;
  if (r & 1024) p->release |= 16;
  if (h & 4096) p->hold |= 4096;
  if (t & 4096) p->trig |= 4096;
  if (r & 4096) p->release |= 4096;
  if (h & 2048) p->hold |= 32768;
  if (t & 2048) p->trig |= 32768;
  if (r & 2048) p->release |= 32768;
 }
}

s8* fn_802E89B0(s8* p, s32 archive) {
 *(u8**)(p+0x1f0)=lbl_8037B548;
 lbl_804623C8[0]=p;
 if (archive != 0) *(u8*)(p+0x1ec)=ARCInitHandle(archive,(s32)(p+0x1d0)) != 0;
 else *(u8*)(p+0x1ec)=0;
 OSCreateAlarm((s32)(p+0x1a0));
 s8* entry=p;
 for (s32 i=0;i<4;i++,entry+=0x68) {
  OSCreateAlarm((s32)entry);
  *(s32*)(entry+0x50)=0;
  *(s32*)(entry+0x58)=-1;
  *(u8*)(entry+0x5c)=1;
  *(u8*)(entry+0x62)=1;
 }
 return p;
}

void fn_802E8EE8(s8* p,s32 chan,s32 id,s8 vol) {
 if (!*(u8*)(p+0x1ec)) return;
 s8 info[12];
 fn_8029B4EC(p+0x1d0,id,info);
 s32 pcm=fn_8029B968(info);
 s32 length=ARCGetStartOffset((s32)info);
 ARCGetLength((s32)info);
 s8* entry=p+chan*0x68;
 *(u8*)(entry+0x5e)=0;
 *(s32*)(entry+0x58)=id;
 *(s32*)(entry+0x54)=length;
 *(s8*)(entry+0x5d)=vol;
 *(s32*)(entry+0x50)=pcm;
}

s32 fn_802E8F9C(s32 arg0, s32 arg1, s32 arg2) {

    if (((s32) M2C_FIELD((arg0 + (arg1 * 0x68)), s32 *, 0x50) != 0) && (arg2 == (s32) M2C_FIELD((arg0 + (arg1 * 0x68)), s32 *, 0x58))) {
        return (s32) (1);
    }
    return (s32) (0);
}

void fn_802E9D6C(s32 arg0, s32 arg1) {
    Mtx sp8;

    GXSetCullMode((s32) (0));
    PSMTXIdentity((s32) ((s32) sp8));
    GXLoadPosMtxImm((s32) ((s32) sp8), (s32) (0));
    GXSetCurrentMtx((s32) (0));
    GXClearVtxDesc();
    GXSetVtxDesc((s32) (9), (s32) (1));
    GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (0), (s32) (4), (s32) (0));
    GXSetNumChans((s32) (1));
    GXSetChanCtrl((s32) (4), (s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (2));
    GXSetChanCtrl((s32) (5), (s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (2));
    GXSetNumTexGens((s32) (0));
    fn_802E4A28((s32) (1));
    fn_802E48CC((u32) (0U), (s32) (0xFF), (s32) (0xFF), (s32) (0xFF));
    fn_802E4460((s32) (0), (s32) (0xF), (s32) (0xF), (s32) (0xF), (s32) (2));
    fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
    fn_802E44A0((s32) (0), (s32) (7), (s32) (7), (s32) (7), (s32) (1));
    fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
    fn_802E4808((s32) (7), (s32) (0), (s32) (1), (s32) (7), (s32) (0));
    GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (5));
    GXSetAlphaUpdate((s32) (0));
    GXSetZMode((s32) (0), (s32) (7), (s32) (0));
    GXSetDispCopyGamma((s32) (0));
    fn_802E430C((s32) (0));
    GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
    fn_802E4750((s32) (0), (s32) (0), (s32) (0));
}

#pragma dont_inline on
void fn_802F1E7C(s8 *arg0) {
    s32 var_r31;
    s8 *var_r30;

    var_r30 = (s8 *) (arg0);
    fn_802E9798();
    var_r31 = (s32) (0);
    do {
        fn_802E8350((s8 *) (M2C_FIELD(var_r30, s8 **, 0x2AC)));
        var_r31 += 1;
        var_r30 += 4;
    } while (var_r31 < 4);
}
#pragma dont_inline reset

class HbmGuiEventHandler {
public:
    virtual void onEvent(u32 id, u32 event, void* data);
    virtual void setManager(HbmGuiManager* manager);
};

void fn_802E6960(HbmGuiManager* self, u32 id, u32 event, void* data) {
    HbmGuiEventHandler* handler = (HbmGuiEventHandler*)self->eventHandler;
    if (handler != NULL) {
        handler->onEvent(id, event, data);
    }
}

HbmGuiComponent* fn_802E6C5C(HbmGuiManager* self, u32 id) {
    HbmGuiMapping* p = (HbmGuiMapping*)List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs(&self->components, (u16)id);
    return p->component;
}

HbmGuiPaneManager* fn_802E6FBC(HbmGuiPaneManager* p, s32 flag) {
    if (p != NULL) {
        *(HbmGuiMethod**)&p->manager = (HbmGuiMethod*)lbl_8037B380;
        HbmGuiPaneMapping* entry = (HbmGuiPaneMapping*)List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv((s8*)&p->panes, 0);
        for (; entry != NULL; entry = (HbmGuiPaneMapping*)List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv((s8*)&p->panes, 0)) {
            List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv((s8*)&p->panes, (s32)entry);
            if (p->manager.allocator != NULL) {
                fn_8030CB00(p->manager.allocator, entry->component);
                fn_8030CB00(p->manager.allocator, entry);
            } else {
                if (entry->component != NULL) {
                    entry->component->unused5(1);
                }
                dtor_80136CFC((s32)entry);
            }
        }
        if (p != NULL) {
            *(HbmGuiMethod**)&p->manager = (HbmGuiMethod*)lbl_8037B420;
            void* it = (void*)List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv((s8*)&p->manager.components, 0);
            for (; it != NULL; it = (void*)List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv((s8*)&p->manager.components, 0)) {
                List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv((s8*)&p->manager.components, (s32)it);
                if (p->manager.allocator != NULL) {
                    fn_8030CB00(p->manager.allocator, it);
                } else {
                    dtor_80136CFC((s32)it);
                }
            }
        }
        if (flag > 0) dtor_80136CFC((s32)p);
    }
    return p;
}

s32 fn_802E7AD4(s8 *arg0) {
    s8 *p = *(s8 **)(arg0 + 0x2C);

    if (!(*(u8 *)(p + 0xCF) & 1)) return 0;
    p = *(s8 **)(p + 0xC);
    if (p == NULL) return 1;

    if (!(*(u8 *)(p + 0xCF) & 1)) return 0;
    p = *(s8 **)(p + 0xC);
    if (p == NULL) return 1;

    if (!(*(u8 *)(p + 0xCF) & 1)) return 0;
    p = *(s8 **)(p + 0xC);
    if (p == NULL) return 1;

    if (!(*(u8 *)(p + 0xCF) & 1)) return 0;
    p = *(s8 **)(p + 0xC);
    if (p == NULL) return 1;

    if (!(*(u8 *)(p + 0xCF) & 1)) return 0;
    p = *(s8 **)(p + 0xC);
    if (p == NULL) return 1;

    return fn_802E79C0(p);
}

void fn_802E7BCC(HbmGuiManager* self, HbmGuiEventHandler* handler) {
    self->eventHandler = handler;
    if (handler != NULL) {
        handler->setManager(self);
    }
}

void fn_802E7D24(s32 chan, s32 result) {
    switch (result) {
    case 0xFF: {
        s8* p = ((s8**)&lbl_804623B8)[chan];
        s32 channel = *(s32*)p;
        if (fn_8028B6F8(channel)) {
            WPADControlSpeaker(channel, 2, 0);
            u8* alarm = lbl_804622F8 + channel * 0x30;
            OSSetAlarmUserData((s32)alarm, channel);
            OSCancelAlarm((s32)alarm);
            OSSetAlarm(alarm, (s64)OSMillisecondsToTicks(1000), fn_802E7E34);
            p[0x41] = 1;
        }
        break;
    }
    }

    s8* p = ((s8**)&lbl_804623B8)[chan];
    void (*oldCb)(s32, s32) = *(void (**)(s32, s32))(p + 0x28);
    if (oldCb != NULL) {
        oldCb(chan, result);
    }
}

#pragma dont_inline on
void fn_802E8000(s8 *arg0) {
    WPADControlSpeaker((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (1), (void*) (0));
    fn_8028EE58((s32) (0));
    fn_8028AACC((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (M2C_FIELD(arg0, s32 *, 0x24)));
    fn_8028EE58((s32) (1));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0);
    fn_8028AB54((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (M2C_FIELD(arg0, s32 *, 0x28)));
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (0);
}
#pragma dont_inline reset

void fn_802E8600(HbmController* self) {
    if (self->mChan < 4 && self->mRumbling != 0) {
        self->mRumbling = 0;
        fn_8028AF20(self->mChan, 0);
    }
}

#pragma dont_inline on
void fn_802E8C38(s32 arg0) {
    WPADControlSpeaker((s32) (OSGetAlarmUserData((s32) (arg0))), (s32) (1), (void*) ((s32) fn_802E8C68));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_802E8D48(s32 arg0) {
    WPADControlSpeaker((s32) (OSGetAlarmUserData((s32) (arg0))), (s32) (4), (void*) ((s32) fn_802E8D78));
}
#pragma dont_inline reset

struct HbmHomeButtonInfo {
    u8 pad[8];
    wchar_t* msgBuf;
};

struct HbmHomeButton {
    u8 pad0[4];
    HbmHomeButtonInfo* mpHBInfo;
    u8 pad1[0xB4];
    wchar_t* mpText[7][6];
};

void fn_802EAAAC(HbmHomeButton *self) {
    int i = 0, j = 0, k = 0;
    bool flag = false;
    wchar_t* message = self->mpHBInfo->msgBuf;

    for (; message[i] != L'\0'; i++) {
        if (message[i] == L'"') {
            if (!flag) {
                flag = true;
                self->mpText[j][k] = &message[i + 1];
                j++;
                if (j == 10) {
                    j = 0;
                    k++;
                }
            } else {
                flag = false;
            }
        }
    }
}

} // extern "C"
