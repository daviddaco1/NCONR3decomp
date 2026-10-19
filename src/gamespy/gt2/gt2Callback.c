/*
GameSpy GT2 SDK
Dan "Mr. Pants" Schoenblum
dan@gamespy.com

Copyright 2002 GameSpy Industries, Inc

devsupport@gamespy.com
*/

#include "gt2Callback.h"
#include "gt2Socket.h"

/*********************
** SOCKET CALLBACKS **
*********************/

GT2Bool gti2SocketErrorCallback(GT2Socket socket) {
  assert(socket);
  if (!socket)
    return GT2True;

  if (!socket->socketErrorCallback)
    return GT2True;

  socket->callbackLevel++;

  socket->socketErrorCallback(socket);

  socket->callbackLevel--;

  // check if the socket should be closed
  if (socket->close && !socket->callbackLevel) {
    gti2CloseSocket(socket);
    return GT2False;
  }

  return GT2True;
}

GT2Bool gti2ConnectAttemptCallback(GT2Socket socket, GT2Connection connection,
                                   unsigned int ip, unsigned short port,
                                   int latency, GT2Byte* message, int len) {
  assert(socket && connection);
  if (!socket || !connection)
    return GT2True;

  if (!socket->connectAttemptCallback)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  socket->callbackLevel++;
  connection->callbackLevel++;

  socket->connectAttemptCallback(socket, connection, ip, port, latency, message,
                                 len);

  socket->callbackLevel--;
  connection->callbackLevel--;

  // check if the socket should be closed
  if (socket->close && !socket->callbackLevel) {
    gti2CloseSocket(socket);
    return GT2False;
  }

  return GT2True;
}

/*************************
** CONNECTION CALLBACKS **
*************************/

GT2Bool gti2ConnectedCallback(GT2Connection connection, GT2Result result,
                              GT2Byte* message, int len) {
  assert(connection);
  if (!connection)
    return GT2True;

  // store the result
  connection->connectionResult = result;

  if (!connection->callbacks.connected)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  connection->callbackLevel++;
  connection->socket->callbackLevel++;

  connection->callbacks.connected(connection, result, message, len);

  connection->callbackLevel--;
  connection->socket->callbackLevel--;

  // check if the socket should be closed
  if (connection->socket->close && !connection->socket->callbackLevel) {
    gti2CloseSocket(connection->socket);
    return GT2False;
  }

  return GT2True;
}

GT2Bool gti2ReceivedCallback(GT2Connection connection, GT2Byte* message,
                             int len, GT2Bool reliable) {
  assert(connection);
  if (!connection)
    return GT2True;

  if (!connection->callbacks.received)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  connection->callbackLevel++;
  connection->socket->callbackLevel++;

  connection->callbacks.received(connection, message, len, reliable);

  connection->callbackLevel--;
  connection->socket->callbackLevel--;

  // check if the socket should be closed
  if (connection->socket->close && !connection->socket->callbackLevel) {
    gti2CloseSocket(connection->socket);
    return GT2False;
  }

  return GT2True;
}

GT2Bool gti2ClosedCallback(GT2Connection connection, GT2CloseReason reason) {
  assert(connection);
  if (!connection)
    return GT2True;

  if (!connection->callbacks.closed)
    return GT2True;

  connection->callbackLevel++;
  connection->socket->callbackLevel++;

  connection->callbacks.closed(connection, reason);

  connection->callbackLevel--;
  connection->socket->callbackLevel--;

  // check if the socket should be closed
  if (connection->socket->close && !connection->socket->callbackLevel) {
    gti2CloseSocket(connection->socket);
    return GT2False;
  }

  return GT2True;
}

GT2Bool gti2PingCallback(GT2Connection connection, int latency) {
  assert(connection);
  if (!connection)
    return GT2True;

  if (!connection->callbacks.ping)
    return GT2True;

  connection->callbackLevel++;
  connection->socket->callbackLevel++;

  connection->callbacks.ping(connection, latency);

  connection->callbackLevel--;
  connection->socket->callbackLevel--;

  // check if the socket should be closed
  if (connection->socket->close && !connection->socket->callbackLevel) {
    gti2CloseSocket(connection->socket);
    return GT2False;
  }

  return GT2True;
}

/*********************
** FILTER CALLBACKS **
*********************/

GT2Bool gti2SendFilterCallback(GT2Connection connection, int filterID,
                               const GT2Byte* message, int len,
                               GT2Bool reliable) {
  gt2SendFilterCallback* callback;

  assert(connection);
  if (!connection)
    return GT2True;

  callback =
      (gt2SendFilterCallback*)ArrayNth(connection->sendFilters, filterID);
  if (!callback)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  connection->callbackLevel++;
  connection->socket->callbackLevel++;

  (*callback)(connection, filterID, message, len, reliable);

  connection->callbackLevel--;
  connection->socket->callbackLevel--;

  // check if the socket should be closed
  if (connection->socket->close && !connection->socket->callbackLevel) {
    gti2CloseSocket(connection->socket);
    return GT2False;
  }

  return GT2True;
}

GT2Bool gti2ReceiveFilterCallback(GT2Connection connection, int filterID,
                                  GT2Byte* message, int len, GT2Bool reliable) {
  gt2ReceiveFilterCallback* callback;

  assert(connection);
  if (!connection)
    return GT2True;

  callback =
      (gt2ReceiveFilterCallback*)ArrayNth(connection->receiveFilters, filterID);
  if (!callback)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  connection->callbackLevel++;
  connection->socket->callbackLevel++;

  (*callback)(connection, filterID, message, len, reliable);

  connection->callbackLevel--;
  connection->socket->callbackLevel--;

  // check if the socket should be closed
  if (connection->socket->close && !connection->socket->callbackLevel) {
    gti2CloseSocket(connection->socket);
    return GT2False;
  }

  return GT2True;
}

/*******************
** DUMP CALLBACKS **
*******************/

GT2Bool gti2DumpCallback(GT2Socket socket, GT2Connection connection,
                         unsigned int ip, unsigned short port, GT2Bool reset,
                         const GT2Byte* message, int len, GT2Bool send) {
  gt2DumpCallback callback;

  assert(socket);
  if (!socket)
    return GT2True;

  if (send)
    callback = socket->sendDumpCallback;
  else
    callback = socket->receiveDumpCallback;

  if (!callback)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  socket->callbackLevel++;
  if (connection)
    connection->callbackLevel++;

  callback(socket, connection, ip, port, reset, message, len);

  socket->callbackLevel--;
  if (connection)
    connection->callbackLevel--;

  // check if the socket should be closed
  if (socket->close && !socket->callbackLevel) {
    gti2CloseSocket(socket);
    return GT2False;
  }

  return GT2True;
}

/*****************************
** SOCKET SHARING CALLBACKS **
*****************************/

GT2Bool gti2UnrecognizedMessageCallback(GT2Socket socket, unsigned int ip,
                                        unsigned short port, GT2Byte* message,
                                        int len, GT2Bool* handled) {
  *handled = GT2False;

  assert(socket);
  if (!socket)
    return GT2True;

  if (!socket->unrecognizedMessageCallback)
    return GT2True;

  // check for an empty message
  if (!len || !message) {
    message = NULL;
    len = 0;
  }

  socket->callbackLevel++;

  *handled =
      socket->unrecognizedMessageCallback(socket, ip, port, message, len);

  socket->callbackLevel--;

  // check if the socket should be closed
  if (socket->close && !socket->callbackLevel) {
    gti2CloseSocket(socket);
    return GT2False;
  }

  return GT2True;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_80267074();

// asm_to_cpp: fn_80267074
asm void fn_80267074() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_802670A0
    li r3, 0x1
    b lbl_80267158
lbl_802670A0:
    cmpwi r10, 0x0
    beq lbl_802670B0
    lwz r12, 0x28(r3)
    b lbl_802670B4
lbl_802670B0:
    lwz r12, 0x2c(r3)
lbl_802670B4:
    cmpwi r12, 0x0
    bne lbl_802670C4
    li r3, 0x1
    b lbl_80267158
lbl_802670C4:
    cmpwi r9, 0x0
    beq lbl_802670D4
    cmpwi r8, 0x0
    bne lbl_802670DC
lbl_802670D4:
    li r8, 0x0
    li r9, 0x0
lbl_802670DC:
    lwz r10, 0x1c(r3)
    cmpwi r4, 0x0
    addi r0, r10, 0x1
    stw r0, 0x1c(r3)
    beq lbl_802670FC
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
lbl_802670FC:
    mr r3, r30
    mr r4, r31
    mtctr r12
    bctrl
    lwz r3, 0x1c(r30)
    cmpwi r31, 0x0
    subi r0, r3, 0x1
    stw r0, 0x1c(r30)
    beq lbl_8026712C
    lwz r3, 0x24(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
lbl_8026712C:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_80267154
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    bne lbl_80267154
    mr r3, r30
    bl gti2CloseSocket
    li r3, 0x0
    b lbl_80267158
lbl_80267154:
    li r3, 0x1
lbl_80267158:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
