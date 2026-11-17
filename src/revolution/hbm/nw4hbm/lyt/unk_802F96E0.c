#include "types.h"
#include "m2c_macros.h"

struct HbmWindowFrameSize { f32 l,r,t,b; };
// Size tiene constructor de copia: MW devuelve este objeto por un buffer oculto.
struct HbmTextureSize {
    f32 width;
    f32 height;
    HbmTextureSize() : width(0.0f), height(0.0f) {}
    HbmTextureSize(f32 w,f32 h) : width(w), height(h) {}
    HbmTextureSize(const HbmTextureSize& other)
        : width(other.width), height(other.height) {}
};
struct HbmWindowFrame { u8 textureFlip; u8 padding[3]; void* material; };

struct HbmTextBoxStringView {
 u8 opaque[0xD4];
 u16* text;
 u8 padding[0x20];
 u16 bufferBytes;
 u16 textLength;
};
inline u16 HbmStringBufferLength(const HbmTextBoxStringView* p) {
 if (p->bufferBytes == 0) return 0;
 return p->bufferBytes/sizeof(u16)-1;
}
template<class T> inline T HbmStringMin(T a,T b) { return (a>b)?b:a; }

// Solo se usa SetString: su entrada virtual RNEPDA esta en 0x70.
class HbmTextBoxStringDispatch { public:
 virtual void reserved0();
 virtual void reserved1();
 virtual void reserved2();
 virtual void reserved3();
 virtual void reserved4();
 virtual void reserved5();
 virtual void reserved6();
 virtual void reserved7();
 virtual void reserved8();
 virtual void reserved9();
 virtual void reserved10();
 virtual void reserved11();
 virtual void reserved12();
 virtual void reserved13();
 virtual void reserved14();
 virtual void reserved15();
 virtual void reserved16();
 virtual void reserved17();
 virtual void reserved18();
 virtual void reserved19();
 virtual void reserved20();
 virtual void reserved21();
 virtual void reserved22();
 virtual void reserved23();
 virtual void freeString();
 virtual void reserved25();
 virtual u16 setString(const u16* str,u16 pos,u16 len);
};

class HbmWindowMaterialDispatch { public:
 virtual void reserved0(); virtual void reserved1(); virtual void reserved2();
 virtual void unbindAnimation(void* transform);
 virtual void reserved4(); virtual void animate();
 virtual void* findAnimationLink(void* transform);
 virtual void setAnimationEnable(void* transform,bool enable);
 const char* getName() const { return (const char*)this+4; }
};
struct HbmWindowSearchFrame { u32 flip; HbmWindowMaterialDispatch* material; };
struct HbmWindowSearchNode { HbmWindowSearchNode* next; HbmWindowSearchNode* prev; };
struct HbmWindowSearchView {
 u32 vtable;
 HbmWindowSearchNode sibling;
 void* parent;
 u32 childCount;
 HbmWindowSearchNode children;
 u8 animations[12];
 HbmWindowMaterialDispatch* material;
 u8 opaque[0xD0];
 HbmWindowSearchFrame* frames;
 u8 frameNum;
};
class HbmWindowPaneSearchDispatch { public:
 virtual void reserved0();
 virtual void reserved1();
 virtual void reserved2();
 virtual void reserved3();
 virtual void reserved4();
 virtual void reserved5();
 virtual void reserved6();
 virtual void reserved7();
 virtual void reserved8();
 virtual void reserved9();
 virtual void reserved10();
 virtual void reserved11();
 virtual void reserved12();
 virtual void reserved13();
 virtual HbmWindowMaterialDispatch* findMaterialByName(const char* name,bool recursive);
};

struct HbmWindowRawPosition { f32 x,y; }; struct HbmWindowPosition : HbmWindowRawPosition { HbmWindowPosition(){} HbmWindowPosition(f32 a,f32 b){x=a;y=b;} };
class HbmWindowSelfDispatch { public:
 virtual void reserved0();
 virtual void reserved1();
 virtual void reserved2();
 virtual void reserved3();
 virtual void reserved4();
 virtual void reserved5();
 virtual void reserved6();
 virtual void reserved7();
 virtual void reserved8();
 virtual void reserved9();
 virtual void reserved10();
 virtual void reserved11();
 virtual void reserved12();
 virtual void reserved13();
 virtual void reserved14();
 virtual void reserved15();
 virtual void reserved16();
 virtual void reserved17();
 virtual void reserved18();
 virtual void reserved19();
 virtual void reserved20();
 virtual void reserved21();
 virtual void loadMtx(const void* info);
 virtual void reserved64(); virtual void reserved68();
 virtual void drawContent(const HbmWindowPosition&,const HbmWindowFrameSize&,u8);
 virtual void drawFrame(const HbmWindowPosition&,const HbmWindowFrame&,const HbmWindowFrameSize&,u8);
 virtual void drawFrame4(const HbmWindowPosition&,const HbmWindowFrame*,const HbmWindowFrameSize&,u8);
 virtual void drawFrame8(const HbmWindowPosition&,const HbmWindowFrame*,const HbmWindowFrameSize&,u8);
};
struct HbmWindowSelfView { u8 opaque0[0xCE]; u8 alpha; u8 opaque1[0x2D]; HbmWindowFrame* frames; u8 frameNum; };

struct HbmTextColor {
 u8 r,g,b,a;
 HbmTextColor(const HbmTextColor& c):r(c.r),g(c.g),b(c.b),a(c.a){}
};
struct HbmTextColorView {u8 opaque[0xD8];HbmTextColor colors[2];};

// Comparaciones libres por valor, como LinkList::Iterator del SDK.
struct HbmWindowSearchIterator {
 HbmWindowSearchNode* node;
 explicit HbmWindowSearchIterator(HbmWindowSearchNode* p):node(p){}
 HbmWindowSearchIterator& operator++(){node=node->next;return *this;}
 friend bool operator==(HbmWindowSearchIterator a,HbmWindowSearchIterator b){return a.node==b.node;}
 friend bool operator!=(HbmWindowSearchIterator a,HbmWindowSearchIterator b){return !(a==b);}
};

typedef HbmWindowPosition HbmWindowVec2;
class HbmWindowDrawingMaterial { public: virtual void reservedDestructor(); virtual bool setupGX(bool modulate,u8 alpha); };
struct HbmWindowContentView {
 u8 opaque0[0x28]; HbmWindowDrawingMaterial* material;
 u8 opaque1[0x20]; HbmTextureSize size;
 u8 opaque2[0x80]; HbmWindowFrameSize inflation;
 u8 colors[16]; u8 texCoordCapacity,texCoordCount; u16 padding;
 void* texCoords;
 u8 getTexCoordCount() const {return texCoordCount;}
 void* getTexCoords() const {return texCoords;}
};

struct HbmWindowColorView {u8 opaque[0xE4];HbmTextColor colors[4];};

extern "C" {

extern f32 lbl_80341E88;

struct SK_fn_802FD124_18 { f32 f_0; f32 f_4; s32 f_8; s32 f_C; s32 f_10; s32 f_14; f32 f_18; f32 f_1C; };
struct SK_fn_802FD124_10 { f32 f_0; f32 f_4; };
struct SK_fn_802FD124_8 { f32 f_0; f32 f_4; };
struct S_fn_802FD124_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
    f32 f_C;
};
extern f32 lbl_80341E88;
extern s32 lbl_8037CA28[];
extern u8 lbl_80462438[];
extern s32 lbl_80462440[];
extern s32 lbl_80462450[];
extern s32 lbl_80462458[];

void AnimateSelf__Q36nw4hbm3lyt4PaneFUl(void* p,u32 option);
bool EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc(const char* a,const char* b);
void* FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform(void* p,void* transform);
bool IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc(u8* colors,u8 alpha);
void SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb(void* p,void* transform,bool enable,bool recursive);
void SetVertexFormat__Q36nw4hbm3lyt6detailFbUc(bool use,u8 count);
void UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform(void* p,void* transform);
void dtor_80136CFC(s32 arg0);
void fn_802F3984(const HbmWindowVec2& base,const HbmTextureSize& size,u8 count,const void* coords,const u8* colors,u8 alpha);
HbmTextureSize fn_802F8124(void* material,u8 index);
HbmWindowPosition fn_802F9090(void* p);
s32 fn_802F96E0(s32 arg0, s32 arg1);
void fn_802F9720(s32 **arg0);
s32 fn_802F9730(void);
void fn_802F9738(s32 *arg0, u16 *arg1);
s8 * fn_802F9AA0(s8 *arg0, s32 arg1);
void fn_802F9C64(HbmTextColorView* p,u32 index,HbmTextColor color);
void fn_802F9CAC(HbmTextColorView* p,u32 index,HbmTextColor color);
u8 fn_802F9CD8(u8 *arg0, u32 arg1);
void fn_802F9CF0(u8 *arg0, u32 arg1, u32 arg2);
void fn_802FA6D4(HbmTextBoxStringView* p,u16 len);
void fn_802FA750(HbmTextBoxStringView* p);
u16 fn_802FA79C(HbmTextBoxStringDispatch* p,const u16* str,u16 pos);
u16 fn_802FA804(HbmTextBoxStringView* p,const u16* str,u16 pos,u16 len);
s32 fn_802FA8CC(s32 arg0, s32 arg1);
s32 ** fn_802FADAC(void);
void fn_802FADB8(void);
s8 * fn_802FAFDC(s8 *arg0, s32 arg1);
HbmWindowMaterialDispatch* fn_802FB120(HbmWindowSearchView* p,const char* name,bool recursive);
void* fn_802FB21C(HbmWindowSearchView* p,void* transform);
void fn_802FB2C0(HbmWindowSearchView* p,void* transform,bool enable,bool recursive);
HbmTextColor fn_802FB354(const HbmWindowColorView* p,u32 index);
void fn_802FB380(HbmWindowColorView* p,u32 index,HbmTextColor color);
u8 fn_802FB3AC(u8 *arg0, u32 arg1);
void fn_802FB3C4(u8 *arg0, u32 arg1, u32 arg2);
void fn_802FB3DC(HbmWindowSelfView* p,const void* info);
void fn_802FB51C(HbmWindowSearchView* p,u32 option);
void fn_802FB5AC(HbmWindowSearchView* p,void* transform);
void fn_802FB63C(HbmWindowContentView* p,const HbmWindowVec2& base,const HbmWindowFrameSize& frame,u8 alpha);
HbmWindowFrameSize fn_802FD124(void* window,u8 frameNum,const HbmWindowFrame* frames);
s32 fn_802FD224(s8 *arg0, u32 arg1);
s32 ** fn_802FD25C(void);
void fn_802FD268(void);
void* fn_8030CAF0(void*,u32);
void fn_8030CB00(void*,void*);
void* memcpy(void* destination,const void* source,u32 bytes);
u32 wcslen(const u16* str);

s32 fn_802F96E0(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

void fn_802F9720(s32 **arg0) {
    *arg0 = lbl_8037CA28;
}

s32 fn_802F9730(void) {
    return 0;
}

s32 fn_802FA8CC(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

s32 ** fn_802FADAC(void) {
    return (s32 **)lbl_80462450;
}

void fn_802FADB8(void) {
    lbl_80462450[0] = (s32)lbl_80462440;
}

s32 fn_802FD224(s8 *arg0, u32 arg1) {
    if (arg1 >= (u8) M2C_FIELD(arg0, u8 *, 0x100)) {
        return 0;
    }
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xFC) + (arg1 * 8)), s32 *, 4);
}

s32 ** fn_802FD25C(void) {
    return (s32 **)lbl_80462458;
}

void fn_802FD268(void) {
    lbl_80462458[0] = (s32)lbl_80462440;
}

u8 fn_802F9CD8(u8 *arg0, u32 arg1) {
    return *(u8 *)(arg0 + 0xD8 + ((arg1 >> 1) & ~3) + (arg1 & 3));
}

void fn_802F9CF0(u8 *arg0, u32 arg1, u32 arg2) {
    *(u8 *)(arg0 + 0xD8 + ((arg1 >> 1) & ~3) + (arg1 & 3)) = arg2;
}

u8 fn_802FB3AC(u8 *arg0, u32 arg1) {
    return *(u8 *)(arg0 + 0xE4 + (arg1 & ~3) + (arg1 & 3));
}

void fn_802FB3C4(u8 *arg0, u32 arg1, u32 arg2) {
    *(u8 *)(arg0 + 0xE4 + (arg1 & ~3) + (arg1 & 3)) = arg2;
}

#pragma push
#pragma dont_inline reset
void fn_802F9C64(HbmTextColorView* p,u32 index,HbmTextColor color) {
fn_802F9CAC(p,index/2,color);
}
#pragma pop

#pragma push
#pragma dont_inline reset
void fn_802F9CAC(HbmTextColorView* p,u32 index,HbmTextColor color) {
 p->colors[index].r=color.r;
 p->colors[index].g=color.g;
 p->colors[index].b=color.b;
 p->colors[index].a=color.a;
}
#pragma pop

#pragma push
#pragma dont_inline reset
void fn_802FA6D4(HbmTextBoxStringView* p,u16 len) {
 if(len!=0) {
  u16 chars=len+1;
  u16 bytes=chars*sizeof(u16);
  if(bytes>p->bufferBytes) {
   ((HbmTextBoxStringDispatch*)p)->freeString();
   p->text=(u16*)fn_8030CAF0(*(void**)lbl_80462438,bytes);
   if(p->text!=NULL)p->bufferBytes=bytes;
  }
 }
}
#pragma pop

#pragma push
#pragma dont_inline reset
void fn_802FA750(HbmTextBoxStringView* p) {
 if(p->text!=NULL) {
  fn_8030CB00(*(void**)lbl_80462438,p->text);
  p->text=NULL;p->bufferBytes=0;
 }
}
#pragma pop

u16 fn_802FA79C(HbmTextBoxStringDispatch* p,const u16* str,u16 pos) {
 return p->setString(str,pos,(u16)wcslen(str));
}

#pragma push
#pragma dont_inline reset
u16 fn_802FA804(HbmTextBoxStringView* p,const u16* str,u16 pos,u16 len) {
 if (p->text == NULL) return 0;
 const u16 maxlen=HbmStringBufferLength(p);
 if (pos>=maxlen) return 0;
 const u16 chars=HbmStringMin<u16>(len,maxlen-pos);
 memcpy(&p->text[pos],str,chars*sizeof(u16));
 p->textLength=pos+chars;
 p->text[p->textLength]=0;
 return chars;
}
#pragma pop

#pragma push
#pragma dont_inline reset
HbmWindowMaterialDispatch* fn_802FB120(HbmWindowSearchView* p,const char* name,bool recursive) {
 if(p->material!=NULL && EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc(p->material->getName(),name))return p->material;
 for(int i=0;i<p->frameNum;i++) {
  if(EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc(p->frames[i].material->getName(),name))return p->frames[i].material;
 }
 if(recursive) {
  for(HbmWindowSearchIterator it(p->children.next);it!=HbmWindowSearchIterator(&p->children);++it) {
   HbmWindowPaneSearchDispatch* child=(HbmWindowPaneSearchDispatch*)((u8*)it.node-4);
   HbmWindowMaterialDispatch* result=child->findMaterialByName(name,true);
   if(result!=NULL)return result;
  }
 }
 return NULL;
}
#pragma pop

void* fn_802FB21C(HbmWindowSearchView* p,void* transform) {
 void* link=FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform(p,transform);
 if (link!=NULL) return link;
 for (int i=0;i<p->frameNum;i++) {
  void* link=p->frames[i].material->findAnimationLink(transform);
  if (link!=NULL) return link;
 }
 return NULL;
}

void fn_802FB2C0(HbmWindowSearchView* p,void* transform,bool enable,bool recursive) {
 for (int i=0;i<p->frameNum;i++) p->frames[i].material->setAnimationEnable(transform,enable);
 SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb(p,transform,enable,recursive);
}

#pragma push
#pragma dont_inline reset
HbmTextColor fn_802FB354(const HbmWindowColorView* p,u32 index) {
return p->colors[index];
}
#pragma pop

#pragma push
#pragma dont_inline reset
void fn_802FB380(HbmWindowColorView* p,u32 index,HbmTextColor color) {
 p->colors[index].r=color.r;
 p->colors[index].g=color.g;
 p->colors[index].b=color.b;
 p->colors[index].a=color.a;
}
#pragma pop

void fn_802FB3DC(HbmWindowSelfView* p,const void* info) {
 HbmWindowSelfDispatch* self=(HbmWindowSelfDispatch*)p;
 self->loadMtx(info);
 HbmWindowFrameSize size=fn_802FD124(p,p->frameNum,p->frames);
 HbmWindowPosition base=fn_802F9090(p);
 self->drawContent(base,size,p->alpha);
 switch(p->frameNum) {
 case 1:self->drawFrame(base,p->frames[0],size,p->alpha);break;
 case 4:self->drawFrame4(base,p->frames,size,p->alpha);break;
 case 8:self->drawFrame8(base,p->frames,size,p->alpha);break;
 }
}

void fn_802FB51C(HbmWindowSearchView* p,u32 option) {
 AnimateSelf__Q36nw4hbm3lyt4PaneFUl(p,option);
 if ((((u8*)p)[0xCF]&1) || !(option&1)) {
  for (int i=0;i<p->frameNum;i++) p->frames[i].material->animate();
 }
}

void fn_802FB5AC(HbmWindowSearchView* p,void* transform) {
 for (int i=0;i<p->frameNum;i++) p->frames[i].material->unbindAnimation(transform);
 UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform(p,transform);
}

#pragma push
#pragma dont_inline reset
void fn_802FB63C(HbmWindowContentView* p,const HbmWindowVec2& base,const HbmWindowFrameSize& frame,u8 alpha) {
 bool use=p->material->setupGX(IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc(p->colors,alpha),alpha);
 SetVertexFormat__Q36nw4hbm3lyt6detailFbUc(use,p->getTexCoordCount());
 fn_802F3984(HbmWindowVec2(base.x+frame.l-p->inflation.l,base.y+frame.t-p->inflation.t),
      HbmTextureSize(p->size.width-frame.l+p->inflation.l-frame.r+p->inflation.r,
                     p->size.height-frame.t+p->inflation.t-frame.b+p->inflation.b),
      p->getTexCoordCount(),p->getTexCoords(),use?p->colors:NULL,alpha);
}
#pragma pop

#pragma dont_inline reset
HbmWindowFrameSize fn_802FD124(void* window,u8 frameNum,const HbmWindowFrame* frames) {
 HbmWindowFrameSize frameSize={0.0f,0.0f,0.0f,0.0f};
 switch (frameNum) {
 case 1: {
  HbmTextureSize texSize=fn_802F8124((void*) (frames[0].material), (u8) (0));
  frameSize.l=texSize.width;
  frameSize.t=texSize.height;
  frameSize.r=texSize.width;
  frameSize.b=texSize.height;
  break;
 }
 case 4:
 case 8: {
  HbmTextureSize texSize=fn_802F8124((void*) (frames[0].material), (u8) (0));
  frameSize.l=texSize.width;
  frameSize.t=texSize.height;
  texSize=fn_802F8124((void*) (frames[3].material), (u8) (0));
  frameSize.r=texSize.width;
  frameSize.b=texSize.height;
  break;
 }
 }
 return (HbmWindowFrameSize) (frameSize);
}

} // extern "C"
