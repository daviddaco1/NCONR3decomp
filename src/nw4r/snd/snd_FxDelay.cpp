#include <nw4r/snd.h>

namespace nw4r {
namespace snd {
namespace detail {

const s16
    EnvGenerator::DecibelSquareTable[EnvGenerator::DECIBEL_SQUARE_TABLE_SIZE] =
        {-723, -722, -721, -651, -601, -562, -530, -503, -480, -460, -442, -425,
         -410, -396, -383, -371, -360, -349, -339, -330, -321, -313, -305, -297,
         -289, -282, -276, -269, -263, -257, -251, -245, -239, -234, -229, -224,
         -219, -214, -210, -205, -201, -196, -192, -188, -184, -180, -176, -173,
         -169, -165, -162, -158, -155, -152, -149, -145, -142, -139, -136, -133,
         -130, -127, -125, -122, -119, -116, -114, -111, -109, -106, -103, -101,
         -99,  -96,  -94,  -91,  -89,  -87,  -85,  -82,  -80,  -78,  -76,  -74,
         -72,  -70,  -68,  -66,  -64,  -62,  -60,  -58,  -56,  -54,  -52,  -50,
         -49,  -47,  -45,  -43,  -42,  -40,  -38,  -36,  -35,  -33,  -31,  -30,
         -28,  -27,  -25,  -23,  -22,  -20,  -19,  -17,  -16,  -14,  -13,  -11,
         -10,  -8,   -7,   -6,   -4,   -3,   -1,   0};

const volatile f32 EnvGenerator::VOLUME_INIT = VOLUME_MIN_DB;

EnvGenerator::EnvGenerator() {
    Init();
}

void EnvGenerator::Init(f32 db) {
    SetAttack(ATTACK_INIT);
    SetDecay(DECAY_INIT);
    SetSustain(SUSTAIN_INIT);
    SetRelease(RELEASE_INIT);
    Reset(db);
}

void EnvGenerator::Reset(f32 db) {
    mValue = db * 10.0f;
    mStatus = STATUS_ATTACK;
}

f32 EnvGenerator::GetValue() const {
    if (mStatus == STATUS_ATTACK && mAttack == 0.0f) {
        return 0.0f;
    }

    return mValue / 10.0f;
}

void EnvGenerator::Update(int msec) {
    switch (mStatus) {
    case STATUS_ATTACK: {
        while (msec > 0) {
            mValue *= mAttack;
            msec--;

            if (mValue > -(1.0f / 32.0f)) {
                mValue = 0.0f;
                mStatus = STATUS_DECAY;
            }
        }

        if (mStatus != STATUS_DECAY) {
            break;
        }

        // FALLTHROUGH
    }

    case STATUS_DECAY: {
        f32 decay = CalcDecibelSquare(mSustain);
        mValue -= mDecay * msec;

        if (mValue > decay) {
            break;
        }

        mValue = decay;
        mStatus = STATUS_SUSTAIN;
        break;
    }

    case STATUS_SUSTAIN: {
        break;
    }

    case STATUS_RELEASE: {
        mValue -= mRelease * msec;
        break;
    }
    }
}

void EnvGenerator::SetAttack(int attack) {
    static const f32 attackTable[128] = {
        0.9992175f, 0.9984326f, 0.9976452f, 0.9968553f, 0.9960629f, 0.9952679f,
        0.9944704f, 0.9936704f, 0.9928677f, 0.9920625f, 0.9912546f, 0.9904441f,
        0.9896309f, 0.9888151f, 0.9879965f, 0.9871752f, 0.9863512f, 0.9855244f,
        0.9846949f, 0.9838625f, 0.9830273f, 0.9821893f, 0.9813483f, 0.9805045f,
        0.9796578f, 0.9788081f, 0.9779555f, 0.9770999f, 0.9762413f, 0.9753797f,
        0.9745150f, 0.9736472f, 0.9727763f, 0.9719023f, 0.9710251f, 0.9701448f,
        0.9692612f, 0.9683744f, 0.9674844f, 0.9665910f, 0.9656944f, 0.9647944f,
        0.9638910f, 0.9629842f, 0.9620740f, 0.9611604f, 0.9602433f, 0.9593226f,
        0.9583984f, 0.9574706f, 0.9565392f, 0.9556042f, 0.9546655f, 0.9537231f,
        0.9527769f, 0.9518270f, 0.9508732f, 0.9499157f, 0.9489542f, 0.9479888f,
        0.9470195f, 0.9460462f, 0.9450689f, 0.9440875f, 0.9431020f, 0.9421124f,
        0.9411186f, 0.9401206f, 0.9391184f, 0.9381118f, 0.9371009f, 0.9360856f,
        0.9350659f, 0.9340417f, 0.9330131f, 0.9319798f, 0.9309420f, 0.9298995f,
        0.9288523f, 0.9278004f, 0.9267436f, 0.9256821f, 0.9246156f, 0.9235442f,
        0.9224678f, 0.9213864f, 0.9202998f, 0.9192081f, 0.9181112f, 0.9170091f,
        0.9159016f, 0.9147887f, 0.9136703f, 0.9125465f, 0.9114171f, 0.9102821f,
        0.9091414f, 0.9079949f, 0.9068427f, 0.9056845f, 0.9045204f, 0.9033502f,
        0.9021740f, 0.9009916f, 0.8998029f, 0.8986080f, 0.8974066f, 0.8961988f,
        0.8949844f, 0.8900599f, 0.8824622f, 0.8759247f, 0.8691861f, 0.8636406f,
        0.8535788f, 0.8430189f, 0.8286135f, 0.8149099f, 0.8002172f, 0.7780663f,
        0.7554750f, 0.7242125f, 0.6828239f, 0.6329169f, 0.5592135f, 0.4551411f,
        0.3298770f, 0.0000000f};

    mAttack = attackTable[attack];
}

void EnvGenerator::SetDecay(int decay) {
    mDecay = CalcRelease(decay);
}

void EnvGenerator::SetSustain(int sustain) {
    mSustain = sustain;
}

void EnvGenerator::SetRelease(int release) {
    mRelease = CalcRelease(release);
}

f32 EnvGenerator::CalcRelease(int release) {
    if (release == 127) {
        return 65535.0f;
    }

    if (release == 127 - 1) {
        return 24.0f;
    }

    if (release < 50) {
        return (release * 2 + 1) / 128.0f / 5.0f;
    }

    return 60.0f / (127 - 1 - release) / 5.0f;
}

int EnvGenerator::CalcDecibelSquare(int scale) {
    return DecibelSquareTable[scale];
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A2090;
extern "C" float lbl_804A2094;
extern "C" float lbl_804A2098;
extern "C" float lbl_804A209C;
extern "C" float lbl_804A20A0;
extern "C" float lbl_804A20A8;
extern "C" u8 lbl_8033EBF8[];
extern "C" u8 lbl_8033ECF8[];
extern "C" void AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer();
extern "C" void DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void __ct__Q44nw4r3snd6detail9FrameHeapFv();
extern "C" void __dt__Q34nw4r2ut19DvdLockedFileStreamFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd6detail9FrameHeapFv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_8020BD8C();
extern "C" void fn_8020BD94();
extern "C" void fn_8020BD9C();
extern "C" void fn_8020BDF4();
extern "C" void fn_8020BE38();
extern "C" void fn_8020BEBC();
extern "C" void fn_8020C030();
extern "C" void fn_8020C190();
extern "C" void fn_8020C330();
extern "C" void fn_8020C378();
extern "C" void fn_8030C6F0();
extern "C" void fn_8030C840();

// asm_to_cpp: __ct__Q44nw4r3snd6detail9FrameHeapFv
extern "C" asm void __ct__Q44nw4r3snd6detail9FrameHeapFv() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x8
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    blr
}

// asm_to_cpp: __dt__Q44nw4r3snd6detail9FrameHeapFv
extern "C" asm void __dt__Q44nw4r3snd6detail9FrameHeapFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_8020C558
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8020C538
    beq lbl_8020C538
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8020C51C
    addi r31, r3, 0x8
    b lbl_8020C510
lbl_8020C4A8:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_8020C504
    addi r30, r29, 0xc
    b lbl_8020C4E8
lbl_8020C4BC:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_8020C4E8
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_8020C4E8
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_8020C4E8:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_8020C4BC
    addic. r3, r29, 0x8
    beq lbl_8020C504
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C504:
    mr r4, r29
    addi r3, r27, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020C510:
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_8020C4A8
lbl_8020C51C:
    lwz r3, 0x0(r27)
    li r4, 0x3
    bl fn_8030C840
    lwz r3, 0x0(r27)
    bl fn_8030C6F0
    li r0, 0x0
    stw r0, 0x0(r27)
lbl_8020C538:
    addic. r3, r27, 0x4
    beq lbl_8020C548
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C548:
    cmpwi r28, 0x0
    ble lbl_8020C558
    mr r3, r27
    bl dtor_80136CFC
lbl_8020C558:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8020BD8C
extern "C" asm void fn_8020BD8C() {
    nofralloc
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8020BD94
extern "C" asm void fn_8020BD94() {
    nofralloc
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8020BD9C
extern "C" asm void fn_8020BD9C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8020BDD8
    li r4, 0x0
    bl __dt__Q34nw4r2ut19DvdLockedFileStreamFv
    cmpwi r31, 0x0
    ble lbl_8020BDD8
    mr r3, r30
    bl dtor_80136CFC
lbl_8020BDD8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8020BDF4
extern "C" asm void fn_8020BDF4() {
    nofralloc
    lfs f1, lbl_804A2090
    li r4, 0x0
    lfs f0, lbl_804A2098
    lis r5, lbl_8033ECF8@ha
    addi r5, r5, lbl_8033ECF8@l
    lfs f2, lbl_804A2094
    fmuls f0, f0, f1
    lfs f1, 0x1fc(r5)
    li r0, 0x7f
    sth r4, 0x16(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x8(r3)
    stb r0, 0x14(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    blr
}

// asm_to_cpp: fn_8020BE38
extern "C" asm void fn_8020BE38() {
    nofralloc
    lfs f0, lbl_804A2098
    li r4, 0x0
    lis r5, lbl_8033ECF8@ha
    lfs f2, lbl_804A2094
    fmuls f0, f0, f1
    addi r5, r5, lbl_8033ECF8@l
    lfs f1, 0x1fc(r5)
    li r0, 0x7f
    sth r4, 0x16(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x8(r3)
    stb r0, 0x14(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    blr
}

// asm_to_cpp: fn_8020BEBC
extern "C" asm void fn_8020BEBC() {
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    beq lbl_8020BF70
    bge lbl_8020BEE0
    cmpwi r0, 0x0
    beq lbl_8020BEEC
    bge lbl_8020BF38
    b lbl_8020C010
lbl_8020BEE0:
    cmpwi r0, 0x4
    beq lbl_8020BFE0
    b lbl_8020C010
lbl_8020BEEC:
    lfs f0, lbl_804A20A0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8020C010
lbl_8020BEFC:
    lfs f2, 0x4(r3)
    lfs f1, 0x10(r3)
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    stfs f1, 0x4(r3)
    ble lbl_8020BF30
    lfs f0, lbl_804A209C
    li r4, 0x1
    lhz r0, 0x16(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    sth r0, 0x18(r3)
    b lbl_8020C010
lbl_8020BF30:
    bdnz lbl_8020BEFC
    b lbl_8020C010
lbl_8020BF38:
    lhz r6, 0x18(r3)
    cmpw r4, r6
    bge lbl_8020BF50
    subf r0, r4, r6
    sth r0, 0x18(r3)
    b lbl_8020BF64
lbl_8020BF50:
    li r5, 0x0
    li r0, 0x2
    sth r5, 0x18(r3)
    subf r4, r6, r4
    stw r0, 0x0(r3)
lbl_8020BF64:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_8020C010
lbl_8020BF70:
    lis r5, 0x4330
    xoris r0, r4, 0x8000
    lbz r6, 0x14(r3)
    lis r4, lbl_8033EBF8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8033EBF8@l
    slwi r0, r6, 1
    lfd f3, lbl_804A20A8
    stw r5, 0x10(r1)
    lhax r0, r4, r0
    lfd f0, 0x10(r1)
    xoris r0, r0, 0x8000
    lfs f1, 0x8(r3)
    fsubs f2, f0, f3
    stw r0, 0xc(r1)
    lfs f0, 0x4(r3)
    stw r5, 0x8(r1)
    fmuls f1, f1, f2
    lfd f2, 0x8(r1)
    fsubs f0, f0, f1
    fsubs f1, f2, f3
    stfs f0, 0x4(r3)
    fcmpo cr0, f0, f1
    bge lbl_8020C010
    li r0, 0x3
    stfs f1, 0x4(r3)
    stw r0, 0x0(r3)
    b lbl_8020C010
lbl_8020BFE0:
    xoris r4, r4, 0x8000
    lis r0, 0x4330
    stw r4, 0x14(r1)
    lfd f3, lbl_804A20A8
    stw r0, 0x10(r1)
    lfs f1, 0xc(r3)
    lfd f2, 0x10(r1)
    lfs f0, 0x4(r3)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
lbl_8020C010:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8020C030
extern "C" asm void fn_8020C030() {
    nofralloc
    addi r0, r4, 0x1
    mullw r0, r0, r0
    srawi r0, r0, 2
    addze r0, r0
    sth r0, 0x16(r3)
    blr
}

// asm_to_cpp: fn_8020C190
extern "C" asm void fn_8020C190() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r3, 0x94(r30)
    lwz r0, 0x50(r30)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_8020C1DC
    li r31, 0x7f
    b lbl_8020C1E4
lbl_8020C1DC:
    srawi r0, r3, 31
    andc r31, r3, r0
lbl_8020C1E4:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_8020C204
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8020C310
lbl_8020C204:
    addi r28, r29, 0x4
    b lbl_8020C2CC
lbl_8020C20C:
    lwz r4, 0x4(r29)
    li r6, 0x80
    li r3, 0x0
    b lbl_8020C258
lbl_8020C21C:
    lbz r5, -0x70(r4)
    subi r7, r4, 0x104
    lwz r0, -0xb4(r4)
    add r5, r5, r0
    cmpwi r5, 0x7f
    ble lbl_8020C23C
    li r0, 0x7f
    b lbl_8020C244
lbl_8020C23C:
    srawi r0, r5, 31
    andc r0, r5, r0
lbl_8020C244:
    cmpw r6, r0
    ble lbl_8020C254
    mr r3, r7
    mr r6, r0
lbl_8020C254:
    lwz r4, 0x0(r4)
lbl_8020C258:
    cmplw r4, r28
    bne lbl_8020C21C
    cmpwi r3, 0x0
    bne lbl_8020C27C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8020C310
lbl_8020C27C:
    lbz r4, 0x94(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_8020C298
    li r0, 0x7f
    b lbl_8020C2A0
lbl_8020C298:
    srawi r0, r4, 31
    andc r0, r4, r0
lbl_8020C2A0:
    cmpw r31, r0
    bge lbl_8020C2BC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8020C310
lbl_8020C2BC:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_8020C2CC:
    lwz r3, 0x0(r29)
    lwz r0, 0xc(r29)
    cmpw r3, r0
    bge lbl_8020C20C
    addi r0, r29, 0x4
    mr r3, r29
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r30, 0x104
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r30
    mr r4, r29
    bl AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_8020C310:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8020C330
extern "C" asm void fn_8020C330() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r4, 0x104
    stw r30, 0x8(r1)
    mr r30, r3
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    mr r3, r31
    mr r4, r30
    bl DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8020C378
extern "C" asm void fn_8020C378() {
    nofralloc
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    bne lbl_8020C38C
    li r3, 0x0
    blr
lbl_8020C38C:
    lwz r0, 0x0(r3)
    cmpw r0, r5
    blt lbl_8020C434
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    li r8, 0x80
    li r7, 0x0
    b lbl_8020C3E8
lbl_8020C3AC:
    lbz r6, -0x70(r5)
    subi r9, r5, 0x104
    lwz r3, -0xb4(r5)
    add r6, r6, r3
    cmpwi r6, 0x7f
    ble lbl_8020C3CC
    li r3, 0x7f
    b lbl_8020C3D4
lbl_8020C3CC:
    srawi r3, r6, 31
    andc r3, r6, r3
lbl_8020C3D4:
    cmpw r8, r3
    ble lbl_8020C3E4
    mr r7, r9
    mr r8, r3
lbl_8020C3E4:
    lwz r5, 0x0(r5)
lbl_8020C3E8:
    cmplw r5, r0
    bne lbl_8020C3AC
    cmpwi r7, 0x0
    bne lbl_8020C400
    li r3, 0x0
    blr
lbl_8020C400:
    lbz r3, 0x94(r7)
    lwz r0, 0x50(r7)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_8020C41C
    li r0, 0x7f
    b lbl_8020C424
lbl_8020C41C:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_8020C424:
    cmpw r4, r0
    bge lbl_8020C434
    li r3, 0x0
    blr
lbl_8020C434:
    li r3, 0x1
    blr
}
