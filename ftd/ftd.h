#pragma once
#include <cstdint>
#include <cstdio>
#include <memory>

#define FTD_HEADER_LENGTH 4

#define MAX_FTD_LENGTH 4096
#define MAX_FTDC_LENGTH 4096 - 16

#define FTDC_FIELD_HEADER_LENGTH 6
#define FTDC_HEADER_LENGTH 16

struct FtdHeader
{
	uint8_t FTDType;
	uint8_t FTDExtHeaderLength;
	int16_t FTDCLength;
};

#define FTDTypeNone 0x00
#define FTDTypeFTDC 0x01
#define FTDTypeCompressed 0x02


struct FtdExtHeader
{
	uint8_t FTDTag;
	int8_t FTDTagLength;
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

struct FtdExt
{
	int dateTime;
	char compressMethod;
	char sessionState;
	int tradeDate;
	char target[3];

};

#define DIALOG 0
#define PRIVATE 1
#define BROADCAST 2

struct FtdcHeader
{
	uint8_t version;
	uint32_t transactionId;
	uint8_t chain;
	uint16_t sequenceSeries;
	uint32_t sequenceNO;
	uint16_t fieldCount;
	uint16_t contentLength;
};

#define FTDCChainSingle 'S'
#define FTDCChainFirst 'F'
#define FTDCChainMiddle 'C'
#define FTDCChainLast 'L'

/*
对话模式 序列类别号应设置为0
私有模式 下行的序列类别号对于每个会员是不同的
*/

struct FtdcFieldHeader
{
	int32_t fid;
	uint16_t fidLength;
};





