#include "revolution/os.h"
#include "revolution/dvd.h"
#include "revolution/sc.h"

vu8 __OSDeviceCheckCode : (OS_BASE_CACHED + 0x319C);
extern u16 OSSetFontEncode(u16);
extern void __DVDShowFatalMessage(void);
static u8 CheckBuffer[32] __attribute__ ((aligned(32)));

static volatile BOOL lowDone = TRUE;
static volatile u32 lowIntType = 0;

static void lowCallback(u32 intType) {
    lowIntType = intType;
    lowDone = TRUE;
}

void __DVDShowDeviceErrorMessage(void);

BOOL __DVDCheckDevice(void) {
    u32 checkCode = 0x460A0000;
    u32 outOfRangeError = 0xFFFFFFFF;
    u32 reportKeyError = 0xFFFFFFFF;
    OSIOSRev iosRev;

    if (OSGetPhysicalMem2Size() == 0x08000000) {
        return TRUE;
    }

    __OSGetIOSRev(&iosRev);
    
    if (iosRev.major < 30 || iosRev.major >= 254) {
        return TRUE;
    }

    if (__OSDeviceCheckCode == 129) {
        checkCode = 0x7ED40000;
    }

    lowDone = FALSE;
    DVDLowUnencryptedRead((void*)CheckBuffer, 32, checkCode, lowCallback);\

    while (!lowDone) {

    }

    switch (lowIntType) {
        case 2:
            break;
        case 1:
            goto invalid;
            break;
        default:
            goto fatal;
            break;
    }

    lowDone = FALSE;
    DVDLowRequestError(lowCallback);

    while (!lowDone) {

    }

    outOfRangeError = DVDLowGetImmBufferReg();

    switch (lowIntType) {
        case 1:
        {
            if ((DVDLowGetImmBufferReg() & 0xFF000000) != 0) {
                goto recover;
                break;
            }

            switch (DVDLowGetImmBufferReg() & 0xFFFFFF) {
                case 0x52100:
                    break;
                default:
                    goto invalid;
                    break;
            }

            break;
        }

        default:
            goto fatal;
            break;
    }

    lowDone = FALSE;
    DVDLowReportKey((DVDVideoReportKey*)CheckBuffer, 0x40000, 0, lowCallback);

    while (!lowDone) {

    }

    switch (lowIntType) {
        case 2:
            break;
        case 1:
            goto invalid;
            break;
        default:
            goto fatal;
            break;
    }

    lowDone = FALSE;
    DVDLowRequestError(lowCallback);

    while (!lowDone) {

    }

    reportKeyError = DVDLowGetImmBufferReg();
    switch (lowIntType) {
        case 1:
            if ((DVDLowGetImmBufferReg() & 0xFF000000) != 0) {
                goto recover;
                break;
            }

            switch (DVDLowGetImmBufferReg() & 0xFFFFFF) {
                case 0x53100:
                case 0x52000:
                    break;
                default:
                    goto invalid;
                    break;
            }

            break;

        default:
            goto fatal;
            break;
    }

valid:
    return TRUE;

invalid:
    __DVDShowDeviceErrorMessage();
    return FALSE;

recover:
    return FALSE;

fatal:
    __DVDShowFatalMessage();
    return FALSE;
}

const char* const __DVDDeviceErrorMessage[] = {
    "\n\n\nエラーコード００１。\n"
    "不明なデバイスが見つかりました。",

    "\n\n\nError #001,\n"
    "unauthorized device has been detected.",

    "\n\n\nFehler #001:\n"
    "Es wurde eine unzul舖sige Komponente\n"
    "entdeckt.",

    "\n\n\nErreur 001:\n"
    "un dispositif non autoris\xe9 a \xe9t\xe9 d\xe9tect\xe9.",

    "\n\n\nError 001:\n"
    "Se ha detectado un dispositivo no\n"
    "autorizado.",

    "\n\n\nErrore #001:\n"
    "rilevato un dispositivo non autorizzato.",

    "\n\n\nFout #001:\n"
    "ongeoorloofd onderdeel gevonden."
};

void __DVDShowDeviceErrorMessage(void) {
    const char* message;
    const char* const* messageList;
    GXColor bg = { 0, 0, 0, 0 };
    GXColor fg = { 255, 255, 255, 0 };

    if (SCGetLanguage() == 0) {
        OSSetFontEncode(1);
    }
    else {
        OSSetFontEncode(0);
    }

    messageList = __DVDDeviceErrorMessage;

    if (SCGetLanguage() > 6) {
        message = messageList[1];
    }
    else {
        message = messageList[SCGetLanguage()];
    }

    OSFatal(fg, bg, message);
}
#include "revolution/os.h"
#include "revolution/gx.h"
#include "revolution/vi.h"
#include "revolution/dvd.h"
#include "revolution/sc.h"

extern u16 OSSetFontEncode(u16);

static void (*FatalFunc)(void) = NULL;

const char* const __DVDErrorMessageDefault[] = {
    "\n"
    "\n"
    "\n"
    "エラーが発生しました。\n"
    "\n"
    "イジェクトボタンを押してディスクを取り出してか\n"
    "ら、本体の電源をOFFにして、本体の取扱説明書の\n"
    "指示に従ってください。",

    "\n"
    "\n"
    "\n"
    "An error has occurred.\n"
    "Press the Eject Button, remove the\n"
    "Game Disc, and turn the power off.\n"
    "Please read the Wii Operations Manual\n"
    "for more information.",

    "\n"
    "\n"
    "\n"
    "Ein Fehler ist aufgetreten.\n"
    "Dr\xFC""cke den Ausgabeknopf, entnimm die\n"
    "Disc und schalte die Wii-Konsole aus.\n"
    "Bitte lies die Wii-Bedienungsanleitung,\n"
    "um weitere Informationen zu erhalten.",

    "\n"
    "\n"
    "\n"
    "Une erreur est survenue.\n"
    "Appuyez sur le bouton EJECT, retirez\n"
    "le disque et \xE9""teignez la console.\n"
    "Veuillez vous r\xE9""f\xE9""rer au mode d'emploi\n"
    "Wii pour plus de d\xE9""tails.",

    "\n"
    "\n"
    "\n"
    "Se ha producido un error.\n"
    "Pulsa el Bot\xF3""n EJECT, extrae el disco y\n"
    "apaga la consola. Consulta el manual de\n"
    "instrucciones de la consola Wii para\n"
    "obtener m\xE1""s informaci\xF3""n.",

    "\n"
    "\n"
    "\n"
    "Si \xE8"" verificato un errore.\n"
    "Premi il pulsante EJECT, estrai il disco\n"
    "e spegni la console. Per maggiori\n"
    "informazioni, consulta il manuale di\n"
    "istruzioni della console Wii.",

    "\n"
    "\n"
    "\n"
    "Er is een fout opgetreden.\n"
    "Druk op de EJECT-knop, verwijder de\n"
    "disk en zet het Wii-systeem uit. Lees\n"
    "de handleiding voor meer informatie."
};

const char* const __DVDErrorMessageEurope[] = {
    "\n"
    "\n"
    "\n"
    "エラーが発生しました。\n"
    "\n"
    "イジェクトボタンを押してディスクを取り出してか\n"
    "ら、本体の電源をOFFにして、本体の取扱説明書の\n"
    "指示に従ってください。",

    "\n"
    "\n"
    "\n"
    "An error has occurred.\n"
    "Press the EJECT Button, remove the\n"
    "Game Disc, and turn the power off.\n"
    "Please read the Wii Operations Manual\n"
    "for more information.",

    "\n"
    "\n"
    "\n"
    "Ein Fehler ist aufgetreten.\n"
    "Dr\xFC""cke den Ausgabeknopf, entnimm die\n"
    "Disc und schalte die Wii-Konsole aus.\n"
    "Bitte lies die Wii-Bedienungsanleitung,\n"
    "um weitere Informationen zu erhalten.",

    "\n"
    "\n"
    "\n"
    "Une erreur est survenue.\n"
    "Appuyez sur le bouton EJECT, retirez\n"
    "le disque et \xE9""teignez la console.\n"
    "Veuillez vous r\xE9""f\xE9""rer au mode d'emploi\n"
    "Wii pour plus de d\xE9""tails.",

    "\n"
    "\n"
    "\n"
    "Se ha producido un error.\n"
    "Pulsa el Bot\xF3""n EJECT, extrae el disco y\n"
    "apaga la consola. Consulta el manual de\n"
    "instrucciones de la consola Wii para\n"
    "obtener m\xE1""s informaci\xF3""n.",

    "\n"
    "\n"
    "\n"
    "Si \xE8"" verificato un errore.\n"
    "Premi il pulsante EJECT, estrai il disco\n"
    "e spegni la console. Per maggiori\n"
    "informazioni, consulta il manuale di\n"
    "istruzioni della console Wii.",

    "\n"
    "\n"
    "\n"
    "Er is een fout opgetreden.\n"
    "Druk op de EJECT-knop, verwijder de\n"
    "disk en zet het Wii-systeem uit. Lees\n"
    "de handleiding voor meer informatie."
};

const char* __DVDErrorMessage104 [] = {
    "\n"
    "\n"
    "エラーコード１０４。\n"
    "エラーが発生しました。\n"
    "\n"
    "イジェクトボタンを押してディスクを取り出してか\n"
    "ら、本体の電源をOFFにして、本体の取扱説明書の\n"
    "指示に従ってください。",

    "\n"
    "\n"
    "Error #104,\n"
    "An error has occurred.\n"
    "Press the EJECT Button, remove the\n"
    "Game Disc, and turn the power off.\n"
    "Please read the Wii Operations Manual\n"
    "for more information."
};

void __DVDShowFatalMessage(void) {
    const char* message;
    const char* const* messageList;
    GXColor bg = { 0, 0, 0, 0 };
    GXColor fg = { 255, 255, 255, 0 };

    if (SCGetLanguage() == 0) {
        OSSetFontEncode(1);
    }
    else {
        OSSetFontEncode(0);
    }

    switch (SCGetProductGameRegion()) {
        default:
            messageList = __DVDErrorMessageDefault;
            break;
        case 2:
            messageList = __DVDErrorMessageEurope;
            break;
#if (VERSION == RMGK01)
        case 4:
        case 5:
            messageList = __DVDErrorMessage104;
            break;
#endif
    }

    if (SCGetLanguage() > 6) {
        message = messageList[1];
    }
    else {
        message = messageList[SCGetLanguage()];
    }

    OSFatal(fg, bg, message);
}

BOOL DVDSetAutoFatalMessaging(BOOL enable) {
    BOOL enabled, prev;
    enabled = OSDisableInterrupts();
    prev = FatalFunc ? TRUE : FALSE;
    FatalFunc = enable ? __DVDShowFatalMessage : NULL;
    OSRestoreInterrupts(enabled);
    return prev;
}

BOOL fn_802D68B8(void) {
    return FatalFunc ? TRUE : FALSE;
}

void fn_802D68CC(void) {
    if (FatalFunc) {
        FatalFunc();
    }
}

#include "revolution/dvd.h"
#include "revolution/os.h"
#include <cstring>

BOOL DVDCompareDiskID(const DVDDiskID* id1, const DVDDiskID* id2) {
    if (id1->gameName[0] && id2->gameName[0] && 
        strncmp(&id1->gameName[0], &id2->gameName[0], 4)) {
        return FALSE;
    }

    if (!id1->company[0] || !id2->company[0] || 
        strncmp(&id1->company[0], &id2->company[0], 2)) {
        return FALSE;
    }

    if (id1->diskNumber != 0xFF && id2->diskNumber != 0xFF && 
        id1->diskNumber != id2->diskNumber) {
        return FALSE;
    }

    if (id1->gameVersion != 0xFF && id2->gameVersion != 0xFF && 
        id1->gameVersion != id2->gameVersion) {
        return FALSE;
    }

    return TRUE;
}

