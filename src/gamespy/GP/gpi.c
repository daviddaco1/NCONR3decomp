/*
gpi.c
GameSpy Presence SDK
Dan "Mr. Pants" Schoenblum

Copyright 1999-2007 GameSpy Industries, Inc

devsupport@gamespy.com

***********************************************************************
Please see the GameSpy Presence SDK documentation for more information
**********************************************************************/

// INCLUDES
//////////
#include "gpi.h"
#include <stdlib.h>
#include <string.h>

// DEFINES
//////////
#define KEEPALIVE_TIMEOUT (60 * 2000)

// This is so VisualAssist will know about these functions.
///////////////////////////////////////////////////////////
#if 0
void MD5Init(MD5_CTX *);
void MD5Update(MD5_CTX *, unsigned char *, unsigned int);
void MD5Final(unsigned char [16], MD5_CTX *);
void MD5Print(unsigned char [16], char[33]);
void MD5Digest(unsigned char *, unsigned int, char[33]);
#endif

// FUNCTIONS
///////////
// gpiInitialize: definicion C reemplazada por asm (ver abajo)
GPResult gpiInitialize(GPConnection* connection, int productID, int namespaceID,
                       int partnerID);


void gpiDestroy(GPConnection* connection) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  // Cleanup connection-specific stuff.
  /////////////////////////////////////
  gpiDisconnect(connection, GPITrue);
  gpiStatusInfoKeysDestroy(connection);

#ifndef NOFILE
  // Write the profile info to disk.
  //     BD - Don't update if we never connected.
  //////////////////////////////////
  if (iconnection->infoCaching &&
      iconnection->connectState != GPI_NOT_CONNECTED) {
    if (gpiSaveDiskProfiles(connection) != GP_NO_ERROR) {
      gsDebugFormat(GSIDebugCat_GP, GSIDebugType_File, GSIDebugLevel_HotError,
                    "Error saving profiles to disk.");
    }
  }
#endif

  // Free the profile list.
  /////////////////////////
  TableFree(iconnection->profileList.profileTable);

#ifndef NOFILE
  // Free the transfers.
  //////////////////////
  gpiCleanupTransfers(connection);
#endif

  // Free the memory.
  ///////////////////
  freeclear(iconnection);

  // Set the connection pointer to NULL.
  //////////////////////////////////////
  *connection = NULL;
}

static GPIBool gpiResetProfile(GPConnection* connection, GPIProfile* profile,
                               void* data) {
  GSI_UNUSED(connection);
  GSI_UNUSED(data);

  profile->buddyStatus = NULL;
  profile->buddyStatusInfo = NULL;
  profile->authSig = NULL;
  profile->requestCount = 0;
  profile->peerSig = NULL;

  return GPITrue;
}

// gpiReset: definicion C reemplazada por asm (ver abajo)
GPResult gpiReset(GPConnection* connection);


// gpiProcessConnectionManager: definicion C reemplazada por asm (ver abajo)
GPResult gpiProcessConnectionManager(GPConnection* connection);


GPResult gpiProcess(GPConnection* connection, int blockingOperationID) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPIOperation* operation;
  GPIOperation* delOperation;
  GPResult result = GP_NO_ERROR;
  GPIBool loop;

  assert((iconnection->connectState == GPI_NOT_CONNECTED) ||
         (iconnection->connectState == GPI_CONNECTING) ||
         (iconnection->connectState == GPI_NEGOTIATING) ||
         (iconnection->connectState == GPI_CONNECTED) ||
         (iconnection->connectState == GPI_DISCONNECTED) ||
         (iconnection->connectState == GPI_PROFILE_DELETING));

  // Check if no connection was attempted.
  ////////////////////////////////////////
  /*	if(iconnection->connectState == GPI_NOT_CONNECTED)
                  return GP_NO_ERROR;

          // Check for a disconnection.
          /////////////////////////////
          if(iconnection->connectState == GPI_DISCONNECTED)
                  return GP_NO_ERROR;
  */
  // Check if we're connecting.
  /////////////////////////////
  if (iconnection->connectState == GPI_CONNECTING) {
    do {
      result = gpiCheckConnect(connection);
      // PANTS|07.10.00 - only sleep if looping
      loop = (((result == GP_NO_ERROR) && (blockingOperationID != 0) &&
               (iconnection->connectState == GPI_CONNECTING)))
                 ? GPITrue
                 : GPIFalse;
      if (loop)
        msleep(10);
    } while (loop);

    if (result != GP_NO_ERROR) {
      // Find the connect operation.
      //////////////////////////////
      if (gpiFindOperationByID(connection, &operation, 1)) {
        operation->result = GP_SERVER_ERROR;
      } else {
        // Couldn't find the connect operation.
        ///////////////////////////////////////
        assert(0);
      }
    }
  }

  // Only do this stuff if we're connected.
  /////////////////////////////////////////
  if ((iconnection->connectState == GPI_CONNECTED) ||
      (iconnection->connectState == GPI_NEGOTIATING) ||
      (iconnection->connectState == GPI_PROFILE_DELETING)) {
    // Process the connection.
    //////////////////////////
    if (result == GP_NO_ERROR)
      result = gpiProcessConnectionManager(connection);

    // Process peer messaging stuff.
    ////////////////////////////////
    if (result == GP_NO_ERROR)
      result = gpiProcessPeers(connection);

#ifndef NOFILE
    // Process transfers.
    /////////////////////
    if (result == GP_NO_ERROR)
      result = gpiProcessTransfers(connection);
#endif
  }

  // Process searches.
  ////////////////////
  if (result == GP_NO_ERROR)
    result = gpiProcessSearches(connection);

  // Look for failed operations.
  //////////////////////////////
  for (operation = iconnection->operationList; operation != NULL;) {
    if (operation->result != GP_NO_ERROR) {
      gpiFailedOpCallback(connection, operation);
      delOperation = operation;
      operation = operation->pnext;
      gpiRemoveOperation(connection, delOperation);
    } else {
      operation = operation->pnext;
    }
  }

  // Call callbacks.
  //////////////////
  CHECK_RESULT(gpiProcessCallbacks(connection, blockingOperationID));

  if (iconnection->fatalError) {
    gpiDisconnect(connection, GPIFalse);
    gpiReset(connection);
  } else {
    // assert(!((result != GP_NO_ERROR) && (iconnection->connectState !=
    // GPI_CONNECTED)));
  }

  return result;
}

GPResult gpiEnable(GPConnection* connection, GPEnum state) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  // Enable the state.
  ////////////////////
  switch (state) {
  case GP_INFO_CACHING:
    iconnection->infoCaching = GPITrue;
    break;

  case GP_SIMULATION:
    iconnection->simulation = GPITrue;
    break;

  case GP_INFO_CACHING_BUDDY_AND_BLOCK_ONLY:
    iconnection->infoCachingBuddyAndBlockOnly = GPITrue;
    break;

  default:
    Error(connection, GP_PARAMETER_ERROR, "Invalid state.");
  }

  return GP_NO_ERROR;
}

static GPIBool gpiFreeProfileInfo(GPConnection* connection, GPIProfile* profile,
                                  void* data) {
  GSI_UNUSED(data);

  gpiFreeInfoCache(profile);
  freeclear(profile->peerSig);

  if (gpiCanFreeProfile(profile)) {
    gpiRemoveProfile(connection, profile);
    return GPIFalse;
  }

  return GPITrue;
}

GPResult gpiDisable(GPConnection* connection, GPEnum state) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  if (state == GP_INFO_CACHING) {
    iconnection->infoCaching = GPIFalse;

    // freeclear everyone's info.
    ////////////////////////
    while (!gpiProfileMap(connection, gpiFreeProfileInfo, NULL)) {
    };
  } else if (state == GP_SIMULATION) {
    iconnection->simulation = GPIFalse;
  } else if (state == GP_INFO_CACHING_BUDDY_AND_BLOCK_ONLY) {
    iconnection->infoCachingBuddyAndBlockOnly = GPIFalse;
  } else {
    Error(connection, GP_PARAMETER_ERROR, "Invalid state.");
  }

  return GP_NO_ERROR;
}

#ifdef _DEBUG
static int nProfiles;
static int nUserID;
static int nBuddyStatus;
static int nBuddyMemory;
static int nInfoCache;
static int nInfoMemory;
static int nAuthSig;
static int nPeerSig;
static int nTotalMemory;

static GPIBool gpiReportProfile(GPConnection* connection, GPIProfile* profile,
                                void* data) {
  int temp;

  GSI_UNUSED(connection);
  GSI_UNUSED(data);

  nProfiles++;
  nTotalMemory += sizeof(GPIProfile);
  if (profile->userId)
    nUserID++;
  if (profile->buddyStatus) {
    nBuddyStatus++;
    temp = sizeof(GPIBuddyStatus);
    if (profile->buddyStatus->statusString)
      temp += (int)(strlen(profile->buddyStatus->statusString) + 1);
    if (profile->buddyStatus->locationString)
      temp += (int)(strlen(profile->buddyStatus->locationString) + 1);
    nBuddyMemory += temp;
    nTotalMemory += temp;
  }
  if (profile->cache) {
    nInfoCache++;
    temp = sizeof(GPIInfoCache);
    if (profile->cache->nick)
      temp += (int)(strlen(profile->cache->nick) + 1);
    if (profile->cache->uniquenick)
      temp += (int)(strlen(profile->cache->uniquenick) + 1);
    if (profile->cache->email)
      temp += (int)(strlen(profile->cache->email) + 1);
    if (profile->cache->firstname)
      temp += (int)(strlen(profile->cache->firstname) + 1);
    if (profile->cache->lastname)
      temp += (int)(strlen(profile->cache->lastname) + 1);
    if (profile->cache->homepage)
      temp += (int)(strlen(profile->cache->homepage) + 1);
    nInfoMemory += temp;
    nTotalMemory += temp;
  }
  if (profile->authSig)
    nAuthSig++;
  if (profile->peerSig)
    nPeerSig++;

  return GPITrue;
}

void gpiReport(GPConnection* connection, void (*report)(const char* output)) {
  char buf[128];

  nProfiles = 0;
  nUserID = 0;
  nBuddyStatus = 0;
  nBuddyMemory = 0;
  nInfoCache = 0;
  nInfoMemory = 0;
  nAuthSig = 0;
  nPeerSig = 0;
  nTotalMemory = 0;

  report("START PROFILE MAP");
  report("-----------------");
  gpiProfileMap(connection, gpiReportProfile, NULL);

  sprintf(buf, "%d profiles %d bytes (%d avg)", nProfiles, nTotalMemory,
          nTotalMemory / max(nProfiles, 1));
  report(buf);
  if (nProfiles) {
    sprintf(buf, "UserID: %d (%d%%)", nUserID, nUserID * 100 / nProfiles);
    report(buf);
    sprintf(buf, "BuddyStatus: %d (%d%%) %d bytes (%d avg)", nBuddyStatus,
            nBuddyStatus * 100 / nProfiles, nBuddyMemory,
            nBuddyMemory / max(nBuddyStatus, 1));
    report(buf);
    sprintf(buf, "InfoCache: %d (%d%%) %d bytes (%d avg)", nInfoCache,
            nInfoCache * 100 / nProfiles, nInfoMemory,
            nInfoMemory / max(nInfoCache, 1));
    report(buf);
    sprintf(buf, "AuthSig: %d (%d%%)", nAuthSig, nAuthSig * 100 / nProfiles);
    report(buf);
    sprintf(buf, "PeerSig: %d (%d%%)", nPeerSig, nPeerSig * 100 / nProfiles);
    report(buf);
    sprintf(buf, "Blocked: %d (%d%%)", nBlocked, nBlocked * 100 / nProfiles);
    report(buf);
  }

  report("---------------");
  report("END PROFILE MAP");
}
#endif

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049C808;
extern float lbl_8049C80C;
extern float lbl_8049C814;
extern float lbl_8049C81C;
extern float lbl_8049C824;
extern float lbl_8049C82C;
extern float lbl_8049C834;
extern float lbl_8049C83C;
extern float lbl_8049C848;
extern u8 lbl_80368A40[];
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_8019B578();
extern void fn_802565E8();
extern void fn_80256638();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern int fn_80259588();
extern void fn_80262A78();
extern void fn_80263290();
extern void gpiCallErrorCallback();
GPResult gpiInitialize(GPConnection* connection, int productID, int namespaceID,
                       int partnerID);
GPResult gpiProcessConnectionManager(GPConnection* connection);
GPResult gpiReset(GPConnection* connection);
extern void gpiSetError();
extern void gpiSetErrorString();

// asm_to_cpp: gpiInitialize
asm GPResult gpiInitialize(GPConnection* connection, int productID, int namespaceID,
                       int partnerID) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r31, 0x0
    mr r30, r3
    stw r31, 0x0(r3)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    li r3, 0x638
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r1)
    bne lbl_80259130
    li r3, 0x1
    b lbl_8025929C
lbl_80259130:
    li r4, 0x0
    li r5, 0x638
    bl memset
    lwz r4, 0x8(r1)
    li r0, 0x1
    addi r3, r1, 0x8
    stb r31, 0x0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5b8(r4)
    lwz r4, 0x8(r1)
    stw r0, 0x100(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x104(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x108(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x10c(r4)
    lwz r4, 0x8(r1)
    stw r27, 0x60c(r4)
    lwz r4, 0x8(r1)
    stw r28, 0x610(r4)
    lwz r4, 0x8(r1)
    stw r29, 0x1a4(r4)
    bl fn_80262A78
    cmpwi r3, 0x0
    bne lbl_802591A8
    lwz r3, 0x8(r1)
    bl fn_80256C70
    li r3, 0x1
    b lbl_8025929C
lbl_802591A8:
    lwz r4, 0x8(r1)
    addi r3, r1, 0x8
    stw r31, 0x5c0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1a8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1ac(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1b8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1bc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1c8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1cc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1d8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1dc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1e8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1ec(r4)
    bl gpiProcessConnectionManager
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80259284
    lwz r30, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl gpiDisconnect
    addi r3, r1, 0x8
    bl gpiStatusInfoKeysDestroy
    lwz r3, 0x5c8(r30)
    bl TableFree
    mr r3, r30
    bl fn_80256C70
    mr r3, r31
    b lbl_8025929C
lbl_80259284:
    bl fn_802565E8
    bl current_time
    bl fn_8019B578
    lwz r0, 0x8(r1)
    li r3, 0x0
    stw r0, 0x0(r30)
lbl_8025929C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: gpiReset
asm GPResult gpiReset(GPConnection* connection) {
    nofralloc
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x14(r4)
    stw r0, 0x18(r4)
    stw r0, 0x1c(r4)
    stw r0, 0x20(r4)
    stw r0, 0x28(r4)
    blr
}

// asm_to_cpp: gpiProcessConnectionManager
asm GPResult gpiProcessConnectionManager(GPConnection* connection) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, -0x1
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x0(r3)
    stw r4, 0x8(r1)
    stb r31, 0x110(r4)
    lwz r3, 0x8(r1)
    stb r31, 0x12f(r3)
    lwz r3, 0x8(r1)
    stb r31, 0x144(r3)
    lwz r3, 0x8(r1)
    stw r0, 0x1f0(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1f4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x200(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x204(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1fc(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x1f8(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x1f8(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x1f8(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x20c(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x208(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x208(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x208(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x218(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x21c(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x214(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x210(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x210(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x210(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5ec(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5f0(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5e8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x5e4(r3)
    bl fn_80256C70
    lwz r3, 0x8(r1)
    stw r31, 0x5e4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5e4(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5fc(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x600(r3)
    lwz r3, 0x8(r1)
    stw r31, 0x5f8(r3)
    lwz r3, 0x8(r1)
    lwz r3, 0x5f4(r3)
    bl fn_80256C70
    lwz r4, 0x8(r1)
    mr r3, r30
    stw r31, 0x5f4(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5f4(r4)
    bl gpiStatusInfoKeysDestroy
    addi r3, r1, 0x8
    bl gpiStatusInfoKeysInit
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802594C4
    lwz r30, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x1
    bl gpiDisconnect
    addi r3, r1, 0x8
    bl gpiStatusInfoKeysDestroy
    lwz r3, 0x5c8(r30)
    bl TableFree
    mr r3, r30
    bl fn_80256C70
    mr r3, r31
    b lbl_80259570
lbl_802594C4:
    lwz r3, 0x8(r1)
    li r0, 0x2
    stw r0, 0x234(r3)
    b lbl_802594DC
lbl_802594D4:
    mr r3, r30
    bl gpiRemoveOperation
lbl_802594DC:
    lwz r3, 0x8(r1)
    lwz r4, 0x5c4(r3)
    cmpwi r4, 0x0
    bne lbl_802594D4
    li r31, 0x0
    lis r4, gpiReset@ha
    stw r31, 0x5c4(r3)
    mr r3, r30
    addi r4, r4, gpiReset@l
    li r5, 0x0
    lwz r6, 0x8(r1)
    stw r31, 0x5d0(r6)
    lwz r6, 0x8(r1)
    stw r31, 0x5d4(r6)
    bl gpiProfileMap
    lwz r4, 0x8(r1)
    li r0, -0x1
    li r3, 0x0
    stw r31, 0x19c(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x1a0(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x198(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x238(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5bc(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x5d8(r4)
    lwz r4, 0x8(r1)
    stw r0, 0x23c(r4)
    lwz r4, 0x8(r1)
    stb r31, 0x3b8(r4)
    lwz r4, 0x8(r1)
    stb r31, 0x4b8(r4)
    lwz r4, 0x8(r1)
    stw r31, 0x634(r4)
lbl_80259570:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80259588
asm int fn_80259588() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    li r30, 0x0
    lis r29, lbl_80368A40@ha
    stw r30, 0x8(r1)
    mr r27, r3
    addi r29, r29, lbl_80368A40@l
    lwz r28, 0x0(r3)
    bl current_time
    mr r31, r3
lbl_802595BC:
    mr r3, r27
    addi r4, r28, 0x210
    bl gpiAddLocalInfo
    lwz r0, 0x218(r28)
    cmpwi r0, 0x0
    ble lbl_802595D8
    stw r31, 0x634(r28)
lbl_802595D8:
    lwz r4, 0x1f0(r28)
    mr r3, r27
    addi r5, r28, 0x210
    addi r6, r1, 0x8
    li r7, 0x1
    la r8, lbl_8049C808
    bl gpiSendFromBuffer
    cmpwi r3, 0x0
    beq lbl_80259600
    b lbl_80259928
lbl_80259600:
    lwz r4, 0x1f0(r28)
    mr r3, r27
    addi r5, r28, 0x1f8
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    la r8, lbl_8049C808
    bl gpiRecvToBuffer
    cmpwi r3, 0x0
    beq lbl_8025987C
    cmpwi r3, 0x3
    bne lbl_80259928
    mr r3, r27
    addi r5, r29, 0x0
    li r4, 0x5
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80259928
    b lbl_80259928
    b lbl_8025987C
lbl_8025965C:
    stw r31, 0x634(r28)
    stb r30, 0x0(r3)
    lwz r0, 0x1f8(r28)
    subf r4, r0, r3
    stw r4, 0xc(r1)
    lwz r0, 0x20c(r28)
    cmpw r4, r0
    ble lbl_802596C4
    cmpwi r4, 0x4000
    li r3, 0x4000
    blt lbl_8025968C
    mr r3, r4
lbl_8025968C:
    lwz r0, 0x20c(r28)
    add r3, r0, r3
    stw r3, 0x20c(r28)
    addi r4, r3, 0x1
    lwz r3, 0x208(r28)
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_802596C0
    mr r3, r27
    addi r4, r29, 0x2c
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80259928
lbl_802596C0:
    stw r3, 0x208(r28)
lbl_802596C4:
    lwz r5, 0xc(r1)
    lwz r3, 0x208(r28)
    lwz r4, 0x1f8(r28)
    addi r5, r5, 0x1
    bl memcpy
    lwz r3, 0x1f8(r28)
    addi r4, r26, 0x7
    lwz r0, 0x200(r28)
    subf r3, r3, r4
    subf r3, r3, r0
    stw r3, 0x200(r28)
    addi r5, r3, 0x1
    lwz r3, 0x1f8(r28)
    bl memmove
    lwz r26, 0x208(r28)
    la r4, lbl_8049C80C
    mr r3, r26
    bl strstr
    cmpwi r3, 0x0
    beq lbl_80259750
    addi r3, r3, 0x4
    bl atoi
    mr r5, r3
    mr r3, r27
    addi r4, r1, 0x10
    bl gpiFindOperationByID
    cmpwi r3, 0x0
    beq lbl_8025987C
    lwz r4, 0x10(r1)
    mr r3, r27
    lwz r5, 0x208(r28)
    bl gpiProcessOperation
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_80259750:
    mr r3, r27
    mr r4, r26
    li r5, 0x1
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_80259770
    li r3, 0x4
    b lbl_80259928
lbl_80259770:
    lwz r26, 0x208(r28)
    la r4, lbl_8049C814
    li r5, 0x4
    mr r3, r26
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802597A4
    mr r3, r27
    mr r4, r26
    bl gpiProcessRecvBuddyMessage
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_802597A4:
    mr r3, r26
    la r4, lbl_8049C81C
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8025987C
    mr r3, r26
    la r4, lbl_8049C824
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802597EC
    mr r3, r26
    addi r5, r28, 0x614
    la r4, lbl_8049C824
    li r6, 0x19
    bl gpiValueForKey
    b lbl_8025987C
lbl_802597EC:
    mr r3, r26
    la r4, lbl_8049C82C
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8025981C
    mr r3, r27
    mr r4, r26
    bl gpiProcessRecvBuddyStatusInfo
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_8025981C:
    mr r3, r26
    la r4, lbl_8049C834
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8025984C
    mr r3, r27
    mr r4, r26
    bl gpiProcessRecvBuddyList
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_8025984C:
    mr r3, r26
    la r4, lbl_8049C83C
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8025987C
    mr r3, r27
    mr r4, r26
    bl fn_80263290
    cmpwi r3, 0x0
    beq lbl_8025987C
    b lbl_80259928
lbl_8025987C:
    lwz r3, 0x1f8(r28)
    la r4, lbl_8049C848
    bl strstr
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8025965C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_802598D4
    lwz r0, 0x1f4(r28)
    cmpwi r0, 0x5
    beq lbl_802598D4
    mr r3, r27
    addi r5, r29, 0x3c
    li r4, 0x7
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x0
    b lbl_80259928
lbl_802598D4:
    mr r3, r27
    bl gpiOperationsAreBlocking
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_802598F0
    li r3, 0xa
    bl fn_80256638
lbl_802598F0:
    cmpwi r26, 0x0
    bne lbl_802595BC
    lwz r4, 0x634(r28)
    lis r3, 0x2
    subi r0, r3, 0x2b40
    subf r3, r4, r31
    cmplw r3, r0
    ble lbl_80259924
    mr r3, r27
    addi r4, r28, 0x210
    addi r5, r29, 0x64
    bl gpiAppendStringToBuffer
    stw r31, 0x634(r28)
lbl_80259924:
    li r3, 0x0
lbl_80259928:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
