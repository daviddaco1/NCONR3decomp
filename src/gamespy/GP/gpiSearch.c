/*
gpiSearch.c
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
/////////
// Search Manager Address.
//////////////////////////
#define GPI_SEARCH_MANAGER_NAME "gpsp." GSI_DOMAIN_NAME
#define GPI_SEARCH_MANAGER_PORT 29901

// GLOBALS
/////////
char GPSearchManagerHostname[64] = GPI_SEARCH_MANAGER_NAME;
// char GPSearchManagerHostname[64] = "localhost";

// FUNCTIONS
///////////
static GPResult gpiStartProfileSearch(GPConnection* connection,
                                      GPIOperation* operation) {
  GPISearchData* data = (GPISearchData*)operation->data;
  int rcode;
  struct sockaddr_in address;
  struct hostent* host;

  // Initialize the buffer.
  /////////////////////////
  data->inputBuffer.size = 4096;
  data->inputBuffer.buffer =
      (char*)gsimalloc((unsigned int)data->inputBuffer.size + 1);
  if (data->inputBuffer.buffer == NULL)
    Error(connection, GP_MEMORY_ERROR, "Out of memory.");

  // Create the socket.
  /////////////////////
  data->sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (data->sock == INVALID_SOCKET)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                       "There was an error creating a socket.");

  // Make it non-blocking.
  ////////////////////////
  rcode = SetSockBlocking(data->sock, 0);
  if (rcode == 0)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                       "There was an error making a socket non-blocking.");

  // Bind the socket.
  ///////////////////
  /*
  memset(&address, 0, sizeof(address));
  address.sin_family = AF_INET;
  rcode = bind(data->sock, (struct sockaddr *)&address, sizeof(struct
  sockaddr_in)); if (gsiSocketIsError(rcode)) CallbackFatalError(connection,
  GP_NETWORK_ERROR, GP_NETWORK, "There was an error binding a socket.");
  */

  // Get the server host.
  ///////////////////////
  host = gethostbyname(GPSearchManagerHostname);
  if (host == NULL)
    CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                       "Could not resolve search mananger host name.");

  // Connect the socket.
  //////////////////////
  memset(&address, 0, sizeof(address));
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = *(unsigned int*)host->h_addr_list[0];
  assert(address.sin_addr.s_addr != 0);
  address.sin_port = htons(GPI_SEARCH_MANAGER_PORT);
  rcode = connect(data->sock, (struct sockaddr*)&address,
                  sizeof(struct sockaddr_in));
  if (gsiSocketIsError(rcode)) {
    int error = GOAGetLastError(data->sock);
    if ((error != WSAEWOULDBLOCK) && (error != WSAEINPROGRESS) &&
        (error != WSAETIMEDOUT)) {
      CallbackFatalError(connection, GP_NETWORK_ERROR, GP_NETWORK,
                         "There was an error connecting a socket.");
    }
  }

  // We're waiting for the connect to complete.
  /////////////////////////////////////////////
  operation->state = GPI_CONNECTING;
  data->searchStartTime = current_time();
  return GP_NO_ERROR;
}

static GPResult gpiInitSearchData(GPConnection* connection,
                                  GPISearchData** searchData, int type) {
  GPISearchData* data;

  // Init the data.
  /////////////////
  data = (GPISearchData*)gsimalloc(sizeof(GPISearchData));
  if (data == NULL)
    Error(connection, GP_MEMORY_ERROR, "Out of memory.");
  memset(data, 0, sizeof(GPISearchData));
  data->type = type;
  data->sock = INVALID_SOCKET;
  data->inputBuffer.buffer = NULL;
  data->inputBuffer.len = 0;
  data->inputBuffer.pos = 0;
  data->inputBuffer.size = 0;
  data->outputBuffer.len = 0;
  data->outputBuffer.pos = 0;
  data->outputBuffer.size = 4096;
  data->outputBuffer.buffer =
      (char*)gsimalloc((unsigned int)data->outputBuffer.size + 1);
  if (data->outputBuffer.buffer == NULL)
    Error(connection, GP_MEMORY_ERROR, "Out of memory.");
  data->processing = GPIFalse;
  data->remove = GPIFalse;

  *searchData = data;

  return GP_NO_ERROR;
}

static GPResult gpiStartSearch(GPConnection* connection, GPISearchData* data,
                               GPEnum blocking, GPCallback callback,
                               void* param) {
  GPIOperation* operation;
  GPIConnection* iconnection = (GPIConnection*)*connection;

  // One more search.
  ///////////////////
  iconnection->numSearches++;

  // Create a new operation.
  //////////////////////////
  CHECK_RESULT(gpiAddOperation(connection, GPI_PROFILE_SEARCH, data, &operation,
                               blocking, callback, param));

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartProfileSearch(connection, operation));

  // Process it if blocking.
  //////////////////////////
  if (operation->blocking)
    CHECK_RESULT(gpiProcess(connection, operation->id));

  return GP_NO_ERROR;
}

GPResult gpiProfileSearch(GPConnection* connection,
                          const char nick[GP_NICK_LEN],
                          const char uniquenick[GP_UNIQUENICK_LEN],
                          const char email[GP_EMAIL_LEN],
                          const char firstname[GP_FIRSTNAME_LEN],
                          const char lastname[GP_LASTNAME_LEN], int icquin,
                          int skip, GPEnum blocking, GPCallback callback,
                          void* param) {
  GPISearchData* data;

  // Error check.
  ///////////////
  if ((nick == NULL) || (*nick == '\0'))
    if ((email == NULL) || (*email == '\0'))
      if ((firstname == NULL) || (*firstname == '\0'))
        if ((lastname == NULL) || (*lastname == '\0'))
          if (icquin == 0)
            if ((uniquenick == NULL) || (*uniquenick == '\0'))
              Error(connection, GP_PARAMETER_ERROR, "No search criteria.");

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_PROFILE));

  // Fill in the data.
  ////////////////////
  if (nick == NULL)
    data->nick[0] = '\0';
  else
    strzcpy(data->nick, nick, GP_NICK_LEN);
  if (uniquenick == NULL)
    data->uniquenick[0] = '\0';
  else
    strzcpy(data->uniquenick, uniquenick, GP_UNIQUENICK_LEN);
  if (email == NULL)
    data->email[0] = '\0';
  else
    strzcpy(data->email, email, GP_EMAIL_LEN);
  _strlwr(data->email);
  if (firstname == NULL)
    data->firstname[0] = '\0';
  else
    strzcpy(data->firstname, firstname, GP_FIRSTNAME_LEN);
  if (lastname == NULL)
    data->lastname[0] = '\0';
  else
    strzcpy(data->lastname, lastname, GP_LASTNAME_LEN);
  data->icquin = icquin;
  if (skip < 0)
    skip = 0;
  data->skip = skip;

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

/*
GPResult gpiProfileSearchUniquenick(GPConnection* connection,
                                    const char uniquenick[GP_UNIQUENICK_LEN],
                                    const int namespaceIDs[], int numNamespaces,
                                    GPEnum blocking, GPCallback callback,
                                    void* param) {
  GPISearchData* data;

  // Error check.
  ///////////////
  if ((uniquenick == NULL) || (*uniquenick == '\0'))
    Error(connection, GP_PARAMETER_ERROR, "No search criteria.");

  // Init the data.
  /////////////////
  CHECK_RESULT(
      gpiInitSearchData(connection, &data, GPI_SEARCH_PROFILE_UNIQUENICK));

  // Fill in the data.
  ////////////////////
  strzcpy(data->uniquenick, uniquenick, GP_UNIQUENICK_LEN);
  if ((namespaceIDs != NULL) && (numNamespaces > 0)) {
    data->numNamespaces = min(numNamespaces, GP_MAX_NAMESPACEIDS);
    memcpy(data->namespaceIDs, namespaceIDs,
           sizeof(namespaceIDs[0]) * data->numNamespaces);
  } else {
    data->numNamespaces = 0;
  }

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}
*/

GPResult gpiIsValidEmail(GPConnection* connection,
                         const char email[GP_EMAIL_LEN], GPEnum blocking,
                         GPCallback callback, void* param) {
  GPISearchData* data;

  // Error check.
  ///////////////
  if ((email == NULL) || (*email == '\0') || (strlen(email) >= GP_EMAIL_LEN))
    Error(connection, GP_PARAMETER_ERROR, "Invalid e-mail.");

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_IS_VALID));

  // Fill in the data.
  ////////////////////
  strzcpy(data->email, email, GP_EMAIL_LEN);
  _strlwr(data->email);

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiGetUserNicks(GPConnection* connection,
                         const char email[GP_EMAIL_LEN],
                         const char password[GP_PASSWORD_LEN], GPEnum blocking,
                         GPCallback callback, void* param) {
  GPISearchData* data;

  // Error check.
  ///////////////
  if ((email == NULL) || (*email == '\0') || (strlen(email) >= GP_EMAIL_LEN))
    Error(connection, GP_PARAMETER_ERROR, "Invalid e-mail.");
  if ((password == NULL) || (strlen(password) >= GP_PASSWORD_LEN))
    Error(connection, GP_PARAMETER_ERROR, "Invalid password.");

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_NICKS));

  // Fill in the data.
  ////////////////////
  strzcpy(data->email, email, GP_EMAIL_LEN);
  _strlwr(data->email);
  strzcpy(data->password, password, GP_PASSWORD_LEN);

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiFindPlayers(GPConnection* connection, int productID,
                        GPEnum blocking, GPCallback callback, void* param) {
  GPISearchData* data;

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_PLAYERS));

  // Fill in the data.
  ////////////////////
  data->productID = productID;

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiCheckUser(GPConnection* connection, const char nick[GP_NICK_LEN],
                      const char email[GP_EMAIL_LEN],
                      const char password[GP_PASSWORD_LEN], GPEnum blocking,
                      GPCallback callback, void* param) {
  GPISearchData* data;

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_CHECK));

  // Fill in the data.
  ////////////////////
  strzcpy(data->email, email, GP_EMAIL_LEN);
  _strlwr(data->email);
  strzcpy(data->nick, nick, GP_NICK_LEN);
  if (password)
    strzcpy(data->password, password, GP_PASSWORD_LEN);

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiNewUser(GPConnection* connection, const char nick[GP_NICK_LEN],
                    const char uniquenick[GP_UNIQUENICK_LEN],
                    const char email[GP_EMAIL_LEN],
                    const char password[GP_PASSWORD_LEN],
                    const char cdkey[GP_CDKEY_LEN], GPEnum blocking,
                    GPCallback callback, void* param) {
  GPISearchData* data;

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_NEWUSER));

  // Fill in the data.
  ////////////////////
  strzcpy(data->email, email, GP_EMAIL_LEN);
  strzcpy(data->nick, nick, GP_NICK_LEN);
  strzcpy(data->password, password, GP_PASSWORD_LEN);
  strzcpy(data->uniquenick, uniquenick, GP_UNIQUENICK_LEN);
  if (cdkey)
    strzcpy(data->cdkey, cdkey, GP_CDKEY_LEN);

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiOthersBuddy(GPConnection* connection, GPEnum blocking,
                        GPCallback callback, void* param) {
  GPISearchData* data;

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_OTHERS_BUDDY));

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiOthersBuddyList(GPConnection* connection, int* profiles,
                            int numOfProfiles, GPEnum blocking,
                            GPCallback callback, void* param) {
  GPISearchData* data;

  CHECK_RESULT(
      gpiInitSearchData(connection, &data, GPI_SEARCH_OTHERS_BUDDY_LIST));

  data->revBuddyProfileIds = profiles;
  data->numOfRevBuddyProfiles = numOfProfiles;

  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

GPResult gpiSuggestUniqueNick(GPConnection* connection,
                              const char desirednick[GP_NICK_LEN],
                              GPEnum blocking, GPCallback callback,
                              void* param) {
  GPISearchData* data;

  // Init the data.
  /////////////////
  CHECK_RESULT(gpiInitSearchData(connection, &data, GPI_SEARCH_SUGGEST_UNIQUE));

  // Fill in the data.
  ////////////////////
  strzcpy(data->uniquenick, desirednick, GP_UNIQUENICK_LEN);

  // Start the search.
  ////////////////////
  CHECK_RESULT(gpiStartSearch(connection, data, blocking, callback, param));

  return GP_NO_ERROR;
}

static GPResult gpiProcessSearch(GPConnection* connection,
                                 GPIOperation* operation) {
  int state;
  GPISearchData* data;
  char key[512];
  char value[512];
  GPIBool done;
  int index;
  int oldIndex;
  GPIBool loop;
  GPIBool more;
  GPICallback callback;
  GPIConnection* iconnection = (GPIConnection*)*connection;
  int len;
  GPIBool connClosed;
  GPResult result;
  void* tempPtr;
  GPIBool doneParsingMatch;
  int rcode;
  int pid;
  GPProfileSearchMatch* match;
  GPUniqueMatch* uniqueNickMatch;

  // password encryption stuff
  char passwordenc[GP_PASSWORDENC_LEN];

  // Get a pointer to the data.
  /////////////////////////////
  data = (GPISearchData*)operation->data;

  // Loop if blocking.
  ////////////////////
  if (operation->blocking)
    loop = GPITrue;
  else
    loop = GPIFalse;

  if (!operation->blocking &&
      (current_time() - data->searchStartTime > GPI_SEARCH_TIMEOUT)) {
    data->remove = GPITrue;
    CallbackError(connection, GP_NETWORK_ERROR, GP_SEARCH_TIMED_OUT,
                  "The search timed out");
  }

  do {
    // Send anything that needs to be sent.
    ///////////////////////////////////////
    CHECK_RESULT(gpiSendFromBuffer(connection, data->sock, &data->outputBuffer,
                                   &connClosed, GPITrue, "SM"));

    // Is it connecting?
    ////////////////////
    if (operation->state == GPI_CONNECTING) {
      // Check the connect state.
      ///////////////////////////
      CHECK_RESULT(gpiCheckSocketConnect(connection, data->sock, &state));

      // Check for a failed attempt.
      //////////////////////////////
      if (state == GPI_DISCONNECTED)
        CallbackError(connection, GP_SERVER_ERROR, GP_SEARCH_CONNECTION_FAILED,
                      "Could not connect to the search manager.");

      // Check if finished connecting.
      ////////////////////////////////
      if (state == GPI_CONNECTED) {
        // Send a request based on type.
        ////////////////////////////////
        if (data->type == GPI_SEARCH_PROFILE) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\search\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\sesskey\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->sessKey);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\profileid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->profileid);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\namespaceid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->namespaceID);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\partnerid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->partnerID);
          if (data->nick[0] != '\0') {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\nick\\");
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    data->nick);
          }
          if (data->uniquenick[0] != '\0') {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\uniquenick\\");
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    data->uniquenick);
          }
          if (data->email[0] != '\0') {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\email\\");
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    data->email);
          }
          if (data->firstname[0] != '\0') {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\firstname\\");
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    data->firstname);
          }
          if (data->lastname[0] != '\0') {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\lastname\\");
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    data->lastname);
          }
          if (data->icquin != 0) {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\icquin\\");
            gpiAppendIntToBuffer(connection, &data->outputBuffer, data->icquin);
          }
          if (data->skip > 0) {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\skip\\");
            gpiAppendIntToBuffer(connection, &data->outputBuffer, data->skip);
          }
        } else if (data->type == GPI_SEARCH_IS_VALID) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\valid\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\email\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, data->email);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\partnerid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->partnerID);
        } else if (data->type == GPI_SEARCH_NICKS) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\nicks\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\email\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, data->email);

          gpiEncodeString(data->password, passwordenc);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\passenc\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, passwordenc);

          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\namespaceid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->namespaceID);

          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\partnerid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->partnerID);
        } else if (data->type == GPI_SEARCH_PLAYERS) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\pmatch\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\sesskey\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->sessKey);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\profileid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->profileid);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\productid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               data->productID);
        } else if (data->type == GPI_SEARCH_CHECK) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\check\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\nick\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, data->nick);
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\email\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, data->email);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\partnerid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->partnerID);
          gpiEncodeString(data->password, passwordenc);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\passenc\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, passwordenc);
        } else if (data->type == GPI_SEARCH_NEWUSER) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\newuser\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\nick\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, data->nick);
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\email\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, data->email);
          gpiEncodeString(data->password, passwordenc);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\passenc\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer, passwordenc);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\productID\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->productID);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\namespaceid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->namespaceID);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\uniquenick\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  data->uniquenick);
          if (data->cdkey[0]) {
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    "\\cdkey\\");
            gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                    data->cdkey);
          }
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\partnerid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->partnerID);
        } else if (data->type == GPI_SEARCH_OTHERS_BUDDY) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\others\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\sesskey\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->sessKey);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\profileid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->profileid);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\namespaceid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->namespaceID);
        } else if (data->type == GPI_SEARCH_OTHERS_BUDDY_LIST) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\otherslist\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\sesskey\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->sessKey);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\profileid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->profileid);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\numopids\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               data->numOfRevBuddyProfiles);
          gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\opids\\");
          if (data->revBuddyProfileIds) {
            int i;

            gpiAppendIntToBuffer(connection, &data->outputBuffer,
                                 data->revBuddyProfileIds[0]);

            for (i = 1; i < data->numOfRevBuddyProfiles; i++) {
              gpiAppendStringToBuffer(connection, &data->outputBuffer, "|");
              gpiAppendIntToBuffer(connection, &data->outputBuffer,
                                   data->revBuddyProfileIds[i]);
            }
          }
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\namespaceid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->namespaceID);
        } else if (data->type == GPI_SEARCH_SUGGEST_UNIQUE) {
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\uniquesearch\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\preferrednick\\");
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  data->uniquenick);
          gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                  "\\namespaceid\\");
          gpiAppendIntToBuffer(connection, &data->outputBuffer,
                               iconnection->namespaceID);
        } else {
          assert(0);
        }

        gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                "\\gamename\\");
        gpiAppendStringToBuffer(connection, &data->outputBuffer,
                                __GSIACGamename);
        gpiAppendStringToBuffer(connection, &data->outputBuffer, "\\final\\");

        // Update the state.
        ////////////////////
        operation->state = GPI_WAITING;
      }
    }
    // Is it waiting?
    /////////////////
    else if (operation->state == GPI_WAITING) {
      // Read from the socket.
      ////////////////////////
      result = gpiRecvToBuffer(connection, data->sock, &data->inputBuffer, &len,
                               &connClosed, "SM");
      if (result != GP_NO_ERROR) {
        if (result == GP_NETWORK_ERROR)
          CallbackError(connection, GP_NETWORK_ERROR,
                        GP_SEARCH_CONNECTION_FAILED,
                        "There was an error reading from the server.");
        return result;
      }
      if (operation->blocking &&
          (current_time() - data->searchStartTime > GPI_SEARCH_TIMEOUT)) {
        data->remove = GPITrue;
        CallbackError(connection, GP_NETWORK_ERROR, GP_SEARCH_TIMED_OUT,
                      "The search timed out");
      }
      // Is this the end of the response?
      ///////////////////////////////////
      if (strstr(data->inputBuffer.buffer, "\\final\\") != NULL) {
        // Reset the index.
        ///////////////////
        index = 0;

        // This operation is finishing up.
        //////////////////////////////////
        operation->state = GPI_FINISHING;

        // Check for an error.
        //////////////////////
        if (gpiCheckForError(connection, data->inputBuffer.buffer, GPITrue)) {
          data->remove = GPITrue;
          return GP_SERVER_ERROR;
        }

        // Process it based on type.
        ////////////////////////////
        if (data->type == GPI_SEARCH_PROFILE) {
          GPProfileSearchResponseArg arg;
          // Start setting up the arg.
          ////////////////////////////
          arg.result = GP_NO_ERROR;
          arg.numMatches = 0;
          arg.matches = NULL;
          arg.more = GP_DONE;

          // Parse the message.
          /////////////////////
          done = GPIFalse;
          do {
            // Read the next key and value.
            ///////////////////////////////
            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));

            // Is the list done?
            ////////////////////
            if (strcmp(key, "bsrdone") == 0) {
              // Check for more.
              //////////////////
              CHECK_RESULT(gpiReadKeyAndValue(
                  connection, data->inputBuffer.buffer, &index, key, value));
              if (strcmp(key, "more") == 0) {
                // Make sure there are actually more.
                /////////////////////////////////////
                if (strcmp(value, "0") != 0)
                  arg.more = GP_MORE;
              }

              // Done.
              ////////
              done = GPITrue;
            } else if (strcmp(key, "bsr") == 0) {
              // Create a new match.
              //////////////////////
              arg.numMatches++;
              arg.matches = (GPProfileSearchMatch*)gsirealloc(
                  arg.matches, sizeof(GPProfileSearchMatch) * arg.numMatches);
              if (arg.matches == NULL)
                Error(connection, GP_MEMORY_ERROR, "Out of memory.");
              match = &arg.matches[arg.numMatches - 1];
              memset(match, 0, sizeof(GPProfileSearchMatch));

              // Get the profile id.
              //////////////////////
              match->profile = atoi(value);

              // PANTS|05.16.00
              // Changed to be order independent, and ignore unrecognized keys.
              /////////////////////////////////////////////////////////////////

              // Read key/value pairs.
              ////////////////////////
              doneParsingMatch = GPIFalse;
              do {
                // Read the next key/value.
                ///////////////////////////
                oldIndex = index;
                CHECK_RESULT(gpiReadKeyAndValue(
                    connection, data->inputBuffer.buffer, &index, key, value));

                // Set the field based on the key.
                //////////////////////////////////
                if (strcmp(key, "nick") == 0)
                  strzcpy(match->nick, value, GP_NICK_LEN);
                else if (strcmp(key, "uniquenick") == 0)
                  strzcpy(match->uniquenick, value, GP_UNIQUENICK_LEN);
                // else if (strcmp(key, "namespaceid") == 0)
                //   match->namespaceID = atoi(value);
                else if (strcmp(key, "firstname") == 0)
                  strzcpy(match->firstname, value, GP_FIRSTNAME_LEN);
                else if (strcmp(key, "lastname") == 0)
                  strzcpy(match->lastname, value, GP_LASTNAME_LEN);
                else if (strcmp(key, "email") == 0)
                  strzcpy(match->email, value, GP_EMAIL_LEN);
                else if ((strcmp(key, "bsr") == 0) ||
                         (strcmp(key, "bsrdone") == 0)) {
                  doneParsingMatch = GPITrue;
                  index = oldIndex;
                }
              } while (!doneParsingMatch);
            } else {
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");
            }
          } while (!done);

          // Save the more state.
          ///////////////////////
          more = (GPIBool)arg.more;

          // Get the callback.
          ////////////////////
          callback = operation->callback;

          // Call the callback.
          /////////////////////
          if (callback.callback != NULL)
            callback.callback(connection, &arg, callback.param);

          // Start a new operation if they want more matches.
          ///////////////////////////////////////////////////
          if ((more == GP_MORE) && (arg.more == GP_MORE))
            CHECK_RESULT(gpiProfileSearch(
                connection, data->nick, data->uniquenick, data->email,
                data->firstname, data->lastname, data->icquin,
                arg.numMatches + data->skip, (GPEnum)operation->blocking,
                operation->callback.callback, operation->callback.param));

          // We're done.
          //////////////
          freeclear(arg.matches);
        } else if (data->type == GPI_SEARCH_IS_VALID) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPIsValidEmailResponseArg* arg;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "vr") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");

            // Setup the arg.
            /////////////////
            arg = (GPIsValidEmailResponseArg*)gsimalloc(
                sizeof(GPIsValidEmailResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = GP_NO_ERROR;
            strzcpy(arg->email, data->email, GP_EMAIL_LEN);
            if (value[0] == '0')
              arg->isValid = GP_INVALID;
            else
              arg->isValid = GP_VALID;

            // Add the callback.
            ////////////////////
            CHECK_RESULT(
                gpiAddCallback(connection, callback, arg, operation, 0));
          }
        } else if (data->type == GPI_SEARCH_NICKS) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPGetUserNicksResponseArg* arg;

            // Setup the arg.
            /////////////////
            arg = (GPGetUserNicksResponseArg*)gsimalloc(
                sizeof(GPGetUserNicksResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = GP_NO_ERROR;
            strcpy(arg->email, data->email);
            arg->numNicks = 0;
            arg->nicks = NULL;
            arg->uniquenicks = NULL;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "nr") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");

            // Get the nicks.
            /////////////////
            done = GPIFalse;
            do {
              CHECK_RESULT(gpiReadKeyAndValue(
                  connection, data->inputBuffer.buffer, &index, key, value));
              if (strcmp(key, "nick") == 0) {
                // Add it.
                //////////
                tempPtr =
                    gsirealloc(arg->nicks, sizeof(char*) * (arg->numNicks + 1));
                if (tempPtr == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                arg->nicks = (char**)tempPtr;
                tempPtr = gsimalloc(GP_NICK_LEN);
                if (tempPtr == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                arg->nicks[arg->numNicks] = (gsi_char*)tempPtr;
                strzcpy(arg->nicks[arg->numNicks], value, GP_NICK_LEN);
                arg->numNicks++;
              } else if (strcmp(key, "uniquenick") == 0) {
                if (arg->numNicks <= 0)
                  continue;

                // Add it.
                //////////
                tempPtr =
                    gsirealloc(arg->uniquenicks, sizeof(char*) * arg->numNicks);
                if (tempPtr == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                arg->uniquenicks = (char**)tempPtr;
                tempPtr = gsimalloc(GP_UNIQUENICK_LEN);
                if (tempPtr == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                arg->uniquenicks[arg->numNicks - 1] = (gsi_char*)tempPtr;
                strzcpy(arg->uniquenicks[arg->numNicks - 1], value,
                        GP_UNIQUENICK_LEN);
              } else if (strcmp(key, "ndone") == 0) {
                // Done.
                ////////
                done = GPITrue;
              } else {
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              }
            } while (!done);

            // Do it.
            /////////
            CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation,
                                        GPI_ADD_NICKS));
          }
        } else if (data->type == GPI_SEARCH_PLAYERS) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPFindPlayersResponseArg* arg;
            GPFindPlayerMatch* match;

            // Start setting up the arg.
            ////////////////////////////
            arg = (GPFindPlayersResponseArg*)gsimalloc(
                sizeof(GPFindPlayersResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->productID = data->productID;
            arg->result = GP_NO_ERROR;
            arg->numMatches = 0;
            arg->matches = NULL;

            // Parse the message.
            /////////////////////
            done = GPIFalse;
            do {
              // Read the next key and value.
              ///////////////////////////////
              CHECK_RESULT(gpiReadKeyAndValue(
                  connection, data->inputBuffer.buffer, &index, key, value));

              // Is the list done?
              ////////////////////
              if (strcmp(key, "psrdone") == 0) {
                // Done.
                ////////
                done = GPITrue;
              } else if (strcmp(key, "psr") == 0) {
                // Create a new match.
                //////////////////////
                arg->numMatches++;
                arg->matches = (GPFindPlayerMatch*)gsirealloc(
                    arg->matches, sizeof(GPFindPlayerMatch) * arg->numMatches);
                if (arg->matches == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                match = &arg->matches[arg->numMatches - 1];
                memset(match, 0, sizeof(GPFindPlayerMatch));
                match->status = GP_ONLINE;

                // Get the profile id.
                //////////////////////
                match->profile = atoi(value);

                // PANTS|05.16.00
                // Changed to be order independent, and ignore unrecognized
                // keys.
                /////////////////////////////////////////////////////////////////

                // Read key/value pairs.
                ////////////////////////
                doneParsingMatch = GPIFalse;
                do {
                  // Read the next key/value.
                  ///////////////////////////
                  oldIndex = index;
                  CHECK_RESULT(gpiReadKeyAndValue(connection,
                                                  data->inputBuffer.buffer,
                                                  &index, key, value));

                  // Set the field based on the key.
                  //////////////////////////////////
                  if (strcmp(key, "status") == 0)
                    strzcpy(match->statusString, value, GP_STATUS_STRING_LEN);
                  else if (strcmp(key, "nick") == 0)
                    strzcpy(match->nick, value, GP_NICK_LEN);
                  if (strcmp(key, "statuscode") == 0)
                    match->status = (GPEnum)atoi(value);
                  else if ((strcmp(key, "psr") == 0) ||
                           (strcmp(key, "psrdone") == 0)) {
                    doneParsingMatch = GPITrue;
                    index = oldIndex;
                  }
                } while (!doneParsingMatch);
              } else {
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              }
            } while (!done);

            // Do it.
            /////////
            CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation,
                                        GPI_ADD_PMATCH));
          }
        } else if (data->type == GPI_SEARCH_CHECK) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPCheckResponseArg* arg;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "cur") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");

            rcode = atoi(value);
            if (rcode) {
              iconnection->errorCode = (GPErrorCode)rcode;
              pid = 0;
            } else {
              if (!gpiValueForKey(data->inputBuffer.buffer, "\\pid\\", value,
                                  sizeof(value)))
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              pid = atoi(value);
            }

            // Setup the arg.
            /////////////////
            arg = (GPCheckResponseArg*)gsimalloc(sizeof(GPCheckResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = (GPResult)rcode;
            arg->profile = pid;

            // Add the callback.
            ////////////////////
            CHECK_RESULT(
                gpiAddCallback(connection, callback, arg, operation, 0));
          }
        } else if (data->type == GPI_SEARCH_NEWUSER) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPNewUserResponseArg* arg;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "nur") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");

            rcode = atoi(value);
            if (rcode)
              iconnection->errorCode = (GPErrorCode)rcode;
            if (!gpiValueForKey(data->inputBuffer.buffer, "\\pid\\", value,
                                sizeof(value))) {
              if (rcode == 0)
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              pid = 0;
            } else
              pid = atoi(value);

            // Setup the arg.
            /////////////////
            arg =
                (GPNewUserResponseArg*)gsimalloc(sizeof(GPNewUserResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = (GPResult)rcode;
            arg->profile = pid;

            // Add the callback.
            ////////////////////
            CHECK_RESULT(
                gpiAddCallback(connection, callback, arg, operation, 0));
          }
        } else if (data->type == GPI_SEARCH_OTHERS_BUDDY) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPGetReverseBuddiesResponseArg* arg;

            // Setup the arg.
            /////////////////
            arg = (GPGetReverseBuddiesResponseArg*)gsimalloc(
                sizeof(GPGetReverseBuddiesResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = GP_NO_ERROR;
            arg->numProfiles = 0;
            arg->profiles = NULL;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "others") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");

            // Get the profiles.
            /////////////////
            done = GPIFalse;
            do {
              // Read the next key and value.
              ///////////////////////////////
              CHECK_RESULT(gpiReadKeyAndValue(
                  connection, data->inputBuffer.buffer, &index, key, value));

              // Is the list done?
              ////////////////////
              if (strcmp(key, "odone") == 0) {
                // Done.
                ////////
                done = GPITrue;
              } else if (strcmp(key, "o") == 0) {
                // Add it.
                //////////
                tempPtr =
                    gsirealloc(arg->profiles, sizeof(GPProfileSearchMatch) *
                                                  (arg->numProfiles + 1));
                if (tempPtr == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                arg->profiles = (GPProfileSearchMatch*)tempPtr;
                match = &arg->profiles[arg->numProfiles];
                memset(match, 0, sizeof(GPProfileSearchMatch));
                arg->numProfiles++;

                // Get the profile id.
                //////////////////////
                match->profile = atoi(value);

                // Read key/value pairs.
                ////////////////////////
                doneParsingMatch = GPIFalse;
                do {
                  // Read the next key/value.
                  ///////////////////////////
                  oldIndex = index;
                  CHECK_RESULT(gpiReadKeyAndValue(connection,
                                                  data->inputBuffer.buffer,
                                                  &index, key, value));

                  // Set the field based on the key.
                  //////////////////////////////////
                  if (strcmp(key, "nick") == 0)
                    strzcpy(match->nick, value, GP_NICK_LEN);
                  else if (strcmp(key, "uniquenick") == 0)
                    strzcpy(match->uniquenick, value, GP_UNIQUENICK_LEN);
                  else if (strcmp(key, "first") == 0)
                    strzcpy(match->firstname, value, GP_FIRSTNAME_LEN);
                  else if (strcmp(key, "last") == 0)
                    strzcpy(match->lastname, value, GP_LASTNAME_LEN);
                  else if (strcmp(key, "email") == 0)
                    strzcpy(match->email, value, GP_EMAIL_LEN);
                  else if ((strcmp(key, "o") == 0) ||
                           (strcmp(key, "odone") == 0)) {
                    doneParsingMatch = GPITrue;
                    index = oldIndex;
                  }
                } while (!doneParsingMatch);
              } else {
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              }
            } while (!done);

            // Do it.
            /////////
            CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation,
                                        GPI_ADD_REVERSE_BUDDIES));
          }
        } else if (data->type == GPI_SEARCH_OTHERS_BUDDY_LIST) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            GPGetReverseBuddiesListResponseArg* arg;

            // Setup the arg.
            /////////////////
            arg = (GPGetReverseBuddiesListResponseArg*)gsimalloc(
                sizeof(GPGetReverseBuddiesListResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = GP_NO_ERROR;
            arg->numOfUniqueMatchs = 0;
            arg->matches = NULL;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "otherslist") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");

            // Get the profiles.
            /////////////////
            done = GPIFalse;
            do {
              // Read the next key and value.
              ///////////////////////////////
              CHECK_RESULT(gpiReadKeyAndValue(
                  connection, data->inputBuffer.buffer, &index, key, value));

              // Is the list done?
              ////////////////////
              if (strcmp(key, "oldone") == 0) {
                // Done.
                ////////
                done = GPITrue;
              } else if (strcmp(key, "o") == 0) {
                // Add it.
                //////////
                tempPtr =
                    gsirealloc(arg->matches, sizeof(GPUniqueMatch) *
                                                 (arg->numOfUniqueMatchs + 1));
                if (tempPtr == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                arg->matches = (GPUniqueMatch*)tempPtr;
                uniqueNickMatch = &arg->matches[arg->numOfUniqueMatchs];
                memset(uniqueNickMatch, 0, sizeof(GPUniqueMatch));
                arg->numOfUniqueMatchs++;

                // Get the profile id.
                //////////////////////
                uniqueNickMatch->profile = atoi(value);

                // Read key/value pairs.
                ////////////////////////
                doneParsingMatch = GPIFalse;
                do {
                  // Read the next key/value.
                  ///////////////////////////
                  oldIndex = index;
                  CHECK_RESULT(gpiReadKeyAndValue(connection,
                                                  data->inputBuffer.buffer,
                                                  &index, key, value));
                  // Set the field based on the key.
                  //////////////////////////////////
                  if (strcmp(key, "uniquenick") == 0)
                    strzcpy(uniqueNickMatch->uniqueNick, value,
                            GP_UNIQUENICK_LEN);
                  else if ((strcmp(key, "o") == 0) ||
                           (strcmp(key, "oldone") == 0)) {
                    doneParsingMatch = GPITrue;
                    index = oldIndex;
                  }
                } while (!doneParsingMatch);
              } else {
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              }
            } while (!done);

            // Do it.
            /////////
            CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation,
                                        GPI_ADD_REVERSE_BUDDIES_LIST));
          }

        } else if (data->type == GPI_SEARCH_SUGGEST_UNIQUE) {
          callback = operation->callback;
          if (callback.callback != NULL) {
            int count = 0;
            GPSuggestUniqueNickResponseArg* arg;

            // Setup the arg.
            /////////////////
            arg = (GPSuggestUniqueNickResponseArg*)gsimalloc(
                sizeof(GPSuggestUniqueNickResponseArg));
            if (arg == NULL)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");
            arg->result = GP_NO_ERROR;
            arg->numSuggestedNicks = 0;
            arg->suggestedNicks = NULL;

            CHECK_RESULT(gpiReadKeyAndValue(
                connection, data->inputBuffer.buffer, &index, key, value));
            if (strcmp(key, "us") != 0)
              CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                 "Error reading from the search server.");
            arg->numSuggestedNicks = atoi(value);

            // Allocate memory for the nick array.
            //////////////////////////////////////
            arg->suggestedNicks = (gsi_char**)gsimalloc(sizeof(gsi_char*) *
                                                        arg->numSuggestedNicks);
            if (!arg->suggestedNicks)
              Error(connection, GP_MEMORY_ERROR, "Out of memory.");

            // Get the nicks.
            /////////////////
            done = GPIFalse;
            do {
              CHECK_RESULT(gpiReadKeyAndValue(
                  connection, data->inputBuffer.buffer, &index, key, value));
              if (strcmp(key, "nick") == 0) {
                // Add it.
                //////////
                arg->suggestedNicks[count] = gsimalloc(GP_UNIQUENICK_LEN);
                if (arg->suggestedNicks[count] == NULL)
                  Error(connection, GP_MEMORY_ERROR, "Out of memory.");
                strzcpy(arg->suggestedNicks[count], value, GP_UNIQUENICK_LEN);
                count++;
              } else if (strcmp(key, "usdone") == 0) {
                // Check that the header matches the actual number of nicks.
                ////////////////////////////////////////////////////////////
                assert(count == arg->numSuggestedNicks);
                arg->numSuggestedNicks = count;

                // Done.
                ////////
                done = GPITrue;
              } else {
                CallbackFatalError(connection, GP_NETWORK_ERROR, GP_PARSE,
                                   "Error reading from the search server.");
              }
            } while (!done);

            // Do it.
            /////////
            CHECK_RESULT(gpiAddCallback(connection, callback, arg, operation,
                                        GPI_ADD_SUGGESTED_UNIQUE));
          }
        } else {
          assert(0);
        }

        // Flag the operation for removal.
        //////////////////////////////////
        data->remove = GPITrue;

        // If we're looping, stop.
        //////////////////////////
        loop = GPIFalse;
      }
    }
    // PANTS|05.23.00 - removed sleep
    // crt - added it back 6/13/00
    // PANTS|07.10.00 - only sleep if looping
    if (loop)
      msleep(10);
  } while (loop);

  return GP_NO_ERROR;
}

GPResult gpiProcessSearches(GPConnection* connection) {
  GPIConnection* iconnection = (GPIConnection*)*connection;
  GPIOperation** searchList;
  GPIOperation* operation;
  GPISearchData* data;
  GPResult result;
  int num = 0;
  int i;

  // Are there any searches?
  //////////////////////////
  if (iconnection->numSearches > 0) {
    // Alloc mem for a search list.
    ///////////////////////////////
    searchList = (GPIOperation**)gsimalloc(sizeof(GPIOperation*) *
                                           iconnection->numSearches);
    if (searchList == NULL)
      Error(connection, GP_MEMORY_ERROR, "Out of memory.");

    // Create the search list.
    //////////////////////////
    for (operation = &iconnection->operationList[0]; operation != NULL;
         operation = operation->pnext) {
      // Is this a search?
      ////////////////////
      if ((operation->type == GPI_PROFILE_SEARCH) &&
          (operation->state != GPI_FINISHING)) {
        // Is this search being processed already?
        //////////////////////////////////////////
        if (!((GPISearchData*)operation->data)->processing) {
          assert(num < iconnection->numSearches);
          searchList[num++] = operation;
          ((GPISearchData*)operation->data)->processing = GPITrue;
        }
      }
    }

    // Process the searches.
    ////////////////////////
    for (i = 0; i < num; i++) {
      result = gpiProcessSearch(connection, searchList[i]);
      if (result != GP_NO_ERROR)
        searchList[i]->result = result;
    }

    // Clear the processing flags, and remove searches that are done.
    /////////////////////////////////////////////////////////////////
    for (i = 0; i < num; i++) {
      data = ((GPISearchData*)searchList[i]->data);
      data->processing = GPIFalse;
      if (data->remove)
        gpiRemoveOperation(connection, searchList[i]);
    }

    freeclear(searchList);
  }

  return GP_NO_ERROR;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049CAE0;
extern float lbl_8049CAE8;
extern float lbl_8049CAF0;
extern float lbl_8049CAF8;
extern float lbl_8049CAFC;
extern float lbl_8049CB08;
extern float lbl_8049CB10;
extern float lbl_8049CB18;
extern float lbl_8049CB20;
extern float lbl_8049CB28;
extern float lbl_8049CB30;
extern float lbl_8049CB38;
extern float lbl_8049CB40;
extern float lbl_8049CB48;
extern float lbl_8049CB50;
extern float lbl_8049CB58;
extern float lbl_8049CB60;
extern float lbl_8049CB64;
extern float lbl_8049CB68;
extern float lbl_8049CB70;
extern float lbl_8049CB78;
extern float lbl_8049CB7C;
extern float lbl_8049CB80;
extern float lbl_8049CB88;
extern float lbl_8049CB90;
extern float lbl_8049CB94;
extern float lbl_8049CB9C;
extern float lbl_8049CBA0;
extern float lbl_8049CBA8;
extern float lbl_8049CBAC;
extern float lbl_8049CBB4;
extern float lbl_8049CBBC;
extern float lbl_8049CBC0;
extern float lbl_8049CBC8;
extern float lbl_8049CBD0;
extern float lbl_8049CBD8;
extern float lbl_8049CBDC;
extern u8 lbl_803695E4[];
extern u8 lbl_80369620[];
extern u8 lbl_803696C8[];
extern u8 lbl_8040A168[];
extern void _restgpr_15();
extern void _restgpr_23();
extern void _savegpr_15();
extern void _savegpr_23();
extern void fn_80256638();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern int fn_80263228();
extern int fn_80263290();
extern void fn_80263754();
extern int fn_80263AE4();
extern void fn_80265ED0();
extern void gpiCallErrorCallback();
extern void gpiSetError();
extern void gpiSetErrorString();

// asm_to_cpp: fn_80263228
asm int fn_80263228() {
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_80263280
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    li r4, 0x1
lbl_80263280:
    neg r0, r4
    or r0, r0, r4
    srwi r3, r0, 31
    blr
}

// asm_to_cpp: fn_80263290
asm int fn_80263290() {
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_23
    li r23, 0x0
    mr r28, r3
    stw r23, 0x8(r1)
    mr r29, r4
    li r5, 0x1
    lwz r30, 0x0(r3)
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_802632D0
    li r3, 0x4
    b lbl_80263480
lbl_802632D0:
    mr r3, r29
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    la r4, lbl_8049CAE0
    li r7, 0x200
    bl fn_80265ED0
    cmpwi r3, 0x0
    bne lbl_8026331C
    lis r5, lbl_803695E4@ha
    mr r3, r28
    addi r5, r5, lbl_803695E4@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263480
lbl_8026331C:
    addi r3, r1, 0x10
    bl atoi
    mr r24, r3
    mr r3, r29
    la r4, lbl_8049CAE8
    bl strstr
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_8026336C
    lis r5, lbl_803695E4@ha
    mr r3, r28
    addi r5, r5, lbl_803695E4@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263480
lbl_8026336C:
    lwz r3, 0x8(r1)
    addi r26, r1, 0x10
    li r31, 0x0
    li r27, 0x1
    addi r0, r3, 0x6
    stw r0, 0x8(r1)
    b lbl_80263474
lbl_80263388:
    cmpwi r31, 0x0
    bne lbl_802633DC
    addi r4, r1, 0x10
    li r5, 0x0
    b lbl_802633A8
lbl_8026339C:
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
lbl_802633A8:
    cmplwi r5, 0x200
    bge lbl_802633C8
    add r3, r25, r5
    lbz r3, 0x6(r3)
    extsb. r0, r3
    beq lbl_802633C8
    cmpwi r0, 0x2c
    bne lbl_8026339C
lbl_802633C8:
    lwz r0, 0x8(r1)
    stbx r23, r26, r5
    add r0, r0, r5
    stw r0, 0x8(r1)
    b lbl_80263428
lbl_802633DC:
    mr r3, r29
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    la r4, lbl_8049CAF0
    li r7, 0x200
    bl fn_80265ED0
    cmpwi r3, 0x0
    bne lbl_80263428
    lis r5, lbl_803695E4@ha
    mr r3, r28
    addi r5, r5, lbl_803695E4@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263480
lbl_80263428:
    addi r3, r1, 0x10
    bl atoi
    mr r4, r3
    mr r3, r28
    bl gpiProfileListAdd
    cmpwi r3, 0x0
    bne lbl_8026345C
    lis r4, lbl_80369620@ha
    mr r3, r28
    addi r4, r4, lbl_80369620@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80263480
lbl_8026345C:
    stw r27, 0x20(r3)
    addi r31, r31, 0x1
    lwz r4, 0x5d4(r30)
    stw r4, 0x24(r3)
    addi r0, r4, 0x1
    stw r0, 0x5d4(r30)
lbl_80263474:
    cmpw r31, r24
    blt lbl_80263388
    li r3, 0x0
lbl_80263480:
    addi r11, r1, 0x240
    bl _restgpr_23
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

// asm_to_cpp: fn_80263AE4
asm int fn_80263AE4() {
    nofralloc
    stwu r1, -0x540(r1)
    mflr r0
    stw r0, 0x544(r1)
    addi r11, r1, 0x540
    bl _savegpr_15
    lwz r5, 0x8(r4)
    lis r20, lbl_803696C8@ha
    lwz r30, 0x0(r3)
    mr r28, r3
    neg r0, r5
    cmpwi r5, 0x0
    or r0, r0, r5
    lwz r31, 0x4(r4)
    mr r29, r4
    addi r20, r20, lbl_803696C8@l
    srwi r18, r0, 31
    bne lbl_80263B6C
    bl current_time
    lwz r0, 0x18c(r31)
    subf r0, r0, r3
    cmplwi r0, 0xea60
    ble lbl_80263B6C
    li r0, 0x1
    mr r3, r28
    stw r0, 0x188(r31)
    addi r5, r20, 0x144
    li r4, 0xd02
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80263B6C:
    li r26, 0x600
    li r27, 0x1
    lis r21, lbl_8040A168@ha
    li r24, 0x0
    li r25, 0x601
    li r23, 0x5
    li r22, 0x4
lbl_80263B88:
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r31, 0x18
    addi r6, r1, 0x18
    li r7, 0x1
    la r8, lbl_8049CAF8
    bl gpiSendFromBuffer
    cmpwi r3, 0x0
    beq lbl_80263BB0
    b lbl_802658EC
lbl_80263BB0:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x1
    bne lbl_80264450
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r1, 0x24
    bl gpiCheckSocketConnect
    cmpwi r3, 0x0
    beq lbl_80263BD8
    b lbl_802658EC
lbl_80263BD8:
    lwz r0, 0x24(r1)
    cmpwi r0, 0x4
    bne lbl_80263C0C
    mr r3, r28
    addi r5, r20, 0x15c
    li r4, 0xd01
    bl gpiSetError
    mr r3, r28
    li r4, 0x4
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x4
    b lbl_802658EC
lbl_80263C0C:
    cmpwi r0, 0x3
    bne lbl_802658D0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_80263DE8
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x188
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    lbz r0, 0x28(r31)
    extsb. r0, r0
    beq lbl_80263CDC
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CAFC
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl gpiAppendStringToBuffer
lbl_80263CDC:
    lbz r0, 0x47(r31)
    extsb. r0, r0
    beq lbl_80263D08
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
lbl_80263D08:
    lbz r0, 0xa0(r31)
    extsb. r0, r0
    beq lbl_80263D34
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
lbl_80263D34:
    lbz r0, 0xd3(r31)
    extsb. r0, r0
    beq lbl_80263D60
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1d8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xd3
    bl gpiAppendStringToBuffer
lbl_80263D60:
    lbz r0, 0xf2(r31)
    extsb. r0, r0
    beq lbl_80263D8C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e4
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xf2
    bl gpiAppendStringToBuffer
lbl_80263D8C:
    lwz r0, 0x178(r31)
    cmpwi r0, 0x0
    beq lbl_80263DB8
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1f0
    bl gpiAppendStringToBuffer
    lwz r5, 0x178(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
lbl_80263DB8:
    lwz r0, 0x17c(r31)
    cmpwi r0, 0x0
    ble lbl_80264418
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB10
    bl gpiAppendStringToBuffer
    lwz r5, 0x17c(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263DE8:
    cmpwi r0, 0xa
    bne lbl_80263EDC
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1fc
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x20c
    bl gpiAppendStringToBuffer
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    ble lbl_80263EC8
    mr r16, r31
    li r15, 0x0
    b lbl_80263EB8
lbl_80263E88:
    cmpwi r15, 0x0
    ble lbl_80263EA0
    mr r3, r28
    addi r4, r31, 0x18
    li r5, 0x2c
    bl gpiAppendCharToBuffer
lbl_80263EA0:
    lwz r5, 0x5c(r16)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    addi r16, r16, 0x4
    addi r15, r15, 0x1
lbl_80263EB8:
    lwz r0, 0x9c(r31)
    cmpw r15, r0
    blt lbl_80263E88
    b lbl_80264418
lbl_80263EC8:
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263EDC:
    cmpwi r0, 0x2
    bne lbl_80263F38
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB18
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263F38:
    cmpwi r0, 0x3
    bne lbl_80263FE0
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB20
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    addi r3, r31, 0x111
    addi r4, r1, 0xc0
    bl gpiEncodeString
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xc0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263FE0:
    cmpwi r0, 0x4
    bne lbl_8026405C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x228
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x234
    bl gpiAppendStringToBuffer
    lwz r5, 0x180(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_8026405C:
    cmpwi r0, 0x5
    bne lbl_80264104
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB28
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CAFC
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    addi r3, r31, 0x111
    addi r4, r1, 0xc0
    bl gpiEncodeString
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xc0
    bl gpiAppendStringToBuffer
    b lbl_80264418
lbl_80264104:
    cmpwi r0, 0x6
    bne lbl_80264238
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x240
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CAFC
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    addi r3, r31, 0x111
    addi r4, r1, 0xc0
    bl gpiEncodeString
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xc0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x24c
    bl gpiAppendStringToBuffer
    lwz r5, 0x60c(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
    lbz r0, 0x130(r31)
    extsb. r0, r0
    beq lbl_80264214
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB30
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x130
    bl gpiAppendStringToBuffer
lbl_80264214:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80264238:
    cmpwi r0, 0x7
    bne lbl_802642B4
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x258
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_802642B4:
    cmpwi r0, 0x9
    bne lbl_802643C0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x264
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x274
    bl gpiAppendStringToBuffer
    lwz r5, 0x194(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB38
    bl gpiAppendStringToBuffer
    lwz r3, 0x190(r31)
    cmpwi r3, 0x0
    beq lbl_8026439C
    lwz r5, 0x0(r3)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    li r15, 0x1
    li r16, 0x4
    b lbl_80264390
lbl_80264364:
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB40
    bl gpiAppendStringToBuffer
    lwz r5, 0x190(r31)
    mr r3, r28
    addi r4, r31, 0x18
    lwzx r5, r5, r16
    bl gpiAppendIntToBuffer
    addi r16, r16, 0x4
    addi r15, r15, 0x1
lbl_80264390:
    lwz r0, 0x194(r31)
    cmpw r15, r0
    blt lbl_80264364
lbl_8026439C:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_802643C0:
    cmpwi r0, 0x8
    bne lbl_80264418
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x280
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x290
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
lbl_80264418:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2a0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r21, lbl_8040A168@l
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB48
    bl gpiAppendStringToBuffer
    stw r22, 0x14(r29)
    b lbl_802658D0
lbl_80264450:
    cmpwi r0, 0x4
    bne lbl_802658D0
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r31, 0x8
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    la r8, lbl_8049CAF8
    bl gpiRecvToBuffer
    cmpwi r3, 0x0
    beq lbl_802644B0
    cmpwi r3, 0x3
    bne lbl_802658EC
    mr r3, r28
    addi r5, r20, 0x2ac
    li r4, 0xd01
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
    b lbl_802658EC
lbl_802644B0:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_80264500
    bl current_time
    lwz r0, 0x18c(r31)
    subf r0, r0, r3
    cmplwi r0, 0xea60
    ble lbl_80264500
    li r0, 0x1
    mr r3, r28
    stw r0, 0x188(r31)
    addi r5, r20, 0x144
    li r4, 0xd02
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264500:
    lwz r3, 0x8(r31)
    la r4, lbl_8049CB48
    bl strstr
    cmpwi r3, 0x0
    beq lbl_802658D0
    stw r24, 0x20(r1)
    mr r3, r28
    li r5, 0x1
    stw r23, 0x14(r29)
    lwz r4, 0x8(r31)
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_80264544
    li r0, 0x1
    li r3, 0x4
    stw r0, 0x188(r31)
    b lbl_802658EC
lbl_80264544:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    beq lbl_80264558
    cmpwi r0, 0xa
    bne lbl_80264898
lbl_80264558:
    stw r24, 0xb0(r1)
    li r18, 0x0
    stw r24, 0xb4(r1)
    stw r24, 0xbc(r1)
    stw r25, 0xb8(r1)
lbl_8026456C:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264590
    b lbl_802658EC
lbl_80264590:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB50
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802645FC
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802645C8
    b lbl_802658EC
lbl_802645C8:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB58
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802645F4
    addi r3, r1, 0xf0
    la r4, lbl_8049CB60
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_802645F4
    stw r26, 0xb8(r1)
lbl_802645F4:
    li r18, 0x1
    b lbl_802647F0
lbl_802645FC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB64
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802647C8
    lwz r4, 0xb4(r1)
    lwz r3, 0xbc(r1)
    addi r0, r4, 0x1
    mulli r4, r0, 0xb0
    stw r0, 0xb4(r1)
    bl fn_80256C5C
    cmpwi r3, 0x0
    stw r3, 0xbc(r1)
    bne lbl_80264648
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264648:
    lwz r6, 0xb4(r1)
    li r4, 0x0
    li r5, 0xb0
    subi r0, r6, 0x1
    mulli r0, r0, 0xb0
    add r17, r3, r0
    mr r3, r17
    bl memset
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x0(r17)
    li r16, 0x0
lbl_80264678:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802646A0
    b lbl_802658EC
lbl_802646A0:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802646C8
    addi r3, r17, 0x4
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802647BC
lbl_802646C8:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802646F0
    addi r3, r17, 0x23
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    b lbl_802647BC
lbl_802646F0:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2e4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264714
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x38(r17)
    b lbl_802647BC
lbl_80264714:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2f0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026473C
    addi r3, r17, 0x3c
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802647BC
lbl_8026473C:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2fc
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264764
    addi r3, r17, 0x5b
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802647BC
lbl_80264764:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB70
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026478C
    addi r3, r17, 0x7a
    addi r4, r1, 0xf0
    li r5, 0x33
    bl strzcpy
    b lbl_802647BC
lbl_8026478C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB64
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_802647B4
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB50
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802647BC
lbl_802647B4:
    li r16, 0x1
    stw r15, 0x20(r1)
lbl_802647BC:
    cmpwi r16, 0x0
    beq lbl_80264678
    b lbl_802647F0
lbl_802647C8:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_802647F0:
    cmpwi r18, 0x0
    beq lbl_8026456C
    lwz r12, 0xc(r29)
    lwz r5, 0x10(r29)
    cmpwi r12, 0x0
    stw r12, 0xa8(r1)
    lwz r15, 0xb8(r1)
    stw r5, 0xac(r1)
    beq lbl_80264824
    mr r3, r28
    addi r4, r1, 0xb0
    mtctr r12
    bctrl
lbl_80264824:
    cmpwi r15, 0x600
    bne lbl_80264888
    lwz r0, 0xb8(r1)
    cmpwi r0, 0x600
    bne lbl_80264888
    lwz r0, 0x8(r29)
    mr r3, r28
    addi r4, r31, 0x28
    addi r5, r31, 0x47
    stw r0, 0x8(r1)
    addi r6, r31, 0xa0
    addi r7, r31, 0xd3
    addi r8, r31, 0xf2
    lwz r0, 0xc(r29)
    stw r0, 0xc(r1)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r1)
    lwz r10, 0xb4(r1)
    lwz r0, 0x17c(r31)
    lwz r9, 0x178(r31)
    add r10, r10, r0
    bl fn_80263754
    cmpwi r3, 0x0
    beq lbl_80264888
    b lbl_802658EC
lbl_80264888:
    lwz r3, 0xbc(r1)
    bl fn_80256C70
    stw r24, 0xbc(r1)
    b lbl_802658C8
lbl_80264898:
    cmpwi r0, 0x2
    bne lbl_802649A0
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_802658C8
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802648DC
    b lbl_802658EC
lbl_802648DC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB78
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264918
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264918:
    li r3, 0x3c
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_80264940
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264940:
    stw r24, 0x0(r3)
    addi r4, r31, 0xa0
    li r5, 0x33
    addi r3, r3, 0x4
    bl strzcpy
    lbz r0, 0xf0(r1)
    cmpwi r0, 0x30
    bne lbl_80264968
    stw r24, 0x38(r15)
    b lbl_8026496C
lbl_80264968:
    stw r27, 0x38(r15)
lbl_8026496C:
    lwz r4, 0x28(r1)
    mr r3, r28
    lwz r0, 0x2c(r1)
    mr r5, r15
    stw r4, 0xa0(r1)
    mr r6, r29
    addi r4, r1, 0xa0
    li r7, 0x0
    stw r0, 0xa4(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_802649A0:
    cmpwi r0, 0x3
    bne lbl_80264C5C
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_802658C8
    li r3, 0x44
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_802649E8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802649E8:
    stw r24, 0x0(r3)
    addi r3, r3, 0x4
    addi r4, r31, 0xa0
    bl strcpy
    stw r24, 0x38(r19)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    stw r24, 0x3c(r19)
    addi r7, r1, 0xf0
    stw r24, 0x40(r19)
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264A28
    b lbl_802658EC
lbl_80264A28:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB7C
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264A64
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264A64:
    li r18, 0x0
lbl_80264A68:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264A8C
    b lbl_802658EC
lbl_80264A8C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264B34
    lwz r4, 0x38(r19)
    lwz r3, 0x3c(r19)
    addi r0, r4, 0x1
    slwi r4, r0, 2
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80264AD0
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264AD0:
    stw r3, 0x3c(r19)
    li r3, 0x1f
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80264AF8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264AF8:
    lwz r0, 0x38(r19)
    addi r4, r1, 0xf0
    lwz r6, 0x3c(r19)
    li r5, 0x1f
    slwi r0, r0, 2
    stwx r3, r6, r0
    lwz r0, 0x38(r19)
    lwz r3, 0x3c(r19)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl strzcpy
    lwz r3, 0x38(r19)
    addi r0, r3, 0x1
    stw r0, 0x38(r19)
    b lbl_80264C20
lbl_80264B34:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264BDC
    lwz r0, 0x38(r19)
    cmpwi r0, 0x0
    ble lbl_80264C20
    lwz r3, 0x40(r19)
    slwi r4, r0, 2
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80264B7C
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264B7C:
    stw r3, 0x40(r19)
    li r3, 0x15
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80264BA4
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264BA4:
    lwz r0, 0x38(r19)
    addi r4, r1, 0xf0
    lwz r6, 0x40(r19)
    li r5, 0x15
    slwi r0, r0, 2
    add r6, r6, r0
    stw r3, -0x4(r6)
    lwz r0, 0x38(r19)
    lwz r3, 0x40(r19)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, -0x4(r3)
    bl strzcpy
    b lbl_80264C20
lbl_80264BDC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB80
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264BF8
    li r18, 0x1
    b lbl_80264C20
lbl_80264BF8:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264C20:
    cmpwi r18, 0x0
    beq lbl_80264A68
    lwz r4, 0x30(r1)
    mr r3, r28
    lwz r0, 0x34(r1)
    mr r5, r19
    stw r4, 0x98(r1)
    mr r6, r29
    addi r4, r1, 0x98
    li r7, 0x3
    stw r0, 0x9c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80264C5C:
    cmpwi r0, 0x4
    bne lbl_80264EB4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_802658C8
    li r3, 0x10
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_80264CA4
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264CA4:
    lwz r0, 0x180(r31)
    li r18, 0x0
    stw r0, 0x4(r3)
    stw r24, 0x0(r3)
    stw r24, 0x8(r3)
    stw r24, 0xc(r3)
lbl_80264CBC:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264CE0
    b lbl_802658EC
lbl_80264CE0:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB88
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264CFC
    li r18, 0x1
    b lbl_80264E78
lbl_80264CFC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB90
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264E50
    lwz r3, 0x8(r19)
    addi r0, r3, 0x1
    stw r0, 0x8(r19)
    mulli r4, r0, 0x128
    lwz r3, 0xc(r19)
    bl fn_80256C5C
    cmpwi r3, 0x0
    stw r3, 0xc(r19)
    bne lbl_80264D48
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264D48:
    lwz r6, 0x8(r19)
    li r4, 0x0
    li r5, 0x128
    subi r0, r6, 0x1
    mulli r0, r0, 0x128
    add r17, r3, r0
    mr r3, r17
    bl memset
    stw r27, 0x24(r17)
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x0(r17)
    li r16, 0x0
lbl_80264D7C:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264DA4
    b lbl_802658EC
lbl_80264DA4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB94
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264DCC
    addi r3, r17, 0x28
    addi r4, r1, 0xf0
    li r5, 0x100
    bl strzcpy
    b lbl_80264DF0
lbl_80264DCC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264DF0
    addi r3, r17, 0x4
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
lbl_80264DF0:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x330
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264E14
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x24(r17)
    b lbl_80264E44
lbl_80264E14:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB90
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264E3C
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB88
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264E44
lbl_80264E3C:
    li r16, 0x1
    stw r15, 0x20(r1)
lbl_80264E44:
    cmpwi r16, 0x0
    beq lbl_80264D7C
    b lbl_80264E78
lbl_80264E50:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264E78:
    cmpwi r18, 0x0
    beq lbl_80264CBC
    lwz r4, 0x38(r1)
    mr r3, r28
    lwz r0, 0x3c(r1)
    mr r5, r19
    stw r4, 0x90(r1)
    mr r6, r29
    addi r4, r1, 0x90
    li r7, 0x4
    stw r0, 0x94(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80264EB4:
    cmpwi r0, 0x5
    bne lbl_80265004
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    beq lbl_802658C8
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264EF8
    b lbl_802658EC
lbl_80264EF8:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB9C
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264F34
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264F34:
    addi r3, r1, 0xf0
    bl atoi
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_80264F54
    stw r3, 0x5b8(r30)
    li r15, 0x0
    b lbl_80264FA4
lbl_80264F54:
    lwz r3, 0x8(r31)
    addi r5, r1, 0xf0
    la r4, lbl_8049CBA0
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80264F98
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264F98:
    addi r3, r1, 0xf0
    bl atoi
    mr r15, r3
lbl_80264FA4:
    li r3, 0x8
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80264FC8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264FC8:
    stw r16, 0x0(r3)
    mr r5, r3
    lwz r7, 0x40(r1)
    mr r6, r29
    stw r15, 0x4(r3)
    mr r3, r28
    lwz r0, 0x44(r1)
    addi r4, r1, 0x88
    stw r7, 0x88(r1)
    li r7, 0x0
    stw r0, 0x8c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80265004:
    cmpwi r0, 0x6
    bne lbl_8026515C
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_802658C8
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265048
    b lbl_802658EC
lbl_80265048:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBA8
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265084
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265084:
    addi r3, r1, 0xf0
    bl atoi
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_8026509C
    stw r3, 0x5b8(r30)
lbl_8026509C:
    lwz r3, 0x8(r31)
    addi r5, r1, 0xf0
    la r4, lbl_8049CBA0
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_802650F0
    cmpwi r16, 0x0
    bne lbl_802650E8
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_802650E8:
    li r15, 0x0
    b lbl_802650FC
lbl_802650F0:
    addi r3, r1, 0xf0
    bl atoi
    mr r15, r3
lbl_802650FC:
    li r3, 0x8
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80265120
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80265120:
    stw r16, 0x0(r3)
    mr r5, r3
    lwz r7, 0x48(r1)
    mr r6, r29
    stw r15, 0x4(r3)
    mr r3, r28
    lwz r0, 0x4c(r1)
    addi r4, r1, 0x80
    stw r7, 0x80(r1)
    li r7, 0x0
    stw r0, 0x84(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_8026515C:
    cmpwi r0, 0x7
    bne lbl_80265464
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_802658C8
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_802651A4
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802651A4:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802651D4
    b lbl_802658EC
lbl_802651D4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBAC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265210
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265210:
    li r18, 0x0
lbl_80265214:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265238
    b lbl_802658EC
lbl_80265238:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBB4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265254
    li r18, 0x1
    b lbl_80265428
lbl_80265254:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265400
    lwz r4, 0x4(r19)
    lwz r3, 0x8(r19)
    addi r0, r4, 0x1
    mulli r4, r0, 0xb0
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80265298
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80265298:
    stw r3, 0x8(r19)
    li r4, 0x0
    li r5, 0xb0
    lwz r0, 0x4(r19)
    mulli r0, r0, 0xb0
    add r16, r3, r0
    mr r3, r16
    bl memset
    lwz r4, 0x4(r19)
    addi r3, r1, 0xf0
    addi r0, r4, 0x1
    stw r0, 0x4(r19)
    bl atoi
    stw r3, 0x0(r16)
    li r17, 0x0
lbl_802652D4:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802652FC
    b lbl_802658EC
lbl_802652FC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265324
    addi r3, r16, 0x4
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802653F4
lbl_80265324:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026534C
    addi r3, r16, 0x23
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    b lbl_802653F4
lbl_8026534C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBC0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265374
    addi r3, r16, 0x3c
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802653F4
lbl_80265374:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBC8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026539C
    addi r3, r16, 0x5b
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802653F4
lbl_8026539C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB70
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802653C4
    addi r3, r16, 0x7a
    addi r4, r1, 0xf0
    li r5, 0x33
    bl strzcpy
    b lbl_802653F4
lbl_802653C4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_802653EC
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBB4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802653F4
lbl_802653EC:
    li r17, 0x1
    stw r15, 0x20(r1)
lbl_802653F4:
    cmpwi r17, 0x0
    beq lbl_802652D4
    b lbl_80265428
lbl_80265400:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265428:
    cmpwi r18, 0x0
    beq lbl_80265214
    lwz r4, 0x50(r1)
    mr r3, r28
    lwz r0, 0x54(r1)
    mr r5, r19
    stw r4, 0x78(r1)
    mr r6, r29
    addi r4, r1, 0x78
    li r7, 0x8
    stw r0, 0x7c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80265464:
    cmpwi r0, 0x9
    bne lbl_802656CC
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    beq lbl_802658C8
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_802654AC
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802654AC:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802654DC
    b lbl_802658EC
lbl_802654DC:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x33c
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265518
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265518:
    li r18, 0x0
lbl_8026551C:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265540
    b lbl_802658EC
lbl_80265540:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBD0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026555C
    li r18, 0x1
    b lbl_80265690
lbl_8026555C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265668
    lwz r4, 0x4(r17)
    lwz r3, 0x8(r17)
    addi r0, r4, 0x1
    mulli r4, r0, 0x1c
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_802655A0
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802655A0:
    stw r3, 0x8(r17)
    li r4, 0x0
    li r5, 0x1c
    lwz r0, 0x4(r17)
    mulli r0, r0, 0x1c
    add r19, r3, r0
    mr r3, r19
    bl memset
    lwz r4, 0x4(r17)
    addi r3, r1, 0xf0
    addi r0, r4, 0x1
    stw r0, 0x4(r17)
    bl atoi
    stw r3, 0x0(r19)
    li r16, 0x0
lbl_802655DC:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265604
    b lbl_802658EC
lbl_80265604:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026562C
    addi r3, r19, 0x4
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    b lbl_8026565C
lbl_8026562C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265654
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBD0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026565C
lbl_80265654:
    li r16, 0x1
    stw r15, 0x20(r1)
lbl_8026565C:
    cmpwi r16, 0x0
    beq lbl_802655DC
    b lbl_80265690
lbl_80265668:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265690:
    cmpwi r18, 0x0
    beq lbl_8026551C
    lwz r4, 0x58(r1)
    mr r3, r28
    lwz r0, 0x5c(r1)
    mr r5, r17
    stw r4, 0x70(r1)
    mr r6, r29
    addi r4, r1, 0x70
    li r7, 0xd
    stw r0, 0x74(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_802656CC:
    cmpwi r0, 0x8
    bne lbl_802658C8
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_802658C8
    li r17, 0x0
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_80265718
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80265718:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265748
    b lbl_802658EC
lbl_80265748:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBD8
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265784
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265784:
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x4(r16)
    slwi r3, r3, 2
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r16)
    bne lbl_802657B8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802657B8:
    li r18, 0x0
    li r19, 0x0
lbl_802657C0:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802657E4
    b lbl_802658EC
lbl_802657E4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265844
    li r3, 0x15
    bl fn_80256C4C
    lwz r4, 0x8(r16)
    stwx r3, r4, r19
    lwz r3, 0x8(r16)
    lwzx r3, r3, r19
    cmpwi r3, 0x0
    bne lbl_8026582C
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_8026582C:
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    addi r19, r19, 0x4
    addi r17, r17, 0x1
    b lbl_8026588C
lbl_80265844:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBDC
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265864
    stw r17, 0x4(r16)
    li r18, 0x1
    b lbl_8026588C
lbl_80265864:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_8026588C:
    cmpwi r18, 0x0
    beq lbl_802657C0
    lwz r4, 0x60(r1)
    mr r3, r28
    lwz r0, 0x64(r1)
    mr r5, r16
    stw r4, 0x68(r1)
    mr r6, r29
    addi r4, r1, 0x68
    li r7, 0x9
    stw r0, 0x6c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_802658C8:
    stw r27, 0x188(r31)
    li r18, 0x0
lbl_802658D0:
    cmpwi r18, 0x0
    beq lbl_802658E0
    li r3, 0xa
    bl fn_80256638
lbl_802658E0:
    cmpwi r18, 0x0
    bne lbl_80263B88
    li r3, 0x0
lbl_802658EC:
    addi r11, r1, 0x540
    bl _restgpr_15
    lwz r0, 0x544(r1)
    mtlr r0
    addi r1, r1, 0x540
    blr
}
