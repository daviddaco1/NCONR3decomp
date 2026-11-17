/*
gpiConnect.c
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DEFINES
/////////
// Connection Manager Address.
//////////////////////////////
#define GPI_CONNECTION_MANAGER_NAME "gpcm." GSI_DOMAIN_NAME
#define GPI_CONNECTION_MANAGER_PORT 29900

#define GPI_UDP_HEADER "gamespygp"
// Random String stuff.
///////////////////////
#define RANDSTRING                                                             \
  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
// this is off by one
//#define RANDOMCHAR()    (RANDSTRING[(rand() * sizeof(RANDSTRING)) / (RAND_MAX
//+ 1)])
#define RANDOMCHAR() (RANDSTRING[rand() % (sizeof(RANDSTRING) - 1)])

// GLOBALS
/////////
char GPConnectionManagerHostname[64] = GPI_CONNECTION_MANAGER_NAME;

// FUNCTIONS
///////////
static void randomString(char* buffer, int numChars) {
  int i;

  for (i = 0; i < numChars; i++)
    buffer[i] = RANDOMCHAR();
  buffer[i] = '\0';
}

static GPResult gpiStartConnect(GPConnection* connection,
                                GPIOperation* operation) {
  struct sockaddr_in address;
  int rcode;
  // int len;
  GPIConnection* iconnection = (GPIConnection*)*connection;
  struct hostent* host;

  GSUdpErrorCode anError;
  strncpy(iconnection->mHeader, GPI_UDP_HEADER, GS_UDP_MSG_HEADER_LEN);

  if (!gsUdpEngineIsInitialized()) {
    unsigned short peerPort = GPI_PEER_PORT;
    gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network, GSIDebugLevel_Notice,
                  "Initializing UDP Layer\n");
    anError = gsUdpEngineInitialize(peerPort, 0, 0, NULL, NULL, NULL, NULL,
                                    NULL, NULL, NULL, NULL);
    if (anError != GS_UDP_NO_ERROR) {
      while (anError != GS_UDP_NO_ERROR && peerPort < GPI_PEER_PORT + 100) {
        gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network,
                      GSIDebugLevel_Comment,
                      "Port %d failed, trying next port\n", peerPort);
        anError = gsUdpEngineInitialize(++peerPort, 0, 0, NULL, NULL, NULL,
                                        NULL, NULL, NULL, NULL, NULL);
      }
      if (anError != GS_UDP_NO_ERROR) {
        gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network,
                      GSIDebugLevel_HotError,
                      "Tryed all 100 ports after default port, giving up.\n");
        CallbackFatalError(connection, GP_NETWORK_ERROR, GP_UDP_LAYER,
                           "There was error starting the UDP layer.");
      }
    }
    if (!iconnection->firewall) {
      iconnection->peerPort = peerPort;
    }
  } else {
    gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network, GSIDebugLevel_Notice,
                  "UDP Layer already initialized, using existing port.\n");
    iconnection->peerPort = gsUdpEngineGetLocalPort();
  }
  anError = gsUdpEngineAddMsgHandler(
      iconnection->mHeader, iconnection->mHeader, NULL, gpiPeerAcceptedCallback,
      gpiPeerLeftCallback, gpiPeerPingReplyCallback, gpiPeerMessageCallback,
      connection);
  if (anError != GS_UDP_NO_ERROR) {
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_UDP_LAYER,
                       "There was an error starting the UDP Layer.");
  }
  if (iconnection->firewall) {

    /*
    // Create the peer listening socket.
    ////////////////////////////////////
    iconnection->peerSocket = socket(AF_INET, SOCK_STREAM, 0);
    if(iconnection->peerSocket == INVALID_SOCKET)
            CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK, "There
    was an error creating a socket.");

    // Make it non-blocking.
    ////////////////////////
    rcode = SetSockBlocking(iconnection->peerSocket,0);
    if (rcode == 0)
            CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK, "There
    was an error making a socket non-blocking.");
    // Bind the socket.
    ///////////////////
    memset(&address, 0, sizeof(address));
    address.sin_family = AF_INET;
    rcode = bind(iconnection->peerSocket, (struct sockaddr *)&address,
    sizeof(struct sockaddr_in)); if(gsiSocketIsError(rcode))
            CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK, "There
    was an error binding a socket.");

    // Start listening on the socket.
    /////////////////////////////////
    rcode = listen(iconnection->peerSocket, SOMAXCONN);
    if(gsiSocketIsError(rcode))
            CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK, "There
    was an error listening on a socket.");

    // Get the socket's port.
    /////////////////////////
    len = sizeof(struct sockaddr_in);
    rcode = getsockname(iconnection->peerSocket, (struct sockaddr *)&address,
    &len);

    if (gsiSocketIsError(rcode))
            CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK, "There
    was an error getting a socket's addres."); iconnection->peerPort =
    address.sin_port;
    */

    iconnection->peerPort = 0;
  }
  /*
  else
  {
          // Deprecated TCP code; Replaced by UDP Layer
          // No local port.
          /////////////////
          //iconnection->peerSocket = INVALID_SOCKET;

          // Set to nothing because NN will determine this
          //////////////////////////
          //iconnection->peerPort = 0;
  }
  */

  // Create the cm socket.
  ////////////////////////
  iconnection->cmSocket = socket(AF_INET, SOCK_STREAM, 0);
  if (iconnection->cmSocket == INVALID_SOCKET)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                       "There was an error creating a socket.");

  // Make it non-blocking.
  ////////////////////////
  rcode = SetSockBlocking(iconnection->cmSocket, 0);
  if (rcode == 0)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                       "There was an error making a socket non-blocking.");
  /*
          // Bind the socket.
          ///////////////////
          memset(&address, 0, sizeof(address));
          address.sin_family = AF_INET;
          rcode = bind(iconnection->cmSocket, (struct sockaddr *)&address,
     sizeof(struct sockaddr_in)); if (gsiSocketIsError(rcode))
                  CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
     "There was an error binding a socket.");
  */
  memset(&address, 0, sizeof(address));
  address.sin_family = AF_INET;
  // Get the server host.
  ///////////////////////
  if (inet_addr(GPConnectionManagerHostname) == INADDR_NONE) {
    host = gethostbyname(GPConnectionManagerHostname);
    if (host == NULL)
      CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                         "Could not resolve connection mananger host name.");
    address.sin_addr.s_addr = *(unsigned int*)host->h_addr_list[0];
    // printf("Resolved Hostname and copied address:  %s\n",
    // inet_ntoa(address.sin_addr));
  } else {
    address.sin_addr.s_addr = inet_addr(GPConnectionManagerHostname);
    // printf("Using hardcoded address: %s", GPConnectionManagerHostname);
  }

  // Connect the socket.
  //////////////////////
  assert(address.sin_addr.s_addr != 0);
  address.sin_port = htons(GPI_CONNECTION_MANAGER_PORT);
  rcode = connect(iconnection->cmSocket, (struct sockaddr*)&address,
                  sizeof(struct sockaddr_in));
  if (gsiSocketIsError(rcode)) {
    int error = GOAGetLastError(iconnection->cmSocket);
    if ((error != WSAEWOULDBLOCK) && (error != WSAEINPROGRESS) &&
        (error != WSAETIMEDOUT)) {
      CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                         "There was an error connecting a socket.");
    }
  }

  // We're waiting for the connect to complete.
  /////////////////////////////////////////////
  operation->state = GPI_CONNECTING;
  iconnection->connectState = GPI_CONNECTING;

  return GP_NO_ERROR;
}

GPResult gpiConnect(GPConnection* connection, const char nick[GP_NICK_LEN],
                    const char uniquenick[GP_UNIQUENICK_LEN],
                    const char email[GP_EMAIL_LEN],
                    const char password[GP_PASSWORD_LEN],
                    const char authtoken[GP_AUTHTOKEN_LEN],
                    const char partnerchallenge[GP_PARTNERCHALLENGE_LEN],
                    const char cdkey[GP_CDKEY_LEN], GPEnum firewall,
                    GPIBool newuser, GPEnum blocking, GPCallback callback,
                    void* param) {
  GPIConnectData* data;
  GPIOperation* operation;
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPResult result;

  // Reset if this connection was already used.
  /////////////////////////////////////////////
  if (iconnection->connectState == GPI_DISCONNECTED)
    CHECK_RESULT(gpiReset(connection));

  // Error check.
  ///////////////
  if (iconnection->connectState != GPI_NOT_CONNECTED)
    Error(connection, GP_PARAMETER_ERROR, "Invalid connection.");

    // Get the firewall setting.
    ////////////////////////////
#if defined(GS_WIRELESS_DEVICE)
  GSI_UNUSED(firewall);
  iconnection->firewall = GPITrue;
#else
  switch (firewall) {
  case GP_FIREWALL:
    iconnection->firewall = GPITrue;
    break;
  case GP_NO_FIREWALL:
    iconnection->firewall = GPIFalse;
    break;
  default:
    Error(connection, GP_PARAMETER_ERROR, "Invalid firewall.");
  }
#endif

  // Get the nick, uniquenick, email, and password.
  /////////////////////////////////////////////////
  strzcpy(iconnection->nick, nick, GP_NICK_LEN);
  strzcpy(iconnection->uniquenick, uniquenick, GP_UNIQUENICK_LEN);
  strzcpy(iconnection->email, email, GP_EMAIL_LEN);
  strzcpy(iconnection->password, password, GP_PASSWORD_LEN);

  // Lowercase the email.
  ///////////////////////
  _strlwr(iconnection->email);

  // Create a connect operation data struct.
  //////////////////////////////////////////
  data = (GPIConnectData*)gsimalloc(sizeof(GPIConnectData));
  if (data == NULL)
    Error(connection, GP_MEMORY_ERROR, "Out of memory.");
  memset(data, 0, sizeof(GPIConnectData));

  // Check for new user.
  //////////////////////
  data->newuser = newuser;

  // Store pre-auth data.
  ///////////////////////
  if (authtoken[0] && partnerchallenge[0]) {
    strzcpy(data->authtoken, authtoken, GP_AUTHTOKEN_LEN);
    strzcpy(data->partnerchallenge, partnerchallenge, GP_PARTNERCHALLENGE_LEN);
  }

  // Store cdkey if we have one.
  //////////////////////////////
  if (cdkey)
    strzcpy(data->cdkey, cdkey, GP_CDKEY_LEN);

  // Add the operation to the list.
  /////////////////////////////////
  CHECK_RESULT(gpiAddOperation(connection, GPI_CONNECT, data, &operation,
                               blocking, callback, param));

  // Start it.
  ////////////
  result = gpiStartConnect(connection, operation);
  if (result != GP_NO_ERROR) {
    operation->result = result;
    gpiFailedOpCallback(connection, operation);
    gpiDisconnect(connection, GPIFalse);
    return result;
  }

  // Process it if blocking.
  //////////////////////////
  if (operation->blocking)
    CHECK_RESULT(gpiProcess(connection, operation->id));

  return GP_NO_ERROR;
}

GPResult gpiSendLogin(GPConnection* connection, GPIConnectData* data);

GPResult gpiSendNewuser(GPConnection* connection, GPIConnectData* data);

GPResult gpiProcessConnect(GPConnection* connection, GPIOperation* operation,
                           const char* input);

GPResult gpiCheckConnect(GPConnection* connection) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  int state;

  // Check if the connection is completed.
  ////////////////////////////////////////
  CHECK_RESULT(
      gpiCheckSocketConnect(connection, iconnection->cmSocket, &state));

  // Check for a failed attempt.
  //////////////////////////////
  if (state == GPI_DISCONNECTED)
    CallbackFatalError(connection, GP_SERVER_ERROR, GP_LOGIN_CONNECTION_FAILED,
                       "The server has refused the connection.");

  // Check if not finished connecting.
  ////////////////////////////////////
  if (state == GPI_NOT_CONNECTED)
    return GP_NO_ERROR;

  // We're now negotiating the connection.
  ////////////////////////////////////////
  assert(state == GPI_CONNECTED);
  iconnection->connectState = GPI_NEGOTIATING;

  return GP_NO_ERROR;
}

GPIBool gpiDisconnectCleanupProfile(GPConnection* connection,
                                           GPIProfile* profile, void* data);

void gpiDisconnect(GPConnection* connection, GPIBool tellServer) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPIPeer* peer;
  GPIPeer* delPeer;
  GPIBool connClosed;

  // Check if we're already disconnected.
  // PANTS|05.15.00
  ///////////////////////////////////////
  if (iconnection->connectState == GPI_DISCONNECTED)
    return;

  // Skip most of this stuff if we never actually connected.
  // PANTS|05.16.00
  //////////////////////////////////////////////////////////
  if (iconnection->connectState != GPI_NOT_CONNECTED) {
    // Are we connected?
    ////////////////////
    if (tellServer && (iconnection->connectState == GPI_CONNECTED)) {
      // Send the disconnect.
      ///////////////////////
      gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                              "\\logout\\\\sesskey\\");
      gpiAppendIntToBuffer(connection, &iconnection->outputBuffer,
                           iconnection->sessKey);
      gpiAppendStringToBuffer(connection, &iconnection->outputBuffer,
                              "\\final\\");
    }

    // Always flush remaining messages.
    // PANTS|05.16.00
    ///////////////////////////////////
    gpiSendFromBuffer(connection, iconnection->cmSocket,
                      &iconnection->outputBuffer, &connClosed, GPITrue, "CM");

    // Cleanup the connection.
    //////////////////////////
    if (iconnection->cmSocket != INVALID_SOCKET) {
      shutdown(iconnection->cmSocket, 2);
      closesocket(iconnection->cmSocket);
      iconnection->cmSocket = INVALID_SOCKET;
    }

    if (/*iconnection->peerSocket != INVALID_SOCKET*/
        gsUdpEngineIsInitialized()) {
      // shutdown(iconnection->peerSocket, 2);
      // closesocket(iconnection->peerSocket);
      // iconnection->peerSocket = INVALID_SOCKET;
      gsUdpEngineRemoveMsgHandler(iconnection->mHeader);
      if (gsUdpEngineNoMoreMsgHandlers() && gsUdpEngineNoApp())
        gsUdpEngineShutdown();
    }

    // We're disconnected.
    //////////////////////
    iconnection->connectState = GPI_DISCONNECTED;

    // Don't keep the userid/profileid.
    ///////////////////////////////////
    iconnection->userid = 0;
    iconnection->profileid = 0;
  }

  // freeclear all the memory.
  ///////////////////////
  freeclear(iconnection->socketBuffer.buffer);
  freeclear(iconnection->inputBuffer);
  freeclear(iconnection->outputBuffer.buffer);
  freeclear(iconnection->updateproBuffer.buffer);
  freeclear(iconnection->updateuiBuffer.buffer);
  while (iconnection->operationList != NULL)
    gpiRemoveOperation(connection, iconnection->operationList);
  iconnection->operationList = NULL;
  for (peer = iconnection->peerList; peer != NULL;) {
    delPeer = peer;
    peer = peer->pnext;
    gpiDestroyPeer(connection, delPeer);
  }
  iconnection->peerList = NULL;

  // Cleanup buddies.
  // This is not optimal - because we can't continue the mapping
  // after freeing a profile, we need to start it all over again.
  ///////////////////////////////////////////////////////////////
  while (!gpiProfileMap(connection, gpiDisconnectCleanupProfile, NULL)) {
  };
}

static GPIBool gpiDisconnectCleanupProfile(GPConnection* connection,
                                           GPIProfile* profile, void* data);
GPResult gpiProcessConnect(GPConnection* connection, GPIOperation* operation,
                           const char* input);
static GPResult gpiSendLogin(GPConnection* connection, GPIConnectData* data);
static GPResult gpiSendNewuser(GPConnection* connection, GPIConnectData* data);
