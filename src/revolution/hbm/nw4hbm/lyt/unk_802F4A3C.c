#include "types.h"
#include "m2c_macros.h"

struct HbmMaterialBits {
 u32 texMap:4, texSRT:4, texCoordGen:4, indSRT:2, indStage:3, tevSwap:1, tevStage:5, chanCtrl:1, matCol:1, alpComp:1, blendMode:1;
};
struct HbmMaterialColor { u8 r,g,b,a; };
struct HbmMaterialColorS10 { s16 r,g,b,a; };
struct HbmMaterialColorView {
 u8 opaque[0x24];
 HbmMaterialColorS10 tevCols[3];
 HbmMaterialColor tevKCols[4];
 HbmMaterialBits cap,num;
 u8 userAllocated; u8 padding[3];
 void* memory;
};
inline u32 HbmOffsetTexSRT(const HbmMaterialBits& n) { return n.texMap*32; }
inline u32 HbmOffsetTexCoordGen(const HbmMaterialBits& n) { return n.texSRT*20+HbmOffsetTexSRT(n); }
inline u32 HbmOffsetChanCtrl(const HbmMaterialBits& n) { return n.texCoordGen*4+HbmOffsetTexCoordGen(n); }
inline u32 HbmOffsetMatColor(const HbmMaterialBits& n) { return n.chanCtrl*4+HbmOffsetChanCtrl(n); }
inline HbmMaterialColor* HbmMaterialGetMatColor(HbmMaterialColorView* p) { return (HbmMaterialColor*)((u8*)p->memory+HbmOffsetMatColor(p->cap)); }
template<class T> inline T HbmColorMin(T a,T b) { return (a>b)?b:a; }
template<class T> inline T HbmColorMax(T a,T b) { return (a<b)?b:a; }
inline void HbmSetColorComponent(HbmMaterialColor* p,u32 idx,s16 value) {
 u8 byteValue=HbmColorMin<s16>(HbmColorMax<s16>(value,0),255);
 switch (idx%4) {
 case 0:p->r=byteValue;break;
 case 1:p->g=byteValue;break;
 case 2:p->b=byteValue;break;
 case 3:p->a=byteValue;break;
 default:break;
 }
}

struct HbmTexCoordGen {
 u8 type,source,matrix,reserve;
 HbmTexCoordGen() : reserve(0) { Set(1,4,60); }
 void Set(u32 a,u32 b,u32 c) { type=a; source=b; matrix=c; }
};

struct HbmMaterialAnimationLinkView { u8 prefix[14]; bool disabled; };
class HbmMaterialAnimationDispatch { public:
 virtual void reserved0();
 virtual void reserved1();
 virtual void reserved2();
 virtual void unbindAnimation(void* transform);
 virtual void reserved4();
 virtual void reserved5();
 virtual HbmMaterialAnimationLinkView* findAnimationLink(void* transform);
};

class HbmTransformMaterialDispatch { public:
 virtual void reserved0(); virtual void reserved1(); virtual void reserved2();
 virtual void bindMaterial(HbmMaterialColorView* material);
};

class HbmMaterialTransformAnimate { public:
 virtual void reserved0();virtual void reserved1();virtual void reserved2();virtual void reserved3();virtual void reserved4();
 virtual void animate(u32 index,void* material);
};
struct HbmMaterialListNode { HbmMaterialListNode* next;HbmMaterialListNode* prev; HbmMaterialTransformAnimate* transform;u16 index;bool disabled;u8 padding; };
struct HbmMaterialListView { u8 opaque[0x18];u32 count;HbmMaterialListNode node; };
// Iterador por valor: MW pasa una copia temporal a Erase.
struct HbmMaterialListIterator {
 HbmMaterialListNode* node;
 explicit HbmMaterialListIterator(HbmMaterialListNode* p):node(p){}
 HbmMaterialListIterator& operator++(){node=node->next;return *this;}
 HbmMaterialListIterator operator++(int){HbmMaterialListIterator old=*this;++*this;return old;}
 friend bool operator==(HbmMaterialListIterator a,HbmMaterialListIterator b){return a.node==b.node;}
 friend bool operator!=(HbmMaterialListIterator a,HbmMaterialListIterator b){return !(a==b);}
};

// Constructor de copia necesario para el retorno por buffer oculto de MW.
struct HbmMaterialTextureSize {
 f32 width,height;
 HbmMaterialTextureSize(f32 w,f32 h):width(w),height(h){}
 HbmMaterialTextureSize(const HbmMaterialTextureSize& r):width(r.width),height(r.height){}
};
struct HbmMaterialGXTexObj {u32 words[8];};

extern "C" {

extern M2C_UNK lbl_80341E30;
extern u8 lbl_80341E48[];

struct S_fn_802F6EE4_temp_r5 {
    u8 f_0;
    u8 f_1;
    u8 f_2;
    u8 f_3;
};
extern M2C_UNK lbl_80341E30;
extern u8 lbl_80341E48[];
extern u8 lbl_80341E48[];

u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
s32 GXGetTexObjWrapS(s32 *arg0);
s32 GXGetTexObjWrapT(u32 *arg0);
void GXInitTexObjUserData(s8*,void*);
void GXInitTexObjWrapMode(s32 *arg0, s32 arg1, s32 arg2);
void InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl(s32 arg0, s8 *arg1, s32 arg2);
s8 * fn_802F2A34(s8 *arg0, u32 arg1);
void fn_802F511C(s32 *arg0);
s32 fn_802F6B9C(s8 *arg0);
s32 fn_802F6BB0(HbmMaterialColorView* p);
s32 fn_802F6BD0(s8 *arg0);
void fn_802F6C28(HbmMaterialColorView* p,u8 num);
void fn_802F6CB8(HbmMaterialColorView* p,u8 num);
void fn_802F6E0C(HbmMaterialColorView* p,u8 index,s8* palette);
void fn_802F6E90(HbmMaterialColorView* p,u8 index,const HbmMaterialGXTexObj& texture);
void fn_802F6EE4(HbmMaterialColorView* p,u32 idx,s16 value);
void fn_802F7F74(HbmMaterialColorView* p,HbmTransformMaterialDispatch* transform);
void fn_802F7F90(HbmMaterialListView* p,HbmMaterialTransformAnimate* transform);
void fn_802F8010(HbmMaterialAnimationDispatch* p);
void fn_802F8024(HbmMaterialListView* p);
void fn_802F809C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802F80D0(s32 arg0, s32 arg1);
void fn_802F80D8(HbmMaterialAnimationDispatch* p,void* transform,bool enable);
HbmMaterialTextureSize fn_802F8124(HbmMaterialColorView* p,u8 index);
void fn_802FF2A0(void*,HbmMaterialListIterator);
s32 fn_802FF2E8(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3_pad);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_802F511C(s32 *arg0) {
    *arg0 = -1;
}

s32 fn_802F6B9C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x58) + (((u32) M2C_FIELD(arg0, u32 *, 0x4C) >> 0x17U) & 0x1E0));
}

void fn_802F809C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    sp8 = (s32) (arg0 + 0x1C);
    fn_802FF2E8((s32 *) (arg0 + 0x18), (s8 *) (&sp8), (s32) (arg1), (s32) (arg3));
}

void fn_802F80D0(s32 arg0, s32 arg1) {
    fn_802F2A34((s8 *) (arg0 + 0x18), (u32) (arg1));
}

#pragma push
#pragma dont_inline reset
s32 fn_802F6BB0(HbmMaterialColorView* p) {
 return (s32)((u8*)p->memory+HbmOffsetTexCoordGen(p->cap));
}
#pragma pop

void fn_802F6C28(HbmMaterialColorView* p,u8 num) {
 if (num>0) {
  struct TexObj { u8 bytes[32]; };
  TexObj* const objects=(TexObj*)p->memory;
  for (u32 i=p->num.texMap;i<num;i++) memset((s32)&objects[i],0,sizeof(TexObj));
  p->num.texMap=num;
 }
}

#pragma push
#pragma dont_inline reset
void fn_802F6CB8(HbmMaterialColorView* p,u8 num) {
 if (num>0) {
  HbmTexCoordGen* const gen=(HbmTexCoordGen*)((u8*)p->memory+HbmOffsetTexCoordGen(p->cap));
  for (u32 i=p->num.texCoordGen;i<num;i++) gen[i]=HbmTexCoordGen();
  p->num.texCoordGen=num;
 }
}
#pragma pop

void fn_802F6E0C(HbmMaterialColorView* p,u8 index,s8* palette) {
 HbmMaterialGXTexObj* obj=&((HbmMaterialGXTexObj*)p->memory)[index];
 s32 wrapS=GXGetTexObjWrapS((s32*)obj);
 s32 wrapT=GXGetTexObjWrapT((u32*)obj);
 InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl((s32)obj,palette,0);
 GXInitTexObjWrapMode((s32*)obj,wrapS,wrapT);
}

void fn_802F6E90(HbmMaterialColorView* p,u8 index,const HbmMaterialGXTexObj& texture) {
 HbmMaterialGXTexObj* obj=&((HbmMaterialGXTexObj*)p->memory)[index];
 *obj=texture;
 GXInitTexObjUserData((s8*)obj,0);
}

#pragma dont_inline reset
void fn_802F6EE4(HbmMaterialColorView* p,u32 idx,s16 value) {
 switch(idx) {
 case 0:
 case 1:
 case 2:
 case 3:
 {
 if (p->num.matCol < 1) break;
 HbmMaterialColor* color=HbmMaterialGetMatColor(p);
 HbmSetColorComponent(color, idx%4, value);
 break;
 }
 case 4:
 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
 case 10:
 case 11:
 case 12:
 case 13:
 case 14:
 case 15:
 {
 u32 regIdx=(idx-4)/4;
 switch ((idx-4)%4) {
 case 0:p->tevCols[regIdx].r=value;break;
 case 1:p->tevCols[regIdx].g=value;break;
 case 2:p->tevCols[regIdx].b=value;break;
 case 3:p->tevCols[regIdx].a=value;break;
 }
 break;
 }
 case 16:
 case 17:
 case 18:
 case 19:
 case 20:
 case 21:
 case 22:
 case 23:
 case 24:
 case 25:
 case 26:
 case 27:
 case 28:
 case 29:
 case 30:
 case 31:
 {
 u32 regIdx=(idx-16)/4;
 HbmSetColorComponent(&p->tevKCols[regIdx], idx-16, value);
 break;
 }
 }
}

#pragma push
#pragma dont_inline reset
void fn_802F7F74(HbmMaterialColorView* p,HbmTransformMaterialDispatch* transform) {
 transform->bindMaterial(p);
}
#pragma pop

#pragma push
#pragma dont_inline reset
void fn_802F7F90(HbmMaterialListView* p,HbmMaterialTransformAnimate* transform) {
 for(HbmMaterialListIterator it(p->node.next);it!=HbmMaterialListIterator(&p->node);) {
  HbmMaterialListIterator current=it++;
  if(transform!=NULL && current.node->transform!=transform)continue;
  fn_802FF2A0(&p->count,current);
  current.node->transform=NULL;current.node->index=0;
 }
}
#pragma pop

#pragma push
#pragma dont_inline reset
void fn_802F8010(HbmMaterialAnimationDispatch* p) {
 p->unbindAnimation(NULL);
}
#pragma pop

void fn_802F8024(HbmMaterialListView* p) {
 HbmMaterialListNode* it=p->node.next;
 HbmMaterialListNode* end=&p->node;
 for (;it!=end;it=it->next) {
  if (!it->disabled) it->transform->animate(it->index,p);
 }
}

void fn_802F80D8(HbmMaterialAnimationDispatch* p,void* transform,bool enable) {
 HbmMaterialAnimationLinkView* link=p->findAnimationLink(transform);
 if (link!=NULL) link->disabled=!enable;
}

#pragma push
#pragma dont_inline reset
HbmMaterialTextureSize fn_802F8124(HbmMaterialColorView* p,u8 index) {
 if(index>=p->num.texMap)return HbmMaterialTextureSize(*(const f32*)lbl_80341E48,*(const f32*)lbl_80341E48);
 HbmMaterialGXTexObj obj=((HbmMaterialGXTexObj*)p->memory)[index];
 GXInitTexObjUserData((s8*)&obj,0);
 return HbmMaterialTextureSize(GXGetTexObjWidth((s8*)&obj),GXGetTexObjHeight((s8*)&obj));
}
#pragma pop

} // extern "C"
