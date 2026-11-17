// Layout de nw4hbm::ut::CharWriter, referencia Xenoblade CC0.
// Campos contrastados con el ASM de RNEPDA; parametros Color por valor usan
// el puntero ABI de MW. Seleccionar punteros conserva el lvalue de C++.
#ifndef HBM_CHARWRITER_COMPAT_H
#define HBM_CHARWRITER_COMPAT_H
#include "types.h"
#define HBM_OFFSETOF(type, field) ((u32)&(((type*)0)->field))
typedef struct HbmColor { u8 r, g, b, a; } HbmColor;
typedef struct HbmCharWriter {
    struct { HbmColor min, max; } mColorMapping;
    struct { HbmColor lu, ru, ld, rd; } mVertexColor;
    struct { HbmColor start, end; s32 gradationMode; } mTextColor;
    f32 mScale[2];
    f32 mCursorPos[3];
    s32 mFilter[2];
    u8 padding40[2];
    u8 mAlpha;
    u8 mIsWidthFixed;
    f32 mFixedWidth;
    void* mFont;
} HbmCharWriter;
typedef char HbmColorSizeCheck[(sizeof(HbmColor) == 4) ? 1 : -1];
typedef char HbmCharWriterTextColorOffsetCheck[(HBM_OFFSETOF(HbmCharWriter, mTextColor) == 0x18) ? 1 : -1];
typedef char HbmCharWriterAlphaOffsetCheck[(HBM_OFFSETOF(HbmCharWriter, mAlpha) == 0x42) ? 1 : -1];
typedef char HbmCharWriterFontOffsetCheck[(HBM_OFFSETOF(HbmCharWriter, mFont) == 0x48) ? 1 : -1];

#undef HBM_OFFSETOF

static void HbmUpdateVertexColor(HbmCharWriter* p) {
    p->mVertexColor.lu = p->mTextColor.start;
    p->mVertexColor.ru = *(p->mTextColor.gradationMode != 1 ? &p->mTextColor.start : &p->mTextColor.end);
    p->mVertexColor.ld = *(p->mTextColor.gradationMode != 2 ? &p->mTextColor.start : &p->mTextColor.end);
    p->mVertexColor.rd = *(p->mTextColor.gradationMode == 0 ? &p->mTextColor.start : &p->mTextColor.end);
    p->mVertexColor.lu.a = (p->mVertexColor.lu.a * p->mAlpha) / 255;
    p->mVertexColor.ru.a = (p->mVertexColor.ru.a * p->mAlpha) / 255;
    p->mVertexColor.ld.a = (p->mVertexColor.ld.a * p->mAlpha) / 255;
    p->mVertexColor.rd.a = (p->mVertexColor.rd.a * p->mAlpha) / 255;
}

#endif
