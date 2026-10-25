#include "types.h"

// Translation unit: src/nw4r/math/unk_802019BC.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern "C" float lbl_804A1FA8;
extern "C" float lbl_804A1FAC;

// Forward declarations
extern "C" void fn_802019BC();
extern "C" void fn_802019E0();
extern "C" void fn_80201A04();
extern "C" void fn_80201A20();
extern "C" void fn_80201A84();
extern "C" void fn_80201AA8();
extern "C" void fn_80201AEC();

// ----------------------------------------------------------------------------
// fn_802019BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802019BC() {
    nofralloc
    opword 0xE0040000
    opword 0xE0250000
    opword 0x1040082A
    opword 0xE0040008
    opword 0xE0250008
    opword 0xF0430000
    opword 0x1040082A
    opword 0xF0430008
    blr
}

// ----------------------------------------------------------------------------
// fn_802019E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_802019E0() {
    nofralloc
    opword 0xE0040000
    opword 0xE0250000
    opword 0x10400828
    opword 0xE0040008
    opword 0xE0250008
    opword 0xF0430000
    opword 0x10400828
    opword 0xF0430008
    blr
}

// ----------------------------------------------------------------------------
// fn_80201A04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201A04() {
    nofralloc
    opword 0xE0040000
    opword 0x10400058
    opword 0xE0040008
    opword 0xF0430000
    opword 0x10400058
    opword 0xF0430008
    blr
}

// ----------------------------------------------------------------------------
// fn_80201A20
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201A20() {
    nofralloc
    lfs f2, 0x0(r5)
    lfs f8, 0x0(r4)
    lfs f0, 0x4(r5)
    fsubs f2, f2, f8
    lfs f6, 0x4(r4)
    lfs f3, 0x8(r5)
    fsubs f5, f0, f6
    lfs f4, 0x8(r4)
    fmuls f7, f1, f2
    fsubs f3, f3, f4
    lfs f0, 0xc(r5)
    lfs f2, 0xc(r4)
    fmuls f5, f1, f5
    fsubs f0, f0, f2
    fmuls f3, f1, f3
    fadds f7, f8, f7
    fmuls f0, f1, f0
    fadds f5, f6, f5
    fadds f1, f4, f3
    stfs f7, 0x0(r3)
    fadds f0, f2, f0
    stfs f5, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80201A84
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201A84() {
    nofralloc
    opword 0xE0030000
    opword 0xE0240000
    opword 0xE0630008
    opword 0xE0440008
    opword 0x10000072
    opword 0x106300B2
    opword 0x1020182A
    opword 0x10210854
    blr
}

// ----------------------------------------------------------------------------
// fn_80201AA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201AA8() {
    nofralloc
    opword 0xE0030000
    lfs f4, lbl_804A1FA8
    opword 0x10000032
    opword 0xE0230008
    fsubs f2, f4, f4
    opword 0x1021007A
    opword 0x10210854
    fcmpu cr0, f1, f2
    beqlr
    frsqrte f0, f1
    lfs f3, lbl_804A1FAC
    fmuls f2, f0, f0
    fmuls f0, f0, f4
    fnmsubs f2, f2, f1, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    blr
}

// ----------------------------------------------------------------------------
// fn_80201AEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201AEC() {
    nofralloc
    opword 0xE0440000
    opword 0xE0640008
    opword 0x108200B2
    lfs f0, lbl_804A1FA8
    lfs f1, lbl_804A1FAC
    opword 0x108320FA
    opword 0x10842114
    frsqrte f5, f4
    fmuls f6, f5, f5
    fmuls f0, f5, f0
    fnmsubs f6, f6, f4, f1
    fmuls f5, f6, f0
    opword 0x10420158
    opword 0x10630158
    opword 0xF0430000
    opword 0xF0630008
    blr
}

