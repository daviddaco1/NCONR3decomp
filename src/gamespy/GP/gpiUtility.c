/*
gpiUtility.c
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
#define OUTPUT_MAX_COL 100

// Disable compiler warnings for issues that are unavoidable.
/////////////////////////////////////////////////////////////
#if defined(_MSC_VER) // DevStudio
// Level4, "conditional expression is constant".
// Occurs with use of the MS provided macro FD_SET
#pragma warning(disable : 4127)
#endif // _MSC_VER

// FUNCTIONS
///////////
void strzcpy(char* dest, const char* src, size_t len) {
  assert(dest != NULL);
  assert(src != NULL);

  strncpy(dest, src, len);
  dest[len - 1] = '\0';
}

GPIBool gpiCheckForError(GPConnection* connection, const char* input,
                         GPIBool callErrorCallback) {
  char buffer[16];
  GPIConnection* iconnection = (GPIConnection*)*connection;

  if (strncmp(input, "\\error\\", 7) == 0) {
    // Get the err code.
    ////////////////////
    if (gpiValueForKey(input, "\\err\\", buffer, sizeof(buffer)))
      iconnection->errorCode = (GPErrorCode)atoi(buffer);

    // Get the error string.
    ////////////////////////
    if (!gpiValueForKey(input, "\\errmsg\\", iconnection->errorString,
                        sizeof(iconnection->errorString)))
      iconnection->errorString[0] = '\0';

    // Call the error callback?
    ///////////////////////////
    if (callErrorCallback) {
      GPIBool fatal = (GPIBool)(strstr(input, "\\fatal\\") != NULL);
      gpiCallErrorCallback(connection, GP_SERVER_ERROR,
                           fatal ? GP_FATAL : GP_NON_FATAL);
    }

    return GPITrue;
  }

  return GPIFalse;
}

GPIBool gpiValueForKeyWithIndex(const char* command, const char* key,
                                int* index, char* value, int len) {
  char delimiter;
  const char* start;
  int i;
  char c;

  // Check for NULL.
  //////////////////
  assert(command != NULL);
  assert(key != NULL);
  assert(value != NULL);
  assert(len > 0);

  // Find which char is the delimiter.
  ////////////////////////////////////
  delimiter = key[0];

  // Find the key - first navigate to the index
  /////////////////////////////////////////////
  command += *index;
  start = strstr(command, key);
  if (start == NULL)
    return GPIFalse;

  // Get to the start of the value.
  /////////////////////////////////
  start += strlen(key);

  // Copy in the value.
  /////////////////////
  len--;
  for (i = 0; (i < len) && ((c = start[i]) != '\0') && (c != delimiter); i++) {
    value[i] = c;
  }
  value[i] = '\0';

  // Copy back current end point for index
  ////////////////////////////////////////
  *index += ((start - command) + strlen(value));

  return GPITrue;
}

GPIBool gpiValueForKey(const char* command, const char* key, char* value,
                       int len) {
  char delimiter;
  const char* start;
  int i;
  char c;

  // Check for NULL.
  //////////////////
  assert(command != NULL);
  assert(key != NULL);
  assert(value != NULL);
  assert(len > 0);

  // Find which char is the delimiter.
  ////////////////////////////////////
  delimiter = key[0];

  // Find the key.
  ////////////////
  start = strstr(command, key);
  if (start == NULL)
    return GPIFalse;

  // Get to the start of the value.
  /////////////////////////////////
  start += strlen(key);

  // Copy in the value.
  /////////////////////
  len--;
  for (i = 0; (i < len) && ((c = start[i]) != '\0') && (c != delimiter); i++) {
    value[i] = c;
  }
  value[i] = '\0';

  return GPITrue;
}

char* gpiValueForKeyAlloc(const char* command, const char* key) {
  char delimiter;
  const char* start;
  char c;
  char* value;
  int len;

  // Check for NULL.
  //////////////////
  assert(command != NULL);
  assert(key != NULL);

  // Find which char is the delimiter.
  ////////////////////////////////////
  delimiter = key[0];

  // Find the key.
  ////////////////
  start = strstr(command, key);
  if (start == NULL)
    return NULL;

  // Get to the start of the value.
  /////////////////////////////////
  start += strlen(key);

  // Find the key length.
  ///////////////////////
  for (len = 0; ((c = start[len]) != '\0') && (c != delimiter); len++) {
  };

  // Allocate the value.
  //////////////////////
  value = (char*)gsimalloc((unsigned int)len + 1);
  if (!value)
    return NULL;

  // Copy in the value.
  /////////////////////
  memcpy(value, start, (unsigned int)len);
  value[len] = '\0';

  return value;
}

GPResult gpiCheckSocketConnect(GPConnection* connection, SOCKET sock,
                               int* state) {
  int aWriteFlag = 0;
  int aExceptFlag = 0;
  int aReturnCode = 0;

  // Check if the connect is completed.
  /////////////////////////////////////
  aReturnCode = GSISocketSelect(sock, NULL, &aWriteFlag, &aExceptFlag);
  if (gsiSocketIsError(aReturnCode)) {
    gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network, GSIDebugLevel_HotError,
                  "Error connecting\n");
    CallbackFatalError(
        connection, GP_NETWORK_ERROR, GP_NETWORK,
        "There was an error checking for a completed connection.");
  }

  if (aReturnCode > 0) {
    // Check for a failed attempt.
    //////////////////////////////
    if (aExceptFlag) {
      gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network,
                    GSIDebugLevel_HotError, "Connection rejected\n");
      *state = GPI_DISCONNECTED;
      return GP_NO_ERROR;
    }

    // Check for a successful attempt.
    //////////////////////////////////
    if (aWriteFlag) {
      gsDebugFormat(GSIDebugCat_GP, GSIDebugType_Network, GSIDebugLevel_Notice,
                    "Connection accepted\n");
      *state = GPI_CONNECTED;
      return GP_NO_ERROR;
    }
  }

  // Not connected yet.
  /////////////////////
  *state = GPI_NOT_CONNECTED;
  return GP_NO_ERROR;
}

GPResult gpiReadKeyAndValue(GPConnection* connection, const char* buffer,
                            int* index, char key[512], char value[512]) {
  int c;
  int i;
  char* start;

  assert(buffer != NULL);
  assert(key != NULL);
  assert(value != NULL);

  buffer += *index;
  start = (char*)buffer;

  if (*buffer++ != '\\')
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE, "Parse Error.");

  for (i = 0; (c = *buffer++) != '\\'; i++) {
    if (c == '\0')
      CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                         "Parse Error.");
    if (i == 511)
      CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                         "Parse Error.");
    *key++ = (char)c;
  }
  *key = '\0';

  for (i = 0; ((c = *buffer++) != '\\') && (c != '\0'); i++) {
    if (i == 511)
      CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                         "Parse Error.");
    *value++ = (char)c;
  }
  *value = '\0';

  *index += (buffer - start - 1);

  return GP_NO_ERROR;
}

void gpiSetError(GPConnection* connection, GPErrorCode errorCode,
                 const char* errorString) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  // Copy the string.
  ///////////////////
  strzcpy(iconnection->errorString, errorString, GP_ERROR_STRING_LEN);

  // Set the code.
  ////////////////
  iconnection->errorCode = errorCode;
}

void gpiSetErrorString(GPConnection* connection, const char* errorString) {
  GPIConnection* iconnection = (GPIConnection*)*connection;

  // Copy the string.
  ///////////////////
  strzcpy(iconnection->errorString, errorString, GP_ERROR_STRING_LEN);
}

void gpiEncodeString(const char* unencodedString, char* encodedString) {
  size_t i;
  const int useAlternateEncoding = 1;

  // Encrypt the password (xor with random values)
  char passwordxor[GP_PASSWORD_LEN];
  size_t passwordlen = strlen(unencodedString);

  Util_RandSeed((unsigned long)GP_XOR_SEED);
  for (i = 0; i < passwordlen; i++) {
    // XOR each character with the next rand
    char aRand = (char)Util_RandInt(0, 0xFF);
    passwordxor[i] = (char)(unencodedString[i] ^ aRand);
  }
  passwordxor[i] = '\0';

  // Base 64 it (printable chars only)
  B64Encode(passwordxor, encodedString, (int)passwordlen, useAlternateEncoding);
}

// Re-enable previously disabled compiler warnings
///////////////////////////////////////////////////
#if defined(_MSC_VER)
#pragma warning(default : 4127)
#endif // _MSC_VER

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void _restgpr_25();
extern void _savegpr_25();
extern void fn_80265ED0();

// asm_to_cpp: fn_80265ED0
asm void fn_80265ED0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r5)
    mr r26, r4
    lbz r8, 0x0(r4)
    mr r31, r5
    add r25, r3, r0
    mr r27, r6
    mr r28, r7
    extsb r29, r8
    mr r3, r25
    bl strstr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80265F20
    li r3, 0x0
    b lbl_80265F94
lbl_80265F20:
    mr r3, r26
    bl strlen
    add r30, r30, r3
    mr r4, r27
    mr r3, r30
    subi r5, r28, 0x1
    li r6, 0x0
    b lbl_80265F50
lbl_80265F40:
    stb r0, 0x0(r4)
    addi r6, r6, 0x1
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_80265F50:
    cmpw r6, r5
    bge lbl_80265F6C
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_80265F6C
    cmpw r0, r29
    bne lbl_80265F40
lbl_80265F6C:
    li r0, 0x0
    mr r3, r27
    stbx r0, r27, r6
    bl strlen
    subf r0, r25, r30
    lwz r4, 0x0(r31)
    add r0, r0, r3
    li r3, 0x1
    add r0, r4, r0
    stw r0, 0x0(r31)
lbl_80265F94:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
