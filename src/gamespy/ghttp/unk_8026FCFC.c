///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#include "ghttpCommon.h"

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
GHTTPBool ghttpSetRequestEncryptionEngine(GHTTPRequest request,
                                          GHTTPEncryptionEngine engine) {
  GHIConnection* connection = ghiRequestToConnection(request);
  if (!connection)
    return GHTTPFalse;

  // Translate default into the actual engine name
  // We don't want to set the engine value to "default" because
  //   we'd lose the ability to determine the engine name in other places
  if (engine == GHTTPEncryptionEngine_Default) {
    engine = GHTTPEncryptionEngine_RevoEx;
  }

  // If the same engine has previously been set then we're done
  if (connection->encryptor.mEngine == engine)
    return GHTTPTrue;

  // If a different engine has previously been set then we're screwed
  if (connection->encryptor.mInterface != NULL &&
      connection->encryptor.mEngine != engine) {
    return GHTTPFalse;
  }

  // If the URL is HTTPS but the engine is specific as NONE then we can't
  // connect
  if ((engine == GHTTPEncryptionEngine_None) &&
      (strncmp(connection->URL, "https://", 8) == 0))
    return GHTTPFalse;

  // Initialize the engine
  connection->encryptor.mEngine = engine;

  if (engine == GHTTPEncryptionEngine_None) {
    connection->encryptor.mInterface = NULL;
    return GHTTPTrue; // this is the default, just return
  } else {
    // 02OCT07 BED: Design was changed to only allow one engine at a time
    //              Assert that the specified engine is the one supported
    if (engine != GHTTPEncryptionEngine_Default) {
      GS_ASSERT(engine == GHTTPEncryptionEngine_RevoEx);
    }

    connection->encryptor.mInterface = NULL;
    connection->encryptor.mInitFunc = ghiEncryptorSslInitFunc;
    connection->encryptor.mStartFunc = ghiEncryptorSslStartFunc;
    connection->encryptor.mCleanupFunc = ghiEncryptorSslCleanupFunc;
    connection->encryptor.mEncryptFunc = ghiEncryptorSslEncryptFunc;
    connection->encryptor.mDecryptFunc = ghiEncryptorSslDecryptFunc;
    connection->encryptor.mInitialized = GHTTPFalse;
    connection->encryptor.mSessionStarted = GHTTPFalse;
    connection->encryptor.mSessionEstablished = GHTTPFalse;
    connection->encryptor.mEncryptOnBuffer = GHTTPTrue;
    connection->encryptor.mEncryptOnSend = GHTTPFalse;
    connection->encryptor.mLibSendsHandshakeMessages = GHTTPFalse;
    return GHTTPTrue;
  }
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// *********************  REVOEX SSL ENCRYPTION ENGINE  ******************** //
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#include <rvl/ssl.h>

typedef struct gsRevoExInterface {
  int mId;
  int mClientCertId;
  int mRootCAId;
  GHTTPBool mConnected; // means "connected to socket", not "connected to remote
                        // machine"
} gsRevoExInterface;

// Init the engine
GHIEncryptionResult ghiEncryptorSslInitFunc(struct GHIConnection* connection,
                                            struct GHIEncryptor* theEncryptor) {
  int i = 0;
  gsRevoExInterface* sslInterface = NULL;

  // There is only one place where this function should be called,
  //  and it should check if the engine has been initialized
  GS_ASSERT(theEncryptor->mInitialized == GHTTPFalse);
  GS_ASSERT(theEncryptor->mInterface == NULL);

  // allocate the interface (need one per connection)
  theEncryptor->mInterface = gsimalloc(sizeof(gsRevoExInterface));
  if (theEncryptor->mInterface == NULL) {
    // memory allocation failed
    gsDebugFormat(
        GSIDebugCat_HTTP, GSIDebugType_Memory, GSIDebugLevel_WarmError,
        "Failed to allocate SSL interface (out of memory: %d bytes)\r\n",
        sizeof(gsRevoExInterface));
    return GHIEncryptionResult_Error;
  }
  memset(theEncryptor->mInterface, 0, sizeof(gsRevoExInterface));
  sslInterface = (gsRevoExInterface*)theEncryptor->mInterface;

  {
    int verifyOption = 0;
    int rcode = 0;

    // verifyOption = SSL_VERIFY_COMMON_NAME | SSL_VERIFY_ROOT_CA |
    //               SSL_VERIFY_DATE | SSL_VERIFY_CHAIN |
    //               SSL_VERIFY_SUBJECT_ALT_NAME;
    verifyOption = 0xb;

    // todo serverAddress, is this used for certificate name?
    sslInterface->mId = SSLNew(verifyOption, connection->serverAddress);

    rcode = SSLSetBuiltinRootCA(sslInterface->mId, 1);
    if (rcode != SSL_ENONE) {
      SSLShutdown(sslInterface->mId);
      return GHIEncryptionResult_Error;
    }

    rcode = SSLSetBuiltinClientCert(sslInterface->mId, 0);
    if (rcode != SSL_ENONE) {
      SSLShutdown(sslInterface->mId);
      return GHIEncryptionResult_Error;
    }
  }

  theEncryptor->mInitialized = GHTTPTrue;
  theEncryptor->mSessionStarted = GHTTPFalse;
  theEncryptor->mSessionEstablished = GHTTPFalse;
  // theEncryptor->mUseSSLConnect = GHTTPTrue;
  theEncryptor->mEncryptOnBuffer = GHTTPFalse;
  theEncryptor->mEncryptOnSend = GHTTPTrue;
  theEncryptor->mLibSendsHandshakeMessages = GHTTPTrue;

  gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                "GameSpy SSL (RevoEx engine) initialized\r\n");

  return GHIEncryptionResult_Success;
}

// Destroy the engine
GHIEncryptionResult
ghiEncryptorSslCleanupFunc(struct GHIConnection* connection,
                           struct GHIEncryptor* theEncryptor) {
  if (theEncryptor != NULL) {
    gsRevoExInterface* sslInterface =
        (gsRevoExInterface*)theEncryptor->mInterface;
    if (sslInterface != NULL) {
      SSLShutdown(sslInterface->mId);
      gsifree(sslInterface);
      theEncryptor->mInterface = NULL;
    }
    theEncryptor->mInitialized = GHTTPFalse;
    theEncryptor->mSessionStarted = GHTTPFalse;
    theEncryptor->mSessionEstablished = GHTTPFalse;
  }

  gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                "GameSpy SSL (RevoEx) engine cleanup called\r\n");

  GSI_UNUSED(connection);

  return GHIEncryptionResult_Success;
}

GHIEncryptionResult
ghiEncryptorSslStartFunc(struct GHIConnection* connection,
                         struct GHIEncryptor* theEncryptor) {
  gsRevoExInterface* sslInterface =
      (gsRevoExInterface*)theEncryptor->mInterface;
  int result = 0;

  GS_ASSERT(theEncryptor->mSessionStarted == GHTTPFalse);

  // Call this only AFTER the socket has been connected to the remote server
  if (!sslInterface->mConnected) {
    result = SSLConnect(sslInterface->mId, connection->socket);
    if (result != SSL_ENONE) {
      switch (result) {
      case SSL_EFAILED:
        gsDebugFormat(
            GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
            "GameSpy SSL (RevoEx) SSLConnect failed (SSL_EFAILED)\r\n");
        break;
      case SSL_ESSLID:
        gsDebugFormat(
            GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
            "GameSpy SSL (RevoEx) SSLConnect failed (SSL_ESSLID)\r\n");
        break;
      default:
        gsDebugFormat(
            GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
            "GameSpy SSL (RevoEx) SSLConnect failed (Unhandled Error)\r\n");
        break;
      }
      return GHIEncryptionResult_Error;
    }
    sslInterface->mConnected = GHTTPTrue;
  }

  GS_ASSERT(sslInterface->mConnected == GHTTPTrue);

  // begin securing the session
  result = SSLDoHandshake(sslInterface->mId);
  if (result != SSL_ENONE) {
    // Check for EWOULDBLOCK conditions
    if (result == SSL_EWANT_READ || result == SSL_EWANT_WRITE)
      return GHIEncryptionResult_Success;

    switch (result) {
    case SSL_EFAILED:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_EFAILED)\r\n");
      break;
    case SSL_ESSLID:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_ESSLID)\r\n");
      break;
    case SSL_ESYSCALL:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_ESYSCALL)\r\n");
      break;
    case SSL_EZERO_RETURN:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_EZERO_RETURN)\r\n");
      break;
    case SSL_EWANT_CONNECT:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_EWANT_CONNECT)\r\n");
      break;
    case SSL_EVERIFY_COMMON_NAME:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLDoHandshake failed "
                    "(SSL_EVERIFY_COMMON_NAME)\r\n");
      break;
    case SSL_EVERIFY_CHAIN:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_EVERIFY_CHAIN)\r\n");
      break;
    case SSL_EVERIFY_ROOT_CA:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLDoHandshake failed "
                    "(SSL_EVERIFY_ROOT_CA)\r\n");
      break;
    case SSL_EVERIFY_DATE:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (SSL_EVERIFY_DATE)\r\n");
      break;
    default:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLDoHandshake failed (Unhandled Error)\r\n");
      break;
    }
    return GHIEncryptionResult_Error;
  }

  // Success
  theEncryptor->mSessionStarted = GHTTPTrue;
  theEncryptor->mSessionEstablished = GHTTPTrue;
  return GHIEncryptionResult_Success;
}

// Encrypt and send some data
GHIEncryptionResult
ghiEncryptorSslEncryptSend(struct GHIConnection* connection,
                           struct GHIEncryptor* theEncryptor,
                           const char* thePlainTextBuffer,
                           int thePlainTextLength, int* theBytesSentOut) {
  gsRevoExInterface* sslInterface =
      (gsRevoExInterface*)theEncryptor->mInterface;
  int result = 0;

  result = SSLWrite(sslInterface->mId, thePlainTextBuffer, thePlainTextLength);
  if (result == SSL_EWANT_WRITE) {
    // signal socket error, GetLastError will return EWOULDBLOCK or EINPROGRESS
    *theBytesSentOut = -1;
  } else if (result < 0) {
    switch (result) {
    case SSL_EFAILED:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLWrite failed (SSL_EFAILED)\r\n");
      break;
    case SSL_ESSLID:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLWrite failed (SSL_ESSLID)\r\n");
      break;
    case SSL_EWANT_READ:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLWrite failed (SSL_EWANT_READ)\r\n");
      break;
    case SSL_ESYSCALL:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLWrite failed (SSL_ESYSCALL)\r\n");
      break;
    case SSL_EWANT_CONNECT:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLWrite failed (SSL_EWANT_CONNECT)\r\n");
      break;
    default:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLWrite failed (Unhandled Error)\r\n");
      break;
    }
    return GHIEncryptionResult_Error;
  } else {
    GS_ASSERT(result > 0);
    *theBytesSentOut = result;
  }
  GSI_UNUSED(connection);
  return GHIEncryptionResult_Success;
}

// Receive and decrypt some data
GHIEncryptionResult
ghiEncryptorSslDecryptRecv(struct GHIConnection* connection,
                           struct GHIEncryptor* theEncryptor,
                           char* theDecryptedBuffer, int* theDecryptedLength) {
  gsRevoExInterface* sslInterface =
      (gsRevoExInterface*)theEncryptor->mInterface;
  int result = 0;

  result = SSLRead(sslInterface->mId, theDecryptedBuffer, *theDecryptedLength);
  if (result == SSL_EZERO_RETURN) {
    // receive 0 is not fatal
    *theDecryptedLength = 0;
  } else if (result == SSL_EWANT_READ) {
    // signal socket error, GetLastError will return EWOULDBLOCK or EINPROGRESS
    *theDecryptedLength = -1;
  } else if (result < 0) {
    // Fatal errors
    switch (result) {
    case SSL_EFAILED:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLRead failed (SSL_EFAILED)\r\n");
      break;
    case SSL_ESSLID:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLRead failed (SSL_ESSLID)\r\n");
      break;
    case SSL_EWANT_WRITE:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLRead failed (SSL_EWANT_WRITE)\r\n");
      break;
    case SSL_ESYSCALL:
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
                    "GameSpy SSL (RevoEx) SSLRead failed (SSL_ESYSCALL)\r\n");
      break;
    case SSL_EWANT_CONNECT:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLRead failed (SSL_EWANT_CONNECT)\r\n");
      break;
    default:
      gsDebugFormat(
          GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_Debug,
          "GameSpy SSL (RevoEx) SSLRead failed (Unhandled Error)\r\n");
      break;
    }
    return GHIEncryptionResult_Error;
  } else {
    GS_ASSERT(result > 0);
    *theDecryptedLength = result;
  }
  GSI_UNUSED(connection);
  return GHIEncryptionResult_Success;
}

GHIEncryptionResult ghiEncryptorSslEncryptFunc(
    struct GHIConnection* connection, struct GHIEncryptor* theEncryptor,
    const char* thePlainTextBuffer, int thePlainTextLength,
    char* theEncryptedBuffer, int* theEncryptedLength) {
  GS_FAIL(); // Should never call this for RevoEx SSL!  It uses encrypt on send

  GSI_UNUSED(connection);
  GSI_UNUSED(theEncryptor);
  GSI_UNUSED(thePlainTextBuffer);
  GSI_UNUSED(thePlainTextLength);
  GSI_UNUSED(theEncryptedBuffer);
  GSI_UNUSED(theEncryptedLength);

  return GHIEncryptionResult_Error;
}

GHIEncryptionResult ghiEncryptorSslDecryptFunc(
    struct GHIConnection* connection, struct GHIEncryptor* theEncryptor,
    const char* theEncryptedBuffer, int* theEncryptedLength,
    char* theDecryptedBuffer, int* theDecryptedLength) {
  GS_FAIL(); // Should never call this for RevoEx SSL!  It uses decrypt on recv

  GSI_UNUSED(connection);
  GSI_UNUSED(theEncryptor);
  GSI_UNUSED(theEncryptedBuffer);
  GSI_UNUSED(theEncryptedLength);
  GSI_UNUSED(theDecryptedBuffer);
  GSI_UNUSED(theDecryptedLength);

  return GHIEncryptionResult_Error;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_8036AF10[];
extern int fn_8026FCFC();
extern int fn_8026FF78();
extern int fn_80270018();
extern void fn_80337950();
extern void fn_80337A18();
extern void fn_80337D94();

// asm_to_cpp: fn_8026FCFC
asm int fn_8026FCFC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl ghiRequestToConnection
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8026FD2C
    li r3, 0x0
    b lbl_8026FE10
lbl_8026FD2C:
    cmpwi r30, 0x4
    bne lbl_8026FD38
    li r30, 0x3
lbl_8026FD38:
    lwz r0, 0x194(r3)
    cmpw cr1, r0, r30
    bne cr1, lbl_8026FD4C
    li r3, 0x1
    b lbl_8026FE10
lbl_8026FD4C:
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_8026FD64
    beq cr1, lbl_8026FD64
    li r3, 0x0
    b lbl_8026FE10
lbl_8026FD64:
    cmpwi r30, 0x0
    bne lbl_8026FD90
    lis r4, lbl_8036AF10@ha
    lwz r3, 0x14(r3)
    addi r4, r4, lbl_8036AF10@l
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8026FD90
    li r3, 0x0
    b lbl_8026FE10
lbl_8026FD90:
    cmpwi r30, 0x0
    stw r30, 0x194(r31)
    bne lbl_8026FDAC
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x190(r31)
    b lbl_8026FE10
lbl_8026FDAC:
    li r7, 0x0
    lis r4, ghiEncryptorSslInitFunc@ha
    stw r7, 0x190(r31)
    addi r4, r4, ghiEncryptorSslInitFunc@l
    lis r6, fn_8026FF78@ha
    lis r3, ghiEncryptorSslCleanupFunc@ha
    stw r4, 0x1b0(r31)
    addi r6, r6, fn_8026FF78@l
    lis r5, ghiPostSetAutoFree@ha
    lis r4, ghiIsPostAutoFree@ha
    stw r6, 0x1b8(r31)
    addi r3, r3, ghiEncryptorSslCleanupFunc@l
    addi r5, r5, ghiPostSetAutoFree@l
    addi r4, r4, ghiIsPostAutoFree@l
    stw r3, 0x1b4(r31)
    li r0, 0x1
    li r3, 0x1
    stw r5, 0x1bc(r31)
    stw r4, 0x1c0(r31)
    stw r7, 0x198(r31)
    stw r7, 0x19c(r31)
    stw r7, 0x1a0(r31)
    stw r0, 0x1a4(r31)
    stw r7, 0x1a8(r31)
    stw r7, 0x1ac(r31)
lbl_8026FE10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8026FF78
asm int fn_8026FF78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, 0x0(r4)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_8026FFC8
    lwz r3, 0x0(r31)
    lwz r4, 0x4c(r5)
    bl fn_80337950
    cmpwi r3, 0x0
    beq lbl_8026FFC0
    li r3, 0x3
    b lbl_80270000
lbl_8026FFC0:
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_8026FFC8:
    lwz r3, 0x0(r31)
    bl fn_80337A18
    cmpwi r3, 0x0
    beq lbl_8026FFF0
    addi r0, r3, 0x3
    li r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_80270000
    li r3, 0x1
    b lbl_80270000
lbl_8026FFF0:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
lbl_80270000:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80270018
asm int fn_80270018() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    mr r5, r6
    stw r31, 0xc(r1)
    mr r31, r7
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    bl fn_80337D94
    cmpwi r3, -0x6
    bne lbl_80270058
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_80270080
lbl_80270058:
    cmpwi r3, -0x3
    bne lbl_8027006C
    li r0, -0x1
    stw r0, 0x0(r31)
    b lbl_80270080
lbl_8027006C:
    cmpwi r3, 0x0
    bge lbl_8027007C
    li r3, 0x3
    b lbl_80270084
lbl_8027007C:
    stw r3, 0x0(r31)
lbl_80270080:
    li r3, 0x1
lbl_80270084:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
