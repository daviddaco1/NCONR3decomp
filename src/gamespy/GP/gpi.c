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
#endif

// FUNCTIONS
///////////
GPResult gpiInitialize(GPConnection* connection, int productID, int namespaceID,
                       int partnerID) {
  GPIConnection* iconnection;
  int i;
  GPResult result;

  // Set the connection to NULL in case of error.
  ///////////////////////////////////////////////
  *connection = NULL;

  // Allocate the connection.
  ///////////////////////////
  iconnection = (GPIConnection*)gsimalloc(sizeof(GPIConnection));
  if (iconnection == NULL)
    return GP_MEMORY_ERROR;

  // Initialize connection-specific variables.
  ////////////////////////////////////////////
  memset(iconnection, 0, sizeof(GPIConnection));
  iconnection->errorString[0] = '\0';
  iconnection->errorCode = (GPErrorCode)0;
  iconnection->infoCaching = GPITrue;
  iconnection->infoCachingBuddyAndBlockOnly = GPIFalse;
  iconnection->simulation = GPIFalse;
  iconnection->firewall = GPIFalse;
  iconnection->productID = productID;
  iconnection->namespaceID = namespaceID;
  iconnection->partnerID = partnerID;

  if (!gpiInitProfiles((GPConnection*)&iconnection)) {
    freeclear(iconnection);
    return GP_MEMORY_ERROR;
  }
  iconnection->diskCache = NULL;
  for (i = 0; i < GPI_NUM_CALLBACKS; i++) {
    iconnection->callbacks[i].callback = NULL;
    iconnection->callbacks[i].param = NULL;
  }

  // Reset connection-specific stuff.
  ///////////////////////////////////
  result = gpiReset((GPConnection*)&iconnection);
  if (result != GP_NO_ERROR) {
    gpiDestroy((GPConnection*)&iconnection);
    return result;
  }

  // Initialize the sockets library.
  //////////////////////////////////
  SocketStartUp();

  // Seed the random number generator.
  ////////////////////////////////////
  srand((unsigned int)current_time());

#ifndef NOFILE
  // Load profiles cached on disk.
  ////////////////////////////////
  result = gpiLoadDiskProfiles((GPConnection*)&iconnection);
  if (result != GP_NO_ERROR) {
    gpiDestroy((GPConnection*)&iconnection);
    return result;
  }
#endif

#ifndef NOFILE
  result = gpiInitTransfers((GPConnection*)&iconnection);
  if (result != GP_NO_ERROR) {
    gpiDestroy((GPConnection*)&iconnection);
    return result;
  }
#endif

  // Set the connection.
  //////////////////////
  *connection = (GPConnection)iconnection;

  return GP_NO_ERROR;
}

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

GPResult gpiReset(GPConnection* connection);

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

GPResult gpiProcessConnectionManager(GPConnection* connection);
GPResult gpiReset(GPConnection* connection);
