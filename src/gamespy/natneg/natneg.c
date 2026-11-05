typedef int socklen_t;
///////////////////////////////////////////////////////////////////////////////
// File:	natneg.c
// SDK:		GameSpy NAT Negotiation SDK
//
// Copyright (c) 2012 GameSpy Technology & IGN Entertainment, Inc.  All rights 
// reserved. This software is made available only pursuant to certain license 
// terms offered by IGN or its subsidiary GameSpy Industries, Inc.  Unlicensed
// use or use in a manner not expressly authorized by IGN or GameSpy Technology
// is prohibited.


#include "nninternal.h"
#include "../darray.h"
#include "../common/gsAvailable.h"
#include <stddef.h>
#include <stdio.h>
#include "NATify.h"

unsigned char NNMagicData[] = {NN_MAGIC_0, NN_MAGIC_1, NN_MAGIC_2, NN_MAGIC_3, NN_MAGIC_4, NN_MAGIC_5};
struct _NATNegotiator
{
	SOCKET gameSock;                // Game socket (valid if NNBeginNegotiationWithSocket() was used).
	int cookie;                     // Cookie used to ID this negotiation.
	int clientindex;                // 0 or 1; used to tell sides apart.
	NegotiateProgressFunc progressCallback;
	NegotiateCompletedFunc completedCallback;
	void *userdata;	

	SOCKET negotiateSock;           // Socket created internally to communicate with NN servers,
									// and is returned to caller if no game socket is used.

	NegotiateState state;				// Current state of negotiation.
	int initAckRecv[4];					// Ack state for our init packets.
	int retryCount;						// Number of retries sent by current state.
	int maxRetryCount;					// Max number of retries allowable in current state.
	unsigned long retryTime;			// Time to send next retry.
	unsigned int guessedIP;				// Current best guess of remote's IP.
	unsigned short guessedPort;			// Current best guess of remote's port.
	unsigned char gotRemoteData;		// 1 if we have received a ping from remote.
	unsigned char sendGotRemoteData;	// 1 if we know remote has received a ping from us.

	NegotiateResult result;         // Final result of negotiation.
	SOCKET connectedSocket;         // Socket that was negotiated.
	SOCKADDR_IN remoteaddr;  // Address that is open for communication after negotiation.
};

typedef struct _NATNegotiator *NATNegotiator;

DArray negotiateList = NULL;

char *Matchup1Hostname;
char *Matchup2Hostname;
char *Matchup3Hostname;

unsigned int matchup1ip = 0;
unsigned int matchup2ip = 0;
unsigned int matchup3ip = 0;

NAT nat;
NatDetectionResultsFunc natifyCallback;
static SOCKET mappingSock = INVALID_SOCKET;
static SOCKET ertSock = INVALID_SOCKET;
static gsi_time natifyStartTime;
static gsi_bool activeNatify = gsi_false;
static NatType natType = unknown;
static NatMappingScheme natMappingScheme = unrecognized;


static NATNegotiator FindNegotiatorForCookie(int cookie)
{
	int i;
	if (negotiateList == NULL)
		return NULL;
	for (i = 0 ; i < ArrayLength(negotiateList) ; i++)
	{
		// We go backwards in case we need to remove a cookie.
		NATNegotiator neg = (NATNegotiator)ArrayNth(negotiateList, i);
		if (neg->cookie == cookie)
			return neg;
	}
	return NULL;
}

static NATNegotiator AddNegotiator()
{

	struct _NATNegotiator _neg;


	memset(&_neg, 0, sizeof(_neg));

	if (negotiateList == NULL)
		negotiateList = ArrayNew(sizeof(_neg), 4, NULL);

	ArrayAppend(negotiateList, &_neg);

	return (NATNegotiator)ArrayNth(negotiateList, ArrayLength(negotiateList) - 1);
}

static void RemoveNegotiator(NATNegotiator neg)
{
	int i;
	for (i = 0 ; i < ArrayLength(negotiateList) ; i++)
	{
		// We go backwards in case we need to remove a cookie.
		if (neg == (NATNegotiator)ArrayNth(negotiateList, i))
		{
			ArrayRemoveAt(negotiateList, i);
			return;

		}
	}
}

void NNFreeNegotiateList()
{
	if (negotiateList != NULL)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_State, GSIDebugLevel_Notice,
			"NNFreeNegotiateList: Freeing %d negotiators\n", ArrayLength(negotiateList));

		ArrayFree(negotiateList);
		negotiateList = NULL;
	}
}

static int CheckMagic(char *data)
{
	return (memcmp(data, NNMagicData, NATNEG_MAGIC_LEN) == 0);
}

static void SendPacket(SOCKET sock, unsigned int toaddr, unsigned short toport, void *data, int len)
{
	SOCKADDR_IN saddr;
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(toport);
	saddr.sin_addr.s_addr = toaddr;
	sendto(sock, (char *)data, len, 0, (SOCKADDR *)&saddr, sizeof(saddr));
}

static unsigned int GetLocalIP()
{
#if defined(ANDROID)

	int fdc;
    struct sockaddr_in sin_him, ouraddr;
    socklen_t sin_len;
    int errcode;
    unsigned int dip = inet_addr("8.8.8.8");
    unsigned short dport = 53;
	IN_ADDR * addr;

    memset((void *)&sin_him, 0, sizeof(sin_him));
    sin_him.sin_family      = AF_INET;
    sin_him.sin_port        = htons(dport);
    sin_him.sin_addr.s_addr = dip;
    sin_len                 = sizeof(struct sockaddr);

    fdc = socket(PF_INET, SOCK_STREAM, 0);
    if (fdc == -1)
    {
    	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError, "socket() failed!\r\n");
    }

    errcode = connect(fdc, (struct sockaddr *)&sin_him, sin_len);
    if (errcode == -1)
    {
    	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError, "connect() failed!\r\n");
    }

    errcode = getsockname(fdc, (struct sockaddr *)&ouraddr, &sin_len);
    if (errcode == -1)
    {
    	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError, "getsockname() failed!\r\n");
    }

    gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment, "Source IP:   %s\n", inet_ntoa(ouraddr.sin_addr));
    gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment, "Source Port: %d\n", ntohs(ouraddr.sin_port));
    gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment, "Dest IP:     %s\n", inet_ntoa(sin_him.sin_addr));
    gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment, "Dest Port:   %d\n", ntohs(sin_him.sin_port));

    if(close (fdc) == -1)
    {
    	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError, "close() failed!\r\n");
    }

    addr = (IN_ADDR *)&ouraddr.sin_addr;

    return addr->s_addr;

#else

	int num_local_ips;
	struct hostent *phost;
	IN_ADDR *addr;
	unsigned int localip = 0;
	phost = getlocalhost();
	if (phost == NULL)
		return 0;
	for (num_local_ips = 0 ; ; num_local_ips++)
	{
		if (phost->h_addr_list[num_local_ips] == 0)
			break;
		addr = (IN_ADDR *)phost->h_addr_list[num_local_ips];
		if (addr->s_addr == htonl(0x7F000001))
			continue;
		localip = addr->s_addr;

		if(IsPrivateIP(addr))
			return localip;
	}
	return localip; // Else, a specific private address wasn't found; return what we've got.

#endif
}

static unsigned short GetLocalPort(SOCKET sock)
{
	int ret;
	SOCKADDR_IN saddr;
	socklen_t saddrlen = sizeof(saddr);

	ret = getsockname(sock,(SOCKADDR *)&saddr, &saddrlen);

	if (gsiSocketIsError(ret))
		return 0;
	return saddr.sin_port;
}

static void SendReportPacket(NATNegotiator neg)
{
	NatNegPacket p;

	memcpy(p.magic, NNMagicData, NATNEG_MAGIC_LEN);
	p.version = NN_PROTVER;
	p.packettype = NN_REPORT;
	p.cookie = (int)htonl(neg->cookie);
	p.Packet.Report.clientindex = (unsigned char)neg->clientindex;
	p.Packet.Report.negResult = (unsigned char)(neg->result==nr_success?gsi_true:gsi_false);
	p.Packet.Report.natType = natType;
	p.Packet.Report.natMappingScheme = natMappingScheme;

	if(strlen(__GSIACGamename) > 0)
		memcpy(&p.Packet.Report.gamename, __GSIACGamename, sizeof(p.Packet.Report.gamename));

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"SendReportPacket(cookie=%d): Sending REPORT to %s:%d (result: %d)\n", 
		neg->cookie,
		inet_ntoa(*(IN_ADDR *)&matchup1ip), 
		MATCHUP_PORT1, 
		p.Packet.Report.negResult);

	SendPacket(neg->negotiateSock, matchup1ip, MATCHUP_PORT1, &p, REPORTPACKET_SIZE);
}

static void StartReport(NATNegotiator neg, NegotiateResult result, SOCKET socket, SOCKADDR_IN *remoteaddr)
{
	neg->result = result;
	neg->connectedSocket = socket;
	if(remoteaddr != NULL) 
		memcpy(&neg->remoteaddr, remoteaddr, sizeof(neg->remoteaddr));

	if(result == nr_inittimeout || result == nr_deadbeatpartner)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_State, GSIDebugLevel_Notice,
			"StartReport(cookie=%d): Negotiation failed, cancelling\n", neg->cookie); 
		neg->state = ns_finished;
		neg->completedCallback(neg->result, neg->connectedSocket, (SOCKADDR_IN *)&neg->remoteaddr, neg->userdata);
		NNCancel(neg->cookie);
	}
	else
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_State, GSIDebugLevel_Notice,
			"StartReport(cookie=%d): Negotiation finished, sending report\n", neg->cookie); 

		SendReportPacket(neg);	
		neg->state = ns_reportsent;
		neg->retryTime = current_time() + REPORT_RETRY_TIME;
		neg->retryCount = 0;
		neg->maxRetryCount = REPORT_RETRY_COUNT;

		neg->completedCallback(neg->result, neg->connectedSocket, (SOCKADDR_IN *)&neg->remoteaddr, neg->userdata);
	}
}

static void SendInitPackets(NATNegotiator neg)
{
	char buffer[INITPACKET_SIZE + sizeof(__GSIACGamename)];

	NatNegPacket * p = (NatNegPacket *)buffer;
	unsigned int localip;
	unsigned short localport;
	int packetlen;

	memcpy(p->magic, NNMagicData, NATNEG_MAGIC_LEN);
	p->version = NN_PROTVER;
	p->packettype = NN_INIT;
	p->cookie = (int)htonl((unsigned int)neg->cookie);
	p->Packet.Init.clientindex = (unsigned char)neg->clientindex;
	p->Packet.Init.usegameport = (unsigned char)((neg->gameSock == INVALID_SOCKET) ? 0 : 1);
	localip = ntohl(GetLocalIP());
	// The ip.
	buffer[INITPACKET_ADDRESS_OFFSET] = (char)((localip >> 24) & 0xFF);
	buffer[INITPACKET_ADDRESS_OFFSET+1] = (char)((localip >> 16) & 0xFF);
	buffer[INITPACKET_ADDRESS_OFFSET+2] = (char)((localip >> 8) & 0xFF);
	buffer[INITPACKET_ADDRESS_OFFSET+3] = (char)(localip & 0xFF);
	// The port (this may not be determined until the first packet goes out).
	buffer[INITPACKET_ADDRESS_OFFSET+4] = 0;
	buffer[INITPACKET_ADDRESS_OFFSET+5] = 0;
	// Add the gamename to all requests.
	strcpy(buffer + INITPACKET_SIZE, __GSIACGamename);
	packetlen = (INITPACKET_SIZE + (int)strlen(__GSIACGamename) + 1);
	if (p->Packet.Init.usegameport && !neg->initAckRecv[NN_PT_GP])
	{
		p->Packet.Init.porttype = NN_PT_GP;

		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Sending INIT (GP) to %s:%d...\n", inet_ntoa(*(IN_ADDR *)&matchup1ip), MATCHUP_PORT1);

		SendPacket(neg->gameSock, matchup1ip, MATCHUP_PORT1, p, packetlen);		
	}

	if (!neg->initAckRecv[NN_PT_NN1])
	{
		p->Packet.Init.porttype = NN_PT_NN1;
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"SendInitPackets(cookie=%d): Sending INIT (NN1) to %s:%d...\n", neg->cookie, inet_ntoa(*(IN_ADDR *)&matchup1ip), MATCHUP_PORT1);

		SendPacket(neg->negotiateSock, matchup1ip, MATCHUP_PORT1, p, packetlen);
	}	

	// The port should be determined now.
	localport = ntohs(GetLocalPort((p->Packet.Init.usegameport) ?  neg->gameSock : neg->negotiateSock));
	buffer[INITPACKET_ADDRESS_OFFSET+4] = (char)((localport >> 8) & 0xFF);
	buffer[INITPACKET_ADDRESS_OFFSET+5] = (char)(localport & 0xFF);

	if (!neg->initAckRecv[NN_PT_NN2])
	{
		p->Packet.Init.porttype = NN_PT_NN2;
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"SendInitPackets(cookie=%d): Sending INIT (NN2) to %s:%d...\n", neg->cookie, inet_ntoa(*(IN_ADDR *)&matchup2ip), MATCHUP_PORT2);

		SendPacket(neg->negotiateSock, matchup2ip, MATCHUP_PORT2, p, packetlen);
	}

	if (!neg->initAckRecv[NN_PT_NN3])
	{
		p->Packet.Init.porttype = NN_PT_NN3;
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"SendInitPackets(cookie=%d): Sending INIT (NN3) to %s:%d...\n", neg->cookie, inet_ntoa(*(IN_ADDR *)&matchup3ip), MATCHUP_PORT3);

		SendPacket(neg->negotiateSock, matchup3ip, MATCHUP_PORT3, p, packetlen);
	}

	neg->state = ns_initsent;
	neg->retryTime = current_time() + INIT_RETRY_TIME;
	neg->maxRetryCount = INIT_RETRY_COUNT;
}

static void SendPingPacket(NATNegotiator neg)
{
	NatNegPacket p;

	memcpy(p.magic, NNMagicData, NATNEG_MAGIC_LEN);
	p.version = NN_PROTVER;
	p.packettype = NN_CONNECT_PING;
	p.cookie = (int)htonl((unsigned int)neg->cookie);
	p.Packet.Connect.remoteIP = neg->guessedIP;
	p.Packet.Connect.remotePort = htons(neg->guessedPort);
	p.Packet.Connect.gotyourdata = neg->gotRemoteData;

	// Being finished here only lets the other player know if finished, but 
	// this is currently unused and just printed as debug.
	p.Packet.Connect.finished = (unsigned char)(neg->gotRemoteData && neg->sendGotRemoteData);


	//////////////
	// playing with a way to re-sync with the NAT's port mappings in the case the guess is off:
	//if(neg->retryCount >= 3 && neg->retryCount % 3 == 0) neg->guessedPort++;
	//////////////

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"SendPingPacket(cookie=%d): Sending PING to %s:%d (got remote data: %d)\n", 
		neg->cookie, 
		inet_ntoa(*(IN_ADDR *)&neg->guessedIP), 
		neg->guessedPort, 
		neg->gotRemoteData);

	SendPacket((neg->gameSock != INVALID_SOCKET) ? neg->gameSock : neg->negotiateSock,
		neg->guessedIP,
		neg->guessedPort,
		&p,
		CONNECTPACKET_SIZE);
	neg->retryTime = current_time() + PING_RETRY_TIME;
	neg->maxRetryCount = PING_RETRY_COUNT;
}

static gsi_bool CheckNatifyStatus(SOCKET sock)
{
	gsi_bool active = gsi_true;
	gsi_bool success = gsi_false;

	if(sock != INVALID_SOCKET)
	{
		if(current_time() - natifyStartTime < NATIFY_TIMEOUT)
			active = NatifyThink(sock, &nat);
		else
			active = gsi_false;

		if(!active)
		{
			success = DetermineNatType(&nat);
			natifyCallback(success, nat);

			natType = nat.natType;
			natMappingScheme = nat.mappingScheme;

			// Clean up NATify's socks.
			if (mappingSock != INVALID_SOCKET)
			{
				closesocket(mappingSock);
				mappingSock = INVALID_SOCKET;
			}
			if (ertSock != INVALID_SOCKET)
			{
				closesocket(ertSock);
				ertSock = INVALID_SOCKET;
			}
		}
	}

	return active;
}

static unsigned int NameToIp(const char *name)
{
	unsigned int ret;
	struct hostent *hent;

	ret = inet_addr(name);

	if (ret == INADDR_NONE)
	{
		hent = gethostbyname(name);
		if (!hent)
			return 0;
		ret = *(unsigned int *)hent->h_addr_list[0];
	}
	return ret;
}

static unsigned int ResolveServer(const char * overrideHostname, const char * defaultHostname)
{
	const char * hostname;
	char hostnameBuffer[64];

	if(overrideHostname == NULL)
	{
		snprintf(hostnameBuffer, sizeof(hostnameBuffer), "%s.%s", __GSIACGamename, defaultHostname);
		hostname = hostnameBuffer;
	}
	else
	{
		hostname = overrideHostname;
	}

#ifdef UNISPY_FORCE_IP
	return NameToIp(UNISPY_FORCE_IP);
#else
	return NameToIp(hostname);
#endif
}

static int ResolveServers()
{
	if (matchup1ip == 0)
	{
		matchup1ip = ResolveServer(Matchup1Hostname, MATCHUP1_HOSTNAME);
	}

	if (matchup2ip == 0)
	{
		matchup2ip = ResolveServer(Matchup2Hostname, MATCHUP2_HOSTNAME);
	}

	if (matchup3ip == 0)
	{
		matchup3ip = ResolveServer(Matchup3Hostname, MATCHUP3_HOSTNAME);
	}

	if (matchup1ip == 0 || matchup2ip == 0 || matchup3ip == 0)
		return 0;

	return 1;
}

NegotiateError NNStartNatDetection(NatDetectionResultsFunc resultscallback)
{
	// Perform the standard GameSpy Availability Check.
	if(__GSIACResult != GSIACAvailable)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
			"NNStartNatDetection: Backend not available\n");
		return ne_socketerror;
	}

	if (!ResolveServers())
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
			"NNStartNatDetection:  DNS resolve to NN servers failed\n");
		return ne_dnserror;
	}

	activeNatify = gsi_true;
	natifyCallback = resultscallback;
	natifyStartTime = current_time();

	// Assume this for now.
	nat.ipRestricted = gsi_true;
	nat.portRestricted = gsi_true;

	// This is the socket to use for external reach tests.
	ertSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	// This is the socket to use for determining how traffic is mapped. 
	mappingSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	// Send reachability packets.
	DiscoverReachability(ertSock, matchup1ip, MATCHUP_PORT1, NN_PT_NN1);
	DiscoverReachability(ertSock, matchup1ip, MATCHUP_PORT1, NN_PT_NN2);
	DiscoverReachability(ertSock, matchup2ip, MATCHUP_PORT2, NN_PT_NN3);

	// Send mapping packets.
	DiscoverMapping(mappingSock, matchup1ip, MATCHUP_PORT1, NN_PT_NN1, packet_map1a);
	DiscoverMapping(mappingSock, matchup1ip, MATCHUP_PORT1, NN_PT_NN1, packet_map1b);
	DiscoverMapping(mappingSock, matchup2ip, MATCHUP_PORT2, NN_PT_NN2, packet_map2);
	DiscoverMapping(mappingSock, matchup3ip, MATCHUP_PORT3, NN_PT_NN3, packet_map3);

	return ne_noerror;
}

// Standard NNBeginNegotiation call without queueing, for backwards compatibility.
NegotiateError NNBeginNegotiation(
    int cookie, 
    int clientindex, 
    NegotiateProgressFunc progresscallback, 
    NegotiateCompletedFunc completedcallback, 
    void *userdata)
{
    return NNInternalBeginNegotiationWithSocket(INVALID_SOCKET, cookie, clientindex, gsi_false, progresscallback, 
                                                completedcallback, userdata);
}

// Standard NNBeginNegotiationWithSocket call without queueing, for backwards compatibility.
NegotiateError NNBeginNegotiationWithSocket(
    SOCKET gamesocket,
    int cookie,
    int clientindex,
    NegotiateProgressFunc progresscallback,
    NegotiateCompletedFunc completedcallback,
    void *userdata)
{
    return NNInternalBeginNegotiationWithSocket(gamesocket, cookie, clientindex, gsi_false, progresscallback, 
                                                completedcallback, userdata);
}

// Internal call to begin NatNeg with queue flag; this is used by ACE with 
// gsi_true to enable queuing.
NegotiateError NNInternalBeginNegotiationWithSocket(
    SOCKET gamesocket,
	int cookie,
    int clientindex,
    gsi_bool useQueue,
    NegotiateProgressFunc progresscallback,
    NegotiateCompletedFunc completedcallback,
    void *userdata)
{
	NATNegotiator neg;

	// Check to see if the backend is available.
	if(__GSIACResult != GSIACAvailable)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
			"NNBeginNegotiationWithSocket(cookie=%d): Backend not available\n", cookie);
		return ne_socketerror;
	}

	if (!ResolveServers())
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
			"NNBeginNegotiationWithSocket(cookie=%d): DNS resolve to NN servers failed\n", cookie);
		return ne_dnserror;
	}

	neg = AddNegotiator();
	if (neg == NULL)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Memory, GSIDebugLevel_HotError,
			"NNBeginNegotiationWithSocket: Failed to allocate negotiator\n");
		return ne_allocerror;
	}

	neg->negotiateSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (neg->negotiateSock == INVALID_SOCKET)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_HotError,
			"NNBeginNegotiationWithSocket: Failed to create negotiate socket\n");
		RemoveNegotiator(neg);
		return ne_socketerror;
	}
	neg->gameSock = gamesocket;
	neg->clientindex = clientindex;
	neg->cookie = cookie;
	neg->progressCallback = progresscallback;
	neg->completedCallback = completedcallback;
	neg->userdata = userdata;
	neg->gotRemoteData = 0;
	neg->sendGotRemoteData = 0;
	neg->guessedIP = 0;
	neg->guessedPort = 0;
	neg->result             = nr_noresult;
	neg->retryCount         = 0;
	neg->maxRetryCount = 0;

	SendInitPackets(neg);

#if defined(GSI_COMMON_DEBUG)
	{
		SOCKADDR_IN saddr;
		socklen_t namelen = sizeof(saddr);

		getsockname(neg->negotiateSock, (SOCKADDR *)&saddr, &namelen);

		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Negotiate Socket: %d\n", ntohs(saddr.sin_port));
	}
#endif

	return ne_noerror;
}

void NNCancel(int cookie)
{
	NATNegotiator neg = FindNegotiatorForCookie(cookie);
	if (neg == NULL)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Misc, GSIDebugLevel_Warning,
			"NNCancel(cookie=%d): Failed to find negotiator\n", cookie);
		return;
	}

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Misc, GSIDebugLevel_Notice,
		"NNCancel(cookie=%d): Cancelling negotiator\n", cookie);

	if (neg->negotiateSock != INVALID_SOCKET)
	{
		closesocket(neg->negotiateSock);
		neg->negotiateSock = INVALID_SOCKET;
	}

	neg->state = ns_canceled;
}

static void RemoveFinishedNegotiator(NATNegotiator neg)
{
	if (neg->gameSock == INVALID_SOCKET) 
	{
		// No gameSock, so don't let NNCancel close this socket.
		neg->negotiateSock = INVALID_SOCKET; 
	}

	NNCancel(neg->cookie);
}

static void NegotiateThink(NATNegotiator neg)
{
	// Check for any incoming data.
	static char indata[NNINBUF_LEN]; //256 byte input buffer.
	SOCKADDR_IN saddr;
	socklen_t saddrlen = sizeof(SOCKADDR_IN);
	int error;

	if(neg == NULL)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Misc, GSIDebugLevel_Warning,
			"NegotiateThink: NULL negotiator\n");
		return;
	}

	if (neg->state == ns_canceled) // We need to remove it.
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Memory, GSIDebugLevel_Notice,
			"NegotiateThink(cookie=%d): Removing canceled negotiator\n", neg->cookie);
		RemoveNegotiator(neg);
		return;
	}

	// Check for packets received on internal negotiation socket.
	while(neg->negotiateSock != INVALID_SOCKET)
	{
		if(!CanReceiveOnSocket(neg->negotiateSock))
		{
			break;
		}

		error = recvfrom(neg->negotiateSock, indata, NNINBUF_LEN, 0, (SOCKADDR *)&saddr, &saddrlen);

		if (gsiSocketIsError(error))
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
				"NegotiateThink(cookie=%d): RECV SOCKET ERROR: %d\n", neg->cookie, GOAGetLastError(neg->negotiateSock));
			break;
		}

		NNProcessData(indata, error, &saddr);
		if (neg->state == ns_canceled)
		{
			break;
		}
	}

	if (neg->state == ns_initsent || neg->state == ns_connectping) //see if we need to resend packets
	{
		if (current_time() > neg->retryTime)
		{
			if (neg->retryCount > neg->maxRetryCount)
			{
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
					"NegotiateThink(cookie=%d): Last init packet resend timed out\n", neg->cookie);

				if(neg->state == ns_initsent)
					StartReport(neg, nr_inittimeout, INVALID_SOCKET, NULL);
				else
					StartReport(neg, nr_pingtimeout, INVALID_SOCKET, NULL);
			}
			else
			{

				neg->retryCount++;
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
					"NegotiateThink(cookie=%d): Resending init packets (retryCount=%d)\n", neg->cookie, neg->retryCount);
				if (neg->state == ns_initsent) // Resend init packets.
					SendInitPackets(neg);
				else
					SendPingPacket(neg); // Resend ping packet.
			}
		}
	}

	// Inits acked but haven't received a ping from partner?
	if (neg->state == ns_initack) // See if the partner has timed out.
	{
		if (current_time() > neg->retryTime)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
				"NegotiateThink(cookie=%d): Failed to receive any pings from partner\n", neg->cookie);
			StartReport(neg, nr_deadbeatpartner, INVALID_SOCKET, NULL);
		}
	}

	// Resend ping packets?
	if (neg->state == ns_connectping)
	{
		if (current_time() > neg->retryTime)
		{
			if (neg->retryCount > neg->maxRetryCount)
			{
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
					"NegotiateThink(cookie=%d): Last ping packet resend timed out\n", neg->cookie);
				StartReport(neg, nr_pingtimeout, INVALID_SOCKET, NULL);
			} 
			else
			{			
				neg->retryCount++;
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
					"NegotiateThink(cookie=%d): Resending ping packet (retryCount=%d)\n", neg->cookie, neg->retryCount);
				SendPingPacket(neg);
				neg->retryTime = current_time() + PING_RETRY_TIME;
			}
		}
	}

	// Have we timed out; sending the result report.
	if (neg->state == ns_reportsent)
	{
		if (current_time() > neg->retryTime)
		{
			if(neg->retryCount > neg->maxRetryCount)
			{
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_State, GSIDebugLevel_Notice,
					"NegotiateThink(cookie=%d): Last report packet resend timed out, finishing\n", neg->cookie);
				neg->state = ns_finished;			
			}
			else
			{
				SendReportPacket(neg); // Resend report packet.
				neg->retryCount++;
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
					"NegotiateThink(cookie=%d): Resending report packet (retryCount=%d)\n", neg->cookie, neg->retryCount);
				neg->retryTime = current_time() + REPORT_RETRY_TIME;
			}
		}
	}

	// Finished and ready to be removed?
	if (neg->state == ns_finished || neg->state == ns_reportack)
	{
		if (neg->sendGotRemoteData)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_State, GSIDebugLevel_Notice,
				"NegotiateThink(cookie=%d): Both sides are finished, no need to linger, cancelling\n", neg->cookie);
		}
		else if (current_time() > neg->retryTime)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_State, GSIDebugLevel_Notice,
				"NegotiateThink(cookie=%d): Finished negotiator is done lingering, cancelling\n", neg->cookie);
		}

		// Clean up negotiator.
		RemoveFinishedNegotiator(neg);
	}

	// Remove the negotiator if it was cancelled during its update.  This can 
	// help reduce the chance of NNBeginNegotiation() failing because cookie is 
	// in use.
	if (neg->state == ns_canceled)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Memory, GSIDebugLevel_Notice,
			"NegotiateThink(cookie=%d): Removing canceled negotiator post-update\n", neg->cookie);
		RemoveNegotiator(neg);
		// Return here so that if any code is added past this point, it won't 
		// reference an invalid neg.
		return;
	}
}

void NNThink()
{
	int i;

	// Update NAT detection in progress if necessary.
	if (activeNatify)
	{
		activeNatify = CheckNatifyStatus(mappingSock) && CheckNatifyStatus(ertSock);
	}

	if (negotiateList != NULL) {
		for(i = ArrayLength(negotiateList) - 1 ; i >= 0 ; i--)
		{
			// NOTE: We go backwards in case we need to remove one during think.
			NegotiateThink((NATNegotiator)ArrayNth(negotiateList, i));
		}
	}
}

static void SendConnectAck(NATNegotiator neg, SOCKADDR_IN *toaddr)
{
	NatNegPacket p;

	memcpy(p.magic, NNMagicData, NATNEG_MAGIC_LEN);
	p.version = NN_PROTVER;
	p.packettype = NN_CONNECT_ACK;
	p.cookie = (int)htonl((unsigned int)neg->cookie);
	p.Packet.Init.clientindex = (unsigned char)neg->clientindex;

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"SendConnectAck(cookie=%d): Sending connect ack...\n", neg->cookie);
	SendPacket(neg->negotiateSock, toaddr->sin_addr.s_addr, ntohs(toaddr->sin_port), &p, INITPACKET_SIZE);
}

static void ProcessConnectPacket(NATNegotiator neg, NatNegPacket *p, SOCKADDR_IN *fromaddr)
{
	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"ProcessConnectPacket(cookie=%d): Got connect packet (finish code: %d), guess: %s:%d\n", 
		neg->cookie, 
		p->Packet.Connect.finished, 
		inet_ntoa(*(IN_ADDR *)&p->Packet.Connect.remoteIP), 
		ntohs(p->Packet.Connect.remotePort));

	// Ack if not an error.
	if (p->Packet.Connect.finished == FINISHED_NOERROR)
	{
		SendConnectAck(neg, fromaddr);
	}

	if (neg->state >= ns_connectping)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"ProcessConnectPacket(cookie=%d): Got connect packet while already connected, ignoring\n", 
			neg->cookie); 
		return;
	}

	// Call the completed callback with the error code.
	if (p->Packet.Connect.finished != FINISHED_NOERROR)
	{
		NegotiateResult errcode;
		errcode = nr_unknownerror; // Default if unknown.
		if (p->Packet.Connect.finished == FINISHED_ERROR_DEADBEAT_PARTNER)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
				"ProcessConnectPacket(cookie=%d): deadbeat partner\n", 
				neg->cookie); 
			errcode = nr_deadbeatpartner;
		}
		else if (p->Packet.Connect.finished == FINISHED_ERROR_INIT_PACKETS_TIMEDOUT)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
				"ProcessConnectPacket(cookie=%d): init timeout\n", 
				neg->cookie); 
			errcode = nr_inittimeout;
		}
		StartReport(neg, errcode, INVALID_SOCKET, NULL);
		return;
	}

	neg->guessedIP = p->Packet.Connect.remoteIP;
	neg->guessedPort = ntohs(p->Packet.Connect.remotePort);
	neg->retryCount = 0;

	neg->state = ns_connectping;
	neg->progressCallback(neg->state, neg->userdata);

	SendPingPacket(neg);	
}

static void ProcessPingPacket(NATNegotiator neg, NatNegPacket *p, SOCKADDR_IN *fromaddr)
{
	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"ProcessPingPacket(cookie=%d): Got ping from: %s:%d (gotmydata: %d, finished: %d)\n", 
		neg->cookie,
		inet_ntoa(fromaddr->sin_addr), 
		ntohs(fromaddr->sin_port), 
		p->Packet.Connect.gotyourdata, 
		p->Packet.Connect.finished);

	if (neg->state < ns_connectping)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"ProcessPingPacket(cookie=%d): Received ping before ns_connectping state, ignoring\n", neg->cookie);
		return;
	}

	// Update our guessed ip and port (our initial guess may have been incorrect).
	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"Got ping from: %s:%d (gotmydata: %d, finished: %d)\n", inet_ntoa(fromaddr->sin_addr), ntohs(fromaddr->sin_port), p->Packet.Connect.gotyourdata, p->Packet.Connect.finished);

	neg->guessedIP = fromaddr->sin_addr.s_addr;
	neg->guessedPort = ntohs(fromaddr->sin_port);
	neg->gotRemoteData = 1;
	neg->sendGotRemoteData = (unsigned char)(p->Packet.Connect.gotyourdata ? 1 : 0);

	// Send a reply. This is harmless even if redundant, and there are corner 
	// cases we can't detect on our side with current protocol where it will 
	// allow the remote to stop lingering sooner.
	SendPingPacket(neg);

	// If we were waiting for their ping, then by receiving this we are "connected".
	if (neg->state == ns_connectping && neg->sendGotRemoteData) // Advance it.
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"ProcessPingPacket(cookie=%d): CONNECT FINISHED, starting report\n", neg->cookie);

		StartReport(neg, nr_success, (neg->gameSock != INVALID_SOCKET) ? neg->gameSock : neg->negotiateSock, fromaddr);
	}
}

static void ProcessInitPacket(NATNegotiator neg, NatNegPacket *p, SOCKADDR_IN *fromaddr)
{
	switch (p->packettype)
	{
	case NN_INITACK:
		// Mark our init as ack'd.
		if (p->Packet.Init.porttype > NN_PT_NN3)
			return; // Invalid port.
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Got init ack for port %d\n", p->Packet.Init.porttype);
		neg->initAckRecv[p->Packet.Init.porttype] = 1;
		if (neg->state == ns_initsent) // See if we can advance to negack.
		{
			if (neg->initAckRecv[NN_PT_NN1] != 0 && neg->initAckRecv[NN_PT_NN2] != 0 && neg->initAckRecv[NN_PT_NN3] != 0 &&
				(neg->gameSock == INVALID_SOCKET ||  neg->initAckRecv[NN_PT_GP] != 0))
			{
				neg->state = ns_initack;
				neg->retryTime = current_time() + PARTNER_WAIT_TIME;
				neg->progressCallback(neg->state, neg->userdata);
			}
		}
		break;

	case NN_ERTTEST:
		// We just send the packet back where it came from.
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Got ERT\n");
		p->packettype = NN_ERTACK;
		SendPacket(neg->negotiateSock, fromaddr->sin_addr.s_addr, ntohs(fromaddr->sin_port), p, INITPACKET_SIZE);
		break;

	case NN_REPORT_ACK:
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
			"ProcessInitPacket(cookie=%d): Got REPORT_ACK, finishing\n", neg->cookie);
		neg->state = ns_reportack;
		break;
	}
}

void NNProcessData(char *data, int len, SOCKADDR_IN *fromaddr)
{
	NatNegPacket p;
	NATNegotiator neg;
	unsigned char ptype;

	if (!CheckMagic(data))
	{
		// Invalid packet.
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
			"NNProcessData: Invalid packet header, ignoring\n");
		return;
	}

	ptype = *(unsigned char *)(data + offsetof(NatNegPacket, packettype));

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
		"NNProcessData: Packet type: %d, %d bytes (%s:%d)\n", 
		ptype, 
		len, 
		inet_ntoa(fromaddr->sin_addr), 
		ntohs(fromaddr->sin_port));

	if (ptype == NN_CONNECT || ptype == NN_CONNECT_PING)
	{	// It's a connect packet.
		if (len < CONNECTPACKET_SIZE)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
				"NNProcessData: CONNECT or CONNECT_PING packet too small, ignoring\n");
			return;
		}

		memcpy(&p, data, CONNECTPACKET_SIZE);		

		neg = FindNegotiatorForCookie((int)ntohl((unsigned int)p.cookie));
		if (!neg)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
				"NNProcessData(cookie=%d): Failed to find negotiator, ignoring\n",
				(int)ntohl((unsigned int)p.cookie));
			return;
		}

		if (ptype == NN_CONNECT)
		{
			ProcessConnectPacket(neg, &p, fromaddr);
		}
		else
		{
			ProcessPingPacket(neg, &p, fromaddr);
		}
	}
	else // It's an init packet.
	{
		if (len < INITPACKET_SIZE)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
				"NNProcessData: non-CONNECT/CONNECT_PING packet too small, ignoring\n");
			return;
		}

		memcpy(&p, data, INITPACKET_SIZE);
#ifdef _NITRO
		/* Incorporate Kiwada's fix for DS */
		memcpy(&(p.Packet.Init.localip), data + 15, sizeof(int));
		memcpy(&(p.Packet.Init.localport), data + 19, sizeof(short));
#endif

		neg = FindNegotiatorForCookie((int)ntohl((unsigned int)p.cookie));
		if (!neg)
		{
			gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Warning,
				"NNProcessData(cookie=%d): Failed to find negotiator, ignoring\n", (int)ntohl((unsigned int)p.cookie));
			return;
		}

		ProcessInitPacket(neg, &p, fromaddr);
	}
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049CE20;
extern float lbl_8049CE28;
extern float lbl_8049CE2C;
extern float lbl_8049CE30;
extern float lbl_8049DC70;
extern float lbl_8049DC74;
extern float lbl_8049DC78;
extern float lbl_8049DC7C;
extern float lbl_8049DC80;
extern float lbl_8049DC84;
extern u8 lbl_8040A168[];
extern u8 lbl_8040BB60[];
extern void _restgpr_26();
extern void _savegpr_26();
extern void detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80255E4C();
extern void fn_8027A774();
extern int fn_8027A810();
extern int fn_8027AA04();
extern int fn_8027B180();
extern int fn_8027B694();
extern int fn_8027B708();
extern int fn_8027B954();
extern int fn_8027BCCC();
extern int fn_8027BED0();
extern void fn_80336AC8();
extern void fn_80336B1C();
extern void fn_80336B20();
extern void fn_80336B28();
extern void fn_80336B2C();

// asm_to_cpp: fn_8027A810
asm int fn_8027A810() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r4
    stw r4, 0x44(r3)
    stw r5, 0x48(r3)
    beq lbl_8027A850
    mr r4, r6
    li r5, 0x8
    addi r3, r3, 0x4c
    bl memcpy
lbl_8027A850:
    subi r0, r29, 0x1
    cmplwi r0, 0x1
    bgt lbl_8027A904
    lwz r12, 0x3c(r31)
    li r0, 0x3
    stw r0, 0x10(r31)
    addi r5, r31, 0x4c
    lwz r3, 0x44(r31)
    lwz r4, 0x48(r31)
    lwz r6, 0x40(r31)
    mtctr r12
    bctrl
    lwz r0, lbl_8049DC70
    lwz r30, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8027A898
    li r30, 0x0
    b lbl_8027A8D8
lbl_8027A898:
    li r31, 0x0
    b lbl_8027A8C4
lbl_8027A8A0:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027A8C0
    mr r30, r3
    b lbl_8027A8D8
lbl_8027A8C0:
    addi r31, r31, 0x1
lbl_8027A8C4:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027A8A0
    li r30, 0x0
lbl_8027A8D8:
    cmpwi r30, 0x0
    beq lbl_8027A9E8
    lwz r3, 0x0(r30)
    cmpwi r3, -0x1
    beq lbl_8027A8F0
    bl closesocket
lbl_8027A8F0:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r30)
    stw r0, 0x10(r30)
    b lbl_8027A9E8
lbl_8027A904:
    addi r3, r1, 0x18
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0xd
    stb r3, 0x1e(r1)
    stb r0, 0x1f(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x20(r1)
    lis r30, lbl_8040A168@ha
    lwz r4, lbl_8049CE30
    addi r3, r30, lbl_8040A168@l
    lwz r5, 0xc(r31)
    lwz r0, lbl_8049DC84
    stb r5, 0x25(r1)
    lwz r5, 0x44(r31)
    cntlzw r5, r5
    stw r4, 0x27(r1)
    extrwi r4, r5, 8, 19
    stb r4, 0x26(r1)
    stw r0, 0x2b(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_8027A97C
    addi r3, r1, 0x2f
    addi r4, r30, lbl_8040A168@l
    li r5, 0x32
    bl memcpy
lbl_8027A97C:
    lwz r0, lbl_8049DC74
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r29, 0x0(r31)
    li r0, 0x2
    lwz r30, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x11(r1)
    bl fn_80336B2C
    sth r3, 0x12(r1)
    mr r3, r29
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    stw r30, 0x14(r1)
    li r5, 0x49
    li r6, 0x0
    li r8, 0x8
    bl sendto
    li r30, 0x5
    stw r30, 0x10(r31)
    bl current_time
    addi r3, r3, 0x3e8
    li r0, 0x0
    stw r3, 0x2c(r31)
    stw r0, 0x24(r31)
    stw r30, 0x28(r31)
lbl_8027A9E8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8027AA04
asm int fn_8027AA04() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_26
    addi r31, r1, 0x48
    mr r29, r3
    mr r3, r31
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r0, 0x3
    li r27, 0x0
    stb r0, 0x4e(r1)
    stb r27, 0x4f(r1)
    lwz r3, 0x8(r29)
    bl fn_80336B28
    stw r3, 0x50(r1)
    lwz r0, 0xc(r29)
    stb r0, 0x55(r1)
    lwz r4, 0x4(r29)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r0, r0, 31
    stb r0, 0x56(r1)
    bl fn_8027A774
    bl fn_80336B1C
    srwi r4, r3, 24
    extrwi r5, r3, 8, 8
    extrwi r0, r3, 8, 16
    stb r3, 0x5a(r1)
    lis r28, lbl_8040A168@ha
    addi r3, r1, 0x5d
    stb r4, 0x57(r1)
    addi r4, r28, lbl_8040A168@l
    stb r5, 0x58(r1)
    stb r0, 0x59(r1)
    stb r27, 0x5b(r1)
    stb r27, 0x5c(r1)
    bl strcpy
    addi r3, r28, lbl_8040A168@l
    bl strlen
    lbz r0, 0x56(r1)
    addi r30, r3, 0x16
    cmpwi r0, 0x0
    beq lbl_8027AB1C
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_8027AB1C
    lwz r0, lbl_8049DC74
    addi r3, r1, 0x18
    stb r27, 0x54(r1)
    stw r0, 0x18(r1)
    bl fn_80336AC8
    lwz r27, 0x4(r29)
    li r0, 0x2
    lwz r28, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x41(r1)
    bl fn_80336B2C
    sth r3, 0x42(r1)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    stw r28, 0x44(r1)
    addi r7, r1, 0x40
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AB1C:
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_8027AB7C
    lwz r0, lbl_8049DC74
    li r3, 0x1
    stb r3, 0x54(r1)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_80336AC8
    lwz r27, 0x0(r29)
    li r0, 0x2
    lwz r28, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x39(r1)
    bl fn_80336B2C
    sth r3, 0x3a(r1)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    stw r28, 0x3c(r1)
    addi r7, r1, 0x38
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AB7C:
    lbz r0, 0x56(r1)
    cmpwi r0, 0x0
    beq lbl_8027AB90
    lwz r3, 0x4(r29)
    b lbl_8027AB94
lbl_8027AB90:
    lwz r3, 0x0(r29)
lbl_8027AB94:
    li r0, 0x8
    addi r4, r1, 0x30
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    bl getsockname
    cmpwi r3, -0x1
    bne lbl_8027ABB8
    li r3, 0x0
    b lbl_8027ABBC
lbl_8027ABB8:
    lhz r3, 0x32(r1)
lbl_8027ABBC:
    bl fn_80336B20
    extrwi r0, r3, 8, 16
    stb r3, 0x5c(r1)
    stb r0, 0x5b(r1)
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    bne lbl_8027AC28
    lwz r0, lbl_8049DC78
    li r28, 0x2
    stb r28, 0x54(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl fn_80336AC8
    lwz r27, 0x0(r29)
    li r3, 0x6cfd
    lwz r26, lbl_8049DC78
    stb r28, 0x29(r1)
    bl fn_80336B2C
    sth r3, 0x2a(r1)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    stw r26, 0x2c(r1)
    addi r7, r1, 0x28
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AC28:
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    bne lbl_8027AC88
    lwz r0, lbl_8049DC7C
    li r3, 0x3
    stb r3, 0x54(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lwz r26, 0x0(r29)
    li r0, 0x2
    lwz r27, lbl_8049DC7C
    li r3, 0x6cfd
    stb r0, 0x21(r1)
    bl fn_80336B2C
    sth r3, 0x22(r1)
    mr r3, r26
    mr r4, r31
    mr r5, r30
    stw r27, 0x24(r1)
    addi r7, r1, 0x20
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AC88:
    bl current_time
    addi r3, r3, 0x1f4
    li r0, 0xa
    stw r3, 0x2c(r29)
    addi r11, r1, 0xc0
    stw r0, 0x28(r29)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_8027B180
asm int fn_8027B180() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x8
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r0, lbl_8049DC80
    stw r4, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_8027B1C8
    lwz r3, lbl_8049CE28
    bl CheckNatifyStatus
    stw r3, lbl_8049DC80
    lwz r3, lbl_8049CE2C
    bl CheckNatifyStatus
    stw r3, lbl_8049DC80
lbl_8027B1C8:
    cmpwi r31, 0x0
    beq lbl_8027B678
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    bne lbl_8027B220
    li r30, 0x0
    b lbl_8027B20C
lbl_8027B1E4:
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl fn_80253660
    cmplw r31, r3
    bne lbl_8027B208
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
    b lbl_8027B678
lbl_8027B208:
    addi r30, r30, 0x1
lbl_8027B20C:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027B1E4
    b lbl_8027B678
lbl_8027B220:
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    beq lbl_8027B29C
    lis r30, lbl_8040BB60@ha
    b lbl_8027B28C
lbl_8027B234:
    lwz r3, 0x0(r31)
    addi r4, r30, lbl_8040BB60@l
    addi r7, r1, 0x30
    addi r8, r1, 0x10
    li r5, 0x200
    li r6, 0x0
    bl recvfrom
    cmpwi r3, -0x1
    bne lbl_8027B264
    lwz r3, 0x0(r31)
    bl GOAGetLastError
    b lbl_8027B29C
lbl_8027B264:
    mr r4, r3
    addi r3, r30, lbl_8040BB60@l
    addi r5, r1, 0x30
    bl fn_8027BED0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    beq lbl_8027B29C
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    beq lbl_8027B29C
lbl_8027B28C:
    lwz r3, 0x0(r31)
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_8027B234
lbl_8027B29C:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_8027B2B0
    cmpwi r0, 0x2
    bne lbl_8027B414
lbl_8027B2B0:
    bl current_time
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B414
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    cmpw r3, r0
    ble lbl_8027B30C
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_8027B2F4
    mr r3, r31
    li r4, 0x2
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
    b lbl_8027B414
lbl_8027B2F4:
    mr r3, r31
    li r4, 0x3
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
    b lbl_8027B414
lbl_8027B30C:
    lwz r0, 0x10(r31)
    addi r3, r3, 0x1
    stw r3, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_8027B32C
    mr r3, r31
    bl fn_8027AA04
    b lbl_8027B414
lbl_8027B32C:
    addi r3, r1, 0x84
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x8a(r1)
    stb r0, 0x8b(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x8c(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x90(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x94(r1)
    lbz r0, 0x36(r31)
    stb r0, 0x96(r1)
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bne lbl_8027B388
    li r0, 0x0
    b lbl_8027B38C
lbl_8027B388:
    li r0, 0x1
lbl_8027B38C:
    stb r0, 0x97(r1)
    addi r3, r1, 0xc
    lwz r0, 0x30(r31)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027B3B8
    b lbl_8027B3BC
lbl_8027B3B8:
    lwz r29, 0x0(r31)
lbl_8027B3BC:
    li r0, 0x2
    stb r0, 0x21(r1)
    bl fn_80336B2C
    sth r3, 0x22(r1)
    mr r3, r29
    addi r4, r1, 0x84
    addi r7, r1, 0x20
    stw r30, 0x24(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl current_time
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027B414
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027B414:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x3
    bne lbl_8027B480
    bl current_time
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B480
    li r0, 0x2
    stb r0, 0x29(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x2a(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x2c(r1)
    lwz r5, 0x4(r31)
    cmpwi r5, -0x1
    bne lbl_8027B470
    lwz r5, 0x0(r31)
    mr r3, r31
    addi r6, r1, 0x28
    li r4, 0x0
    bl fn_8027A810
    b lbl_8027B480
lbl_8027B470:
    mr r3, r31
    addi r6, r1, 0x28
    li r4, 0x0
    bl fn_8027A810
lbl_8027B480:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_8027B4B0
    bl current_time
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B4B0
    mr r3, r31
    li r4, 0x1
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
lbl_8027B4B0:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x5
    bne lbl_8027B678
    bl current_time
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B678
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    cmpw r3, r0
    ble lbl_8027B590
    lwz r12, 0x3c(r31)
    addi r5, r31, 0x4c
    lwz r3, 0x44(r31)
    lwz r4, 0x48(r31)
    lwz r6, 0x40(r31)
    mtctr r12
    bctrl
    lwz r0, 0x4(r31)
    cmpwi r0, -0x1
    bne lbl_8027B50C
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_8027B50C:
    lwz r0, lbl_8049DC70
    lwz r30, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8027B524
    li r30, 0x0
    b lbl_8027B564
lbl_8027B524:
    li r31, 0x0
    b lbl_8027B550
lbl_8027B52C:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027B54C
    mr r30, r3
    b lbl_8027B564
lbl_8027B54C:
    addi r31, r31, 0x1
lbl_8027B550:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027B52C
    li r30, 0x0
lbl_8027B564:
    cmpwi r30, 0x0
    beq lbl_8027B678
    lwz r3, 0x0(r30)
    cmpwi r3, -0x1
    beq lbl_8027B57C
    bl closesocket
lbl_8027B57C:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r30)
    stw r0, 0x10(r30)
    b lbl_8027B678
lbl_8027B590:
    addi r3, r1, 0x38
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0xd
    stb r3, 0x3e(r1)
    stb r0, 0x3f(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x40(r1)
    lwz r0, 0xc(r31)
    stb r0, 0x45(r1)
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_8027B5D8
    li r5, 0x1
    b lbl_8027B5DC
lbl_8027B5D8:
    li r5, 0x0
lbl_8027B5DC:
    lwz r4, lbl_8049CE30
    lis r30, lbl_8040A168@ha
    lwz r0, lbl_8049DC84
    addi r3, r30, lbl_8040A168@l
    stb r5, 0x46(r1)
    stw r4, 0x47(r1)
    stw r0, 0x4b(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_8027B614
    addi r3, r1, 0x4f
    addi r4, r30, lbl_8040A168@l
    li r5, 0x32
    bl memcpy
lbl_8027B614:
    lwz r0, lbl_8049DC74
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r29, 0x0(r31)
    li r0, 0x2
    lwz r30, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x19(r1)
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x38
    addi r7, r1, 0x18
    stw r30, 0x1c(r1)
    li r5, 0x49
    li r6, 0x0
    li r8, 0x8
    bl sendto
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    bl current_time
    addi r0, r3, 0x3e8
    stw r0, 0x2c(r31)
lbl_8027B678:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_8027B694
asm int fn_8027B694() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8049DC70
    cmpwi r3, 0x0
    beq lbl_8027B6BC
    bl fn_80253658
    cmpwi r3, 0x0
    bne lbl_8027B6C8
lbl_8027B6BC:
    li r3, 0x0
    bl fn_8027B180
    b lbl_8027B6F4
lbl_8027B6C8:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    subi r31, r3, 0x1
    b lbl_8027B6EC
lbl_8027B6D8:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    bl fn_8027B180
    subi r31, r31, 0x1
lbl_8027B6EC:
    cmpwi r31, 0x0
    bge lbl_8027B6D8
lbl_8027B6F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8027B708
asm int fn_8027B708() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    mr r29, r5
    stw r28, 0xc0(r1)
    mr r28, r4
    lwz r0, 0xc(r4)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lhz r3, 0x10(r28)
    bl fn_80336B20
    lbz r0, 0x13(r28)
    cmpwi r0, 0x0
    bne lbl_8027B7CC
    addi r3, r1, 0x6c
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x6
    stb r3, 0x72(r1)
    stb r0, 0x73(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x74(r1)
    lwz r0, 0xc(r31)
    stb r0, 0x79(r1)
    lhz r3, 0x2(r29)
    bl fn_80336B20
    lwz r30, 0x4(r29)
    li r0, 0x2
    lwz r29, 0x0(r31)
    clrlwi r3, r3, 16
    stb r0, 0x19(r1)
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x6c
    addi r7, r1, 0x18
    stw r30, 0x1c(r1)
    li r5, 0x15
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027B7CC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bge lbl_8027B934
    lbz r0, 0x13(r28)
    cmpwi r0, 0x0
    beq lbl_8027B818
    cmplwi r0, 0x1
    li r4, 0x4
    bne lbl_8027B7F8
    li r4, 0x1
    b lbl_8027B804
lbl_8027B7F8:
    cmplwi r0, 0x2
    bne lbl_8027B804
    li r4, 0x2
lbl_8027B804:
    mr r3, r31
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
    b lbl_8027B934
lbl_8027B818:
    lwz r0, 0xc(r28)
    stw r0, 0x30(r31)
    lhz r3, 0x10(r28)
    bl fn_80336B20
    lwz r12, 0x38(r31)
    li r5, 0x0
    li r0, 0x2
    sth r3, 0x34(r31)
    lwz r4, 0x40(r31)
    li r3, 0x2
    stw r5, 0x24(r31)
    stw r0, 0x10(r31)
    mtctr r12
    bctrl
    addi r3, r1, 0x20
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x26(r1)
    stb r0, 0x27(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x28(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x2c(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x30(r1)
    addi r3, r1, 0x8
    lbz r0, 0x36(r31)
    stb r0, 0x32(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0x33(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r30, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r30, -0x1
    lwz r29, 0x30(r31)
    beq lbl_8027B8D8
    b lbl_8027B8DC
lbl_8027B8D8:
    lwz r30, 0x0(r31)
lbl_8027B8DC:
    li r0, 0x2
    stb r0, 0x11(r1)
    bl fn_80336B2C
    sth r3, 0x12(r1)
    mr r3, r30
    addi r4, r1, 0x20
    addi r7, r1, 0x10
    stw r29, 0x14(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl current_time
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027B934
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027B934:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_8027B954
asm int fn_8027B954() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    mr r30, r4
    stw r29, 0x124(r1)
    mr r29, r5
    lwz r0, 0x10(r3)
    cmpwi r0, 0x2
    blt lbl_8027BCB0
    lwz r0, 0x4(r5)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_80336AC8
    lhz r3, 0x2(r29)
    bl fn_80336B20
    lwz r0, 0x4(r29)
    stw r0, 0x30(r31)
    lhz r3, 0x2(r29)
    bl fn_80336B20
    li r0, 0x1
    sth r3, 0x34(r31)
    stb r0, 0x36(r31)
    lbz r0, 0x12(r30)
    cmpwi r0, 0x0
    bne lbl_8027BAAC
    addi r3, r1, 0xc8
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0xce(r1)
    stb r0, 0xcf(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0xd0(r1)
    lwz r0, 0x30(r31)
    stw r0, 0xd4(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0xd8(r1)
    addi r3, r1, 0x10
    lbz r0, 0x36(r31)
    stb r0, 0xda(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0xdb(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x10(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027BA4C
    b lbl_8027BA50
lbl_8027BA4C:
    lwz r29, 0x0(r31)
lbl_8027BA50:
    li r0, 0x2
    stb r0, 0x29(r1)
    bl fn_80336B2C
    sth r3, 0x2a(r1)
    mr r3, r29
    addi r4, r1, 0xc8
    addi r7, r1, 0x28
    stw r30, 0x2c(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl current_time
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027BCB0
    li r0, 0x1
    stb r0, 0x37(r31)
    b lbl_8027BCB0
lbl_8027BAAC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bne lbl_8027BBC0
    lbz r0, 0x37(r31)
    cmpwi r0, 0x0
    bne lbl_8027BBA8
    addi r3, r1, 0x7c
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x82(r1)
    stb r0, 0x83(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x84(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x88(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x8c(r1)
    addi r3, r1, 0xc
    lbz r0, 0x36(r31)
    stb r0, 0x8e(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0x8f(r1)
    lwz r0, 0x30(r31)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027BB4C
    b lbl_8027BB50
lbl_8027BB4C:
    lwz r29, 0x0(r31)
lbl_8027BB50:
    li r0, 0x2
    stb r0, 0x21(r1)
    bl fn_80336B2C
    sth r3, 0x22(r1)
    mr r3, r29
    addi r4, r1, 0x7c
    addi r7, r1, 0x20
    stw r30, 0x24(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl current_time
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027BBA8
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027BBA8:
    li r0, 0x3
    stw r0, 0x10(r31)
    bl current_time
    addi r0, r3, 0x1388
    stw r0, 0x2c(r31)
    b lbl_8027BCB0
lbl_8027BBC0:
    lbz r0, 0x13(r30)
    cmpwi r0, 0x0
    bne lbl_8027BCB0
    addi r3, r1, 0x30
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x36(r1)
    stb r0, 0x37(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x38(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x3c(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x40(r1)
    addi r3, r1, 0x8
    lbz r0, 0x36(r31)
    stb r0, 0x42(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0x43(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027BC54
    b lbl_8027BC58
lbl_8027BC54:
    lwz r29, 0x0(r31)
lbl_8027BC58:
    li r0, 0x2
    stb r0, 0x19(r1)
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x30
    addi r7, r1, 0x18
    stw r30, 0x1c(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl current_time
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027BCB0
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027BCB0:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_8027BCCC
asm int fn_8027BCCC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0x7(r4)
    cmpwi r0, 0x2
    beq lbl_8027BDAC
    bge lbl_8027BD0C
    cmpwi r0, 0x1
    bge lbl_8027BD18
    b lbl_8027BEB4
lbl_8027BD0C:
    cmpwi r0, 0xe
    beq lbl_8027BDFC
    b lbl_8027BEB4
lbl_8027BD18:
    lbz r0, 0xc(r4)
    cmplwi r0, 0x3
    bgt lbl_8027BEB4
    clrlslwi r0, r0, 24, 2
    li r5, 0x1
    add r4, r3, r0
    stw r5, 0x14(r4)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_8027BEB4
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
    lwz r0, 0x4(r3)
    cmpwi r0, -0x1
    beq lbl_8027BD7C
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
lbl_8027BD7C:
    li r0, 0x1
    stw r0, 0x10(r3)
    bl current_time
    addis r3, r3, 0x1
    lwz r12, 0x38(r31)
    subi r0, r3, 0x15a0
    lwz r3, 0x10(r31)
    stw r0, 0x2c(r31)
    lwz r4, 0x40(r31)
    mtctr r12
    bctrl
    b lbl_8027BEB4
lbl_8027BDAC:
    li r0, 0x3
    stb r0, 0x7(r4)
    lhz r3, 0x2(r5)
    bl fn_80336B20
    lwz r30, 0x4(r30)
    li r0, 0x2
    lwz r31, 0x0(r31)
    clrlwi r3, r3, 16
    stb r0, 0x9(r1)
    bl fn_80336B2C
    sth r3, 0xa(r1)
    mr r3, r31
    mr r4, r29
    addi r7, r1, 0x8
    stw r30, 0xc(r1)
    li r5, 0x15
    li r6, 0x0
    li r8, 0x8
    bl sendto
    b lbl_8027BEB4
lbl_8027BDFC:
    lwz r12, 0x3c(r31)
    li r0, 0x6
    stw r0, 0x10(r3)
    addi r5, r31, 0x4c
    lwz r3, 0x44(r3)
    lwz r4, 0x48(r31)
    lwz r6, 0x40(r31)
    mtctr r12
    bctrl
    lwz r0, 0x4(r31)
    cmpwi r0, -0x1
    bne lbl_8027BE34
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_8027BE34:
    lwz r0, lbl_8049DC70
    lwz r30, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8027BE4C
    li r30, 0x0
    b lbl_8027BE8C
lbl_8027BE4C:
    li r31, 0x0
    b lbl_8027BE78
lbl_8027BE54:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027BE74
    mr r30, r3
    b lbl_8027BE8C
lbl_8027BE74:
    addi r31, r31, 0x1
lbl_8027BE78:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027BE54
    li r30, 0x0
lbl_8027BE8C:
    cmpwi r30, 0x0
    beq lbl_8027BEB4
    lwz r3, 0x0(r30)
    cmpwi r3, -0x1
    beq lbl_8027BEA4
    bl closesocket
lbl_8027BEA4:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r30)
    stw r0, 0x10(r30)
lbl_8027BEB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8027BED0
asm int fn_8027BED0() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    la r4, lbl_8049CE20
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    mr r28, r5
    li r5, 0x6
    bl memcmp
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_8027C068
    lbz r29, 0x7(r31)
    addi r3, r1, 0x8
    lwz r0, 0x4(r28)
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lhz r3, 0x2(r28)
    bl fn_80336B20
    cmplwi r29, 0x5
    beq lbl_8027BF3C
    cmplwi r29, 0x7
    bne lbl_8027BFE0
lbl_8027BF3C:
    cmpwi r30, 0x14
    blt lbl_8027C068
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x14
    bl memcpy
    lwz r3, 0x14(r1)
    bl fn_80336B1C
    lwz r0, lbl_8049DC70
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8027BF74
    li r3, 0x0
    b lbl_8027BFB0
lbl_8027BF74:
    li r30, 0x0
    b lbl_8027BF9C
lbl_8027BF7C:
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r31
    bne lbl_8027BF98
    b lbl_8027BFB0
lbl_8027BF98:
    addi r30, r30, 0x1
lbl_8027BF9C:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027BF7C
    li r3, 0x0
lbl_8027BFB0:
    cmpwi r3, 0x0
    beq lbl_8027C068
    cmplwi r29, 0x5
    bne lbl_8027BFD0
    mr r5, r28
    addi r4, r1, 0xc
    bl fn_8027B708
    b lbl_8027C068
lbl_8027BFD0:
    mr r5, r28
    addi r4, r1, 0xc
    bl fn_8027B954
    b lbl_8027C068
lbl_8027BFE0:
    cmpwi r30, 0x15
    blt lbl_8027C068
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x15
    bl memcpy
    lwz r3, 0x14(r1)
    bl fn_80336B1C
    lwz r0, lbl_8049DC70
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8027C018
    li r3, 0x0
    b lbl_8027C054
lbl_8027C018:
    li r30, 0x0
    b lbl_8027C040
lbl_8027C020:
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r31
    bne lbl_8027C03C
    b lbl_8027C054
lbl_8027C03C:
    addi r30, r30, 0x1
lbl_8027C040:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027C020
    li r3, 0x0
lbl_8027C054:
    cmpwi r3, 0x0
    beq lbl_8027C068
    mr r5, r28
    addi r4, r1, 0xc
    bl fn_8027BCCC
lbl_8027C068:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
