#ifndef FTD_DATA_TYPE_H
#define FTD_DATA_TYPE_H

#include <memory.h>

struct FTDFieldType
{
	int length;
	char* data;
	FTDFieldType(int len = 0) :length(len), data(0)
	{
		if (length > 0)
			data = new char[length];
	}
	virtual ~FTDFieldType()
	{
		if (data != nullptr)
			delete[] data;
	}

	void ReadData(char* buffer)
	{
		memcpy(data, buffer, length);
	}
};

struct FTDCharType :public FTDFieldType
{
	FTDCharType() :FTDFieldType(1)
	{}
};

struct FTDStringType_3 :public FTDFieldType
{
	FTDStringType_3() :FTDFieldType(3)
	{}
};

struct FTDStringType_5 :public FTDFieldType
{
	FTDStringType_5() :FTDFieldType(5)
	{}
};

struct FTDStringType_6 :public FTDFieldType
{
	FTDStringType_6() :FTDFieldType(6)
	{}
};

struct FTDStringType_8 :public FTDFieldType
{
	FTDStringType_8() :FTDFieldType(8)
	{}
};

struct FTDStringType_10 :public FTDFieldType
{
	FTDStringType_10() :FTDFieldType(10)
	{}
};

struct FTDStringType_15 :public FTDFieldType
{
	FTDStringType_15() :FTDFieldType(15)
	{}
};

struct FTDStringType_20 :public FTDFieldType
{
	FTDStringType_20() :FTDFieldType(20)
	{}
};

struct FTDStringType_24 :public FTDFieldType
{
	FTDStringType_24() :FTDFieldType(24)
	{}
};

struct FTDStringType_40 :public FTDFieldType
{
	FTDStringType_40() :FTDFieldType(40)
	{}
};

struct FTDStringType_80 :public FTDFieldType
{
	FTDStringType_80() :FTDFieldType(80)
	{}
};

struct FTDFloatType_4_2 :public FTDFieldType
{
	FTDFloatType_4_2() :FTDFieldType(4)
	{}
};

struct FTDFloatType_12_4 :public FTDFieldType
{
	FTDFloatType_12_4() :FTDFieldType(12)
	{}
};

struct FTDFloatType_14_2 :public FTDFieldType
{
	FTDFloatType_14_2() :FTDFieldType(14)
	{}
};

struct FTDNumType :public FTDFieldType
{
	FTDNumType() :FTDFieldType(3)
	{}
};

struct FTDIntType :public FTDFieldType
{
	FTDIntType() :FTDFieldType(4)
	{}
};

struct FTDWordType :public FTDFieldType
{
	FTDWordType() :FTDFieldType(2)
	{}
};



///—‹…˙¿‡–Õ
typedef FTDCharType        TFTDActionFlag;
typedef FTDCharType        TFTDBoolFlag;
typedef FTDStringType_8    TFTDClientId;
typedef FTDCharType        TFTDClientType;
typedef FTDStringType_5    TFTDConnectionReference;
typedef FTDCharType        TFTDDataFlowFlag;
typedef FTDStringType_8    TFTDDate;
typedef FTDStringType_20   TFTDDateTime;
typedef FTDCharType        TFTDDirection;
typedef FTDStringType_10   TFTDErrorCode;
typedef FTDCharType        TFTDForceExitCode;
typedef FTDCharType        TFTDHedgeFlag;
typedef FTDStringType_10   TFTDInstrumentId;
typedef FTDCharType        TFTDInstrumentStatus;
typedef FTDCharType        TFTDInstrumentType;
typedef FTDCharType        TFTDInstrumentVersion;
typedef FTDStringType_24   TFTDLocalId;
typedef FTDStringType_10   TFTDMarketId;
typedef FTDCharType        TFTDMarketStatus;
typedef FTDCharType        TFTDMatchCondition;
typedef FTDCharType        TFTDMatchFlag;
typedef FTDCharType        TFTDMatchSession;
typedef FTDStringType_6    TFTDMsgRef;
typedef FTDStringType_80   TFTDName;
typedef FTDStringType_3    TFTDNewsType;
typedef FTDCharType        TFTDNewsUrgency;
typedef FTDCharType        TFTDOffsetFlag;
typedef FTDCharType        TFTDOrderStatus;
typedef FTDCharType        TFTDOrderType;
typedef FTDStringType_8    TFTDParticipantId;
typedef FTDCharType        TFTDParticipantType;
typedef FTDStringType_40   TFTDPassword;
typedef FTDFloatType_4_2   TFTDPercent;
typedef FTDFloatType_12_4  TFTDPrice;
typedef FTDStringType_8    TFTDProtocolVersion;
typedef FTDCharType        TFTDPubStyle;
typedef FTDIntType         TFTDSequenceNo;
typedef FTDWordType        TFTDSequenceSeries;
typedef FTDStringType_20   TFTDServerAppName;
typedef FTDCharType        TFTDStopCode;
typedef FTDStringType_20   TFTDSysOrderId;
typedef FTDStringType_8    TFTDTime;
typedef FTDNumType         TFTDTimeOut;
typedef FTDStringType_20   TFTDTimeStamp;
typedef FTDStringType_20   TFTDTradeId;
typedef FTDCharType        TFTDTradeRight;
typedef FTDCharType        TFTDTradeType;
typedef FTDStringType_15   TFTDUserId;
typedef FTDCharType        TFTDUserStatus;
typedef FTDCharType        TFTDUserType;
typedef FTDFloatType_14_2  TFTDValue;
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
}



#endif