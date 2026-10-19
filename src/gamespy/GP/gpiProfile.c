/*
gpiProfile.c
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

// DEFINES
/////////
#define GPI_PROFILE_GROW_SIZE 16
#define GPI_PROFILE_CACHE_VERSION 2

// GLOBALS
//////////
char GPIInfoCacheFilename[FILENAME_MAX + 1] = "gp.info";

// FUNCTIONS
///////////
static int gpiProfilesTableHash(const void* arg, int numBuckets) {
  const GPIProfile* profile = (const GPIProfile*)arg;
  return (profile->profileId % numBuckets);
}

static int gpiProfilesTableCompare(const void* arg1, const void* arg2) {
  const GPIProfile* profile1 = (const GPIProfile*)arg1;
  const GPIProfile* profile2 = (const GPIProfile*)arg2;
  return (profile1->profileId - profile2->profileId);
}

static void gpiProfilesTableFree(void* arg) {
  GPIProfile* profile = (GPIProfile*)arg;
  if (profile->buddyStatus) {
    freeclear(profile->buddyStatus->statusString);
    freeclear(profile->buddyStatus->locationString);
    freeclear(profile->buddyStatus);
  }
  if (profile->buddyStatusInfo) {
    freeclear(profile->buddyStatusInfo->richStatus);
    freeclear(profile->buddyStatusInfo->gameType);
    freeclear(profile->buddyStatusInfo->gameVariant);
    freeclear(profile->buddyStatusInfo->gameMapName);
    if (profile->buddyStatusInfo->extendedInfoKeys) {
      ArrayFree(profile->buddyStatusInfo->extendedInfoKeys);
      profile->buddyStatusInfo->extendedInfoKeys = NULL;
    }
    freeclear(profile->buddyStatusInfo);
  }
  gpiFreeInfoCache(profile);
  freeclear(profile->authSig);
  freeclear(profile->peerSig);
}

GPIBool gpiInitProfiles(GPConnection* connection) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  iconnection->profileList.numBuddies = 0;
  iconnection->profileList.num = 0;
  iconnection->profileList.profileTable =
      TableNew(sizeof(GPIProfile), 32, gpiProfilesTableHash,
               gpiProfilesTableCompare, gpiProfilesTableFree);
  if (!iconnection->profileList.profileTable)
    return GPIFalse;

  return GPITrue;
}

GPResult gpiProcessNewProfile(GPConnection* connection, GPIOperation* operation,
                              const char* input) {
  char buffer[16];
  int pid;
  GPICallback callback;

  // Check for an error.
  //////////////////////
  if (gpiCheckForError(connection, input, GPITrue))
    return GP_SERVER_ERROR;

  // This should be \npr\.
  ////////////////////////
  if (strncmp(input, "\\npr\\", 5) != 0)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                       "Unexpected data was received from the server.");

  // Get the profile id.
  //////////////////////
  if (!gpiValueForKey(input, "\\profileid\\", buffer, sizeof(buffer)))
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                       "Unexpected data was received from the server.");
  pid = atoi(buffer);

  // Call the callback.
  /////////////////////
  callback = operation->callback;
  if (callback.callback != NULL) {
    GPNewProfileResponseArg* arg;
    arg = (GPNewProfileResponseArg*)gsimalloc(sizeof(GPNewProfileResponseArg));
    if (arg == NULL)
      Error(connection, GP_MEMORY_ERROR, "Out of memory.");

    arg->profile = (GPProfile)pid;
    arg->result = GP_NO_ERROR;

    CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation, 0));
  }

  // Remove the operation.
  ////////////////////////
  gpiRemoveOperation(connection, operation);

  return GP_NO_ERROR;
}

// gpiProfileListAdd: definicion C reemplazada por asm (ver abajo)


// gpiGetProfile: definicion C reemplazada por asm (ver abajo)


GPResult gpiNewProfile(GPConnection* connection, const char nick[31],
                       GPEnum replace, GPEnum blocking, GPCallback callback,
                       void* param) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPIOperation* operation;
  GPResult result;
  char buffer[31];

  // Error check.
  ///////////////
  if (nick == NULL)
    Error(connection, GP_PARAMETER_ERROR, "Invalid nick.");
  if ((replace != GP_REPLACE) && (replace != GP_DONT_REPLACE))
    Error(connection, GP_PARAMETER_ERROR, "Invalid replace.");

  // Create a new operation.
  //////////////////////////
  CHECK_RESULT(gpiAddOperation(connection, GPI_NEW_PROFILE, NULL, &operation,
                               blocking, callback, param));

  // Send the request.
  ////////////////////
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                          "\\newprofile\\");
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                          "\\sesskey\\");
  gpiAppendIntToBuffer(connection, &iconnection->outputBuffer,
                       iconnection->sessKey);
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\nick\\");
  strzcpy(buffer, nick, GP_NICK_LEN);
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, buffer);
  if (replace == GP_REPLACE) {
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                            "\\replace\\");
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, 1);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                            "\\oldnick\\");
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                            iconnection->nick);
  }
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\id\\");
  gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, operation->id);
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");
  /*
          if(string.result != GP_NO_ERROR)
          {
                  gpiRemoveOperation(connection, operation);
                  return string.result;
          }
  */
  // Process it if blocking.
  //////////////////////////
  if (operation->blocking) {
    result = gpiProcess(connection, operation->id);
    if (result != GP_NO_ERROR) {
      gpiRemoveOperation(connection, operation);
      return result;
    }
  }

  return GP_NO_ERROR;
}

GPResult gpiProcessDeleteProfle(GPConnection* connection,
                                GPIOperation* operation, const char* input) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPICallback callback;

  // Check for an error.
  //////////////////////
  if (gpiCheckForError(connection, input, GPITrue))
    return GP_SERVER_ERROR;

  // This should be \dpr\.
  ////////////////////////
  if (strncmp(input, "\\dpr\\", 5) != 0)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                       "Unexpected data was received from the server.");

  // Call the callback.
  /////////////////////
  callback = operation->callback;
  if (callback.callback != NULL) {
    GPDeleteProfileResponseArg* arg;
    arg = (GPDeleteProfileResponseArg*)gsimalloc(
        sizeof(GPDeleteProfileResponseArg));
    if (arg == NULL)
      Error(connection, GP_MEMORY_ERROR, "Out of memory.");

    arg->profile = iconnection->profileid;
    arg->result = GP_NO_ERROR;

    CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation, 0));
  }

  // Remove the operation.
  ////////////////////////
  gpiRemoveOperation(connection, operation);

  return GP_NO_ERROR;
}

GPResult gpiDeleteProfile(GPConnection* connection, GPCallback callback,
                          void* param) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPIOperation* operation;
  GPResult result;

  CHECK_RESULT(gpiAddOperation(connection, GPI_DELETE_PROFILE, NULL, &operation,
                               GP_BLOCKING, callback, param));
  // Send the message.
  ////////////////////
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                          "\\delprofile\\");
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                          "\\sesskey\\");
  gpiAppendIntToBuffer(connection, &iconnection->outputBuffer,
                       iconnection->sessKey);
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\id\\");
  gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, operation->id);
  gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

  // Remove the profile object.
  /////////////////////////////
  gpiRemoveProfileByID(connection, iconnection->profileid);

  // Disconnect the connection.
  // PANTS|05.16.00
  /////////////////////////////
  iconnection->connectState = GPI_PROFILE_DELETING;
  result = gpiProcess(connection, operation->id);
  if (result != GP_NO_ERROR) {
    gpiRemoveOperation(connection, operation);
    return result;
  }

  gpiDisconnect(connection, GPIFalse);
  return GP_NO_ERROR;
}

// gpiRemoveProfileByID: definicion C reemplazada por asm (ver abajo)


void gpiRemoveProfile(GPConnection* connection, GPIProfile* profile) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  TableRemove(iconnection->profileList.profileTable, profile);
}

typedef struct GPIFindProfileByUserData {
  char* nick;
  char* email;
  GPIProfile** profile;
  GPIBool found;
} GPIFindProfileByUserData;

static GPIBool gpiCheckProfileForUser(GPConnection* connection,
                                      GPIProfile* profile, void* udata) {
  GPIFindProfileByUserData* data = (GPIFindProfileByUserData*)udata;

  GSI_UNUSED(connection);

  // Check for a valid cache.
  ///////////////////////////
  if (profile->cache) {
    // Check the nick and email.
    ////////////////////////////
    if ((strcmp(data->nick, profile->cache->nick) == 0) &&
        (strcmp(data->email, profile->cache->email) == 0)) {
      // Found it.
      ////////////
      *data->profile = profile;
      data->found = GPITrue;
      return GPIFalse;
    }
  }

  return GPITrue;
}

GPResult gpiFindProfileByUser(GPConnection* connection, char nick[GP_NICK_LEN],
                              char email[GP_EMAIL_LEN], GPIProfile** profile) {
  GPIFindProfileByUserData data;

  data.nick = nick;
  data.email = email;
  data.profile = profile;
  data.found = GPIFalse;

  gpiProfileMap(connection, gpiCheckProfileForUser, &data);

  if (!data.found)
    *profile = NULL;

  return GP_NO_ERROR;
}

typedef struct GPIProfileMapData {
  GPConnection* connection;
  gpiProfileMapFunc func;
  void* data;
} GPIProfileMapData;

static int gpiProfileMapCallback(void* arg, void* udata) {
  GPIProfile* profile = (GPIProfile*)arg;
  GPIProfileMapData* data = (GPIProfileMapData*)udata;
  return (int)data->func(data->connection, profile, data->data);
}

GPIBool gpiProfileMap(GPConnection* connection, gpiProfileMapFunc func,
                      void* data) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPIProfileMapData mapData;

  mapData.connection = connection;
  mapData.func = func;
  mapData.data = data;

  return (!TableMapSafe2(iconnection->profileList.profileTable,
                         gpiProfileMapCallback, &mapData))
             ? GPITrue
             : GPIFalse;
}

typedef struct GPIFindProfileData {
  int index;
  GPIProfile* profile;
} GPIFindProfileData;

static GPIBool gpiCheckForBuddy(GPConnection* connection, GPIProfile* profile,
                                void* udata) {
  GPIFindProfileData* data = (GPIFindProfileData*)udata;
  if (profile->buddyStatus &&
      (data->index == profile->buddyStatus->buddyIndex)) {
    data->profile = profile;
    return GPIFalse;
  } else if (profile->buddyStatusInfo &&
             (data->index == profile->buddyStatusInfo->buddyIndex)) {
    data->profile = profile;
    return GPIFalse;
  }

  GSI_UNUSED(connection);

  return GPITrue;
}

GPIProfile* gpiFindBuddy(GPConnection* connection, int buddyIndex) {
  GPIFindProfileData data;

  data.index = buddyIndex;
  data.profile = NULL;

  gpiProfileMap(connection, gpiCheckForBuddy, &data);

  return data.profile;
}

void gpiRemoveBuddyStatus(GPIBuddyStatus* buddyStatus) {
  GS_ASSERT(buddyStatus);

  freeclear(buddyStatus->locationString);
  freeclear(buddyStatus->statusString);
  freeclear(buddyStatus);
}

void gpiRemoveBuddyStatusInfo(GPIBuddyStatusInfo* buddyStatusInfo) {
  GS_ASSERT(buddyStatusInfo);

  freeclear(buddyStatusInfo->richStatus);
  freeclear(buddyStatusInfo->gameType);
  freeclear(buddyStatusInfo->gameVariant);
  freeclear(buddyStatusInfo->gameMapName);
  ArrayFree(buddyStatusInfo->extendedInfoKeys);
  buddyStatusInfo->extendedInfoKeys = NULL;
  freeclear(buddyStatusInfo);
}

GPIBool gpiCanFreeProfile(GPIProfile* profile) {
  return ((profile && !profile->cache && !profile->buddyStatus &&
           !profile->buddyStatusInfo && !profile->peerSig && !profile->authSig))
             ? GPITrue
             : GPIFalse;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void TableEnter();
extern void fn_80262A78();

// asm_to_cpp: fn_80262A78
asm void fn_80262A78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, gpiProfilesTableHash@ha
    lis r6, gpiProfilesTableCompare@ha
    stw r0, 0x14(r1)
    lis r7, gpiProfilesTableFree@ha
    li r0, 0x0
    addi r5, r5, gpiProfilesTableHash@l
    stw r31, 0xc(r1)
    addi r6, r6, gpiProfilesTableCompare@l
    addi r7, r7, gpiProfilesTableFree@l
    li r4, 0x20
    lwz r31, 0x0(r3)
    li r3, 0x2c
    stw r0, 0x5d0(r31)
    stw r0, 0x5d4(r31)
    stw r0, 0x5cc(r31)
    bl TableNew
    neg r0, r3
    stw r3, 0x5c8(r31)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: gpiProfileListAdd
asm GPIProfile* gpiProfileListAdd(GPConnection* connection, int id) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r4
    stw r29, 0x94(r1)
    mr r29, r3
    lwz r31, 0x0(r3)
    bgt lbl_80262CA0
    li r3, 0x0
    b lbl_80262D24
lbl_80262CA0:
    stw r4, 0x34(r1)
    addi r4, r1, 0x34
    lwz r3, 0x5c8(r31)
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80262CBC
    b lbl_80262D24
lbl_80262CBC:
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x2c
    bl memset
    li r0, 0x0
    stw r30, 0x60(r1)
    addi r4, r1, 0x60
    stw r0, 0x64(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x78(r1)
    lwz r3, 0x5c8(r31)
    bl TableEnter
    lwz r3, 0x5cc(r31)
    addi r4, r1, 0x8
    addi r0, r3, 0x1
    stw r0, 0x5cc(r31)
    lwz r3, 0x0(r29)
    stw r30, 0x8(r1)
    lwz r3, 0x5c8(r3)
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80262D20
    b lbl_80262D24
lbl_80262D20:
    li r3, 0x0
lbl_80262D24:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: gpiGetProfile
asm GPIBool gpiGetProfile(GPConnection* connection, GPProfile profileid,
                      GPIProfile** pProfile) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r5
    lwz r3, 0x0(r3)
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x5c8(r3)
    bl TableLookup
    cmpwi r31, 0x0
    beq lbl_80262D74
    stw r3, 0x0(r31)
lbl_80262D74:
    neg r0, r3
    lwz r31, 0x3c(r1)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: gpiRemoveProfileByID
asm void gpiRemoveProfileByID(GPConnection* connection, int profileid) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    lwz r31, 0x0(r3)
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    lwz r3, 0x5c8(r31)
    bl TableLookup
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_80262F0C
    lwz r3, 0x5c8(r31)
    bl TableRemove
lbl_80262F0C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
