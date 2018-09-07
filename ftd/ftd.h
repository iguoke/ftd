#pragma once
#include <cstdint>
#include <cstdio>
#include <memory>

struct FTDHeader
{
	int8_t FTDType;
	int8_t FTDExtHeaderLength;
	int16_t FTDCLength;
};

#define FTDTypeNone 0x00
#define FTDTypeFTDC 0x01
#define FTDTypeCompressed 0x02


struct FTDExt
{
	int8_t FTDTag;
	int8_t FTDTagLength;
	char* FTDExtData;
};
#define FTDTagNone 0x00
#define FTDTagDatetime 0x01
#define FTDTagComressMethod 0x02
#define FTDTagSessionState 0x03
#define FTDTagKeepAlive 0x04
#define FTDTagTradedate 0x05
#define FTDTagTarget 0x06
#define FTDTagNoneLength 0
#define FTDTagDatetimeLength  4
#define FTDTagComressMethodLength 1
#define FTDTagSessionStateLength 1
#define FTDTagKeepAliveLength 0
#define FTDTagTradedateLength 4
#define FTDTagTargetLength 2

struct FTDCHeader
{
	uint8_t Version;
	uint32_t TransactionId;
	char Chain;
	uint16_t SequenceSeries;
	uint32_t SequenceNO;
	uint16_t FieldCount;
	uint16_t ContentLength;
};

#define FTDCChainSingle 'S'
#define FTDCChainFirst 'F'
#define FTDCChainMiddle 'C'
#define FTDCChainLast 'L'

/*
对话模式 序列类别号应设置为0
私有模式 下行的序列类别号对于每个会员是不同的
*/

struct FTDCDataField
{
	int32_t FID;
	uint16_t FIDLength;
	char* DataItem;
};


#define TID_Error	0x0001
#define TID_ForceExit	0x1005
#define TID_InstrumentChangeNotify	0x2007
#define TID_InstrumentStatusChangeNotify	0x2006
#define TID_MarketBulletin	0x2003
#define TID_MarketMatchData	0x2004
#define TID_MarketMatchIncData	0x2002
#define TID_MarketOrderIncData	0x2001
#define TID_MarketStatusChangeNotify	0x2005
#define TID_OrderAction	0x0004
#define TID_OrderConfirmation	0x1003
#define TID_OrderInsert	0x0003
#define TID_ParticipantBulletin	0x1002
#define TID_QryClient	0x000C
#define TID_QryDeposit	0x0008
#define TID_QryInstrument	0x0005
#define TID_QryInstrumentStatus	0x000E
#define TID_QryMarket	0x000B
#define TID_QryMarketMatchData	0x0002
#define TID_QryMarketOrderData	0x0012
#define TID_QryMarketStatus	0x000D
#define TID_QryOrder	0x0006
#define TID_QryParticipant	0x0013
#define TID_QryPosition	0x000A
#define TID_QryPPosition	0x0009
#define TID_QryTrade	0x0007
#define TID_QryUser	0x0014
#define TID_QryUserLogin	0x0015
#define TID_TradeInsertSingle	0x1001
#define TID_UserLogin	0x0016
#define TID_UserLogout	0x0017
#define TID_UserPasswordUpdate	0x0018


