#include <revolution/SC.h>

u8 SCGetAspectRatio(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_IPL_AR)) {
        item = SC_ASPECT_STD;
    } else if (item != SC_ASPECT_WIDE) {
        item = SC_ASPECT_STD;
    }

    return item;
}

//unused
void SCSetAspectRatio(){
}

//unused
void SCEmuSetAspectRatio(){
}

//unused
void SCGetAutorunMode(){
}

//unused
void SCSetAutorunMode(){
}

s8 SCGetDisplayOffsetH(void) {
    s8 item;

    if (!SCFindS8Item(&item, SC_ITEM_IPL_DH)) {
        item = 0;
    } else if (item < -32) {
        item = -32;
    } else if (item > 32) {
        item = 32;
    }

    return item & ~1;
}

//unused
void SCSetDisplayOffsetH(){
}

u8 SCGetEuRgb60Mode(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_IPL_E60)) {
        item = SC_EURGB_50_HZ;
    } else if (item != SC_EURGB_60_HZ) {
        item = SC_EURGB_50_HZ;
    }

    return item;
}

//unused
void SCSetEuRgb60Mode(){
}

void SCGetIdleMode(SCIdleModeInfo* mode) {
    SCFindByteArrayItem(mode, sizeof(SCIdleModeInfo), SC_ITEM_IPL_IDL);
}

//unused
void SCSetIdleMode(){
}

u8 SCGetLanguage(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_IPL_LNG)) {
        if (SCGetProductArea() == SC_AREA_JPN) {
            item = SC_LANG_JP;
        } else {
            item = SC_LANG_EN;
        }
    } else if (item > SC_LANG_KR) {
        item = SC_LANG_EN;
    }

    return item;
}

//unused
void SCSetLanguage(){
}

//unused
void SCEmuSetLanguage(){
}

//unused
void SCGetParentalControl(){
}

//unused
void SCSetParentalControl(){
}

u8 SCGetProgressiveMode(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_IPL_PGS)) {
        item = FALSE;
    } else if (item != TRUE) {
        item = FALSE;
    }

    return item;
}

//unused
void SCSetProgressiveMode(){
}

u8 SCGetScreenSaverMode(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_IPL_SSV)) {
        item = TRUE;
    } else if (item != TRUE) {
        item = FALSE;
    }

    return item;
}

//unused
void SCSetScreenSaverMode(){
}

// SCGetSoundMode: definicion C reemplazada por asm (ver abajo)


//unused
void SCSetSoundMode(){
}

u32 SCGetCounterBias(void) {
    u32 item;

    if (!SCFindU32Item(&item, SC_ITEM_IPL_CB)) {
        // 2,192 days?
        item = 2192 * 24 * 60 * 60;
    }

    return item;
}

//unused
void SCSetCounterBias(){
}

//unused
void SCGetBootMode(){
}

//unused
void SCSetBootMode(){
}

//unused
void SCGetBootIRDVMode(){
}

//unused
void SCSetBootIRDVMode(){
}

//unused
void SCGetBootIRDCCode(){
}

//unused
void SCSetBootIRDCCode(){
}

//unused
void SCGetDriveSavingMode(){
}

//unused
void SCSetDriveSavingMode(){
}

void SCGetBtDeviceInfoArray(SCBtDeviceInfoArray* info) {
    SCFindByteArrayItem(info, sizeof(SCBtDeviceInfoArray), SC_ITEM_BT_DINF);
}

BOOL SCSetBtDeviceInfoArray(const SCBtDeviceInfoArray* info) {
    return SCReplaceByteArrayItem(info, sizeof(SCBtDeviceInfoArray), SC_ITEM_BT_DINF);
}

void SCGetBtCmpDevInfoArray(SCBtCmpDevInfoArray* info) {
    SCFindByteArrayItem(info, sizeof(SCBtCmpDevInfoArray), SC_ITEM_BT_CDIF);
}

void SCSetBtCmpDevInfoArray(const SCBtCmpDevInfoArray* info) {
    SCReplaceByteArrayItem(info, sizeof(SCBtCmpDevInfoArray), SC_ITEM_BT_CDIF);
}


u32 SCGetBtDpdSensibility(void) {
    u32 item;

    if (!SCFindU32Item(&item, SC_ITEM_BT_SENS)) {
        item = 2;
    } else if (item < 1) {
        item = 1;
    } else if (item > 5) {
        item = 5;
    }

    return item;
}

//unused
void SCSetBtDpdSensibility(){
}

//unused
void SCGetDvdConfig(){
}

//unused
void SCSetDvdConfig(){
}

//unused
void SCGetWwwRestriction(){
}

//unused
void SCSetWwwRestriction(){
}

//unused
void SCRemoveWwwRestrictionTemporarily(){
}

u8 SCGetWpadMotorMode(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_BT_MOT)) {
        item = TRUE;
    } else if (item != TRUE) {
        item = FALSE;
    }

    return item;
}

BOOL SCSetWpadMotorMode(u8 mode) {
    return SCReplaceU8Item(mode, SC_ITEM_BT_MOT);
}

u8 SCGetWpadSensorBarPosition(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_BT_BAR)) {
        item = SC_SENSOR_BAR_BOTTOM;
    } else if (item != SC_SENSOR_BAR_TOP) {
        item = SC_SENSOR_BAR_BOTTOM;
    }

    return item;
}

//unused
void SCSetWpadSensorBarPosition(){
}

u8 SCGetWpadSpeakerVolume(void) {
    u8 item;

    if (!SCFindU8Item(&item, SC_ITEM_BT_SPKV)) {
        item = 89;
    } else if (item > 127) {
        item = 127;
    }

    return item;
}

BOOL SCSetWpadSpeakerVolume(u8 vol) {
    return SCReplaceU8Item(vol, SC_ITEM_BT_SPKV);
}

//unused
void SCGetOwnerNickName(){
}

//unused
void SCSetOwnerNickName(){
}

//unused
void SCGetSimpleAddressID(){
}

//unused
void SCGetSimpleAddressRegionIdHi(){
}

//unused
void SCGetSimpleAddressRegionIdLow(){
}

//unused
void SCGetSimpleAddressCountryName(){
}

//unused
void SCGetSimpleAddressRegionName(){
}

//unused
void SCGetSimpleAddressRegionNameHi(){
}

//unused
void SCGetSimpleAddressRegionNameLow(){
}

//unused
void SCGetSimpleAddressLatitude(){
}

//unused
void SCGetSimpleAddressLongitude(){
}

//unused
void SCGetSimpleAddressData(){
}

//unused
void SCSetSimpleAddressData(){
}

//unused
void SCGetNetContentRestrictions(){
}

//unused
void SCSetNetContentRestrictions(){
}

//unused
void SCGetWCRestriction(){
}

//unused
void SCSetWCRestriction(){
}

//unused
void SCGetConfigDoneFlag(){
}

//unused
void SCSetConfigDoneFlag(){
}

//unused
void SCGetConfigDoneFlag2(){
}

//unused
void SCSetConfigDoneFlag2(){
}

//unused
void SCGetUpdateType(){
}

//unused
void SCSetUpdateType(){
}

//unused
void SCGetEULA(){
}

//unused
void SCSetEULA(){
}

//unused
void SCGetWCFlags(){
}

//unused
void SCSetWCFlags(){
}

//unused
void SCGetFreeChannelAppCount(){
}

//unused
void SCSetFreeChannelAppCount(){
}

//unused
void SCGetInstalledChannelAppCount(){
}

//unused
void SCSetInstalledChannelAppCount(){
}

//unused
void SCCheckPCMessageRestriction(){
}

//unused
void SCCheckPCShoppingRestriction(){
}

//unused
void SCCheckPCPassword(){
}

//unused
void SCGetTmpTitleID(){
}

//unused
void SCSetTmpTitleID(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----


// asm_to_cpp: SCGetSoundMode
asm u8 SCGetSoundMode(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x11
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    bl SCFindU8Item
    cmpwi r3, 0x0
    bne lbl_803243F8
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_8032441C
lbl_803243F8:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8032441C
    cmplwi r0, 0x1
    beq lbl_8032441C
    cmplwi r0, 0x2
    beq lbl_8032441C
    li r0, 0x1
    stb r0, 0x8(r1)
lbl_8032441C:
    lwz r0, 0x14(r1)
    lbz r3, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
