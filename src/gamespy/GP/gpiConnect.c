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

// gpiSendLogin: definicion C reemplazada por asm (ver abajo)


// gpiSendNewuser: definicion C reemplazada por asm (ver abajo)


// gpiProcessConnect: definicion C reemplazada por asm (ver abajo)


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

// gpiDisconnectCleanupProfile: definicion C reemplazada por asm (ver abajo)


// gpiDisconnect: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049C918;
extern float lbl_8049C91C;
extern float lbl_8049C920;
extern float lbl_8049C928;
extern float lbl_8049C930;
extern float lbl_8049C938;
extern float lbl_8049C940;
extern float lbl_8049C944;
extern float lbl_8049C950;
extern float lbl_8049C958;
extern float lbl_8049C960;
extern float lbl_8049C968;
extern float lbl_8049C970;
extern float lbl_8049C978;
extern float lbl_8049C980;
extern float lbl_8049C988;
extern float lbl_8049C990;
extern float lbl_8049C998;
extern float lbl_8049C9A0;
extern float lbl_8049C9A8;
extern u8 lbl_80368C80[];
extern u8 lbl_80369014[];
extern u8 lbl_8040A168[];
extern void MD5Digest();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_25();
extern void _savegpr_26();
extern void fn_802535C4();
extern void fn_80256674();
extern void fn_8025668C();
extern void fn_80256A24();
extern void fn_80256C4C();
extern void fn_80256C70();
extern void gpiCallErrorCallback();
extern void gpiDestroyPeer();
extern void gpiEncodeString();
extern void gpiRemoveOperation();
extern void gpiRemoveProfile();
extern void gpiRemoveProfileByID();
extern void gpiSetError();
extern void gpiSetErrorString();

// asm_to_cpp: gpiSendLogin
asm static GPResult gpiSendLogin(GPConnection* connection, GPIConnectData* data) {
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x2b0
    bl _savegpr_25
    lis r31, lbl_80368C80@ha
    lis r5, 0x842
    addi r31, r31, lbl_80368C80@l
    lwz r30, 0x0(r3)
    mr r28, r3
    mr r29, r4
    addi r26, r5, 0x1085
    addi r27, r31, 0x198
    li r25, 0x0
lbl_8025CFC0:
    bl rand
    mulhwu r5, r26, r3
    add r4, r29, r25
    addi r25, r25, 0x1
    cmpwi r25, 0x20
    subf r0, r5, r3
    srwi r0, r0, 1
    add r0, r0, r5
    srwi r0, r0, 5
    mulli r0, r0, 0x3e
    subf r0, r0, r3
    lbzx r0, r27, r0
    stb r0, 0x80(r4)
    blt lbl_8025CFC0
    add r3, r29, r25
    li r0, 0x0
    stb r0, 0x80(r3)
    lbz r0, 0x1c2(r29)
    extsb. r0, r0
    beq lbl_8025D018
    addi r25, r29, 0x1c2
    b lbl_8025D01C
lbl_8025D018:
    addi r25, r30, 0x177
lbl_8025D01C:
    mr r3, r25
    bl strlen
    mr r4, r3
    mr r3, r25
    addi r5, r29, 0xa1
    bl MD5Digest
    lwz r5, 0x1a4(r30)
    cmpwi r5, 0x0
    beq lbl_8025D054
    addi r3, r1, 0xc
    la r4, lbl_8049C918
    opword 0x4CC63182
    bl sprintf
    b lbl_8025D060
lbl_8025D054:
    addi r3, r1, 0xc
    la r4, lbl_8049C91C
    bl strcpy
lbl_8025D060:
    lbz r0, 0xc2(r29)
    extsb. r0, r0
    beq lbl_8025D074
    addi r7, r29, 0xc2
    b lbl_8025D0C0
lbl_8025D074:
    lbz r0, 0x12f(r30)
    extsb. r0, r0
    beq lbl_8025D0A0
    addi r3, r1, 0x3c
    addi r5, r1, 0xc
    addi r6, r30, 0x12f
    la r4, lbl_8049C920
    opword 0x4CC63182
    bl sprintf
    addi r7, r1, 0x3c
    b lbl_8025D0C0
lbl_8025D0A0:
    addi r3, r1, 0x3c
    addi r5, r1, 0xc
    addi r6, r30, 0x110
    addi r7, r30, 0x144
    la r4, lbl_8049C928
    opword 0x4CC63182
    bl sprintf
    addi r7, r1, 0x3c
lbl_8025D0C0:
    addi r5, r29, 0xa1
    mr r9, r29
    addi r3, r1, 0x90
    addi r4, r31, 0x1d8
    mr r10, r5
    addi r6, r31, 0x1e8
    addi r8, r29, 0x80
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x90
    bl strlen
    mr r4, r3
    addi r3, r1, 0x90
    addi r5, r1, 0x18
    bl MD5Digest
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_8025D13C
    mr r3, r28
    addi r4, r30, 0x110
    addi r5, r30, 0x144
    addi r6, r1, 0x8
    bl gpiFindProfileByUser
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_8025D13C
    lwz r0, 0x4(r3)
    stw r0, 0x19c(r30)
    lwz r3, 0x8(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x1a0(r30)
lbl_8025D13C:
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C930
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r29, 0x80
    bl gpiAppendStringToBuffer
    lbz r0, 0xc2(r29)
    extsb. r0, r0
    beq lbl_8025D19C
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x228
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r29, 0xc2
    bl gpiAppendStringToBuffer
    b lbl_8025D20C
lbl_8025D19C:
    lbz r0, 0x12f(r30)
    extsb. r0, r0
    beq lbl_8025D1CC
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x234
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r30, 0x12f
    bl gpiAppendStringToBuffer
    b lbl_8025D20C
lbl_8025D1CC:
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C938
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r30, 0x110
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C940
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r30, 0x144
    bl gpiAppendStringToBuffer
lbl_8025D20C:
    lwz r0, 0x19c(r30)
    cmpwi r0, 0x0
    beq lbl_8025D238
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x244
    bl gpiAppendStringToBuffer
    lwz r5, 0x19c(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
lbl_8025D238:
    lwz r0, 0x1a0(r30)
    cmpwi r0, 0x0
    beq lbl_8025D264
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x250
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
lbl_8025D264:
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x25c
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x268
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r1, 0x18
    bl gpiAppendStringToBuffer
    lwz r0, 0x10c(r30)
    cmpwi r0, 0x1
    bne lbl_8025D2C0
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x274
    bl gpiAppendStringToBuffer
lbl_8025D2C0:
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C944
    bl gpiAppendStringToBuffer
    lhz r5, 0x230(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x280
    bl gpiAppendStringToBuffer
    lwz r5, 0x60c(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x28c
    bl gpiAppendStringToBuffer
    lis r5, lbl_8040A168@ha
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r5, lbl_8040A168@l
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x298
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    addi r5, r31, 0x2a8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    li r5, 0xb
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C950
    bl gpiAppendStringToBuffer
    lwz r5, 0x630(r30)
    mr r3, r28
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C958
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r30, 0x210
    la r5, lbl_8049C960
    bl gpiAppendStringToBuffer
    addi r11, r1, 0x2b0
    li r3, 0x0
    bl _restgpr_25
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

// asm_to_cpp: gpiSendNewuser
asm static GPResult gpiSendNewuser(GPConnection* connection, GPIConnectData* data) {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_25
    lwz r29, 0x0(r3)
    lis r31, lbl_80368C80@ha
    mr r25, r3
    mr r26, r4
    addi r31, r31, lbl_80368C80@l
    addi r3, r29, 0x177
    addi r4, r1, 0x8
    bl gpiEncodeString
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2b8
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    la r5, lbl_8049C968
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r29, 0x144
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    la r5, lbl_8049C970
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r29, 0x110
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2c4
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x280
    bl gpiAppendStringToBuffer
    lwz r5, 0x60c(r29)
    mr r3, r25
    addi r4, r29, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x28c
    bl gpiAppendStringToBuffer
    lis r5, lbl_8040A168@ha
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r5, lbl_8040A168@l
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x298
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r29)
    mr r3, r25
    addi r4, r29, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x234
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r29, 0x12f
    bl gpiAppendStringToBuffer
    lbz r0, 0x2c2(r26)
    extsb. r0, r0
    beq lbl_8025D584
    addi r3, r26, 0x2c2
    bl strlen
    lis r4, 0x7970
    mr r27, r3
    addi r3, r4, 0x7367
    bl fn_80256674
    addi r30, r1, 0x94
    li r28, 0x0
    b lbl_8025D540
lbl_8025D518:
    li r3, 0x0
    li r4, 0xff
    bl fn_8025668C
    add r4, r26, r28
    extsb r3, r3
    lbz r0, 0x2c2(r4)
    addi r28, r28, 0x1
    xor r0, r3, r0
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_8025D540:
    cmplw r28, r27
    blt lbl_8025D518
    addi r3, r1, 0x94
    li r0, 0x0
    stbx r0, r3, r28
    mr r5, r27
    addi r4, r1, 0x38
    li r6, 0x1
    bl fn_80256A24
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x2d4
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
lbl_8025D584:
    mr r3, r25
    addi r4, r29, 0x210
    addi r5, r31, 0x25c
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r29)
    mr r3, r25
    addi r4, r29, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    la r5, lbl_8049C958
    bl gpiAppendStringToBuffer
    mr r3, r25
    addi r4, r29, 0x210
    la r5, lbl_8049C960
    bl gpiAppendStringToBuffer
    addi r11, r1, 0x100
    li r3, 0x0
    bl _restgpr_25
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// asm_to_cpp: gpiProcessConnect
asm GPResult gpiProcessConnect(GPConnection* connection, GPIOperation* operation,
                           const char* input) {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2d0
    bl _savegpr_26
    mr r26, r5
    lis r28, lbl_80368C80@ha
    mr r30, r4
    lwz r31, 0x0(r3)
    mr r29, r3
    mr r4, r26
    addi r28, r28, lbl_80368C80@l
    li r5, 0x0
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_8025D6A8
    lwz r0, 0x5b8(r31)
    cmpwi r0, 0x106
    bne lbl_8025D650
    lwz r4, 0x1a0(r31)
    cmpwi r4, 0x0
    beq lbl_8025D650
    mr r3, r29
    bl gpiRemoveProfileByID
    li r0, 0x0
    stw r0, 0x19c(r31)
    stw r0, 0x1a0(r31)
    b lbl_8025D680
lbl_8025D650:
    cmpwi r0, 0x201
    bne lbl_8025D680
    mr r3, r26
    addi r5, r1, 0xb8
    la r4, lbl_8049C978
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    beq lbl_8025D680
    addi r3, r1, 0xb8
    bl atoi
    stw r3, 0x1a0(r31)
lbl_8025D680:
    lwz r4, 0x5b8(r31)
    mr r3, r29
    mr r5, r31
    bl gpiSetError
    mr r3, r29
    li r4, 0x4
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x4
    b lbl_8025DC54
lbl_8025D6A8:
    lwz r0, 0x14(r30)
    lwz r27, 0x4(r30)
    cmpwi r0, 0x2
    beq lbl_8025D8B0
    bge lbl_8025D6C8
    cmpwi r0, 0x1
    bge lbl_8025D6D4
    b lbl_8025DC50
lbl_8025D6C8:
    cmpwi r0, 0x4
    bge lbl_8025DC50
    b lbl_8025D7AC
lbl_8025D6D4:
    mr r3, r26
    la r4, lbl_8049C980
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8025D714
    mr r3, r29
    addi r5, r28, 0x2e0
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D714:
    mr r3, r26
    mr r5, r27
    addi r4, r28, 0x21c
    li r6, 0x80
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025D758
    mr r3, r29
    addi r5, r28, 0x2e0
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D758:
    lwz r0, 0x304(r27)
    cmpwi r0, 0x0
    beq lbl_8025D788
    mr r3, r29
    mr r4, r27
    bl gpiSendNewuser
    cmpwi r3, 0x0
    beq lbl_8025D77C
    b lbl_8025DC54
lbl_8025D77C:
    li r0, 0x3
    stw r0, 0x14(r30)
    b lbl_8025DC50
lbl_8025D788:
    mr r3, r29
    mr r4, r27
    bl gpiSendLogin
    cmpwi r3, 0x0
    beq lbl_8025D7A0
    b lbl_8025DC54
lbl_8025D7A0:
    li r0, 0x2
    stw r0, 0x14(r30)
    b lbl_8025DC50
lbl_8025D7AC:
    mr r3, r26
    la r4, lbl_8049C988
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8025D7EC
    mr r3, r29
    addi r5, r28, 0x2e0
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D7EC:
    mr r3, r26
    addi r4, r28, 0x244
    addi r5, r1, 0xb8
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025D830
    mr r3, r29
    addi r5, r28, 0x310
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D830:
    addi r3, r1, 0xb8
    bl atoi
    stw r3, 0x19c(r31)
    mr r3, r26
    addi r4, r28, 0x250
    addi r5, r1, 0xb8
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025D880
    mr r3, r29
    addi r5, r28, 0x310
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D880:
    addi r3, r1, 0xb8
    bl atoi
    stw r3, 0x1a0(r31)
    mr r3, r29
    mr r4, r27
    bl gpiSendLogin
    cmpwi r3, 0x0
    beq lbl_8025D8A4
    b lbl_8025DC54
lbl_8025D8A4:
    li r0, 0x2
    stw r0, 0x14(r30)
    b lbl_8025DC50
lbl_8025D8B0:
    mr r3, r26
    la r4, lbl_8049C990
    li r5, 0x5
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8025D8F0
    mr r3, r29
    addi r5, r28, 0x2e0
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D8F0:
    mr r3, r26
    addi r4, r28, 0x340
    addi r5, r1, 0xb8
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025D934
    mr r3, r29
    addi r5, r28, 0x310
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D934:
    addi r3, r1, 0xb8
    bl atoi
    stw r3, 0x198(r31)
    mr r3, r26
    addi r4, r28, 0x244
    addi r5, r1, 0xb8
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025D984
    mr r3, r29
    addi r5, r28, 0x310
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D984:
    addi r3, r1, 0xb8
    bl atoi
    stw r3, 0x19c(r31)
    mr r3, r26
    addi r4, r28, 0x250
    addi r5, r1, 0xb8
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025D9D4
    mr r3, r29
    addi r5, r28, 0x310
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025D9D4:
    addi r3, r1, 0xb8
    bl atoi
    stw r3, 0x1a0(r31)
    mr r3, r26
    addi r4, r28, 0x234
    addi r5, r1, 0x24
    li r6, 0x15
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025DA04
    li r0, 0x0
    stb r0, 0x24(r1)
lbl_8025DA04:
    mr r3, r26
    addi r5, r31, 0x614
    la r4, lbl_8049C998
    li r6, 0x19
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025DA28
    li r0, 0x0
    stb r0, 0x614(r31)
lbl_8025DA28:
    lwz r5, 0x1a4(r31)
    cmpwi r5, 0x0
    beq lbl_8025DA48
    addi r3, r1, 0x18
    la r4, lbl_8049C918
    opword 0x4CC63182
    bl sprintf
    b lbl_8025DA54
lbl_8025DA48:
    addi r3, r1, 0x18
    la r4, lbl_8049C91C
    bl strcpy
lbl_8025DA54:
    lbz r0, 0xc2(r27)
    extsb. r0, r0
    beq lbl_8025DA68
    addi r7, r27, 0xc2
    b lbl_8025DAB4
lbl_8025DA68:
    lbz r0, 0x12f(r31)
    extsb. r0, r0
    beq lbl_8025DA94
    addi r3, r1, 0x60
    addi r5, r1, 0x18
    addi r6, r31, 0x12f
    la r4, lbl_8049C920
    opword 0x4CC63182
    bl sprintf
    addi r7, r1, 0x60
    b lbl_8025DAB4
lbl_8025DA94:
    addi r3, r1, 0x60
    addi r5, r1, 0x18
    addi r6, r31, 0x110
    addi r7, r31, 0x144
    la r4, lbl_8049C928
    opword 0x4CC63182
    bl sprintf
    addi r7, r1, 0x60
lbl_8025DAB4:
    addi r5, r27, 0xa1
    mr r8, r27
    addi r3, r1, 0xb8
    addi r4, r28, 0x1d8
    mr r10, r5
    addi r6, r28, 0x1e8
    addi r9, r27, 0x80
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0xb8
    bl strlen
    mr r4, r3
    addi r3, r1, 0xb8
    addi r5, r1, 0x3c
    bl MD5Digest
    mr r3, r26
    addi r5, r1, 0xb8
    la r4, lbl_8049C9A0
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025DB34
    mr r3, r29
    addi r5, r28, 0x310
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025DB34:
    addi r3, r1, 0x3c
    addi r4, r1, 0xb8
    li r5, 0x20
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_8025DB74
    mr r3, r29
    addi r5, r28, 0x34c
    li r4, 0x108
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025DC54
lbl_8025DB74:
    lwz r0, 0x100(r31)
    cmpwi r0, 0x0
    beq lbl_8025DB9C
    lwz r4, 0x1a0(r31)
    mr r3, r29
    bl gpiProfileListAdd
    lwz r0, 0x1a0(r31)
    stw r0, 0x0(r3)
    lwz r0, 0x19c(r31)
    stw r0, 0x4(r3)
lbl_8025DB9C:
    li r0, 0x3
    stw r0, 0x1f4(r31)
    lwz r3, 0xc(r30)
    lwz r0, 0x10(r30)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_8025DC44
    li r3, 0x20
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_8025DBE4
    mr r3, r29
    addi r4, r28, 0x188
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025DC54
lbl_8025DBE4:
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r5, 0x1a0(r31)
    li r0, 0x0
    addi r3, r27, 0x8
    addi r4, r1, 0x24
    stw r5, 0x4(r27)
    li r5, 0x15
    stw r0, 0x0(r27)
    bl strzcpy
    lwz r4, 0x10(r1)
    mr r3, r29
    lwz r0, 0x14(r1)
    mr r5, r27
    stw r4, 0x8(r1)
    mr r6, r30
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025DC44
    b lbl_8025DC54
lbl_8025DC44:
    mr r3, r29
    mr r4, r30
    bl gpiRemoveOperation
lbl_8025DC50:
    li r3, 0x0
lbl_8025DC54:
    addi r11, r1, 0x2d0
    bl _restgpr_26
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// asm_to_cpp: gpiDisconnectCleanupProfile
asm static GPIBool gpiDisconnectCleanupProfile(GPConnection* connection,
                                           GPIProfile* profile, void* data) {
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
    lwz r5, 0x8(r4)
    lwz r31, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8025DD7C
    li r0, 0x1
    stw r0, 0x28(r4)
    lwz r3, 0x8(r5)
    bl fn_80256C70
    lwz r3, 0x8(r30)
    li r28, 0x0
    stw r28, 0x8(r3)
    lwz r3, 0x8(r30)
    lwz r3, 0xc(r3)
    bl fn_80256C70
    lwz r3, 0x8(r30)
    stw r28, 0xc(r3)
    lwz r3, 0x8(r30)
    bl fn_80256C70
    stw r28, 0x8(r30)
lbl_8025DD7C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8025DE0C
    li r0, 0x1
    stw r0, 0x28(r30)
    lwz r3, 0x8(r3)
    bl fn_80256C70
    lwz r3, 0xc(r30)
    li r28, 0x0
    stw r28, 0x8(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0xc(r3)
    bl fn_80256C70
    lwz r3, 0xc(r30)
    stw r28, 0xc(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0x10(r3)
    bl fn_80256C70
    lwz r3, 0xc(r30)
    stw r28, 0x10(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0x14(r3)
    bl fn_80256C70
    lwz r3, 0xc(r30)
    stw r28, 0x14(r3)
    lwz r3, 0xc(r30)
    lwz r3, 0x38(r3)
    cmpwi r3, 0x0
    beq lbl_8025DDFC
    bl fn_802535C4
    lwz r3, 0xc(r30)
    stw r28, 0x38(r3)
lbl_8025DDFC:
    lwz r3, 0xc(r30)
    bl fn_80256C70
    li r0, 0x0
    stw r0, 0xc(r30)
lbl_8025DE0C:
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_8025DE20
    li r0, 0x1
    stw r0, 0x28(r30)
lbl_8025DE20:
    lwz r3, 0x14(r30)
    bl fn_80256C70
    li r28, 0x0
    lwz r3, 0x1c(r30)
    stw r28, 0x14(r30)
    bl fn_80256C70
    lwz r0, 0x10(r30)
    stw r28, 0x1c(r30)
    cmpwi r0, 0x0
    stw r28, 0x18(r30)
    beq lbl_8025DE64
    lwz r0, 0x104(r31)
    cmpwi r0, 0x1
    bne lbl_8025DE78
    lwz r0, 0x28(r30)
    cmpwi r0, 0x0
    bne lbl_8025DE78
lbl_8025DE64:
    mr r3, r29
    mr r4, r30
    bl gpiRemoveProfile
    li r3, 0x0
    b lbl_8025DE7C
lbl_8025DE78:
    li r3, 0x1
lbl_8025DE7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: gpiDisconnect
asm void gpiDisconnect(GPConnection* connection, GPIBool tellServer) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x0(r3)
    lwz r0, 0x1f4(r30)
    cmpwi r0, 0x4
    beq lbl_8025E038
    cmpwi r0, 0x0
    beq lbl_8025DF94
    cmpwi r4, 0x0
    beq lbl_8025DF10
    cmpwi r0, 0x3
    bne lbl_8025DF10
    lis r5, lbl_80369014@ha
    addi r4, r30, 0x210
    addi r5, r5, lbl_80369014@l
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r29
    addi r4, r30, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r29
    addi r4, r30, 0x210
    la r5, lbl_8049C960
    bl gpiAppendStringToBuffer
lbl_8025DF10:
    lwz r4, 0x1f0(r30)
    mr r3, r29
    addi r5, r30, 0x210
    addi r6, r1, 0x8
    li r7, 0x1
    la r8, lbl_8049C9A8
    bl gpiSendFromBuffer
    lwz r3, 0x1f0(r30)
    cmpwi r3, -0x1
    beq lbl_8025DF50
    li r4, 0x2
    bl shutdown
    lwz r3, 0x1f0(r30)
    bl closesocket
    li r0, -0x1
    stw r0, 0x1f0(r30)
lbl_8025DF50:
    bl gsUdpEngineIsInitialized
    cmpwi r3, 0x0
    beq lbl_8025DF80
    addi r3, r30, 0x220
    bl gsUdpEngineRemoveMsgHandler
    bl gsUdpEngineNoMoreMsgHandlers
    cmpwi r3, 0x0
    beq lbl_8025DF80
    bl gsUdpEngineNoApp
    cmpwi r3, 0x0
    beq lbl_8025DF80
    bl gsUdpEngineShutdown
lbl_8025DF80:
    li r3, 0x4
    li r0, 0x0
    stw r3, 0x1f4(r30)
    stw r0, 0x19c(r30)
    stw r0, 0x1a0(r30)
lbl_8025DF94:
    lwz r3, 0x1f8(r30)
    bl fn_80256C70
    li r31, 0x0
    stw r31, 0x1f8(r30)
    lwz r3, 0x208(r30)
    bl fn_80256C70
    stw r31, 0x208(r30)
    lwz r3, 0x210(r30)
    bl fn_80256C70
    stw r31, 0x210(r30)
    lwz r3, 0x5e4(r30)
    bl fn_80256C70
    stw r31, 0x5e4(r30)
    lwz r3, 0x5f4(r30)
    bl fn_80256C70
    stw r31, 0x5f4(r30)
    b lbl_8025DFE0
lbl_8025DFD8:
    mr r3, r29
    bl gpiRemoveOperation
lbl_8025DFE0:
    lwz r4, 0x5c4(r30)
    cmpwi r4, 0x0
    bne lbl_8025DFD8
    li r0, 0x0
    stw r0, 0x5c4(r30)
    lwz r31, 0x5d8(r30)
    b lbl_8025E00C
lbl_8025DFFC:
    mr r4, r31
    lwz r31, 0x54(r31)
    mr r3, r29
    bl gpiDestroyPeer
lbl_8025E00C:
    cmpwi r31, 0x0
    bne lbl_8025DFFC
    li r0, 0x0
    lis r31, gpiDisconnectCleanupProfile@ha
    stw r0, 0x5d8(r30)
lbl_8025E020:
    mr r3, r29
    addi r4, r31, gpiDisconnectCleanupProfile@l
    li r5, 0x0
    bl gpiProfileMap
    cmpwi r3, 0x0
    beq lbl_8025E020
lbl_8025E038:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
