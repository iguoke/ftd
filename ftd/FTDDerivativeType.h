/*
本文件自动生成，请勿手工修改
Version=FTD20
*/

#ifndef FTD_DERIVATIVE_TYPE_H
#define FTD_DERIVATIVE_TYPE_H

#include "FTDBaseType.h"



namespace FTD {

///衍生类型定义	
typedef FTDCharType                    TFTDActionFlag;
typedef FTDCharType                    TFTDBoolFlag;
typedef FTDStringType<8>               TFTDClientId;
typedef FTDCharType                    TFTDClientType;
typedef FTDStringType<5>               TFTDConnectionReference;
typedef FTDCharType                    TFTDDataFlowFlag;
typedef FTDStringType<8>               TFTDDate;
typedef FTDStringType<20>              TFTDDateTime;
typedef FTDCharType                    TFTDDirection;
typedef FTDStringType<10>              TFTDErrorCode;
typedef FTDCharType                    TFTDForceExitCode;
typedef FTDCharType                    TFTDHedgeFlag;
typedef FTDStringType<10>              TFTDInstrumentId;
typedef FTDCharType                    TFTDInstrumentStatus;
typedef FTDCharType                    TFTDInstrumentType;
typedef FTDCharType                    TFTDInstrumentVersion;
typedef FTDStringType<15>              TFTDLocalId;
typedef FTDStringType<10>              TFTDMarketId;
typedef FTDCharType                    TFTDMarketStatus;
typedef FTDCharType                    TFTDMatchCondition;
typedef FTDCharType                    TFTDMatchSession;
typedef FTDCharType                    TFTDMatchFlag;
typedef FTDStringType<6>               TFTDMsgRef;
typedef FTDStringType<20>              TFTDName;
typedef FTDStringType<2>               TFTDNewsType;
typedef FTDCharType                    TFTDNewsUrgency;
typedef FTDCharType                    TFTDOffsetFlag;
typedef FTDCharType                    TFTDOrderStatus;
typedef FTDCharType                    TFTDOrderType;
typedef FTDStringType<8>               TFTDParticipantId;
typedef FTDCharType                    TFTDParticipantType;
typedef FTDStringType<40>              TFTDPassword;
typedef FTDFloatType<4,2>              TFTDPercent;
typedef FTDFloatType<10,2>             TFTDPrice;
typedef FTDStringType<8>               TFTDProtocolVersion;
typedef FTDCharType                    TFTDPubStyle;
typedef FTDIntType                     TFTDSequenceNo;
typedef FTDWordType                    TFTDSequenceSeries;
typedef FTDStringType<20>              TFTDServerAppName;
typedef FTDCharType                    TFTDStopCode;
typedef FTDStringType<20>              TFTDSysOrderId;
typedef FTDStringType<8>               TFTDTime;
typedef FTDNumberType<3>               TFTDTimeOut;
typedef FTDStringType<20>              TFTDTimeStamp;
typedef FTDStringType<15>              TFTDUserId;
typedef FTDStringType<20>              TFTDTradeId;
typedef FTDCharType                    TFTDTradeRight;
typedef FTDCharType                    TFTDUserStatus;
typedef FTDCharType                    TFTDUserType;
typedef FTDCharType                    TFTDTradeType;
typedef FTDFloatType<14,2>             TFTDValue;
typedef FTDIntType                     TFTDVolume;
typedef FTDCharType                    TFTDVolumeType;

///Field存储类型定义
typedef char                           TTFTDActionFlag;
typedef char                           TTFTDBoolFlag;
typedef char                           TTFTDClientId[8 + 1];
typedef char                           TTFTDClientType;
typedef char                           TTFTDConnectionReference[5 + 1];
typedef char                           TTFTDDataFlowFlag;
typedef char                           TTFTDDate[8 + 1];
typedef char                           TTFTDDateTime[20 + 1];
typedef char                           TTFTDDirection;
typedef char                           TTFTDErrorCode[10 + 1];
typedef char                           TTFTDForceExitCode;
typedef char                           TTFTDHedgeFlag;
typedef char                           TTFTDInstrumentId[10 + 1];
typedef char                           TTFTDInstrumentStatus;
typedef char                           TTFTDInstrumentType;
typedef char                           TTFTDInstrumentVersion;
typedef char                           TTFTDLocalId[15 + 1];
typedef char                           TTFTDMarketId[10 + 1];
typedef char                           TTFTDMarketStatus;
typedef char                           TTFTDMatchCondition;
typedef char                           TTFTDMatchSession;
typedef char                           TTFTDMatchFlag;
typedef char                           TTFTDMsgRef[6 + 1];
typedef char                           TTFTDName[20 + 1];
typedef char                           TTFTDNewsType[2 + 1];
typedef char                           TTFTDNewsUrgency;
typedef char                           TTFTDOffsetFlag;
typedef char                           TTFTDOrderStatus;
typedef char                           TTFTDOrderType;
typedef char                           TTFTDParticipantId[8 + 1];
typedef char                           TTFTDParticipantType;
typedef char                           TTFTDPassword[40 + 1];
typedef double                         TTFTDPercent;
typedef double                         TTFTDPrice;
typedef char                           TTFTDProtocolVersion[8 + 1];
typedef char                           TTFTDPubStyle;
typedef int                            TTFTDSequenceNo;
typedef int16_t                        TTFTDSequenceSeries;
typedef char                           TTFTDServerAppName[20 + 1];
typedef char                           TTFTDStopCode;
typedef char                           TTFTDSysOrderId[20 + 1];
typedef char                           TTFTDTime[8 + 1];
typedef int                            TTFTDTimeOut;
typedef char                           TTFTDTimeStamp[20 + 1];
typedef char                           TTFTDUserId[15 + 1];
typedef char                           TTFTDTradeId[20 + 1];
typedef char                           TTFTDTradeRight;
typedef char                           TTFTDUserStatus;
typedef char                           TTFTDUserType;
typedef char                           TTFTDTradeType;
typedef double                         TTFTDValue;
typedef int                            TTFTDVolume;
typedef char                           TTFTDVolumeType;

}

#endif