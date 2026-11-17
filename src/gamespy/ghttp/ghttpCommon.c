/*
GameSpy GHTTP SDK
Dan "Mr. Pants" Schoenblum
dan@gamespy.com

Copyright 1999-2007 GameSpy Industries, Inc

devsupport@gamespy.com
*/

#include "ghttpCommon.h"

// Disable compiler warnings for issues that are unavoidable.
/////////////////////////////////////////////////////////////
#if defined(_MSC_VER) // DevStudio
// Level4, "conditional expression is constant".
// Occurs with use of the MS provided macro FD_SET
#pragma warning(disable : 4127)
#endif // _MSC_VER

// Proxy server.
////////////////
char* ghiProxyAddress;
unsigned short ghiProxyPort;

// Throttle settings.
/////////////////////
int ghiThrottleBufferSize = 125;
gsi_time ghiThrottleTimeDelay = 250;

// Number of connections
/////////////////////

// Creates the ghttp lock.
//////////////////////////
void ghiCreateLock(void) {}

// Frees the ghttp lock.
////////////////////////
void ghiFreeLock(void) {}

// Locks the ghttp lock.
////////////////////////
void ghiLock(void) {}

// Unlocks the ghttp lock.
//////////////////////////
void ghiUnlock(void) {}

// Reads encrypted data from decodeBuffer
// Appends decrypted data to recvBuffer
// Returns GHTTPFalse if there was a fatal error
////////////////////////////////////////////////
GHTTPBool ghiDecryptReceivedData(struct GHIConnection* connection) {
  // Decrypt data from decodeBuffer to recvBuffer
  GHIEncryptionResult aResult = GHIEncryptionResult_None;

  // data to be decrypted
  char* aReadPos = NULL;
  char* aWritePos = NULL;
  int aReadLen = 0;
  int aWriteLen = 0;

  do {
    // Call the decryption func
    do {
      aReadPos = connection->decodeBuffer.data + connection->decodeBuffer.pos;
      aReadLen = connection->decodeBuffer.len - connection->decodeBuffer.pos;
      aWritePos = connection->recvBuffer.data + connection->recvBuffer.len;
      aWriteLen =
          connection->recvBuffer.size -
          connection->recvBuffer.len; // the amount of room in recvbuffer

      aResult = (connection->encryptor.mDecryptFunc)(
          connection, &connection->encryptor, aReadPos, &aReadLen, aWritePos,
          &aWriteLen);
      if (aResult == GHIEncryptionResult_BufferTooSmall) {
        // Make some more room
        if (GHTTPFalse == ghiResizeBuffer(&connection->recvBuffer,
                                          connection->recvBuffer.sizeIncrement))
          return GHTTPFalse; // error
      } else if (aResult == GHIEncryptionResult_Error) {
        return GHTTPFalse;
      }
    } while (aResult == GHIEncryptionResult_BufferTooSmall && aWriteLen == 0);

    // Adjust GHIBuffer sizes so they account for transfered data
    if (aReadLen > connection->decodeBuffer.len) {
      gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Misc, GSIDebugLevel_HotError,
                    "ghiDecryptReceivedData read past the end of "
                    "connection->decodeBuffer! (%d\\%d bytes)\r\n",
                    aReadLen, connection->decodeBuffer.len);
      return GHTTPFalse;
    }

    connection->decodeBuffer.pos += aReadLen;
    connection->recvBuffer.len += aWriteLen;

  } while (aWriteLen > 0);

  // Discard data from the decodedBuffer in chunks
  if (connection->decodeBuffer.pos > 0xFF) {
    int bytesToKeep =
        connection->decodeBuffer.len - connection->decodeBuffer.pos;
    if (bytesToKeep == 0)
      ghiResetBuffer(&connection->decodeBuffer);
    else {
      memmove(connection->decodeBuffer.data,
              connection->decodeBuffer.data + connection->decodeBuffer.pos,
              (size_t)bytesToKeep);
      connection->decodeBuffer.pos = 0;
      connection->decodeBuffer.len = bytesToKeep;
    }
  }

  return GHTTPTrue;
}

// Receive some data.
/////////////////////
#ifdef NON_MATCHING
GHIRecvResult ghiDoReceive(GHIConnection* connection, char buffer[],
                           int* bufferLen) {
  int rcode;
  int socketError;
  int len;

  // How much to try and receive.
  ///////////////////////////////
  len = (*bufferLen - 1);

  // Are we throttled?
  ////////////////////
  if (connection->throttle) {
    unsigned long now;

    // Don't receive too often.
    ///////////////////////////
    now = current_time();
    if (now < (connection->lastThrottleRecv + ghiThrottleTimeDelay))
      return GHINoData;

    // Update the receive time.
    ///////////////////////////
    connection->lastThrottleRecv = (unsigned int)now;

    // Don't receive too much.
    //////////////////////////
    len = min(len, ghiThrottleBufferSize);
  }

  // Receive some data.
  /////////////////////
  if (connection->encryptor.mEngine != GHTTPEncryptionEngine_None &&
      connection->encryptor.mSessionEstablished == GHTTPTrue &&
      connection->encryptor.mEncryptOnSend == GHTTPTrue) {
    GHIEncryptionResult result;
    int recvLength = len;

    result = ghiEncryptorSslDecryptRecv(connection, &connection->encryptor,
                                        buffer, &recvLength);
    if (result == GHIEncryptionResult_Success)
      rcode = recvLength;
    else
      rcode = -1; // signal termination of connection
  } else {
    rcode = recv(connection->socket, buffer, len, 0);
  }

  // There was an error.
  //////////////////////
  if (gsiSocketIsError(rcode)) {
    // Get the error code.
    //////////////////////
    socketError = GOAGetLastError(connection->socket);

    // Check for a closed connection.
    /////////////////////////////////
    if (socketError == WSAENOTCONN) {
      connection->connectionClosed = GHTTPTrue;
      return GHIConnClosed;
    }

    // Check for nothing waiting.
    /////////////////////////////
    if ((socketError == WSAEWOULDBLOCK) || (socketError == WSAEINPROGRESS) ||
        (socketError == WSAETIMEDOUT))
      return GHINoData;

    // There was a real error.
    //////////////////////////
    connection->completed = GHTTPTrue;
    connection->result = GHTTPSocketFailed;
    connection->socketError = socketError;
    connection->connectionClosed = GHTTPTrue;

    return GHIError;
  }

  // The connection was closed.
  /////////////////////////////
  if (rcode == 0) {
    connection->connectionClosed = GHTTPTrue;
    return GHIConnClosed;
  }

  // Cap the buffer.
  //////////////////
  buffer[rcode] = '\0';
  *bufferLen = rcode;

  // gsDebugFormat(GSIDebugCat_HTTP, GSIDebugType_Network,
  // GSIDebugLevel_RawDump,
  //               "Received %d bytes\n", rcode);

  // Notify app.
  //////////////
  return GHIRecvData;
}
#else
GHIRecvResult ghiDoReceive(GHIConnection* connection, char buffer[], int* bufferLen);
#endif

// Re-enable previously disabled compiler warnings
///////////////////////////////////////////////////
#if defined(_MSC_VER)
#pragma warning(default : 4127)
#endif // _MSC_VER
