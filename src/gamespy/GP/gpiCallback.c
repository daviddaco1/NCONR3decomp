/*
gpiCallback.c
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

// FUNCTIONS
///////////
void gpiCallErrorCallback(GPConnection* connection, GPResult result,
                          GPEnum fatal) {
  GPICallback callback;
  GPIConnection* iconnection = (GPIConnection*)*connection;

  assert(iconnection != NULL);
  assert(result != GP_NO_ERROR);
  assert((fatal == GP_FATAL) || (fatal == GP_NON_FATAL));

  if (fatal == GP_FATAL)
    iconnection->fatalError = GPITrue;

  callback = iconnection->callbacks[GPI_ERROR];
  if (callback.callback != NULL) {
    GPErrorArg* arg;
    arg = (GPErrorArg*)gsimalloc(sizeof(GPErrorArg));

    if (arg != NULL) {
      arg->result = result;
      arg->fatal = fatal;
      arg->errorCode = iconnection->errorCode;
      arg->errorString = iconnection->errorString;
    }

    gpiAddCallback(connection, callback, arg, NULL, GPI_ADD_ERROR);
  }
}

// gpiAddCallback: definicion C reemplazada por asm (ver abajo)


static void gpiCallCallback(GPConnection* connection, GPICallbackData* data) {
  // Call the callback.
  /////////////////////
  assert(data->callback.callback != NULL);
  assert(data->arg != NULL);
  data->callback.callback(connection, data->arg, data->callback.param);
  if (data->type == GPI_ADD_MESSAGE) {
    freeclear(((GPRecvBuddyMessageArg*)data->arg)->message);
  } else if (data->type == GPI_ADD_BUDDYUTM) {
    freeclear(((GPRecvBuddyUTMArg*)data->arg)->message);
  } else if (data->type == GPI_ADD_NICKS) {
    int i;
    GPGetUserNicksResponseArg* arg = (GPGetUserNicksResponseArg*)data->arg;

    for (i = 0; i < arg->numNicks; i++) {
      freeclear(arg->nicks[i]);
      freeclear(arg->uniquenicks[i]);
    }
    freeclear(arg->nicks);
    freeclear(arg->uniquenicks)
  } else if (data->type == GPI_ADD_PMATCH) {
    GPFindPlayersResponseArg* arg = (GPFindPlayersResponseArg*)data->arg;

    freeclear(arg->matches);
  } else if (data->type == GPI_ADD_TRANSFER_CALLBACK) {
    GPTransferCallbackArg* arg = (GPTransferCallbackArg*)data->arg;

    if (arg->message)
      freeclear(arg->message);
  } else if (data->type == GPI_ADD_REVERSE_BUDDIES) {
    GPGetReverseBuddiesResponseArg* arg =
        (GPGetReverseBuddiesResponseArg*)data->arg;

    if (arg->profiles)
      freeclear(arg->profiles);
  } else if (data->type == GPI_ADD_SUGGESTED_UNIQUE) {
    int i;
    GPSuggestUniqueNickResponseArg* arg =
        (GPSuggestUniqueNickResponseArg*)data->arg;

    for (i = 0; i < arg->numSuggestedNicks; i++) {
      freeclear(arg->suggestedNicks[i]);
    }
    freeclear(arg->suggestedNicks);
  } else if (data->type == GPI_ADD_BUDDYREVOKE) {
    GPRecvBuddyRevokeArg* arg = (GPRecvBuddyRevokeArg*)data->arg;

    // Remove the profile from our local lists AFTER the callback has been
    // called
    gpiDeleteBuddy(connection, arg->profile, GPIFalse);
  } else if (data->type == GPI_ADD_REVERSE_BUDDIES_LIST) {
    GPGetReverseBuddiesListResponseArg* arg =
        (GPGetReverseBuddiesListResponseArg*)data->arg;

    if (arg->matches)
      freeclear(arg->matches);
  } else if (data->type == GPI_ADD_BUDDYKEYS) {
    GPGetBuddyStatusInfoKeysArg* arg = (GPGetBuddyStatusInfoKeysArg*)data->arg;
    if (arg->numKeys != 0) {
      int i;
      for (i = 0; i < arg->numKeys; i++) {
        freeclear(arg->keys[i]);
        freeclear(arg->values[i]);
      }
      freeclear(arg->keys);
      freeclear(arg->values);
    }
  }
  freeclear(data->arg);
  freeclear(data);
}

// gpiProcessCallbacks: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80368C70[];
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_25();
extern void _savegpr_26();
extern void fn_80256C4C();
extern void gpiSetErrorString();

// asm_to_cpp: gpiAddCallback
asm GPResult gpiAddCallback(GPConnection* connection, GPICallback callback,
                        void* arg, const struct GPIOperation_s* operation,
                        int type) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, 0x0(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r3, 0x18
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_8025C5BC
    lis r4, lbl_80368C70@ha
    mr r3, r26
    addi r4, r4, lbl_80368C70@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025C620
lbl_8025C5BC:
    lwz r4, 0x0(r27)
    cmpwi r29, 0x0
    lwz r0, 0x4(r27)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r28, 0x8(r3)
    beq lbl_8025C5E4
    lwz r0, 0x18(r29)
    stw r0, 0x10(r3)
    b lbl_8025C5EC
lbl_8025C5E4:
    li r0, 0x0
    stw r0, 0x10(r3)
lbl_8025C5EC:
    stw r30, 0xc(r3)
    li r0, 0x0
    stw r0, 0x14(r3)
    lwz r0, 0x5dc(r31)
    cmpwi r0, 0x0
    bne lbl_8025C608
    stw r3, 0x5dc(r31)
lbl_8025C608:
    lwz r4, 0x5e0(r31)
    cmpwi r4, 0x0
    beq lbl_8025C618
    stw r3, 0x14(r4)
lbl_8025C618:
    stw r3, 0x5e0(r31)
    li r3, 0x0
lbl_8025C620:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: gpiProcessCallbacks
asm GPResult gpiProcessCallbacks(GPConnection* connection,
                             int blockingOperationID) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r4, 0x0
    lwz r30, 0x0(r3)
    mr r25, r3
    mr r26, r4
    beq lbl_8025C9B8
    lwz r29, 0x5dc(r30)
    li r0, 0x0
    lwz r28, 0x5e0(r30)
    li r27, 0x0
    mr r4, r29
    stw r0, 0x5dc(r30)
    stw r0, 0x5e0(r30)
    b lbl_8025C984
lbl_8025C934:
    lwz r0, 0x10(r4)
    lwz r31, 0x14(r4)
    cmpw r0, r26
    beq lbl_8025C950
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_8025C97C
lbl_8025C950:
    cmpwi r27, 0x0
    beq lbl_8025C960
    stw r31, 0x14(r27)
    b lbl_8025C964
lbl_8025C960:
    mr r29, r31
lbl_8025C964:
    cmplw r28, r4
    bne lbl_8025C970
    mr r28, r27
lbl_8025C970:
    mr r3, r25
    bl gpiCallCallback
    b lbl_8025C980
lbl_8025C97C:
    mr r27, r4
lbl_8025C980:
    mr r4, r31
lbl_8025C984:
    cmpwi r4, 0x0
    bne lbl_8025C934
    lwz r0, 0x5dc(r30)
    cmpwi r0, 0x0
    beq lbl_8025C9A8
    lwz r3, 0x5e0(r30)
    stw r29, 0x14(r3)
    stw r28, 0x5e0(r30)
    b lbl_8025C9B0
lbl_8025C9A8:
    stw r29, 0x5dc(r30)
    stw r28, 0x5e0(r30)
lbl_8025C9B0:
    li r3, 0x0
    b lbl_8025C9F4
lbl_8025C9B8:
    li r31, 0x0
    b lbl_8025C9E4
lbl_8025C9C0:
    stw r31, 0x5dc(r30)
    stw r31, 0x5e0(r30)
    b lbl_8025C9DC
lbl_8025C9CC:
    lwz r28, 0x14(r4)
    mr r3, r25
    bl gpiCallCallback
    mr r4, r28
lbl_8025C9DC:
    cmpwi r4, 0x0
    bne lbl_8025C9CC
lbl_8025C9E4:
    lwz r4, 0x5dc(r30)
    cmpwi r4, 0x0
    bne lbl_8025C9C0
    li r3, 0x0
lbl_8025C9F4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
