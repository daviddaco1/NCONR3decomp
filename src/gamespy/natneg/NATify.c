typedef int socklen_t;
///////////////////////////////////////////////////////////////////////////////
// File:	NATify.c
// SDK:		GameSpy NAT Negotiation SDK
//
// Copyright (c) 2012 GameSpy Technology & IGN Entertainment, Inc.  All rights 
// reserved. This software is made available only pursuant to certain license 
// terms offered by IGN or its subsidiary GameSpy Industries, Inc.  Unlicensed
// use or use in a manner not expressly authorized by IGN or GameSpy Technology
// is prohibited.

#include <stddef.h>
#include "nninternal.h"
#include "NATify.h"

gsi_bool gotERT1, gotERT2, gotERT3;
gsi_bool gotADDRESS1a, gotADDRESS1b, gotADDRESS2, gotADDRESS3;

// Avoids strict compiler warnings.
const char * AddressToString(unsigned int ip, unsigned short port, char string[22]);
unsigned int NameToIp(const char *name);


const char * AddressToString(unsigned int ip, unsigned short port, char string[22])
{
	static char strAddressArray[2][22];
	static int nIndex;
	char * strAddress;

	if(string)
		strAddress = string;
	else
	{
		nIndex ^= 1;
		strAddress = strAddressArray[nIndex];
	}

	if(ip)
	{
		IN_ADDR inAddr;

		inAddr.s_addr = ip;

		if(port)
			sprintf(strAddress, "%s:%d", inet_ntoa(inAddr), port);
		else
			sprintf(strAddress, "%s", inet_ntoa(inAddr));
	}
	else if(port)
		sprintf(strAddress, ":%d", port);
	else
		strAddress[0] = '\0';

	return strAddress;
}

static unsigned int GetLocalIP()
{
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

unsigned int NameToIp(const char *name)
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

int DiscoverReachability(SOCKET sock, unsigned int ip, unsigned short port, int portType)
{
	NatNegPacket p;
	SOCKADDR_IN addr;
	int len = sizeof(SOCKADDR_IN);
	int success = 1;

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment,
		"(%d) Sending ERT Request to %s\n", portType, AddressToString(ip, port, NULL));

	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = ip;
	addr.sin_port = htons(port);

	memset(&p, 0, sizeof(p));
	p.magic[0]		= NN_MAGIC_0;
	p.magic[1]		= NN_MAGIC_1;
	p.magic[2]		= NN_MAGIC_2;
	p.magic[3]		= NN_MAGIC_3;
	p.magic[4]		= NN_MAGIC_4;
	p.magic[5]		= NN_MAGIC_5;
	p.version		= NN_PROTVER;
	p.packettype	= NN_NATIFY_REQUEST;
	p.cookie		= (int)htonl(NATIFY_COOKIE);
	p.Packet.Init.porttype	= (unsigned char)portType;

	success = sendto(sock, (const char *)&p, sizeof(p), 0, (SOCKADDR *)&addr, sizeof(addr));

	GSI_UNUSED(len);
	return(success);
}

int DiscoverMapping(SOCKET sock, unsigned int ip, unsigned short port, int portType, int id)
{
	NatNegPacket p;
	SOCKADDR_IN addr;
	int len = sizeof(SOCKADDR_IN);
	int success;

	gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment,
		"Sending ADDRESS CHECK %d to %s\n", id, AddressToString(ip, port, NULL));

	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = ip;
	addr.sin_port = htons(port);

	memset(&p, 0, sizeof(p));
	p.magic[0]		= NN_MAGIC_0;
	p.magic[1]		= NN_MAGIC_1;
	p.magic[2]		= NN_MAGIC_2;
	p.magic[3]		= NN_MAGIC_3;
	p.magic[4]		= NN_MAGIC_4;
	p.magic[5]		= NN_MAGIC_5;
	p.version		= NN_PROTVER;
	p.packettype	= NN_ADDRESS_CHECK;
	p.cookie		= (int)htonl(id);
	p.Packet.Init.porttype	= (unsigned char)portType;

	success = sendto(sock, (const char *)&p, sizeof(p), 0, (SOCKADDR *)&addr, sizeof(addr));

	GSI_UNUSED(len);
	return(success);
}

void OutputMapping(const AddressMapping * theMap)
{
	if(theMap == NULL)
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment, 
			"ERROR: Port mapping not available.");
	}
	else
	{
		gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment, 
			"Discovered map: [%s] -> [%s]\n", AddressToString(theMap->privateIp, theMap->privatePort, NULL),
											  AddressToString(theMap->publicIp,  theMap->publicPort,  NULL));
	}
}

static int Think(SOCKET sock, NAT * nat)
{
	static char data[NNINBUF_LEN];
	int length;
	unsigned char ptype;
	NatNegPacket p;
	SOCKADDR_IN saddr;
	socklen_t saddrlen = sizeof(SOCKADDR_IN);

	// Is NATification complete?
	if(gotERT1 && gotERT2 && gotERT3 && 
		gotADDRESS1a && gotADDRESS1b && gotADDRESS2 && gotADDRESS3)
	{
		// No need to wait any longer, we got all the information.
		return(gsi_false);
	}

	// Process incoming data (if there is any).
	if(sock != INVALID_SOCKET)
	{
		// Check if there is data.
		while(CanReceiveOnSocket(sock))
		{
			length = recvfrom(sock, data, NNINBUF_LEN, 0, (SOCKADDR *)&saddr, &saddrlen);

			if (gsiSocketIsError(length))
			{
				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Notice,
					"RECV SOCKET ERROR: %d\n", GOAGetLastError(sock));
				break;
			}

			if (memcmp(data, NNMagicData, NATNEG_MAGIC_LEN) != 0)
				return(gsi_true);

			ptype = *(unsigned char *)(data + offsetof(NatNegPacket, packettype));

			if (length < INITPACKET_SIZE)
				return(gsi_true);
			
			if(ptype == NN_ERTTEST)
			{
				memcpy(&p, data, INITPACKET_SIZE);		
#ifdef _NITRO
				/* Incorporate Kiwada's fix for DS */
				memcpy(&(p.Packet.Init.localip), data + 15, sizeof(int));
				memcpy(&(p.Packet.Init.localport), data + 19, sizeof(short));
#endif

				switch(p.Packet.Init.porttype)
				{
				case NN_PT_NN1:
					// Got the solicited ERT reply.
					gotERT1 = gsi_true;
					gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment,
						"(1) Got the solicited ERT from: %s\n", AddressToString(saddr.sin_addr.s_addr, ntohs(saddr.sin_port), NULL));
					break;
				case NN_PT_NN2:
					// Got the unsolicited IP ERT reply.
					nat->ipRestricted = gsi_false;
					gotERT2 = gsi_true;
					gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment,
						"(2) Got the unsolicited (address) ERT from: %s\n", AddressToString(saddr.sin_addr.s_addr, ntohs(saddr.sin_port), NULL));
					break;
				case NN_PT_NN3:
					// Got the unsolicited IP&Port ERT reply.
					nat->portRestricted = gsi_false;
					gotERT3 = gsi_true;
					gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment,
						"(3) Got the unsolicited (port) ERT from: %s\n", AddressToString(saddr.sin_addr.s_addr, ntohs(saddr.sin_port), NULL));
					break;
				}

			}
			else if(ptype == NN_ADDRESS_REPLY)
			{
				memcpy(&p, data, INITPACKET_SIZE);		
#ifdef _NITRO
				/* Incorporate Kiwada's fix for DS */
				memcpy(&(p.Packet.Init.localip), data + 15, sizeof(int));
				memcpy(&(p.Packet.Init.localport), data + 19, sizeof(short));
#endif

				p.cookie = (int)ntohl(p.cookie);

				switch(p.cookie)
				{
				case packet_map1a:
					gotADDRESS1a = gsi_true; break;
				case packet_map1b:
					gotADDRESS1b = gsi_true; break;
				case packet_map2:
					gotADDRESS2 = gsi_true;  break;
				case packet_map3:
					gotADDRESS3 = gsi_true;  break;
				}

				nat->mappings[p.cookie].privateIp	= GetLocalIP();
				nat->mappings[p.cookie].privatePort	= ntohs(GetLocalPort(sock));
				nat->mappings[p.cookie].publicIp	= p.Packet.Init.localip;
				nat->mappings[p.cookie].publicPort	= ntohs(p.Packet.Init.localport);

				gsDebugFormat(GSIDebugCat_NatNeg, GSIDebugType_Network, GSIDebugLevel_Comment,
					"Got ADDRESS REPLY %d from: %s\n", p.cookie, AddressToString(saddr.sin_addr.s_addr, ntohs(saddr.sin_port), NULL));
				OutputMapping(&nat->mappings[p.cookie]);
			}

			if (sock == INVALID_SOCKET)
				break;
		}
	}

	return(gsi_true);
}

int NatifyThink(SOCKET sock, NAT * nat)
{
	return(Think(sock, nat));
}

gsi_bool DetermineNatType(NAT * nat)
{
	// Initialize.
	nat->natType = unknown;
	nat->promiscuity = promiscuity_not_applicable;
	nat->qr2Compatible = gsi_true;

	// Some of the address mappings are crucial in determining the NAT type. If 
	// we don't have them, we should not proceed.
	if(nat->mappings[packet_map1a].publicIp == 0 ||
	   nat->mappings[packet_map2].publicIp == 0 ||
	   nat->mappings[packet_map3].publicIp == 0)
	   return(gsi_false);

	// Is there a NAT?
	if(!nat->portRestricted && 
       !nat->ipRestricted &&
	   (nat->mappings[packet_map1a].publicIp == nat->mappings[packet_map1a].privateIp))
	{
		nat->natType = no_nat;
	}
	else if(nat->mappings[packet_map1a].publicIp == nat->mappings[packet_map1a].privateIp)
	{
		nat->natType = firewall_only;
	}
	else
	{
		// What type of NAT is it?
		if(!nat->ipRestricted && 
		   !nat->portRestricted &&
		   (abs(nat->mappings[packet_map3].publicPort - nat->mappings[packet_map2].publicPort) >= 1))
		{
			nat->natType = symmetric;
			nat->promiscuity = promiscuous;
		}
		else if(nat->ipRestricted && 
			    !nat->portRestricted && 
			    (abs(nat->mappings[packet_map3].publicPort - nat->mappings[packet_map2].publicPort) >= 1))
		{
			nat->natType = symmetric;
			nat->promiscuity = port_promiscuous;
		}
		else if(!nat->ipRestricted && 
			    nat->portRestricted && 
			    (abs(nat->mappings[packet_map3].publicPort - nat->mappings[packet_map2].publicPort) >= 1))
		{
			nat->natType = symmetric;
			nat->promiscuity = ip_promiscuous;
		}
		else if(nat->ipRestricted && 
			    nat->portRestricted && 
				(abs(nat->mappings[packet_map3].publicPort - nat->mappings[packet_map2].publicPort) >= 1))
		{
			nat->natType = symmetric;
			nat->promiscuity = not_promiscuous;
		}
		else if(nat->portRestricted)
			nat->natType = port_restricted_cone;
		else if(nat->ipRestricted && !nat->portRestricted)
			nat->natType = restricted_cone;
		else if(!nat->ipRestricted && !nat->portRestricted)
			nat->natType = full_cone;
		else
			nat->natType = unknown;
	}

	// What is the port mapping behavior?
	if(nat->mappings[packet_map1a].publicPort == nat->mappings[packet_map1a].privatePort &&
	   nat->mappings[packet_map2].publicPort == nat->mappings[packet_map2].privatePort &&
	   nat->mappings[packet_map3].publicPort == nat->mappings[packet_map3].privatePort)
		// Using private port as the public port.
		nat->mappingScheme = private_as_public;
	else if(nat->mappings[packet_map1a].publicPort == nat->mappings[packet_map2].publicPort &&
			nat->mappings[packet_map2].publicPort == nat->mappings[packet_map3].publicPort)
		// Using the same public port for all requests from the same private port.
		nat->mappingScheme = consistent_port;
	else if(nat->mappings[packet_map1a].publicPort == nat->mappings[packet_map1a].privatePort && 
			nat->mappings[packet_map3].publicPort - nat->mappings[packet_map2].publicPort == 1)
		// Using private port as the public port for the first mapping.
		// Using an incremental (+1) port mapping scheme thereafter.
		nat->mappingScheme = mixed;
	else if(nat->mappings[packet_map3].publicPort - nat->mappings[packet_map2].publicPort == 1)
		// Using an incremental (+1) port mapping scheme.
		nat->mappingScheme = incremental;
	else
		// Unrecognized port mapping scheme.
		nat->mappingScheme = unrecognized;

	if(nat->mappings[packet_map1b].publicPort != 0 && nat->mappings[packet_map1a].publicPort != nat->mappings[packet_map1b].publicPort)
	{
		// NOTE: The NAT maps different ports for the same destination.
		// Game servers may not be properly reported to the GameSpy backend.
		nat->qr2Compatible = gsi_false;
	}

   return(gsi_true);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DC54;
extern float lbl_8049DC58;
extern float lbl_8049DC5C;
extern float lbl_8049DC60;
extern float lbl_8049DC64;
extern float lbl_8049DC68;
extern float lbl_8049DC6C;
extern void *lbl_8049DC70;
extern u8 lbl_8040B880[];
extern u8 lbl_8049CE20[];
extern void _restgpr_23();
extern void _restgpr_26();
extern void _savegpr_23();
extern void _savegpr_26();
extern void fn_802535C4(void *);
extern void fn_80255E4C();
extern HOSTENT *fn_80255EDC(void);
extern int fn_802560A8(IN_ADDR *);
extern int fn_8027A0B4();
extern int fn_8027A150();
extern void fn_8027A740(void);
extern int fn_8027A774();
extern void fn_80336B1C();
extern void fn_80336B20();
extern unsigned int fn_80336B28(unsigned int);

int fn_8027A0B4(void) {
    int num_local_ips;
    HOSTENT *phost;
    IN_ADDR *addr;
    unsigned int localip = 0;
    phost = fn_80255EDC();
    if (phost == NULL)
        return 0;
    for (num_local_ips = 0 ; ; num_local_ips++)
    {
        if (phost->h_addr_list[num_local_ips] == 0)
            break;
        addr = (IN_ADDR *)phost->h_addr_list[num_local_ips];
        if (addr->s_addr == fn_80336B28(0x7F000001))
            continue;
        localip = addr->s_addr;

        if(fn_802560A8(addr))
            return localip;
    }
    return localip;
}

// asm_to_cpp: fn_8027A150
asm int fn_8027A150() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_23
    lwz r0, lbl_8049DC6C
    li r5, 0x8
    stw r5, 0xc(r1)
    mr r24, r3
    cmpwi r0, 0x0
    mr r25, r4
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC68
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC64
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC60
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC5C
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC58
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC54
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    li r3, 0x0
    b lbl_8027A464
lbl_8027A1D0:
    cmpwi r3, -0x1
    beq lbl_8027A460
    lis r26, lbl_8040B880@ha
    li r29, 0x1
    addi r28, r26, lbl_8040B880@l
    li r30, 0x0
    lis r27, lbl_8049CE20@ha
    li r31, 0x8
    b lbl_8027A450
lbl_8027A1F4:
    mr r3, r24
    addi r4, r26, lbl_8040B880@l
    addi r7, r1, 0x18
    addi r8, r1, 0xc
    li r5, 0x200
    li r6, 0x0
    bl recvfrom
    cmpwi r3, -0x1
    mr r23, r3
    bne lbl_8027A228
    mr r3, r24
    bl GOAGetLastError
    b lbl_8027A460
lbl_8027A228:
    addi r3, r26, lbl_8040B880@l
    addi r4, r27, lbl_8049CE20@l
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_8027A248
    li r3, 0x1
    b lbl_8027A464
lbl_8027A248:
    cmpwi r23, 0x15
    lbz r0, 0x7(r28)
    bge lbl_8027A25C
    li r3, 0x1
    b lbl_8027A464
lbl_8027A25C:
    cmplwi r0, 0x2
    bne lbl_8027A310
    mr r4, r28
    addi r3, r1, 0x20
    li r5, 0x15
    bl memcpy
    lbz r0, 0x2c(r1)
    cmpwi r0, 0x2
    beq lbl_8027A2C0
    bge lbl_8027A290
    cmpwi r0, 0x1
    bge lbl_8027A29C
    b lbl_8027A448
lbl_8027A290:
    cmpwi r0, 0x4
    bge lbl_8027A448
    b lbl_8027A2E8
lbl_8027A29C:
    stw r29, lbl_8049DC6C
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl AddressToString
    b lbl_8027A448
lbl_8027A2C0:
    stw r30, 0x80(r25)
    stw r29, lbl_8049DC68
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl AddressToString
    b lbl_8027A448
lbl_8027A2E8:
    stw r30, 0x84(r25)
    stw r29, lbl_8049DC64
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl AddressToString
    b lbl_8027A448
lbl_8027A310:
    cmplwi r0, 0xb
    bne lbl_8027A448
    mr r4, r28
    addi r3, r1, 0x20
    li r5, 0x15
    bl memcpy
    lwz r3, 0x28(r1)
    bl fn_80336B1C
    cmpwi r3, 0x2
    stw r3, 0x28(r1)
    beq lbl_8027A374
    bge lbl_8027A350
    cmpwi r3, 0x0
    beq lbl_8027A35C
    bge lbl_8027A36C
    b lbl_8027A378
lbl_8027A350:
    cmpwi r3, 0x4
    bge lbl_8027A378
    b lbl_8027A364
lbl_8027A35C:
    stw r29, lbl_8049DC60
    b lbl_8027A378
lbl_8027A364:
    stw r29, lbl_8049DC5C
    b lbl_8027A378
lbl_8027A36C:
    stw r29, lbl_8049DC58
    b lbl_8027A378
lbl_8027A374:
    stw r29, lbl_8049DC54
lbl_8027A378:
    bl fn_8027A0B4
    lwz r0, 0x28(r1)
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    slwi r0, r0, 4
    add r6, r25, r0
    stw r3, 0x94(r6)
    mr r3, r24
    stw r31, 0x8(r1)
    bl getsockname
    cmpwi r3, -0x1
    bne lbl_8027A3B0
    li r3, 0x0
    b lbl_8027A3B4
lbl_8027A3B0:
    lhz r3, 0x12(r1)
lbl_8027A3B4:
    bl fn_80336B20
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r4, r25, r0
    sth r3, 0x98(r4)
    lwz r0, 0x28(r1)
    lwz r4, 0x2f(r1)
    slwi r0, r0, 4
    add r3, r25, r0
    stw r4, 0x9c(r3)
    lhz r3, 0x33(r1)
    bl fn_80336B20
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r4, r25, r0
    sth r3, 0xa0(r4)
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl AddressToString
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r0, r25, r0
    addic. r23, r0, 0x94
    bne lbl_8027A428
    b lbl_8027A448
lbl_8027A428:
    lwz r3, 0x0(r23)
    li r5, 0x0
    lhz r4, 0x4(r23)
    bl AddressToString
    lwz r3, 0x8(r23)
    li r5, 0x0
    lhz r4, 0xc(r23)
    bl AddressToString
lbl_8027A448:
    cmpwi r24, -0x1
    beq lbl_8027A460
lbl_8027A450:
    mr r3, r24
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_8027A1F4
lbl_8027A460:
    li r3, 0x1
lbl_8027A464:
    addi r11, r1, 0xa0
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

void fn_8027A740(void) {
    if (lbl_8049DC70 != 0) {
        fn_802535C4(lbl_8049DC70);
        lbl_8049DC70 = 0;
    }
}

int fn_8027A774(void) {
    int num_local_ips;
    HOSTENT *phost;
    IN_ADDR *addr;
    unsigned int localip = 0;
    phost = fn_80255EDC();
    if (phost == NULL)
        return 0;
    for (num_local_ips = 0 ; ; num_local_ips++)
    {
        if (phost->h_addr_list[num_local_ips] == 0)
            break;
        addr = (IN_ADDR *)phost->h_addr_list[num_local_ips];
        if (addr->s_addr == fn_80336B28(0x7F000001))
            continue;
        localip = addr->s_addr;

        if(fn_802560A8(addr))
            return localip;
    }
    return localip;
}
