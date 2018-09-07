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
		memcpy(&value, buffer, sizeof(value));
	}
	char value;

	static void writeBuffer(char value, char* buffer)
	{
		memcpy(buffer, &value, sizeof(value));
	}

	int getMsgLength() const
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
		char local_buffer[len + 1];
		memcpy(&local_buffer, buffer, len);
		local_buffer[len] = 0;
		value = atof(local_buffer);
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

	int getMsgLength() const
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
		memcpy(&value, buffer, sizeof(value));
		value = ntohl(value);
	}
	int value;

	static void writeBuffer(int value, char* buffer)
	{
		value = htonl(value);
		memcpy(buffer, &value, sizeof(value));
	}

	int getMsgLength() const
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
		char local_buffer[len + 1];
		memcpy(local_buffer, buffer, len);
		local_buffer[len] = 0;
		value = atoi(local_buffer);
	}
	int value;

	static void writeBuffer(int value, char* buffer)
	{
		char format_template[] = "%%0%dd";
		char format[20];
		sprintf(format, format_template, len);
		sprintf(buffer, format, value);
	}

	int getMsgLength() const
	{
		return  4;
	}
};

template<int len>
struct FTDStringType
{
	int getValue() const
	{
		return value;
	}

	void loadData(const char* buffer)
	{
		value.clear();
		value.append(buffer, len);
	}
	std::string value;

	static void writeBuffer(int value, char* buffer)
	{
		int value_size = value.size();
		int write_len = len > value_size ? value_size : len;
		memcpy(buffer, value.c_str(), write_len);
		if (write_len < len)
		{
			memset(buffer + write_len, ' ', len - write_len);
		}
	}

	int getMsgLength() const
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
		memcpy(&value, buffer, sizeof(value));
		value = ntohs(value);
	}
	int16_t value;

	static void writeBuffer(int16_t value, char* buffer)
	{
		value = htons(value);
		memcpy(buffer, &value, sizeof(value));
	}

	int getMsgLength() const
	{
		return  2;
	}
};



///ÑÜÉúÀàÐÍ
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
typedef FTDStringType<8>   TFTDParticipantId;
typedef FTDCharType        TFTDParticipantType;
typedef FTDStringType<40>   TFTDPassword;
typedef FTDFloatType<4, 2>   TFTDPercent;
typedef FTDFloatType<12,4>  TFTDPrice;
typedef FTDStringType<8>    TFTDProtocolVersion;
typedef FTDCharType        TFTDPubStyle;
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

enum FTD_TYPE_ENUM
{
	TYPE_ID_TFTDActionFlag = 1,
	TYPE_ID_TFTDBoolFlag,
	TYPE_ID_TFTDClientId,
	TYPE_ID_TFTDClientType,
	TYPE_ID_TFTDConnectionReference,
	TYPE_ID_TFTDDataFlowFlag,
	TYPE_ID_TFTDDate,
	TYPE_ID_TFTDDateTime,
	TYPE_ID_TFTDDirection,
	TYPE_ID_TFTDErrorCode,
	TYPE_ID_TFTDForceExitCode,
	TYPE_ID_TFTDHedgeFlag,
	TYPE_ID_TFTDInstrumentId,
	TYPE_ID_TFTDInstrumentStatus,
	TYPE_ID_TFTDInstrumentType,
	TYPE_ID_TFTDInstrumentVersion,
	TYPE_ID_TFTDLocalId,
	TYPE_ID_TFTDMarketId,
	TYPE_ID_TFTDMarketStatus,
	TYPE_ID_TFTDMatchCondition,
	TYPE_ID_TFTDMatchFlag,
	TYPE_ID_TFTDMatchSession,
	TYPE_ID_TFTDMsgRef,
	TYPE_ID_TFTDName,
	TYPE_ID_TFTDNewsType,
	TYPE_ID_TFTDNewsUrgency,
	TYPE_ID_TFTDOffsetFlag,
	TYPE_ID_TFTDOrderStatus,
	TYPE_ID_TFTDOrderType,
	TYPE_ID_TFTDParticipantId,
	TYPE_ID_TFTDParticipantType,
	TYPE_ID_TFTDPassword,
	TYPE_ID_TFTDPercent,
	TYPE_ID_TFTDPrice,
	TYPE_ID_TFTDProtocolVersion,
	TYPE_ID_TFTDPubStyle,
	TYPE_ID_TFTDSequenceNo,
	TYPE_ID_TFTDSequenceSeries,
	TYPE_ID_TFTDServerAppName,
	TYPE_ID_TFTDStopCode,
	TYPE_ID_TFTDSysOrderId,
	TYPE_ID_TFTDTime,
	TYPE_ID_TFTDTimeOut,
	TYPE_ID_TFTDTimeStamp,
	TYPE_ID_TFTDTradeId,
	TYPE_ID_TFTDTradeRight,
	TYPE_ID_TFTDTradeType,
	TYPE_ID_TFTDUserId,
	TYPE_ID_TFTDUserStatus,
	TYPE_ID_TFTDUserType,
	TYPE_ID_TFTDValue,
	TYPE_ID_TFTDVolume,
	TYPE_ID_TFTDVolumeType,
};


}
#endif