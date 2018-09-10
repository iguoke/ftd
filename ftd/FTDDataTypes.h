#ifndef FTD_DATA_TYPE_H
#define FTD_DATA_TYPE_H

#include <memory.h>
#include <string>
#include "Utility.h"
namespace FTD
{


struct FTDCharType
{
	char getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		readBuffer(buffer, value);
	}
	char value;

	static void writeBuffer(char value, char* buffer)
	{
		memcpy(buffer, &value, sizeof(value));
	}

	static void readBuffer(const char* buffer, char& value)
	{
		memcpy(&value, buffer, 1);
	}

	static int getMsgLength()
	{
		return  1;
	}
};

template <int len, int precise>
struct FTDFloatType
{
	double getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		readBuffer(buffer, value);
	}

	static void writeBuffer(double value, char* buffer)
	{
		char local_buffer[len + 1];
		char format_template[] = "%%0%d.%df";
		char format[20];
		sprintf(format, format_template, len, precise);
		sprintf(local_buffer, format, value);
		memcpy(buffer, &local_buffer, len);
	}

	static void readBuffer(const char* buffer, double& value)
	{
		char local_buffer[len + 1];
		memcpy(&local_buffer, buffer, len);
		local_buffer[len] = 0;
		value = atof(local_buffer);
	}

	static int getMsgLength()
	{
		return len;
	}
	double value;
};

struct FTDIntType
{
	int getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		readBuffer(buffer, value);
	}
	int value;

	static void writeBuffer(int value, char* buffer)
	{
		value = htonl(value);
		memcpy(buffer, &value, sizeof(value));
	}

	static void readBuffer(const char* buffer, int& value)
	{
		memcpy(&value, buffer, 4);
		value = ntohl(value);
	}

	static int getMsgLength()
	{
		return  4;
	}
};

template <int len>
struct FTDNumberType
{
	int getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		readBuffer(buffer, value);
	}
	int value;

	static void writeBuffer(int value, char* buffer)
	{
		char format_template[] = "%%0%dd";
		char format[20];
		sprintf(format, format_template, len);
		sprintf(buffer, format, value);
	}

	static void readBuffer(const char* buffer, int& value)
	{
		char local_buffer[len + 1];
		memcpy(local_buffer, buffer, len);
		local_buffer[len] = 0;
		value = atoi(local_buffer);
	}

	static int getMsgLength()
	{
		return  len;
	}
};

template<int len>
struct FTDStringType
{
	char* getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		readBuffer(buffer, value);
	}
	char value[len + 1];

	static void writeBuffer(const char* value, char* buffer)
	{
		memset(buffer , ' ', len);
		int string_len = strlen(value);
		if (string_len > len)
			string_len = len;
		memcpy(buffer, value, string_len);
	}

	static void readBuffer(const char* buffer, char* value)
	{
		memcpy(value, buffer, len);
		value[len] = '\0';
	}


	static int getMsgLength()
	{
		return len;
	}
};

struct FTDWordType
{
	int getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		readBuffer(buffer, value);
	}

	static void writeBuffer(int16_t value, char* buffer)
	{
		value = htons(value);
		memcpy(buffer, &value, sizeof(value));
	}

	static void readBuffer(const char* buffer, int16_t& value)
	{
		memcpy(&value, buffer, 2);
		value = ntohs(value);
	}

	static int getMsgLength()
	{
		return  2;
	}

	int16_t value;
};



///—‹…˙¿‡–Õ
typedef FTDCharType        TFTDActionFlag;
typedef FTDCharType        TFTDBoolFlag;
typedef FTDStringType<8>    TFTDClientId;
typedef FTDCharType        TFTDClientType;
typedef FTDStringType<5>    TFTDConnectionReference;
typedef FTDCharType        TFTDDataFlowFlag;
typedef FTDStringType<8>    TFTDDate;
typedef FTDStringType<20>   TFTDDateTime;
typedef FTDCharType        TFTDDirection;
typedef FTDStringType<10>   TFTDErrorCode;
typedef FTDCharType        TFTDForceExitCode;
typedef FTDCharType        TFTDHedgeFlag;
typedef FTDStringType<10>   TFTDInstrumentId;
typedef FTDCharType        TFTDInstrumentStatus;
typedef FTDCharType        TFTDInstrumentType;
typedef FTDCharType        TFTDInstrumentVersion;
typedef FTDStringType<24>   TFTDLocalId;
typedef FTDCharType         TFTDRequestByType;
typedef FTDFloatType<12, 4> TFTDRateUnit;
typedef FTDStringType<10>   TFTDMarketId;
typedef FTDCharType        TFTDMarketStatus;
typedef FTDCharType        TFTDMatchCondition;
typedef FTDCharType        TFTDMatchFlag;
typedef FTDCharType        TFTDMatchSession;
typedef FTDStringType<6>    TFTDMsgRef;
typedef FTDStringType<80>   TFTDName;
typedef FTDStringType<3>    TFTDNewsType;
typedef FTDCharType        TFTDNewsUrgency;
typedef FTDCharType        TFTDOffsetFlag;
typedef FTDCharType        TFTDOrderStatus;
typedef FTDCharType        TFTDOrderType;
typedef FTDCharType        TTFTDOptionType;
typedef FTDStringType<8>   TFTDParticipantId;
typedef FTDCharType        TFTDParticipantType;
typedef FTDStringType<40>   TFTDPassword;
typedef FTDFloatType<4, 2>   TFTDPercent;
typedef FTDFloatType<12,4>  TFTDPrice;
typedef FTDCharType         TFTDOptionType;
typedef FTDStringType<8>    TFTDProtocolVersion;
typedef FTDCharType        TFTDPubStyle;
typedef FTDCharType        FTDRequestByType;
typedef FTDFloatType<12,4> FTDRateUnit;
typedef FTDIntType         TFTDSequenceNo;
typedef FTDWordType        TFTDSequenceSeries;
typedef FTDStringType<20>   TFTDServerAppName;
typedef FTDCharType        TFTDStopCode;
typedef FTDStringType<20>   TFTDSysOrderId;
typedef FTDStringType<8>    TFTDTime;
typedef FTDNumberType<3>    TFTDTimeOut;
typedef FTDStringType<20>   TFTDTimeStamp;
typedef FTDStringType<20>   TFTDTradeId;
typedef FTDCharType        TFTDTradeRight;
typedef FTDCharType        TFTDTradeType;
typedef FTDStringType<15>   TFTDUserId;
typedef FTDCharType        TFTDUserStatus;
typedef FTDCharType        TFTDUserType;
typedef FTDFloatType<14,2>  TFTDValue;
typedef FTDIntType         TFTDVolume;
typedef FTDCharType        TFTDVolumeType;

//field storage true type
typedef char        TTFTDActionFlag;
typedef char        TTFTDBoolFlag;
typedef char        TTFTDClientId[8 + 1];
typedef char        TTFTDClientType;
typedef char        TTFTDConnectionReference[5 + 1];
typedef char        TTFTDDataFlowFlag;
typedef char        TTFTDDate[8 + 1];
typedef char        TTFTDDateTime[20 + 1];
typedef char        TTFTDDirection;
typedef char        TTFTDErrorCode[10 + 1];
typedef char        TTFTDForceExitCode;
typedef char        TTFTDHedgeFlag;
typedef char        TTFTDInstrumentId[10 + 1];
typedef char        TTFTDInstrumentStatus;
typedef char        TTFTDInstrumentType;
typedef char        TTFTDInstrumentVersion;
typedef char        TTFTDLocalId[24 + 1];
typedef char        TTFTDRequestByType;
typedef double      TTFTDRateUnit;
typedef char        TTFTDMarketId[10 + 1];
typedef char        TTFTDMarketStatus;
typedef char        TTFTDMatchCondition;
typedef char        TTFTDMatchFlag;
typedef char        TTFTDMatchSession;
typedef char        TTFTDMsgRef[6 + 1];
typedef char        TTFTDName[80 + 1];
typedef char        TTFTDNewsType[3 + 1];
typedef char        TTFTDNewsUrgency;
typedef char        TTFTDOffsetFlag;
typedef char        TTFTDOrderStatus;
typedef char        TTFTDOrderType;
typedef char        TTFTDParticipantId[8 + 1];
typedef char        TTFTDParticipantType;
typedef char        TTFTDPassword[40 + 1];
typedef double      TTFTDPercent;
typedef double      TTFTDPrice;
typedef char        TTFTDProtocolVersion[8 + 1];
typedef char        TTFTDPubStyle;
typedef int         TTFTDSequenceNo;
typedef int16_t     TTFTDSequenceSeries;
typedef char        TTFTDServerAppName[20 + 1];
typedef char        TTFTDStopCode;
typedef char        TTFTDSysOrderId[20 + 1];
typedef char        TTFTDTime[8 + 1];
typedef int         TTFTDTimeOut;
typedef char        TTFTDTimeStamp[20 + 1];
typedef char        TTFTDTradeId[20 + 1];
typedef char        TTFTDTradeRight;
typedef char        TTFTDTradeType;
typedef char        TTFTDUserId[15 + 1];
typedef char        TTFTDUserStatus;
typedef char        TTFTDUserType;
typedef double      TTFTDValue;
typedef int         TTFTDVolume;
typedef char        TTFTDVolumeType;        


enum FTD_TYPE
{
	TYPE_ID_ActionFlag = 1,
	TYPE_ID_BoolFlag,
	TYPE_ID_ClientId,
	TYPE_ID_ClientType,
	TYPE_ID_ConnectionReference,
	TYPE_ID_DataFlowFlag,
	TYPE_ID_Date,
	TYPE_ID_DateTime,
	TYPE_ID_Direction,
	TYPE_ID_ErrorCode,
	TYPE_ID_ForceExitCode,
	TYPE_ID_HedgeFlag,
	TYPE_ID_InstrumentId,
	TYPE_ID_InstrumentStatus,
	TYPE_ID_InstrumentType,
	TYPE_ID_InstrumentVersion,
	TYPE_ID_LocalId,
	TYPE_ID_MarketId,
	TYPE_ID_MarketStatus,
	TYPE_ID_MatchCondition,
	TYPE_ID_MatchFlag,
	TYPE_ID_MatchSession,
	TYPE_ID_MsgRef,
	TYPE_ID_Name,
	TYPE_ID_NewsType,
	TYPE_ID_NewsUrgency,
	TYPE_ID_OffsetFlag,
	TYPE_ID_OrderStatus,
	TYPE_ID_OrderType,
	TYPE_ID_ParticipantId,
	TYPE_ID_ParticipantType,
	TYPE_ID_Password,
	TYPE_ID_Percent,
	TYPE_ID_Price,
	TYPE_ID_ProtocolVersion,
	TYPE_ID_PubStyle,
	TYPE_ID_SequenceNo,
	TYPE_ID_SequenceSeries,
	TYPE_ID_ServerAppName,
	TYPE_ID_StopCode,
	TYPE_ID_SysOrderId,
	TYPE_ID_Time,
	TYPE_ID_TimeOut,
	TYPE_ID_TimeStamp,
	TYPE_ID_TradeId,
	TYPE_ID_TradeRight,
	TYPE_ID_TradeType,
	TYPE_ID_UserId,
	TYPE_ID_UserStatus,
	TYPE_ID_UserType,
	TYPE_ID_Value,
	TYPE_ID_Volume,
	TYPE_ID_VolumeType,
	TYPE_ID_StringType80,
	TYPE_ID_StringType20,
	TYPE_ID_StringType500,
	TYPE_ID_StringType3,
	TYPE_ID_StringType100,
	TYPE_ID_StringType6,
	TYPE_ID_StringType200,
	TYPE_ID_StringType30,
	TYPE_ID_NumberType3,
	TYPE_ID_IntType,
	TYPE_ID_OptionType,
	TYPE_ID_RequestByType,
	TYPE_ID_RateUnit,
	TYPE_ID_CharType,
	TYPE_ID_WordType

};


}
#endif