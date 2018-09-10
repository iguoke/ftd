#ifndef FTD20_PROPERTY_H
#define FTD20_PROPERTY_H

#include "../FTDDataTypes.h"


using namespace FTD;

namespace FTD20 {

	///衍生类型
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
	typedef FTDFloatType<12, 4>  TFTDPrice;
	typedef FTDCharType         TFTDOptionType;
	typedef FTDStringType<8>    TFTDProtocolVersion;
	typedef FTDCharType        TFTDPubStyle;
	typedef FTDCharType        FTDRequestByType;
	typedef FTDFloatType<12, 4> FTDRateUnit;
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
	typedef FTDFloatType<14, 2>  TFTDValue;
	typedef FTDIntType         TFTDVolume;
	typedef FTDCharType        TFTDVolumeType;

	

	typedef   FTDStringType<80>          TPropertyAbstract;
	typedef    TFTDLocalId                TPropertyActionLocalId;
	typedef    TFTDDate                   TPropertyActionDate;
	typedef    TFTDTime                   TPropertyActiveTime;
	typedef    TFTDUserId                 TPropertyActiveUserId;
	typedef    TFTDValue                  TPropertyAddValue;
	typedef    TFTDVolume                 TPropertyAskLot;
	typedef    TFTDPrice                  TPropertyAskPrice;
	typedef    TFTDBoolFlag               TPropertyAutoSuspend;
	typedef    TFTDPrice                  TPropertyAveragePrice;
	typedef    TFTDValue                  TPropertyBalanceValue;
	typedef    TFTDVolume                 TPropertyBidLot;
	typedef    TFTDPrice                  TPropertyBidPrice;
	typedef    TFTDDateTime               TPropertyBroadcastLoginTime;
	typedef    TFTDDateTime               TPropertyBroadcastLogOutTime;
	typedef    FTDIntType                TPropertyBroadcastSequenceNo;
	typedef    FTDWordType               TPropertyBroadcastSequenceSeries;
	typedef    TFTDBoolFlag               TPropertyBroadcastStreamStatus;
	typedef    TFTDValue                  TPropertyBuyHedgeOffsetMargin;
	typedef    TFTDValue                  TPropertyBuyHedgeOffsetProfit;
	typedef    TFTDValue                  TPropertyBuyHedgeOpenFrozMargin;
	typedef    TFTDValue                  TPropertyBuyHedgeOpenUsedMargin;
	typedef    TFTDVolume                 TPropertyBuyHedgePosition;
	typedef    TFTDValue                  TPropertyBuyHedgeTurnOver;
	typedef    TFTDVolume                 TPropertyBuyHedgeVolume;
	typedef    TFTDVolume                 TPropertyBuyOffsHPosition;
	typedef    TFTDVolume                 TPropertyBuyOffsSPosition;
	typedef    TFTDValue                  TPropertyBuySpecOffsetMargin;
	typedef    TFTDValue                  TPropertyBuySpecOffsetProfit;
	typedef    TFTDValue                  TPropertyBuySpecOpenFrozMargin;
	typedef    TFTDValue                  TPropertyBuySpecOpenUsedMargin;
	typedef    TFTDVolume                 TPropertyBuySpecPosition;
	typedef    TFTDValue                  TPropertyBuySpecTurnOver;
	typedef    TFTDVolume                 TPropertyBuySpecVolume;
	typedef    TFTDDate                   TPropertyCancelDate;
	typedef    TFTDBoolFlag               TPropertyCancelFlag;
	typedef    TFTDTime                   TPropertyCancelTime;
	typedef    TFTDDate                   TPropertyClearDate;
	typedef    TFTDPrice                  TPropertyClearPrice;
	typedef    TFTDClientId               TPropertyClientId;
	typedef    TFTDName                   TPropertyClientName;
	typedef    TFTDClientType             TPropertyClientType;
	typedef    TFTDPrice                  TPropertyClosePrice;
	typedef    FTDStringType<20>           TPropertyComeFrom;
	typedef    TFTDConnectionReference       TPropertyConnectionReference;
	typedef    FTDStringType<500>          TPropertyContent;
	typedef    FTDStringType<3>            TPropertyCurrency;
	typedef    TFTDDataFlowFlag           TPropertyDataFlowFlag;
	typedef    TFTDValue                  TPropertyDelValue;
	typedef    TFTDDateTime               TPropertyDialogLoginTime;
	typedef    TFTDDateTime               TPropertyDialogLogoutTime;
	typedef    TFTDBoolFlag               TPropertyDialogStreamStatus;
	typedef    TFTDDirection              TPropertyDirection;
	typedef    TFTDDate                   TPropertyEndDelvDate;
	typedef    TFTDDate                   TPropertyEndTrdDate;
	typedef    TFTDErrorCode              TPropertyErrorCode;
	typedef    FTDStringType<100>          TPropertyErrorText;
	typedef    TFTDDateTime               TPropertyExchangeDateTime;
	typedef    TFTDLocalId                TPropertyExecOrderLocalID;
	typedef    TFTDSysOrderId             TPropertyExecOrderSysID;
	typedef    FTDIntType                TPropertyForcedistime;
	typedef    TFTDForceExitCode          TPropertyForceExitCode;
	typedef    FTDStringType<100>          TPropertyForceExitMsg;
	typedef    TFTDLocalId                TPropertyForceGroupId;
	typedef    FTDStringType<20>           TPropertyFrontId;
	typedef    TFTDBoolFlag               TPropertyFuseFlag;
	typedef    TFTDPrice                  TPropertyFuselimit;
	typedef    FTDIntType                TPropertyFusepersisttime;
	typedef    FTDStringType<6>            TPropertyFusepoint;
	typedef    TFTDBoolFlag               TPropertyFuseRights;
	typedef    TFTDHedgeFlag              TPropertyHedgeFlag;
	typedef    TFTDPrice                  TPropertyHighLimit;
	typedef    TFTDPercent                TPropertyHighLimitRate;
	typedef    TFTDPrice                  TPropertyHighPrice;
	typedef    TFTDValue                  TPropertyInitMargin;
	typedef    TFTDDateTime               TPropertyInsertTime;
	typedef    TFTDStopCode               TPropertyInstrStopCode;
	typedef    TFTDInstrumentId           TPropertyInstrumentId;
	typedef    TFTDName                   TPropertyInstrumentName;
	typedef    TFTDInstrumentStatus       TPropertyInstrumentStatus;
	typedef    TFTDInstrumentType         TPropertyInstrumentType;
	typedef    TFTDInstrumentVersion      TPropertyInstrumentVersion;
	typedef    FTDStringType<20>           TPropertyIpAddr;
	typedef    TFTDBoolFlag               TPropertyIsLogin;
	typedef    TFTDVolume                 TPropertyLastLot;
	typedef    TFTDPrice                  TPropertyLastPrice;
	typedef    TFTDPrice                  TPropertyLifeHigh;
	typedef    TFTDPrice                  TPropertyLifeLow;
	typedef    TFTDPrice                  TPropertyLimitPrice;
	typedef    TFTDVolume                 TPropertyLongOffsFrozHPosition;
	typedef    TFTDVolume                 TPropertyLongOffsFrozSPosition;
	typedef    TFTDVolume                 TPropertyLongOpenFrozHPosition;
	typedef    TFTDVolume                 TPropertyLongOpenFrozSPosition;
	typedef    TFTDPrice                  TPropertyLowLimit;
	typedef    TFTDPercent                TPropertyLowLimitRate;
	typedef    TFTDPrice                  TPropertyLowPrice;
	typedef    TFTDPrice                  TPropertyMargin;
	typedef    TFTDMarketId               TPropertyMarketId;
	typedef    TFTDBoolFlag               TPropertyMarketMatchDataStatus;
	typedef    TFTDName                   TPropertyMarketName;
	typedef    TFTDMarketStatus           TPropertyMarketStatusId;
	typedef    TFTDMatchCondition         TPropertyMatchCondition;
	typedef    TFTDDate                   TPropertyMatchDate;
	typedef    TFTDMatchFlag              TPropertyMatchFlag;
	typedef    TFTDMatchSession           TPropertyMatchSession;
	typedef    TFTDTime                   TPropertyMatchTime;
	typedef    TFTDVolume                 TPropertyMaxLot;
	typedef    TFTDLocalId                TPropertyMaxOrderLocalId;
	typedef    TFTDMsgRef                 TPropertyMessageReference;
	typedef    TFTDVolume                 TPropertyMinimalVolume;
	typedef    TFTDVolume                 TPropertyMinLot;
	typedef    FTDStringType<20>           TPropertyName;
	typedef    TFTDPassword               TPropertyNewPassword;
	typedef    TFTDNewsType               TPropertyNewsType;
	typedef    TFTDNewsUrgency            TPropertyNewsUrgency;
	typedef    TFTDOffsetFlag             TPropertyOffsetFlag;
	typedef    TFTDPassword               TPropertyOldPassword;
	typedef    TFTDVolume                 TPropertyOpenInterest;
	typedef    TFTDPrice                  TPropertyOpenPrice;
	typedef    TFTDOptionType            TPropertyOptionsType;
	typedef    TFTDActionFlag             TPropertyOrderActionCode;
	typedef    TFTDLocalId                TPropertyOrderLocalId;
	typedef    TFTDOrderStatus            TPropertyOrderStatus;
	typedef    TFTDSysOrderId             TPropertyOrderSysId;
	typedef    TFTDOrderType              TPropertyOrderType;
	typedef    TFTDParticipantId          TPropertyParticipantId;
	typedef    FTDStringType<80>           TPropertyAbstract;
	typedef    TFTDName                   TPropertyParticipantName;
	typedef    TFTDParticipantType        TPropertyParticipantType;
	typedef    TFTDTradeRight             TPropertyPartiTrdRight;
	typedef    TFTDPassword               TPropertyPassword;
	typedef    TFTDPrice                  TPropertyPreClose;
	typedef    TFTDVolume                 TPropertyPreOpenInterest;
	typedef    TFTDPrice                  TPropertyPreSettle;
	typedef    TFTDPrice                  TPropertyPrice;
	typedef    TFTDDateTime               TPropertyPrivateLoginTime;
	typedef    TFTDDateTime               TPropertyPrivateLogoutTime;
	typedef    TFTDBoolFlag               TPropertyPrivateStreamStatus;
	typedef    TFTDProtocolVersion        TPropertyProtocolVersion;
	typedef    TFTDPubStyle               TPropertyPubstyle;
	typedef    TFTDValue                  TPropertyPremium;
	typedef    TFTDSysOrderId             TPropertyQuoteSysID;
	typedef    TFTDLocalId                TPropertyQuoteLocalID;
	typedef    TFTDRequestByType          TPropertyRequestBy;
	typedef    TFTDRateUnit               TPropertyRateUnit;
	typedef    TFTDPrice                  TPropertyRatePrice;
	typedef    TFTDValue                  TPropertySellHedgeOffsetMargin;
	typedef    TFTDValue                  TPropertySellHedgeOffsetProfit;
	typedef    TFTDValue                  TPropertySellHedgeOpenFrozMargin;
	typedef    TFTDValue                  TPropertySellHedgeOpenUsedMargin;
	typedef    TFTDVolume                 TPropertySellHedgePosition;
	typedef    TFTDValue                  TPropertySellHedgeTurnOver;
	typedef    TFTDVolume                 TPropertySellHedgeVolume;
	typedef    TFTDVolume                 TPropertySellOffsHPosition;
	typedef    TFTDVolume                 TPropertySellOffsSPosition;
	typedef    TFTDValue                  TPropertySellSpecOffsetMargin;
	typedef    TFTDValue                  TPropertySellSpecOffsetProfit;
	typedef    TFTDValue                  TPropertySellSpecOpenFrozMargin;
	typedef    TFTDValue                  TPropertySellSpecOpenUsedMargin;
	typedef    TFTDVolume                 TPropertySellSpecPosition;
	typedef    TFTDValue                  TPropertySellSpecTurnOver;
	typedef    TFTDVolume                 TPropertySellSpecVolume;
	typedef    TFTDTime                   TPropertySendTime;
	typedef    TFTDSequenceNo             TPropertySequenceNo;
	typedef    TFTDSequenceSeries         TPropertySequenceSeries;
	typedef    TFTDServerAppName          TPropertyServerAppName;
	typedef    TFTDPrice                  TPropertySettlePrice;
	typedef    FTDCharType                TPropertyShortCutKey;
	typedef    TFTDVolume                 TPropertyShortOffsFrozHPosition;
	typedef    TFTDVolume                 TPropertyShortOffsFrozSPosition;
	typedef    TFTDVolume                 TPropertyShortOpenFrozHPosition;
	typedef    TFTDVolume                 TPropertyShortOpenFrozSPosition;
	typedef    TFTDDate                   TPropertyStartDelvDate;
	typedef    TFTDTime                   TPropertyStartTime;
	typedef    TFTDDate                   TPropertyStartTrdDate;
	typedef    TFTDPrice                  TPropertyStopPrice;
	typedef    TFTDTime                   TPropertySuspendTime;
	typedef    TFTDPrice                  TPropertyStrikePrice;
	typedef    TFTDTime                   TPropertyThroughTime;
	typedef    TFTDPrice                  TPropertyTick;
	typedef    TFTDTimeOut                TPropertyTimeOut;
	typedef    FTDNumberType<3>            TPropertyTimeSpan;
	typedef    TFTDTimeStamp              TPropertyTimeStamp;
	typedef    FTDIntType                TPropertyTotalMarketMatchData;
	typedef    TFTDVolume                 TPropertyTotalVolume;
	typedef    TFTDDate                   TPropertyTradeDate;
	typedef    TFTDTradeId                TPropertyTradeId;
	typedef    FTDIntType                TPropertyTradeLot;
	typedef    TFTDPrice                  TPropertyTradePrice;
	typedef    TFTDTradeRight             TPropertyTradeRights;
	typedef    TFTDVolume                 TPropertyTradeTurnover;
	typedef    TFTDTradeType              TPropertyTradeType;
	typedef    FTDIntType                TPropertyTradeVolume;
	typedef    FTDIntType                TPropertyUnit;
	typedef    TFTDTime                   TPropertyUpdateTime;
	typedef    FTDStringType<200>          TPropertyURLLink;
	typedef    TFTDUserId                 TPropertyUserId;
	typedef    TFTDUserStatus             TPropertyUserStatus;
	typedef    TFTDUserType               TPropertyUserType;
	typedef    FTDStringType<30>           TPropertyUnderlyingInstrID;
	typedef    TFTDVolume                 TPropertyUnderlyingMultiple;
	typedef    TFTDDate                   TPropertyValidThrough;
	typedef    TFTDVolume                 TPropertyVolume;
	typedef    FTDIntType                TPropertyVolumeTotal;
	typedef    FTDIntType                TPropertyVolumeTotalOrginal;
	typedef    TFTDVolumeType             TPropertyVolumeType;
	typedef    TFTDVolume                 TPropertyYdBuyHedgePosition;
	typedef    TFTDVolume                 TPropertyYdBuyOffsHPosition;
	typedef    TFTDVolume                 TPropertyYdBuyOffsSPosition;
	typedef    TFTDVolume                 TPropertyYdBuySpecPosition;

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

	typedef	char TTPropertyAbstract[80 + 1]; //摘要 / 说明
	typedef	 TTFTDLocalId TTPropertyActionLocalId; // 报单操作本地编号
	typedef	 TTFTDDate TTPropertyActionDate; //实际交易日期
	typedef	 TTFTDTime TTPropertyActiveTime;// 激活时间
	typedef	 TTFTDUserId TTPropertyActiveUserId; // 操作交易员编码
	typedef	 TTFTDValue TTPropertyAddValue; // 本交易日新增资金
	typedef	 TTFTDVolume TTPropertyAskLot; // 卖出数量
	typedef	 TTFTDPrice TTPropertyAskPrice; // 卖出价
	typedef	 TTFTDBoolFlag TTPropertyAutoSuspend; // 自动挂起标志
	typedef	 TTFTDPrice TTPropertyAveragePrice; // 均价
	typedef	 TTFTDValue TTPropertyBalanceValue; // 可用保证金余额
	typedef	 TTFTDVolume TTPropertyBidLot; // 买入数量
	typedef	 TTFTDPrice TTPropertyBidPrice; // 买入价格
	typedef	 TTFTDDateTime TTPropertyBroadcastLoginTime; // 最后一次广播模式登录时间
	typedef	 TTFTDDateTime TTPropertyBroadcastLogOutTime; // 最后一次广播模式退出时间
	typedef	int TTPropertyBroadcastSequenceNo; // 广播模式中的数据序列号
	typedef	int16_t TTPropertyBroadcastSequenceSeries; // 广播模式序列类别号
	typedef	 TTFTDBoolFlag TTPropertyBroadcastStreamStatus; // 广播模式在线状态
	typedef	 TTFTDValue TTPropertyBuyHedgeOffsetMargin; // 买保平仓返回保证金
	typedef	 TTFTDValue TTPropertyBuyHedgeOffsetProfit; // 买保平仓盈亏
	typedef	 TTFTDValue TTPropertyBuyHedgeOpenFrozMargin; // 买保开仓冻结保证金
	typedef	 TTFTDValue TTPropertyBuyHedgeOpenUsedMargin; // 买保开仓使用保证金
	typedef	 TTFTDVolume TTPropertyBuyHedgePosition; // 买开仓量(保)
	typedef	 TTFTDValue TTPropertyBuyHedgeTurnOver; // 买保成交额
	typedef	 TTFTDVolume TTPropertyBuyHedgeVolume; // 买成交量(保)
	typedef	 TTFTDVolume TTPropertyBuyOffsHPosition; // 买平今量(保)
	typedef	 TTFTDVolume TTPropertyBuyOffsSPosition; // 买平今量(投)
	typedef	 TTFTDValue TTPropertyBuySpecOffsetMargin; // 买投平仓返回保证金
	typedef	 TTFTDValue TTPropertyBuySpecOffsetProfit; // 买投平仓盈亏
	typedef	 TTFTDValue TTPropertyBuySpecOpenFrozMargin; // 买投开仓冻结保证金
	typedef	 TTFTDValue TTPropertyBuySpecOpenUsedMargin; // 买投开仓使用保证金
	typedef	 TTFTDVolume TTPropertyBuySpecPosition; // 买开仓量(投)
	typedef	 TTFTDValue TTPropertyBuySpecTurnOver; // 买投成交额
	typedef	 TTFTDVolume TTPropertyBuySpecVolume; // 买成交量(投)
	typedef	 TTFTDDate TTPropertyCancelDate; // 取消日期
	typedef	 TTFTDBoolFlag TTPropertyCancelFlag; // 成交是否被取消。
	typedef	 TTFTDTime TTPropertyCancelTime; // 取消时间
	typedef	 TTFTDDate TTPropertyClearDate; // 清算日期
	typedef	 TTFTDPrice TTPropertyClearPrice; // 清算价
	typedef	 TTFTDClientId TTPropertyClientId; // 客户编码
	typedef	 TTFTDName TTPropertyClientName; // 客户名称
	typedef	 TTFTDClientType TTPropertyClientType; // 客户类别
	typedef	 TTFTDPrice TTPropertyClosePrice; // 收盘价
	typedef	char TTPropertyComeFrom[20 + 1]; // 消息来源
	typedef	 TTFTDConnectionReference TTPropertyConnectionReference; // 链路标示
	typedef	char TTPropertyContent[500 + 1]; // 消息正文
	typedef	char TTPropertyCurrency[3 + 1]; // 交易用的货币，按照ISO 4217 标准定义
	typedef	 TTFTDDataFlowFlag TTPropertyDataFlowFlag; // 数据流名称
	typedef	 TTFTDValue TTPropertyDelValue; // 本交易日提出资金
	typedef	 TTFTDDateTime TTPropertyDialogLoginTime;// 最后一次对话模式登录时间
	typedef	 TTFTDDateTime TTPropertyDialogLogoutTime;// 最后一次对话模式退出时间
	typedef	 TTFTDBoolFlag TTPropertyDialogStreamStatus; // 对话模式在线状态
	typedef	 TTFTDDirection TTPropertyDirection;// 买卖方向
	typedef	 TTFTDDate TTPropertyEndDelvDate;// 最后交割日
	typedef	 TTFTDDate TTPropertyEndTrdDate;// 最后交易日
	typedef	 TTFTDErrorCode TTPropertyErrorCode; // 错误代码
	typedef	char TTPropertyErrorText[100 + 1]; // 错误正文
	typedef	 TTFTDDateTime TTPropertyExchangeDateTime; // 交易所系统时间
	typedef	 TTFTDLocalId TTPropertyExecOrderLocalID; // 执行宣告本地编号
	typedef	 TTFTDSysOrderId TTPropertyExecOrderSysID; // 执行编号
	typedef	int TTPropertyForcedistime; // 强平的撮合间隔
	typedef	 TTFTDForceExitCode TTPropertyForceExitCode; // 强制退出号
	typedef	char TTPropertyForceExitMsg[100 + 1]; // 强制退出原因
	typedef	 TTFTDLocalId TTPropertyForceGroupId; // 强平组号
	typedef	char TTPropertyFrontId[20 + 1]; // 前置机标识
	typedef	 TTFTDBoolFlag TTPropertyFuseFlag; // 熔断标记
	typedef	 TTFTDPrice TTPropertyFuselimit; // 熔断限额
	typedef	int TTPropertyFusepersisttime;// 熔断最大持续时间
	typedef	char TTPropertyFusepoint[6 + 1]; // 在该时间点后不可熔断，为HHmmss 格式
	typedef	 TTFTDBoolFlag TTPropertyFuseRights; // 可否熔断
	typedef	 TTFTDHedgeFlag TTPropertyHedgeFlag; // 投保标记
	typedef	 TTFTDPrice TTPropertyHighLimit; // 涨停板
	typedef	 TTFTDPercent TTPropertyHighLimitRate; // 涨停板率
	typedef	 TTFTDPrice TTPropertyHighPrice; // 最高价
	typedef	 TTFTDValue TTPropertyInitMargin; // 初始保证金
	typedef	 TTFTDDateTime TTPropertyInsertTime;// 录入时间
	typedef	 TTFTDStopCode TTPropertyInstrStopCode;// 停止交易原因
	typedef	 TTFTDInstrumentId TTPropertyInstrumentId; //合约编码
	typedef	 TTFTDName TTPropertyInstrumentName; // 合约名称
	typedef	 TTFTDInstrumentStatus TTPropertyInstrumentStatus; // 合约交易状态
	typedef	 TTFTDInstrumentType TTPropertyInstrumentType;// 合约类型
	typedef	 TTFTDInstrumentVersion TTPropertyInstrumentVersion; // 合约版本号
	typedef	char TTPropertyIpAddr[20 + 1]; // 登录者的IP 地址
	typedef	 TTFTDBoolFlag TTPropertyIsLogin; // 是否登录
	typedef	 TTFTDVolume TTPropertyLastLot; // 最后一笔成交手数，双向计算
	typedef	 TTFTDPrice TTPropertyLastPrice; // 最新价
	typedef	 TTFTDPrice TTPropertyLifeHigh; // 历史最高成交价格
	typedef	 TTFTDPrice TTPropertyLifeLow; // 历史最低成交价格
	typedef	 TTFTDPrice TTPropertyLimitPrice; // 限价
	typedef	 TTFTDVolume TTPropertyLongOffsFrozHPosition; // 多头平仓冻结持仓手(保)
	typedef	 TTFTDVolume TTPropertyLongOffsFrozSPosition; // 多头平仓冻结持仓手(投)
	typedef	 TTFTDVolume TTPropertyLongOpenFrozHPosition; // 多头开仓冻结持仓手（保）
	typedef	 TTFTDVolume TTPropertyLongOpenFrozSPosition; // 多头开仓冻结持仓手（投）
	typedef	 TTFTDPrice TTPropertyLowLimit; // 跌停板
	typedef	 TTFTDPercent TTPropertyLowLimitRate; // 跌停板率
	typedef	 TTFTDPrice TTPropertyLowPrice;  // 最低价
	typedef	 TTFTDPrice TTPropertyMargin;  // 保证金
	typedef	 TTFTDMarketId TTPropertyMarketId;  // 市场编码
	typedef	 TTFTDBoolFlag TTPropertyMarketMatchDataStatus;  // 是否主动发送成交行情
	typedef	 TTFTDName TTPropertyMarketName;  // 市场名称
	typedef	 TTFTDMarketStatus TTPropertyMarketStatusId;  // 市场交易状态编码
	typedef	 TTFTDMatchCondition TTPropertyMatchCondition;  // 报单成交属性
	typedef	 TTFTDDate TTPropertyMatchDate;  // 成交日期
	typedef	 TTFTDMatchFlag TTPropertyMatchFlag;  // 成交双方的性质
	typedef	 TTFTDMatchSession TTPropertyMatchSession;  // 报单成交时间
	typedef	 TTFTDTime TTPropertyMatchTime;  // 成交时间
	typedef	 TTFTDVolume TTPropertyMaxLot;  // 最大可下单手数
	typedef	 TTFTDLocalId TTPropertyMaxOrderLocalId;  // 最大报单本地编号
	typedef	 TTFTDMsgRef TTPropertyMessageReference;  // 用户自定义数据。可打印ASCII 字符
	typedef	 TTFTDVolume TTPropertyMinimalVolume;  // 最小成交量
	typedef	 TTFTDVolume TTPropertyMinLot;  // 最小可下单手数
	typedef	char TTPropertyName[20 + 1];  // 名称
	typedef	 TTFTDPassword TTPropertyNewPassword;  // 新口令
	typedef	 TTFTDNewsType TTPropertyNewsType;  // 消息类型
	typedef	 TTFTDNewsUrgency TTPropertyNewsUrgency;  // 紧急程度
	typedef	 TTFTDOffsetFlag TTPropertyOffsetFlag;  // 开平仓标记
	typedef	 TTFTDPassword TTPropertyOldPassword;  // 旧口令
	typedef	 TTFTDVolume TTPropertyOpenInterest;  // 持仓量
	typedef	 TTFTDPrice TTPropertyOpenPrice;  // 开盘价
	typedef	 TTFTDOptionType TTPropertyOptionsType;  // 期权类型
	typedef	 TTFTDActionFlag TTPropertyOrderActionCode;  // 报单操作类型码
	typedef	 TTFTDLocalId TTPropertyOrderLocalId;  // 委托编号
	typedef	 TTFTDOrderStatus TTPropertyOrderStatus;  // 报单状态
	typedef	 TTFTDSysOrderId TTPropertyOrderSysId;  // 合同编号
	typedef	 TTFTDOrderType TTPropertyOrderType;  // 报单类型
	typedef	 TTFTDParticipantId TTPropertyParticipantId;  // 交易会员编码
	typedef	 TTFTDName TTPropertyParticipantName;  // 会员名称
	typedef	 TTFTDParticipantType TTPropertyParticipantType;  // 会员类型
	typedef	 TTFTDTradeRight TTPropertyPartiTrdRight;  // 会员权限
	typedef	 TTFTDPassword TTPropertyPassword;  // 口令
	typedef	 TTFTDPrice TTPropertyPreClose;  // 前收盘价格
	typedef	 TTFTDVolume TTPropertyPreOpenInterest;  // 前最后持仓量，双向计算
	typedef	 TTFTDPrice TTPropertyPreSettle;  // 前结算价格
	typedef	 TTFTDPrice TTPropertyPrice;  // 价格
	typedef	 TTFTDDateTime TTPropertyPrivateLoginTime;  // 最后一次私有模式登录时间
	typedef	 TTFTDDateTime TTPropertyPrivateLogoutTime;  // 最后一次私有模式退出时间
	typedef	 TTFTDBoolFlag TTPropertyPrivateStreamStatus;  // 私有模式的状态
	typedef	 TTFTDProtocolVersion TTPropertyProtocolVersion;  // 使用) :   TTFTD 版本号
	typedef	 TTFTDPubStyle TTPropertyPubstyle;  // 竞价阶段合约行情发布方式
	typedef	 TTFTDValue TTPropertyPremium;  // 权利金收支
	typedef	 TTFTDSysOrderId TTPropertyQuoteSysID;  // 报价编号
	typedef	 TTFTDLocalId TTPropertyQuoteLocalID;  // 报价委托编号
	typedef	 TTFTDRequestByType TTPropertyRequestBy;  // 询价发起方
	typedef	 TTFTDRateUnit TTPropertyRateUnit;  // 汇率单位
	typedef	 TTFTDPrice TTPropertyRatePrice;  // 外汇价格
	typedef	 TTFTDValue TTPropertySellHedgeOffsetMargin;  // 卖保平仓返回保证金
	typedef	 TTFTDValue TTPropertySellHedgeOffsetProfit;  // 卖保平仓盈亏
	typedef	 TTFTDValue TTPropertySellHedgeOpenFrozMargin;  // 卖保开仓冻结保证金
	typedef	 TTFTDValue TTPropertySellHedgeOpenUsedMargin;  // 卖保开仓使用保证金
	typedef	 TTFTDVolume TTPropertySellHedgePosition;  // 卖开仓量(保)
	typedef	 TTFTDValue TTPropertySellHedgeTurnOver;  // 卖保成交额
	typedef	 TTFTDVolume TTPropertySellHedgeVolume;  // 卖成交量(保)
	typedef	 TTFTDVolume TTPropertySellOffsHPosition;  // 卖平今量(保)
	typedef	 TTFTDVolume TTPropertySellOffsSPosition;  // 卖平今量(投)
	typedef	 TTFTDValue TTPropertySellSpecOffsetMargin;  // 卖投平仓返回保证金
	typedef	 TTFTDValue TTPropertySellSpecOffsetProfit;  // 卖投平仓盈亏
	typedef	 TTFTDValue TTPropertySellSpecOpenFrozMargin;  // 卖投开仓冻结保证金
	typedef	 TTFTDValue TTPropertySellSpecOpenUsedMargin;  // 卖投开仓使用保证金
	typedef	 TTFTDVolume TTPropertySellSpecPosition;  // 卖开仓量(投)
	typedef	 TTFTDValue TTPropertySellSpecTurnOver;  // 卖投成交额
	typedef	 TTFTDVolume TTPropertySellSpecVolume;  // 卖成交量(投)
	typedef	 TTFTDTime TTPropertySendTime;  // 发送时间
	typedef	 TTFTDSequenceNo TTPropertySequenceNo;  //序列号;  //
	typedef	 TTFTDSequenceSeries TTPropertySequenceSeries;  // 序列类别号
	typedef	 TTFTDServerAppName TTPropertyServerAppName;  // 会员应用系统名称
	typedef	 TTFTDPrice TTPropertySettlePrice;  // 结算价
	typedef	char TTPropertyShortCutKey;  // 输入快捷键
	typedef	 TTFTDVolume TTPropertyShortOffsFrozHPosition;  // 空头平仓冻结持仓手(保)
	typedef	 TTFTDVolume TTPropertyShortOffsFrozSPosition;  // 空头平仓冻结持仓手(投)
	typedef	 TTFTDVolume TTPropertyShortOpenFrozHPosition;  // 空头开仓冻结持仓手（保）
	typedef	 TTFTDVolume TTPropertyShortOpenFrozSPosition;  // 空头开仓冻结持仓手（投）
	typedef	 TTFTDDate TTPropertyStartDelvDate;  // 开始交割日
	typedef	 TTFTDTime TTPropertyStartTime;  // 开始时间
	typedef	 TTFTDDate TTPropertyStartTrdDate;  // 开始交易日
	typedef	 TTFTDPrice TTPropertyStopPrice;  // 止损价格
	typedef	 TTFTDTime TTPropertySuspendTime;  // 挂起时间
	typedef	 TTFTDPrice TTPropertyStrikePrice;  // 执行价格
	typedef	 TTFTDTime TTPropertyThroughTime;  // 直到时间
	typedef	 TTFTDPrice TTPropertyTick;  // 最小价位
	typedef	 TTFTDTimeOut TTPropertyTimeOut;  // 发送监测信号时间间隔
	typedef	int TTPropertyTimeSpan;  // 时区，正数表示东区，负数表示西区
	typedef	 TTFTDTimeStamp TTPropertyTimeStamp;  // 时间戳
	typedef	int TTPropertyTotalMarketMatchData;  // 发送成交行情记录总数，网络序
	typedef	 TTFTDVolume TTPropertyTotalVolume;  // 总成交量
	typedef	 TTFTDDate TTPropertyTradeDate;  // 交易日期
	typedef	 TTFTDTradeId TTPropertyTradeId;  // 成交编号
	typedef	int TTPropertyTradeLot;  // 总成交手数，双向计算
	typedef	 TTFTDPrice TTPropertyTradePrice;  // 最新成交价格
	typedef	 TTFTDTradeRight TTPropertyTradeRights;  // 交易权限
	typedef	 TTFTDVolume TTPropertyTradeTurnover;  // 总成交金额，双向计算
	typedef	 TTFTDTradeType TTPropertyTradeType;  // 市场交易类型
	typedef	int TTPropertyTradeVolume;  // 今成交量
	typedef	int TTPropertyUnit;  // 每手乘数
	typedef	 TTFTDTime TTPropertyUpdateTime;  // 最后修改时间
	typedef	char TTPropertyURLLink[200 + 1];  // 此消息的WEB 联结
	typedef	 TTFTDUserId TTPropertyUserId;  // 交易员编码
	typedef	 TTFTDUserStatus TTPropertyUserStatus;  // 交易员状态
	typedef	 TTFTDUserType TTPropertyUserType;  // 交易员类别
	typedef	char TTPropertyUnderlyingInstrID[30 + 1];  // 基础商品代码
	typedef	 TTFTDVolume TTPropertyUnderlyingMultiple; //基础商品乘数
	typedef	 TTFTDDate TTPropertyValidThrough;  // 有效时间约束
	typedef	 TTFTDVolume TTPropertyVolume;  // 数量
	typedef	int TTPropertyVolumeTotal;  // 剩余总申报数量（以手为单位）
	typedef	int TTPropertyVolumeTotalOrginal;  // 原始总申报数量（以手为单位）
	typedef	 TTFTDVolumeType TTPropertyVolumeType;  // 数量类型
	typedef	 TTFTDVolume TTPropertyYdBuyHedgePosition;  // 前买持仓量(保)
	typedef	 TTFTDVolume TTPropertyYdBuyOffsHPosition;  // 买平昨量(保)
	typedef	 TTFTDVolume TTPropertyYdBuyOffsSPosition;  // 买平昨量(投)
	typedef	 TTFTDVolume TTPropertyYdBuySpecPosition;
}
#endif