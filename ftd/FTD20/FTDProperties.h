#ifndef FTD20_PROPERTY_H
#define FTD20_PROPERTY_H

#include "../FTDDataTypes.h"
#include "../FTDProperties.h"


namespace FTD20 {

	typedef	char TTPropertyAbstract[80 + 1]; //摘要 / 说明
	typedef	FTD::TTFTDLocalId TTPropertyActionLocalId; // 报单操作本地编号
	typedef	FTD::TTFTDDate TTPropertyActionDate; //实际交易日期
	typedef	FTD::TTFTDTime TTPropertyActiveTime;// 激活时间
	typedef	FTD::TTFTDUserId TTPropertyActiveUserId; // 操作交易员编码
	typedef	FTD::TTFTDValue TTPropertyAddValue; // 本交易日新增资金
	typedef	FTD::TTFTDVolume TTPropertyAskLot; // 卖出数量
	typedef	FTD::TTFTDPrice TTPropertyAskPrice; // 卖出价
	typedef	FTD::TTFTDBoolFlag TTPropertyAutoSuspend; // 自动挂起标志
	typedef	FTD::TTFTDPrice TTPropertyAveragePrice; // 均价
	typedef	FTD::TTFTDValue TTPropertyBalanceValue; // 可用保证金余额
	typedef	FTD::TTFTDVolume TTPropertyBidLot; // 买入数量
	typedef	FTD::TTFTDPrice TTPropertyBidPrice; // 买入价格
	typedef	FTD::TTFTDDateTime TTPropertyBroadcastLoginTime; // 最后一次广播模式登录时间
	typedef	FTD::TTFTDDateTime TTPropertyBroadcastLogOutTime; // 最后一次广播模式退出时间
	typedef	int TTPropertyBroadcastSequenceNo; // 广播模式中的数据序列号
	typedef	int16_t TTPropertyBroadcastSequenceSeries; // 广播模式序列类别号
	typedef	FTD::TTFTDBoolFlag TTPropertyBroadcastStreamStatus; // 广播模式在线状态
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOffsetMargin; // 买保平仓返回保证金
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOffsetProfit; // 买保平仓盈亏
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOpenFrozMargin; // 买保开仓冻结保证金
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOpenUsedMargin; // 买保开仓使用保证金
	typedef	FTD::TTFTDVolume TTPropertyBuyHedgePosition; // 买开仓量(保)
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeTurnOver; // 买保成交额
	typedef	FTD::TTFTDVolume TTPropertyBuyHedgeVolume; // 买成交量(保)
	typedef	FTD::TTFTDVolume TTPropertyBuyOffsHPosition; // 买平今量(保)
	typedef	FTD::TTFTDVolume TTPropertyBuyOffsSPosition; // 买平今量(投)
	typedef	FTD::TTFTDValue TTPropertyBuySpecOffsetMargin; // 买投平仓返回保证金
	typedef	FTD::TTFTDValue TTPropertyBuySpecOffsetProfit; // 买投平仓盈亏
	typedef	FTD::TTFTDValue TTPropertyBuySpecOpenFrozMargin; // 买投开仓冻结保证金
	typedef	FTD::TTFTDValue TTPropertyBuySpecOpenUsedMargin; // 买投开仓使用保证金
	typedef	FTD::TTFTDVolume TTPropertyBuySpecPosition; // 买开仓量(投)
	typedef	FTD::TTFTDValue TTPropertyBuySpecTurnOver; // 买投成交额
	typedef	FTD::TTFTDVolume TTPropertyBuySpecVolume; // 买成交量(投)
	typedef	FTD::TTFTDDate TTPropertyCancelDate; // 取消日期
	typedef	FTD::TTFTDBoolFlag TTPropertyCancelFlag; // 成交是否被取消。
	typedef	FTD::TTFTDTime TTPropertyCancelTime; // 取消时间
	typedef	FTD::TTFTDDate TTPropertyClearDate; // 清算日期
	typedef	FTD::TTFTDPrice TTPropertyClearPrice; // 清算价
	typedef	FTD::TTFTDClientId TTPropertyClientId; // 客户编码
	typedef	FTD::TTFTDName TTPropertyClientName; // 客户名称
	typedef	FTD::TTFTDClientType TTPropertyClientType; // 客户类别
	typedef	FTD::TTFTDPrice TTPropertyClosePrice; // 收盘价
	typedef	char TTPropertyComeFrom[20 + 1]; // 消息来源
	typedef	FTD::TTFTDConnectionReference TTPropertyConnectionReference; // 链路标示
	typedef	char TTPropertyContent[500 + 1]; // 消息正文
	typedef	char TTPropertyCurrency[3 + 1]; // 交易用的货币，按照ISO 4217 标准定义
	typedef	FTD::TTFTDDataFlowFlag TTPropertyDataFlowFlag; // 数据流名称
	typedef	FTD::TTFTDValue TTPropertyDelValue; // 本交易日提出资金
	typedef	FTD::TTFTDDateTime TTPropertyDialogLoginTime;// 最后一次对话模式登录时间
	typedef	FTD::TTFTDDateTime TTPropertyDialogLogoutTime;// 最后一次对话模式退出时间
	typedef	FTD::TTFTDBoolFlag TTPropertyDialogStreamStatus; // 对话模式在线状态
	typedef	FTD::TTFTDDirection TTPropertyDirection;// 买卖方向
	typedef	FTD::TTFTDDate TTPropertyEndDelvDate;// 最后交割日
	typedef	FTD::TTFTDDate TTPropertyEndTrdDate;// 最后交易日
	typedef	FTD::TTFTDErrorCode TTPropertyErrorCode; // 错误代码
	typedef	char TTPropertyErrorText[100 + 1]; // 错误正文
	typedef	FTD::TTFTDDateTime TTPropertyExchangeDateTime; // 交易所系统时间
	typedef	FTD::TTFTDLocalId TTPropertyExecOrderLocalID; // 执行宣告本地编号
	typedef	FTD::TTFTDSysOrderId TTPropertyExecOrderSysID; // 执行编号
	typedef	int TTPropertyForcedistime; // 强平的撮合间隔
	typedef	FTD::TTFTDForceExitCode TTPropertyForceExitCode; // 强制退出号
	typedef	char TTPropertyForceExitMsg[100 + 1]; // 强制退出原因
	typedef	FTD::TTFTDLocalId TTPropertyForceGroupId; // 强平组号
	typedef	char TTPropertyFrontId[20 + 1]; // 前置机标识
	typedef	FTD::TTFTDBoolFlag TTPropertyFuseFlag; // 熔断标记
	typedef	FTD::TTFTDPrice TTPropertyFuselimit; // 熔断限额
	typedef	int TTPropertyFusepersisttime;// 熔断最大持续时间
	typedef	char TTPropertyFusepoint[6 + 1]; // 在该时间点后不可熔断，为HHmmss 格式
	typedef	FTD::TTFTDBoolFlag TTPropertyFuseRights; // 可否熔断
	typedef	FTD::TTFTDHedgeFlag TTPropertyHedgeFlag; // 投保标记
	typedef	FTD::TTFTDPrice TTPropertyHighLimit; // 涨停板
	typedef	FTD::TTFTDPercent TTPropertyHighLimitRate; // 涨停板率
	typedef	FTD::TTFTDPrice TTPropertyHighPrice; // 最高价
	typedef	FTD::TTFTDValue TTPropertyInitMargin; // 初始保证金
	typedef	FTD::TTFTDDateTime TTPropertyInsertTime;// 录入时间
	typedef	FTD::TTFTDStopCode TTPropertyInstrStopCode;// 停止交易原因
	typedef	FTD::TTFTDInstrumentId TTPropertyInstrumentId; //合约编码
	typedef	FTD::TTFTDName TTPropertyInstrumentName; // 合约名称
	typedef	FTD::TTFTDInstrumentStatus TTPropertyInstrumentStatus; // 合约交易状态
	typedef	FTD::TTFTDInstrumentType TTPropertyInstrumentType;// 合约类型
	typedef	FTD::TTFTDInstrumentVersion TTPropertyInstrumentVersion; // 合约版本号
	typedef	char TTPropertyIpAddr[20 + 1]; // 登录者的IP 地址
	typedef	FTD::TTFTDBoolFlag TTPropertyIsLogin; // 是否登录
	typedef	FTD::TTFTDVolume TTPropertyLastLot; // 最后一笔成交手数，双向计算
	typedef	FTD::TTFTDPrice TTPropertyLastPrice; // 最新价
	typedef	FTD::TTFTDPrice TTPropertyLifeHigh; // 历史最高成交价格
	typedef	FTD::TTFTDPrice TTPropertyLifeLow; // 历史最低成交价格
	typedef	FTD::TTFTDPrice TTPropertyLimitPrice; // 限价
	typedef	FTD::TTFTDVolume TTPropertyLongOffsFrozHPosition; // 多头平仓冻结持仓手(保)
	typedef	FTD::TTFTDVolume TTPropertyLongOffsFrozSPosition; // 多头平仓冻结持仓手(投)
	typedef	FTD::TTFTDVolume TTPropertyLongOpenFrozHPosition; // 多头开仓冻结持仓手（保）
	typedef	FTD::TTFTDVolume TTPropertyLongOpenFrozSPosition; // 多头开仓冻结持仓手（投）
	typedef	FTD::TTFTDPrice TTPropertyLowLimit; // 跌停板
	typedef	FTD::TTFTDPercent TTPropertyLowLimitRate; // 跌停板率
	typedef	FTD::TTFTDPrice TTPropertyLowPrice;  // 最低价
	typedef	FTD::TTFTDPrice TTPropertyMargin;  // 保证金
	typedef	FTD::TTFTDMarketId TTPropertyMarketId;  // 市场编码
	typedef	FTD::TTFTDBoolFlag TTPropertyMarketMatchDataStatus;  // 是否主动发送成交行情
	typedef	FTD::TTFTDName TTPropertyMarketName;  // 市场名称
	typedef	FTD::TTFTDMarketStatus TTPropertyMarketStatusId;  // 市场交易状态编码
	typedef	FTD::TTFTDMatchCondition TTPropertyMatchCondition;  // 报单成交属性
	typedef	FTD::TTFTDDate TTPropertyMatchDate;  // 成交日期
	typedef	FTD::TTFTDMatchFlag TTPropertyMatchFlag;  // 成交双方的性质
	typedef	FTD::TTFTDMatchSession TTPropertyMatchSession;  // 报单成交时间
	typedef	FTD::TTFTDTime TTPropertyMatchTime;  // 成交时间
	typedef	FTD::TTFTDVolume TTPropertyMaxLot;  // 最大可下单手数
	typedef	FTD::TTFTDLocalId TTPropertyMaxOrderLocalId;  // 最大报单本地编号
	typedef	FTD::TTFTDMsgRef TTPropertyMessageReference;  // 用户自定义数据。可打印ASCII 字符
	typedef	FTD::TTFTDVolume TTPropertyMinimalVolume;  // 最小成交量
	typedef	FTD::TTFTDVolume TTPropertyMinLot;  // 最小可下单手数
	typedef	char TTPropertyName[20 + 1];  // 名称
	typedef	FTD::TTFTDPassword TTPropertyNewPassword;  // 新口令
	typedef	FTD::TTFTDNewsType TTPropertyNewsType;  // 消息类型
	typedef	FTD::TTFTDNewsUrgency TTPropertyNewsUrgency;  // 紧急程度
	typedef	FTD::TTFTDOffsetFlag TTPropertyOffsetFlag;  // 开平仓标记
	typedef	FTD::TTFTDPassword TTPropertyOldPassword;  // 旧口令
	typedef	FTD::TTFTDVolume TTPropertyOpenInterest;  // 持仓量
	typedef	FTD::TTFTDPrice TTPropertyOpenPrice;  // 开盘价
	typedef	FTD::TTFTDOptionType TTPropertyOptionsType;  // 期权类型
	typedef	FTD::TTFTDActionFlag TTPropertyOrderActionCode;  // 报单操作类型码
	typedef	FTD::TTFTDLocalId TTPropertyOrderLocalId;  // 委托编号
	typedef	FTD::TTFTDOrderStatus TTPropertyOrderStatus;  // 报单状态
	typedef	FTD::TTFTDSysOrderId TTPropertyOrderSysId;  // 合同编号
	typedef	FTD::TTFTDOrderType TTPropertyOrderType;  // 报单类型
	typedef	FTD::TTFTDParticipantId TTPropertyParticipantId;  // 交易会员编码
	typedef	FTD::TTFTDName TTPropertyParticipantName;  // 会员名称
	typedef	FTD::TTFTDParticipantType TTPropertyParticipantType;  // 会员类型
	typedef	FTD::TTFTDTradeRight TTPropertyPartiTrdRight;  // 会员权限
	typedef	FTD::TTFTDPassword TTPropertyPassword;  // 口令
	typedef	FTD::TTFTDPrice TTPropertyPreClose;  // 前收盘价格
	typedef	FTD::TTFTDVolume TTPropertyPreOpenInterest;  // 前最后持仓量，双向计算
	typedef	FTD::TTFTDPrice TTPropertyPreSettle;  // 前结算价格
	typedef	FTD::TTFTDPrice TTPropertyPrice;  // 价格
	typedef	FTD::TTFTDDateTime TTPropertyPrivateLoginTime;  // 最后一次私有模式登录时间
	typedef	FTD::TTFTDDateTime TTPropertyPrivateLogoutTime;  // 最后一次私有模式退出时间
	typedef	FTD::TTFTDBoolFlag TTPropertyPrivateStreamStatus;  // 私有模式的状态
	typedef	FTD::TTFTDProtocolVersion TTPropertyProtocolVersion;  // 使用) :  FTD::TTFTD 版本号
	typedef	FTD::TTFTDPubStyle TTPropertyPubstyle;  // 竞价阶段合约行情发布方式
	typedef	FTD::TTFTDValue TTPropertyPremium;  // 权利金收支
	typedef	FTD::TTFTDSysOrderId TTPropertyQuoteSysID;  // 报价编号
	typedef	FTD::TTFTDLocalId TTPropertyQuoteLocalID;  // 报价委托编号
	typedef	FTD::TTFTDRequestByType TTPropertyRequestBy;  // 询价发起方
	typedef	FTD::TTFTDRateUnit TTPropertyRateUnit;  // 汇率单位
	typedef	FTD::TTFTDPrice TTPropertyRatePrice;  // 外汇价格
	typedef	FTD::TTFTDValue TTPropertySellHedgeOffsetMargin;  // 卖保平仓返回保证金
	typedef	FTD::TTFTDValue TTPropertySellHedgeOffsetProfit;  // 卖保平仓盈亏
	typedef	FTD::TTFTDValue TTPropertySellHedgeOpenFrozMargin;  // 卖保开仓冻结保证金
	typedef	FTD::TTFTDValue TTPropertySellHedgeOpenUsedMargin;  // 卖保开仓使用保证金
	typedef	FTD::TTFTDVolume TTPropertySellHedgePosition;  // 卖开仓量(保)
	typedef	FTD::TTFTDValue TTPropertySellHedgeTurnOver;  // 卖保成交额
	typedef	FTD::TTFTDVolume TTPropertySellHedgeVolume;  // 卖成交量(保)
	typedef	FTD::TTFTDVolume TTPropertySellOffsHPosition;  // 卖平今量(保)
	typedef	FTD::TTFTDVolume TTPropertySellOffsSPosition;  // 卖平今量(投)
	typedef	FTD::TTFTDValue TTPropertySellSpecOffsetMargin;  // 卖投平仓返回保证金
	typedef	FTD::TTFTDValue TTPropertySellSpecOffsetProfit;  // 卖投平仓盈亏
	typedef	FTD::TTFTDValue TTPropertySellSpecOpenFrozMargin;  // 卖投开仓冻结保证金
	typedef	FTD::TTFTDValue TTPropertySellSpecOpenUsedMargin;  // 卖投开仓使用保证金
	typedef	FTD::TTFTDVolume TTPropertySellSpecPosition;  // 卖开仓量(投)
	typedef	FTD::TTFTDValue TTPropertySellSpecTurnOver;  // 卖投成交额
	typedef	FTD::TTFTDVolume TTPropertySellSpecVolume;  // 卖成交量(投)
	typedef	FTD::TTFTDTime TTPropertySendTime;  // 发送时间
	typedef	FTD::TTFTDSequenceNo TTPropertySequenceNo;  //序列号;  //
	typedef	FTD::TTFTDSequenceSeries TTPropertySequenceSeries;  // 序列类别号
	typedef	FTD::TTFTDServerAppName TTPropertyServerAppName;  // 会员应用系统名称
	typedef	FTD::TTFTDPrice TTPropertySettlePrice;  // 结算价
	typedef	char TTPropertyShortCutKey;  // 输入快捷键
	typedef	FTD::TTFTDVolume TTPropertyShortOffsFrozHPosition;  // 空头平仓冻结持仓手(保)
	typedef	FTD::TTFTDVolume TTPropertyShortOffsFrozSPosition;  // 空头平仓冻结持仓手(投)
	typedef	FTD::TTFTDVolume TTPropertyShortOpenFrozHPosition;  // 空头开仓冻结持仓手（保）
	typedef	FTD::TTFTDVolume TTPropertyShortOpenFrozSPosition;  // 空头开仓冻结持仓手（投）
	typedef	FTD::TTFTDDate TTPropertyStartDelvDate;  // 开始交割日
	typedef	FTD::TTFTDTime TTPropertyStartTime;  // 开始时间
	typedef	FTD::TTFTDDate TTPropertyStartTrdDate;  // 开始交易日
	typedef	FTD::TTFTDPrice TTPropertyStopPrice;  // 止损价格
	typedef	FTD::TTFTDTime TTPropertySuspendTime;  // 挂起时间
	typedef	FTD::TTFTDPrice TTPropertyStrikePrice;  // 执行价格
	typedef	FTD::TTFTDTime TTPropertyThroughTime;  // 直到时间
	typedef	FTD::TTFTDPrice TTPropertyTick;  // 最小价位
	typedef	FTD::TTFTDTimeOut TTPropertyTimeOut;  // 发送监测信号时间间隔
	typedef	int TTPropertyTimeSpan;  // 时区，正数表示东区，负数表示西区
	typedef	FTD::TTFTDTimeStamp TTPropertyTimeStamp;  // 时间戳
	typedef	int TTPropertyTotalMarketMatchData;  // 发送成交行情记录总数，网络序
	typedef	FTD::TTFTDVolume TTPropertyTotalVolume;  // 总成交量
	typedef	FTD::TTFTDDate TTPropertyTradeDate;  // 交易日期
	typedef	FTD::TTFTDTradeId TTPropertyTradeId;  // 成交编号
	typedef	int TTPropertyTradeLot;  // 总成交手数，双向计算
	typedef	FTD::TTFTDPrice TTPropertyTradePrice;  // 最新成交价格
	typedef	FTD::TTFTDTradeRight TTPropertyTradeRights;  // 交易权限
	typedef	FTD::TTFTDVolume TTPropertyTradeTurnover;  // 总成交金额，双向计算
	typedef	FTD::TTFTDTradeType TTPropertyTradeType;  // 市场交易类型
	typedef	int TTPropertyTradeVolume;  // 今成交量
	typedef	int TTPropertyUnit;  // 每手乘数
	typedef	FTD::TTFTDTime TTPropertyUpdateTime;  // 最后修改时间
	typedef	char TTPropertyURLLink[200 + 1];  // 此消息的WEB 联结
	typedef	FTD::TTFTDUserId TTPropertyUserId;  // 交易员编码
	typedef	FTD::TTFTDUserStatus TTPropertyUserStatus;  // 交易员状态
	typedef	FTD::TTFTDUserType TTPropertyUserType;  // 交易员类别
	typedef	char TTPropertyUnderlyingInstrID[30 + 1];  // 基础商品代码
	typedef	FTD::TTFTDVolume TTPropertyUnderlyingMultiple; //基础商品乘数
	typedef	FTD::TTFTDDate TTPropertyValidThrough;  // 有效时间约束
	typedef	FTD::TTFTDVolume TTPropertyVolume;  // 数量
	typedef	int TTPropertyVolumeTotal;  // 剩余总申报数量（以手为单位）
	typedef	int TTPropertyVolumeTotalOrginal;  // 原始总申报数量（以手为单位）
	typedef	FTD::TTFTDVolumeType TTPropertyVolumeType;  // 数量类型
	typedef	FTD::TTFTDVolume TTPropertyYdBuyHedgePosition;  // 前买持仓量(保)
	typedef	FTD::TTFTDVolume TTPropertyYdBuyOffsHPosition;  // 买平昨量(保)
	typedef	FTD::TTFTDVolume TTPropertyYdBuyOffsSPosition;  // 买平昨量(投)
	typedef	FTD::TTFTDVolume TTPropertyYdBuySpecPosition;
	///property : data_type
	static int getPropertyTypeID(int property_type_id)
	{
		switch (property_type_id)
		{
		case(FTD::PROPERTY_ID_Abstract): return FTD::TYPE_ID_StringType80; //摘要 / 说明
		case(FTD::PROPERTY_ID_ActionLocalId): return FTD::TYPE_ID_LocalId; // 报单操作本地编号
		case(FTD::PROPERTY_ID_ActionDate): return FTD::TYPE_ID_Date; //实际交易日期
		case(FTD::PROPERTY_ID_ActiveTime): return FTD::TYPE_ID_Time;// 激活时间
		case(FTD::PROPERTY_ID_ActiveUserId): return FTD::TYPE_ID_UserId; // 操作交易员编码
		case(FTD::PROPERTY_ID_AddValue): return FTD::TYPE_ID_Value; // 本交易日新增资金
		case(FTD::PROPERTY_ID_AskLot): return FTD::TYPE_ID_Volume; // 卖出数量
		case(FTD::PROPERTY_ID_AskPrice): return FTD::TYPE_ID_Price; // 卖出价
		case(FTD::PROPERTY_ID_AutoSuspend): return FTD::TYPE_ID_BoolFlag; // 自动挂起标志
		case(FTD::PROPERTY_ID_AveragePrice): return FTD::TYPE_ID_Price; // 均价
		case(FTD::PROPERTY_ID_BalanceValue): return FTD::TYPE_ID_Value; // 可用保证金余额
		case(FTD::PROPERTY_ID_BidLot): return FTD::TYPE_ID_Volume; // 买入数量
		case(FTD::PROPERTY_ID_BidPrice): return FTD::TYPE_ID_Price; // 买入价格
		case(FTD::PROPERTY_ID_BroadcastLoginTime): return FTD::TYPE_ID_DateTime; // 最后一次广播模式登录时间
		case(FTD::PROPERTY_ID_BroadcastLogOutTime): return FTD::TYPE_ID_DateTime; // 最后一次广播模式退出时间
		case(FTD::PROPERTY_ID_BroadcastSequenceNo): return FTD::TYPE_ID_IntType; // 广播模式中的数据序列号
		case(FTD::PROPERTY_ID_BroadcastSequenceSeries): return FTD::TYPE_ID_WordType; // 广播模式序列类别号
		case(FTD::PROPERTY_ID_BroadcastStreamStatus): return FTD::TYPE_ID_BoolFlag; // 广播模式在线状态
		case(FTD::PROPERTY_ID_BuyHedgeOffsetMargin): return FTD::TYPE_ID_Value; // 买保平仓返回保证金
		case(FTD::PROPERTY_ID_BuyHedgeOffsetProfit): return FTD::TYPE_ID_Value; // 买保平仓盈亏
		case(FTD::PROPERTY_ID_BuyHedgeOpenFrozMargin): return FTD::TYPE_ID_Value; // 买保开仓冻结保证金
		case(FTD::PROPERTY_ID_BuyHedgeOpenUsedMargin): return FTD::TYPE_ID_Value; // 买保开仓使用保证金
		case(FTD::PROPERTY_ID_BuyHedgePosition): return FTD::TYPE_ID_Volume; // 买开仓量(保)
		case(FTD::PROPERTY_ID_BuyHedgeTurnOver): return FTD::TYPE_ID_Value; // 买保成交额
		case(FTD::PROPERTY_ID_BuyHedgeVolume): return FTD::TYPE_ID_Volume; // 买成交量(保)
		case(FTD::PROPERTY_ID_BuyOffsHPosition): return FTD::TYPE_ID_Volume; // 买平今量(保)
		case(FTD::PROPERTY_ID_BuyOffsSPosition): return FTD::TYPE_ID_Volume; // 买平今量(投)
		case(FTD::PROPERTY_ID_BuySpecOffsetMargin): return FTD::TYPE_ID_Value; // 买投平仓返回保证金
		case(FTD::PROPERTY_ID_BuySpecOffsetProfit): return FTD::TYPE_ID_Value; // 买投平仓盈亏
		case(FTD::PROPERTY_ID_BuySpecOpenFrozMargin): return FTD::TYPE_ID_Value; // 买投开仓冻结保证金
		case(FTD::PROPERTY_ID_BuySpecOpenUsedMargin): return FTD::TYPE_ID_Value; // 买投开仓使用保证金
		case(FTD::PROPERTY_ID_BuySpecPosition): return FTD::TYPE_ID_Volume; // 买开仓量(投)
		case(FTD::PROPERTY_ID_BuySpecTurnOver): return FTD::TYPE_ID_Value; // 买投成交额
		case(FTD::PROPERTY_ID_BuySpecVolume): return FTD::TYPE_ID_Volume; // 买成交量(投)
		case(FTD::PROPERTY_ID_CancelDate): return FTD::TYPE_ID_Date; // 取消日期
		case(FTD::PROPERTY_ID_CancelFlag): return FTD::TYPE_ID_BoolFlag; // 成交是否被取消。
		case(FTD::PROPERTY_ID_CancelTime): return FTD::TYPE_ID_Time; // 取消时间
		case(FTD::PROPERTY_ID_ClearDate): return FTD::TYPE_ID_Date; // 清算日期
		case(FTD::PROPERTY_ID_ClearPrice): return FTD::TYPE_ID_Price; // 清算价
		case(FTD::PROPERTY_ID_ClientId): return FTD::TYPE_ID_ClientId; // 客户编码
		case(FTD::PROPERTY_ID_ClientName): return FTD::TYPE_ID_Name; // 客户名称
		case(FTD::PROPERTY_ID_ClientType): return FTD::TYPE_ID_ClientType; // 客户类别
		case(FTD::PROPERTY_ID_ClosePrice): return FTD::TYPE_ID_Price; // 收盘价
		case(FTD::PROPERTY_ID_ComeFrom): return FTD::TYPE_ID_StringType20; // 消息来源
		case(FTD::PROPERTY_ID_ConnectionReference): return FTD::TYPE_ID_ConnectionReference; // 链路标示
		case(FTD::PROPERTY_ID_Content): return FTD::TYPE_ID_StringType500; // 消息正文
		case(FTD::PROPERTY_ID_Currency): return FTD::TYPE_ID_StringType3; // 交易用的货币，按照ISO 4217 标准定义
		case(FTD::PROPERTY_ID_DataFlowFlag): return FTD::TYPE_ID_DataFlowFlag; // 数据流名称
		case(FTD::PROPERTY_ID_DelValue): return FTD::TYPE_ID_Value; // 本交易日提出资金
		case(FTD::PROPERTY_ID_DialogLoginTime): return FTD::TYPE_ID_DateTime;// 最后一次对话模式登录时间
		case(FTD::PROPERTY_ID_DialogLogoutTime): return FTD::TYPE_ID_DateTime;// 最后一次对话模式退出时间
		case(FTD::PROPERTY_ID_DialogStreamStatus): return FTD::TYPE_ID_BoolFlag; // 对话模式在线状态
		case(FTD::PROPERTY_ID_Direction): return FTD::TYPE_ID_Direction;// 买卖方向
		case(FTD::PROPERTY_ID_EndDelvDate): return FTD::TYPE_ID_Date;// 最后交割日
		case(FTD::PROPERTY_ID_EndTrdDate): return FTD::TYPE_ID_Date;// 最后交易日
		case(FTD::PROPERTY_ID_ErrorCode): return FTD::TYPE_ID_ErrorCode; // 错误代码
		case(FTD::PROPERTY_ID_ErrorText): return FTD::TYPE_ID_StringType100; // 错误正文
		case(FTD::PROPERTY_ID_ExchangeDateTime): return FTD::TYPE_ID_DateTime; // 交易所系统时间
		case(FTD::PROPERTY_ID_ExecOrderLocalID): return FTD::TYPE_ID_LocalId; // 执行宣告本地编号
		case(FTD::PROPERTY_ID_ExecOrderSysID): return FTD::TYPE_ID_SysOrderId; // 执行编号
		case(FTD::PROPERTY_ID_Forcedistime): return FTD::TYPE_ID_IntType; // 强平的撮合间隔
		case(FTD::PROPERTY_ID_ForceExitCode): return FTD::TYPE_ID_ForceExitCode; // 强制退出号
		case(FTD::PROPERTY_ID_ForceExitMsg): return FTD::TYPE_ID_StringType100; // 强制退出原因
		case(FTD::PROPERTY_ID_ForceGroupId): return FTD::TYPE_ID_LocalId; // 强平组号
		case(FTD::PROPERTY_ID_FrontId): return FTD::TYPE_ID_StringType20; // 前置机标识
		case(FTD::PROPERTY_ID_FuseFlag): return FTD::TYPE_ID_BoolFlag; // 熔断标记
		case(FTD::PROPERTY_ID_Fuselimit): return FTD::TYPE_ID_Price; // 熔断限额
		case(FTD::PROPERTY_ID_Fusepersisttime): return FTD::TYPE_ID_IntType;// 熔断最大持续时间
		case(FTD::PROPERTY_ID_Fusepoint): return FTD::TYPE_ID_StringType6; // 在该时间点后不可熔断，为HHmmss 格式
		case(FTD::PROPERTY_ID_FuseRights): return FTD::TYPE_ID_BoolFlag; // 可否熔断
		case(FTD::PROPERTY_ID_HedgeFlag): return FTD::TYPE_ID_HedgeFlag; // 投保标记
		case(FTD::PROPERTY_ID_HighLimit): return FTD::TYPE_ID_Price; // 涨停板
		case(FTD::PROPERTY_ID_HighLimitRate): return FTD::TYPE_ID_Percent; // 涨停板率
		case(FTD::PROPERTY_ID_HighPrice): return FTD::TYPE_ID_Price; // 最高价
		case(FTD::PROPERTY_ID_InitMargin): return FTD::TYPE_ID_Value; // 初始保证金
		case(FTD::PROPERTY_ID_InsertTime): return FTD::TYPE_ID_DateTime;// 录入时间
		case(FTD::PROPERTY_ID_InstrStopCode): return FTD::TYPE_ID_StopCode;// 停止交易原因
		case(FTD::PROPERTY_ID_InstrumentId): return FTD::TYPE_ID_InstrumentId; //合约编码
		case(FTD::PROPERTY_ID_InstrumentName): return FTD::TYPE_ID_Name; // 合约名称
		case(FTD::PROPERTY_ID_InstrumentStatus): return FTD::TYPE_ID_InstrumentStatus; // 合约交易状态
		case(FTD::PROPERTY_ID_InstrumentType): return FTD::TYPE_ID_InstrumentType;// 合约类型
		case(FTD::PROPERTY_ID_InstrumentVersion): return FTD::TYPE_ID_InstrumentVersion; // 合约版本号
		case(FTD::PROPERTY_ID_IpAddr): return FTD::TYPE_ID_StringType20; // 登录者的IP 地址
		case(FTD::PROPERTY_ID_IsLogin): return FTD::TYPE_ID_BoolFlag; // 是否登录
		case(FTD::PROPERTY_ID_LastLot): return FTD::TYPE_ID_Volume; // 最后一笔成交手数，双向计算
		case(FTD::PROPERTY_ID_LastPrice): return FTD::TYPE_ID_Price; // 最新价
		case(FTD::PROPERTY_ID_LifeHigh): return FTD::TYPE_ID_Price; // 历史最高成交价格
		case(FTD::PROPERTY_ID_LifeLow): return FTD::TYPE_ID_Price; // 历史最低成交价格
		case(FTD::PROPERTY_ID_LimitPrice): return FTD::TYPE_ID_Price; // 限价
		case(FTD::PROPERTY_ID_LongOffsFrozHPosition): return FTD::TYPE_ID_Volume; // 多头平仓冻结持仓手(保)
		case(FTD::PROPERTY_ID_LongOffsFrozSPosition): return FTD::TYPE_ID_Volume; // 多头平仓冻结持仓手(投)
		case(FTD::PROPERTY_ID_LongOpenFrozHPosition): return FTD::TYPE_ID_Volume; // 多头开仓冻结持仓手（保）
		case(FTD::PROPERTY_ID_LongOpenFrozSPosition): return FTD::TYPE_ID_Volume; // 多头开仓冻结持仓手（投）
		case(FTD::PROPERTY_ID_LowLimit): return FTD::TYPE_ID_Price; // 跌停板
		case(FTD::PROPERTY_ID_LowLimitRate): return FTD::TYPE_ID_Percent; // 跌停板率
		case(FTD::PROPERTY_ID_LowPrice): return FTD::TYPE_ID_Price;  // 最低价
		case(FTD::PROPERTY_ID_Margin): return FTD::TYPE_ID_Price;  // 保证金
		case(FTD::PROPERTY_ID_MarketId): return FTD::TYPE_ID_MarketId;  // 市场编码
		case(FTD::PROPERTY_ID_MarketMatchDataStatus): return FTD::TYPE_ID_BoolFlag;  // 是否主动发送成交行情
		case(FTD::PROPERTY_ID_MarketName): return FTD::TYPE_ID_Name;  // 市场名称
		case(FTD::PROPERTY_ID_MarketStatusId): return FTD::TYPE_ID_MarketStatus;  // 市场交易状态编码
		case(FTD::PROPERTY_ID_MatchCondition): return FTD::TYPE_ID_MatchCondition;  // 报单成交属性
		case(FTD::PROPERTY_ID_MatchDate): return FTD::TYPE_ID_Date;  // 成交日期
		case(FTD::PROPERTY_ID_MatchFlag): return FTD::TYPE_ID_MatchFlag;  // 成交双方的性质
		case(FTD::PROPERTY_ID_MatchSession): return FTD::TYPE_ID_MatchSession;  // 报单成交时间
		case(FTD::PROPERTY_ID_MatchTime): return FTD::TYPE_ID_Time;  // 成交时间
		case(FTD::PROPERTY_ID_MaxLot): return FTD::TYPE_ID_Volume;  // 最大可下单手数
		case(FTD::PROPERTY_ID_MaxOrderLocalId): return FTD::TYPE_ID_LocalId;  // 最大报单本地编号
		case(FTD::PROPERTY_ID_MessageReference): return FTD::TYPE_ID_MsgRef;  // 用户自定义数据。可打印ASCII 字符
		case(FTD::PROPERTY_ID_MinimalVolume): return FTD::TYPE_ID_Volume;  // 最小成交量
		case(FTD::PROPERTY_ID_MinLot): return FTD::TYPE_ID_Volume;  // 最小可下单手数
		case(FTD::PROPERTY_ID_Name): return FTD::TYPE_ID_StringType20;  // 名称
		case(FTD::PROPERTY_ID_NewPassword): return FTD::TYPE_ID_Password;  // 新口令
		case(FTD::PROPERTY_ID_NewsType): return FTD::TYPE_ID_NewsType;  // 消息类型
		case(FTD::PROPERTY_ID_NewsUrgency): return FTD::TYPE_ID_NewsUrgency;  // 紧急程度
		case(FTD::PROPERTY_ID_OffsetFlag): return FTD::TYPE_ID_OffsetFlag;  // 开平仓标记
		case(FTD::PROPERTY_ID_OldPassword): return FTD::TYPE_ID_Password;  // 旧口令
		case(FTD::PROPERTY_ID_OpenInterest): return FTD::TYPE_ID_Volume;  // 持仓量
		case(FTD::PROPERTY_ID_OpenPrice): return FTD::TYPE_ID_Price;  // 开盘价
		case(FTD::PROPERTY_ID_OptionsType): return FTD::TYPE_ID_OptionType;  // 期权类型
		case(FTD::PROPERTY_ID_OrderActionCode): return FTD::TYPE_ID_ActionFlag;  // 报单操作类型码
		case(FTD::PROPERTY_ID_OrderLocalId): return FTD::TYPE_ID_LocalId;  // 委托编号
		case(FTD::PROPERTY_ID_OrderStatus): return FTD::TYPE_ID_OrderStatus;  // 报单状态
		case(FTD::PROPERTY_ID_OrderSysId): return FTD::TYPE_ID_SysOrderId;  // 合同编号
		case(FTD::PROPERTY_ID_OrderType): return FTD::TYPE_ID_OrderType;  // 报单类型
		case(FTD::PROPERTY_ID_ParticipantId): return FTD::TYPE_ID_ParticipantId;  // 交易会员编码
		case(FTD::PROPERTY_ID_ParticipantName): return FTD::TYPE_ID_Name;  // 会员名称
		case(FTD::PROPERTY_ID_ParticipantType): return FTD::TYPE_ID_ParticipantType;  // 会员类型
		case(FTD::PROPERTY_ID_PartiTrdRight): return FTD::TYPE_ID_TradeRight;  // 会员权限
		case(FTD::PROPERTY_ID_Password): return FTD::TYPE_ID_Password;  // 口令
		case(FTD::PROPERTY_ID_PreClose): return FTD::TYPE_ID_Price;  // 前收盘价格
		case(FTD::PROPERTY_ID_PreOpenInterest): return FTD::TYPE_ID_Volume;  // 前最后持仓量，双向计算
		case(FTD::PROPERTY_ID_PreSettle): return FTD::TYPE_ID_Price;  // 前结算价格
		case(FTD::PROPERTY_ID_Price): return FTD::TYPE_ID_Price;  // 价格
		case(FTD::PROPERTY_ID_PrivateLoginTime): return FTD::TYPE_ID_DateTime;  // 最后一次私有模式登录时间
		case(FTD::PROPERTY_ID_PrivateLogoutTime): return FTD::TYPE_ID_DateTime;  // 最后一次私有模式退出时间
		case(FTD::PROPERTY_ID_PrivateStreamStatus): return FTD::TYPE_ID_BoolFlag;  // 私有模式的状态
		case(FTD::PROPERTY_ID_ProtocolVersion): return FTD::TYPE_ID_ProtocolVersion;  // 使用) : return FTD::TYPE_ID_ 版本号
		case(FTD::PROPERTY_ID_Pubstyle): return FTD::TYPE_ID_PubStyle;  // 竞价阶段合约行情发布方式
		case(FTD::PROPERTY_ID_Premium): return FTD::TYPE_ID_Value;  // 权利金收支
		case(FTD::PROPERTY_ID_QuoteSysID): return FTD::TYPE_ID_SysOrderId;  // 报价编号
		case(FTD::PROPERTY_ID_QuoteLocalID): return FTD::TYPE_ID_LocalId;  // 报价委托编号
		case(FTD::PROPERTY_ID_RequestBy): return FTD::TYPE_ID_RequestByType;  // 询价发起方
		case(FTD::PROPERTY_ID_RateUnit): return FTD::TYPE_ID_RateUnit;  // 汇率单位
		case(FTD::PROPERTY_ID_RatePrice): return FTD::TYPE_ID_Price;  // 外汇价格
		case(FTD::PROPERTY_ID_SellHedgeOffsetMargin): return FTD::TYPE_ID_Value;  // 卖保平仓返回保证金
		case(FTD::PROPERTY_ID_SellHedgeOffsetProfit): return FTD::TYPE_ID_Value;  // 卖保平仓盈亏
		case(FTD::PROPERTY_ID_SellHedgeOpenFrozMargin): return FTD::TYPE_ID_Value;  // 卖保开仓冻结保证金
		case(FTD::PROPERTY_ID_SellHedgeOpenUsedMargin): return FTD::TYPE_ID_Value;  // 卖保开仓使用保证金
		case(FTD::PROPERTY_ID_SellHedgePosition): return FTD::TYPE_ID_Volume;  // 卖开仓量(保)
		case(FTD::PROPERTY_ID_SellHedgeTurnOver): return FTD::TYPE_ID_Value;  // 卖保成交额
		case(FTD::PROPERTY_ID_SellHedgeVolume): return FTD::TYPE_ID_Volume;  // 卖成交量(保)
		case(FTD::PROPERTY_ID_SellOffsHPosition): return FTD::TYPE_ID_Volume;  // 卖平今量(保)
		case(FTD::PROPERTY_ID_SellOffsSPosition): return FTD::TYPE_ID_Volume;  // 卖平今量(投)
		case(FTD::PROPERTY_ID_SellSpecOffsetMargin): return FTD::TYPE_ID_Value;  // 卖投平仓返回保证金
		case(FTD::PROPERTY_ID_SellSpecOffsetProfit): return FTD::TYPE_ID_Value;  // 卖投平仓盈亏
		case(FTD::PROPERTY_ID_SellSpecOpenFrozMargin): return FTD::TYPE_ID_Value;  // 卖投开仓冻结保证金
		case(FTD::PROPERTY_ID_SellSpecOpenUsedMargin): return FTD::TYPE_ID_Value;  // 卖投开仓使用保证金
		case(FTD::PROPERTY_ID_SellSpecPosition): return FTD::TYPE_ID_Volume;  // 卖开仓量(投)
		case(FTD::PROPERTY_ID_SellSpecTurnOver): return FTD::TYPE_ID_Value;  // 卖投成交额
		case(FTD::PROPERTY_ID_SellSpecVolume): return FTD::TYPE_ID_Volume;  // 卖成交量(投)
		case(FTD::PROPERTY_ID_SendTime): return FTD::TYPE_ID_Time;  // 发送时间
		case(FTD::PROPERTY_ID_SequenceNo): return FTD::TYPE_ID_SequenceNo;  //序列号;  //
		case(FTD::PROPERTY_ID_SequenceSeries): return FTD::TYPE_ID_SequenceSeries;  // 序列类别号
		case(FTD::PROPERTY_ID_ServerAppName): return FTD::TYPE_ID_ServerAppName;  // 会员应用系统名称
		case(FTD::PROPERTY_ID_SettlePrice): return FTD::TYPE_ID_Price;  // 结算价
		case(FTD::PROPERTY_ID_ShortCutKey): return FTD::TYPE_ID_CharType;  // 输入快捷键
		case(FTD::PROPERTY_ID_ShortOffsFrozHPosition): return FTD::TYPE_ID_Volume;  // 空头平仓冻结持仓手(保)
		case(FTD::PROPERTY_ID_ShortOffsFrozSPosition): return FTD::TYPE_ID_Volume;  // 空头平仓冻结持仓手(投)
		case(FTD::PROPERTY_ID_ShortOpenFrozHPosition): return FTD::TYPE_ID_Volume;  // 空头开仓冻结持仓手（保）
		case(FTD::PROPERTY_ID_ShortOpenFrozSPosition): return FTD::TYPE_ID_Volume;  // 空头开仓冻结持仓手（投）
		case(FTD::PROPERTY_ID_StartDelvDate): return FTD::TYPE_ID_Date;  // 开始交割日
		case(FTD::PROPERTY_ID_StartTime): return FTD::TYPE_ID_Time;  // 开始时间
		case(FTD::PROPERTY_ID_StartTrdDate): return FTD::TYPE_ID_Date;  // 开始交易日
		case(FTD::PROPERTY_ID_StopPrice): return FTD::TYPE_ID_Price;  // 止损价格
		case(FTD::PROPERTY_ID_SuspendTime): return FTD::TYPE_ID_Time;  // 挂起时间
		case(FTD::PROPERTY_ID_StrikePrice): return FTD::TYPE_ID_Price;  // 执行价格
		case(FTD::PROPERTY_ID_ThroughTime): return FTD::TYPE_ID_Time;  // 直到时间
		case(FTD::PROPERTY_ID_Tick): return FTD::TYPE_ID_Price;  // 最小价位
		case(FTD::PROPERTY_ID_TimeOut): return FTD::TYPE_ID_TimeOut;  // 发送监测信号时间间隔
		case(FTD::PROPERTY_ID_TimeSpan): return FTD::TYPE_ID_NumberType3;  // 时区，正数表示东区，负数表示西区
		case(FTD::PROPERTY_ID_TimeStamp): return FTD::TYPE_ID_TimeStamp;  // 时间戳
		case(FTD::PROPERTY_ID_TotalMarketMatchData): return FTD::TYPE_ID_IntType;  // 发送成交行情记录总数，网络序
		case(FTD::PROPERTY_ID_TotalVolume): return FTD::TYPE_ID_Volume;  // 总成交量
		case(FTD::PROPERTY_ID_TradeDate): return FTD::TYPE_ID_Date;  // 交易日期
		case(FTD::PROPERTY_ID_TradeId): return FTD::TYPE_ID_TradeId;  // 成交编号
		case(FTD::PROPERTY_ID_TradeLot): return FTD::TYPE_ID_IntType;  // 总成交手数，双向计算
		case(FTD::PROPERTY_ID_TradePrice): return FTD::TYPE_ID_Price;  // 最新成交价格
		case(FTD::PROPERTY_ID_TradeRights): return FTD::TYPE_ID_TradeRight;  // 交易权限
		case(FTD::PROPERTY_ID_TradeTurnover): return FTD::TYPE_ID_Volume;  // 总成交金额，双向计算
		case(FTD::PROPERTY_ID_TradeType): return FTD::TYPE_ID_TradeType;  // 市场交易类型
		case(FTD::PROPERTY_ID_TradeVolume): return FTD::TYPE_ID_IntType;  // 今成交量
		case(FTD::PROPERTY_ID_Unit): return FTD::TYPE_ID_IntType;  // 每手乘数
		case(FTD::PROPERTY_ID_UpdateTime): return FTD::TYPE_ID_Time;  // 最后修改时间
		case(FTD::PROPERTY_ID_URLLink): return FTD::TYPE_ID_StringType200;  // 此消息的WEB 联结
		case(FTD::PROPERTY_ID_UserId): return FTD::TYPE_ID_UserId;  // 交易员编码
		case(FTD::PROPERTY_ID_UserStatus): return FTD::TYPE_ID_UserStatus;  // 交易员状态
		case(FTD::PROPERTY_ID_UserType): return FTD::TYPE_ID_UserType;  // 交易员类别
		case(FTD::PROPERTY_ID_UnderlyingInstrID): return FTD::TYPE_ID_StringType30;  // 基础商品代码
		case(FTD::PROPERTY_ID_UnderlyingMultiple): return FTD::TYPE_ID_Volume; // 基础商品乘数
		case(FTD::PROPERTY_ID_ValidThrough): return FTD::TYPE_ID_Date;  // 有效时间约束
		case(FTD::PROPERTY_ID_Volume): return FTD::TYPE_ID_Volume;  // 数量
		case(FTD::PROPERTY_ID_VolumeTotal): return FTD::TYPE_ID_IntType;  // 剩余总申报数量（以手为单位）
		case(FTD::PROPERTY_ID_VolumeTotalOrginal): return FTD::TYPE_ID_IntType;  // 原始总申报数量（以手为单位）
		case(FTD::PROPERTY_ID_VolumeType): return FTD::TYPE_ID_VolumeType;  // 数量类型
		case(FTD::PROPERTY_ID_YdBuyHedgePosition): return FTD::TYPE_ID_Volume;  // 前买持仓量(保)
		case(FTD::PROPERTY_ID_YdBuyOffsHPosition): return FTD::TYPE_ID_Volume;  // 买平昨量(保)
		case(FTD::PROPERTY_ID_YdBuyOffsSPosition): return FTD::TYPE_ID_Volume;  // 买平昨量(投)
		case(FTD::PROPERTY_ID_YdBuySpecPosition): return FTD::TYPE_ID_Volume;  // 前买持仓量(投)
		default:
			return -1;
		}
		return -1;

		
	}
}
#endif