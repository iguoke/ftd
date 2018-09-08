#ifndef FTD20_PROPERTY_H
#define FTD20_PROPERTY_H

#include "FTDDataTypes.h"
#include "FTDProperty.h"

namespace FTD20 {

static int getPropertyTypeID(int property_type_id)
{
	switch (property_type_id)
	{
	case(PROPERTY_ID_Abstract): return TYPE_ID_StringType80; //摘要 / 说明
	case(PROPERTY_ID_ActionLocalId): return TYPE_ID_LocalId; // 报单操作本地编号
	case(PROPERTY_ID_ActionDate): return TYPE_ID_Date; //实际交易日期
	case(PROPERTY_ID_ActiveTime): return TYPE_ID_Time;// 激活时间
	case(PROPERTY_ID_ActiveUserId): return TYPE_ID_UserId; // 操作交易员编码
	case(PROPERTY_ID_AddValue): return TYPE_ID_Value; // 本交易日新增资金
	case(PROPERTY_ID_AskLot): return TYPE_ID_Volume; // 卖出数量
	case(PROPERTY_ID_AskPrice): return TYPE_ID_Price; // 卖出价
	case(PROPERTY_ID_AutoSuspend): return TYPE_ID_BoolFlag; // 自动挂起标志
	case(PROPERTY_ID_AveragePrice): return TYPE_ID_Price; // 均价
	case(PROPERTY_ID_BalanceValue): return TYPE_ID_Value; // 可用保证金余额
	case(PROPERTY_ID_BidLot): return TYPE_ID_Volume; // 买入数量
	case(PROPERTY_ID_BidPrice): return TYPE_ID_Price; // 买入价格
	case(PROPERTY_ID_BroadcastLoginTime): return TYPE_ID_DateTime; // 最后一次广播模式登录时间
	case(PROPERTY_ID_BroadcastLogOutTime): return TYPE_ID_DateTime; // 最后一次广播模式退出时间
	case(PROPERTY_ID_BroadcastSequenceNo): return TYPE_ID_IntType; // 广播模式中的数据序列号
	case(PROPERTY_ID_BroadcastSequenceSeries): return TYPE_ID_WordType; // 广播模式序列类别号
	case(PROPERTY_ID_BroadcastStreamStatus): return TYPE_ID_BoolFlag; // 广播模式在线状态
	case(PROPERTY_ID_BuyHedgeOffsetMargin): return TYPE_ID_Value; // 买保平仓返回保证金
	case(PROPERTY_ID_BuyHedgeOffsetProfit): return TYPE_ID_Value; // 买保平仓盈亏
	case(PROPERTY_ID_BuyHedgeOpenFrozMargin): return TYPE_ID_Value; // 买保开仓冻结保证金
	case(PROPERTY_ID_BuyHedgeOpenUsedMargin): return TYPE_ID_Value; // 买保开仓使用保证金
	case(PROPERTY_ID_BuyHedgePosition): return TYPE_ID_Volume; // 买开仓量(保)
	case(PROPERTY_ID_BuyHedgeTurnOver): return TYPE_ID_Value; // 买保成交额
	case(PROPERTY_ID_BuyHedgeVolume): return TYPE_ID_Volume; // 买成交量(保)
	case(PROPERTY_ID_BuyOffsHPosition): return TYPE_ID_Volume; // 买平今量(保)
	case(PROPERTY_ID_BuyOffsSPosition): return TYPE_ID_Volume; // 买平今量(投)
	case(PROPERTY_ID_BuySpecOffsetMargin): return TYPE_ID_Value; // 买投平仓返回保证金
	case(PROPERTY_ID_BuySpecOffsetProfit): return TYPE_ID_Value; // 买投平仓盈亏
	case(PROPERTY_ID_BuySpecOpenFrozMargin): return TYPE_ID_Value; // 买投开仓冻结保证金
	case(PROPERTY_ID_BuySpecOpenUsedMargin): return TYPE_ID_Value; // 买投开仓使用保证金
	case(PROPERTY_ID_BuySpecPosition): return TYPE_ID_Volume; // 买开仓量(投)
	case(PROPERTY_ID_BuySpecTurnOver): return TYPE_ID_Value; // 买投成交额
	case(PROPERTY_ID_BuySpecVolume): return TYPE_ID_Volume; // 买成交量(投)
	case(PROPERTY_ID_CancelDate): return TYPE_ID_Date; // 取消日期
	case(PROPERTY_ID_CancelFlag): return TYPE_ID_BoolFlag; // 成交是否被取消。
	case(PROPERTY_ID_CancelTime): return TYPE_ID_Time; // 取消时间
	case(PROPERTY_ID_ClearDate): return TYPE_ID_Date; // 清算日期
	case(PROPERTY_ID_ClearPrice): return TYPE_ID_Price; // 清算价
	case(PROPERTY_ID_ClientId): return TYPE_ID_ClientId; // 客户编码
	case(PROPERTY_ID_ClientName): return TYPE_ID_Name; // 客户名称
	case(PROPERTY_ID_ClientType): return TYPE_ID_ClientType; // 客户类别
	case(PROPERTY_ID_ClosePrice): return TYPE_ID_Price; // 收盘价
	case(PROPERTY_ID_ComeFrom): return TYPE_ID_StringType20; // 消息来源
	case(PROPERTY_ID_ConnectionReference): return TYPE_ID_ConnectionReference; // 链路标示
	case(PROPERTY_ID_Content): return TYPE_ID_StringType500; // 消息正文
	case(PROPERTY_ID_Currency): return TYPE_ID_StringType3; // 交易用的货币，按照ISO 4217 标准定义
	case(PROPERTY_ID_DataFlowFlag): return TYPE_ID_DataFlowFlag; // 数据流名称
	case(PROPERTY_ID_DelValue): return TYPE_ID_Value; // 本交易日提出资金
	case(PROPERTY_ID_DialogLoginTime): return TYPE_ID_DateTime;// 最后一次对话模式登录时间
	case(PROPERTY_ID_DialogLogoutTime): return TYPE_ID_DateTime;// 最后一次对话模式退出时间
	case(PROPERTY_ID_DialogStreamStatus): return TYPE_ID_BoolFlag; // 对话模式在线状态
	case(PROPERTY_ID_Direction): return TYPE_ID_Direction;// 买卖方向
	case(PROPERTY_ID_EndDelvDate): return TYPE_ID_Date;// 最后交割日
	case(PROPERTY_ID_EndTrdDate): return TYPE_ID_Date;// 最后交易日
	case(PROPERTY_ID_ErrorCode): return TYPE_ID_ErrorCode; // 错误代码
	case(PROPERTY_ID_ErrorText): return TYPE_ID_StringType100; // 错误正文
	case(PROPERTY_ID_ExchangeDateTime): return TYPE_ID_DateTime; // 交易所系统时间
	case(PROPERTY_ID_ExecOrderLocalID): return TYPE_ID_LocalId; // 执行宣告本地编号
	case(PROPERTY_ID_ExecOrderSysID): return TYPE_ID_SysOrderId; // 执行编号
	case(PROPERTY_ID_Forcedistime): return TYPE_ID_IntType; // 强平的撮合间隔
	case(PROPERTY_ID_ForceExitCode): return TYPE_ID_ForceExitCode; // 强制退出号
	case(PROPERTY_ID_ForceExitMsg): return TYPE_ID_StringType100; // 强制退出原因
	case(PROPERTY_ID_ForceGroupId): return TYPE_ID_LocalId; // 强平组号
	case(PROPERTY_ID_FrontId): return TYPE_ID_StringType20; // 前置机标识
	case(PROPERTY_ID_FuseFlag): return TYPE_ID_BoolFlag; // 熔断标记
	case(PROPERTY_ID_Fuselimit): return TYPE_ID_Price; // 熔断限额
	case(PROPERTY_ID_Fusepersisttime): return TYPE_ID_IntType;// 熔断最大持续时间
	case(PROPERTY_ID_Fusepoint): return TYPE_ID_StringType6; // 在该时间点后不可熔断，为HHmmss 格式
	case(PROPERTY_ID_FuseRights): return TYPE_ID_BoolFlag; // 可否熔断
	case(PROPERTY_ID_HedgeFlag): return TYPE_ID_HedgeFlag; // 投保标记
	case(PROPERTY_ID_HighLimit): return TYPE_ID_Price; // 涨停板
	case(PROPERTY_ID_HighLimitRate): return TYPE_ID_Percent; // 涨停板率
	case(PROPERTY_ID_HighPrice): return TYPE_ID_Price; // 最高价
	case(PROPERTY_ID_InitMargin): return TYPE_ID_Value; // 初始保证金
	case(PROPERTY_ID_InsertTime): return TYPE_ID_DateTime;// 录入时间
	case(PROPERTY_ID_InstrStopCode): return TYPE_ID_StopCode;// 停止交易原因
	case(PROPERTY_ID_InstrumentId): return TYPE_ID_InstrumentId; //合约编码
	case(PROPERTY_ID_InstrumentName): return TYPE_ID_Name; // 合约名称
	case(PROPERTY_ID_InstrumentStatus): return TYPE_ID_InstrumentStatus; // 合约交易状态
	case(PROPERTY_ID_InstrumentType): return TYPE_ID_InstrumentType;// 合约类型
	case(PROPERTY_ID_InstrumentVersion): return TYPE_ID_InstrumentVersion; // 合约版本号
	case(PROPERTY_ID_IpAddr): return TYPE_ID_StringType20; // 登录者的IP 地址
	case(PROPERTY_ID_IsLogin): return TYPE_ID_BoolFlag; // 是否登录
	case(PROPERTY_ID_LastLot): return TYPE_ID_Volume; // 最后一笔成交手数，双向计算
	case(PROPERTY_ID_LastPrice): return TYPE_ID_Price; // 最新价
	case(PROPERTY_ID_LifeHigh): return TYPE_ID_Price; // 历史最高成交价格
	case(PROPERTY_ID_LifeLow): return TYPE_ID_Price; // 历史最低成交价格
	case(PROPERTY_ID_LimitPrice): return TYPE_ID_Price; // 限价
	case(PROPERTY_ID_LongOffsFrozHPosition): return TYPE_ID_Volume; // 多头平仓冻结持仓手(保)
	case(PROPERTY_ID_LongOffsFrozSPosition): return TYPE_ID_Volume; // 多头平仓冻结持仓手(投)
	case(PROPERTY_ID_LongOpenFrozHPosition): return TYPE_ID_Volume; // 多头开仓冻结持仓手（保）
	case(PROPERTY_ID_LongOpenFrozSPosition): return TYPE_ID_Volume; // 多头开仓冻结持仓手（投）
	case(PROPERTY_ID_LowLimit): return TYPE_ID_Price; // 跌停板
	case(PROPERTY_ID_LowLimitRate): return TYPE_ID_Percent; // 跌停板率
	case(PROPERTY_ID_LowPrice): return TYPE_ID_Price 最低价
	case(PROPERTY_ID_Margin): return TYPE_ID_Price 保证金
	case(PROPERTY_ID_MarketId): return TYPE_ID_MarketId 市场编码
	case(PROPERTY_ID_MarketMatchDataStatus): return TYPE_ID_BoolFlag 是否主动发送成交行情
	case(PROPERTY_ID_MarketName): return TYPE_ID_Name 市场名称
	case(PROPERTY_ID_MarketStatusId): return TYPE_ID_MarketStatus 市场交易状态编码
	case(PROPERTY_ID_MatchCondition): return TYPE_ID_MatchCondition 报单成交属性
	case(PROPERTY_ID_MatchDate): return TYPE_ID_Date 成交日期
	case(PROPERTY_ID_MatchFlag): return TYPE_ID_MatchFlag 成交双方的性质
	case(PROPERTY_ID_MatchSession): return TYPE_ID_MatchSession 报单成交时间
	case(PROPERTY_ID_MatchTime): return TYPE_ID_Time 成交时间
	case(PROPERTY_ID_MaxLot): return TYPE_ID_Volume 最大可下单手数
	case(PROPERTY_ID_MaxOrderLocalId): return TYPE_ID_LocalId 最大报单本地编号
	case(PROPERTY_ID_MessageReference): return TYPE_ID_MsgRef 用户自定义数据。可打印ASCII 字符
	case(PROPERTY_ID_MinimalVolume): return TYPE_ID_Volume 最小成交量
	case(PROPERTY_ID_MinLot): return TYPE_ID_Volume 最小可下单手数
	case(PROPERTY_ID_Name): return TYPE_ID_StringType<20> 名称
	case(PROPERTY_ID_NewPassword): return TYPE_ID_Password 新口令
	case(PROPERTY_ID_NewsType): return TYPE_ID_NewsType 消息类型
	case(PROPERTY_ID_NewsUrgency): return TYPE_ID_NewsUrgency 紧急程度
	case(PROPERTY_ID_OffsetFlag): return TYPE_ID_OffsetFlag 开平仓标记
	case(PROPERTY_ID_OldPassword): return TYPE_ID_Password 旧口令
	case(PROPERTY_ID_OpenInterest): return TYPE_ID_Volume 持仓量
	case(PROPERTY_ID_OpenPrice): return TYPE_ID_Price 开盘价
	case(PROPERTY_ID_OptionsType): return TYPE_ID_OptionType 期权类型
	case(PROPERTY_ID_OrderActionCode): return TYPE_ID_ActionFlag 报单操作类型码
	case(PROPERTY_ID_OrderLocalId): return TYPE_ID_LocalId 委托编号
	case(PROPERTY_ID_OrderStatus): return TYPE_ID_OrderStatus 报单状态
	case(PROPERTY_ID_OrderSysId): return TYPE_ID_SysOrderId 合同编号
	case(PROPERTY_ID_OrderType): return TYPE_ID_OrderType 报单类型
	case(PROPERTY_ID_ParticipantId): return TYPE_ID_ParticipantId 交易会员编码
	case(PROPERTY_ID_ParticipantName): return TYPE_ID_Name 会员名称
	case(PROPERTY_ID_ParticipantType): return TYPE_ID_ParticipantType 会员类型
	case(PROPERTY_ID_PartiTrdRight): return TYPE_ID_TradeRight 会员权限
	case(PROPERTY_ID_Password): return TYPE_ID_Password 口令
	case(PROPERTY_ID_PreClose): return TYPE_ID_Price 前收盘价格
	case(PROPERTY_ID_PreOpenInterest): return TYPE_ID_Volume 前最后持仓量，双向计算
	case(PROPERTY_ID_PreSettle): return TYPE_ID_Price 前结算价格
	case(PROPERTY_ID_Price): return TYPE_ID_Price 价格
	case(PROPERTY_ID_PrivateLoginTime): return TYPE_ID_DateTime 最后一次私有模式登录时间
	case(PROPERTY_ID_PrivateLogoutTime): return TYPE_ID_DateTime 最后一次私有模式退出时间
	case(PROPERTY_ID_PrivateStreamStatus): return TYPE_ID_BoolFlag 私有模式的状态
	case(PROPERTY_ID_ProtocolVersion): return TYPE_ID_ProtocolVersion 使用) : return TYPE_ID_ 版本号
	case(PROPERTY_ID_Pubstyle): return TYPE_ID_PubStyle 竞价阶段合约行情发布方式
	case(PROPERTY_ID_Premium): return TYPE_ID_Value 权利金收支
	case(PROPERTY_ID_QuoteSysID): return TYPE_ID_SysOrderId 报价编号
	case(PROPERTY_ID_QuoteLocalID): return TYPE_ID_LocalId 报价委托编号
	case(PROPERTY_ID_RequestBy): return TYPE_ID_RequestByType 询价发起方
	case(PROPERTY_ID_RateUnit): return TYPE_ID_RateUnit 汇率单位
	case(PROPERTY_ID_RatePrice): return TYPE_ID_Price 外汇价格
	case(PROPERTY_ID_SellHedgeOffsetMargin): return TYPE_ID_Value 卖保平仓返回保证金
	case(PROPERTY_ID_SellHedgeOffsetProfit): return TYPE_ID_Value 卖保平仓盈亏
	case(PROPERTY_ID_SellHedgeOpenFrozMargin): return TYPE_ID_Value 卖保开仓冻结保证金
	case(PROPERTY_ID_SellHedgeOpenUsedMargin): return TYPE_ID_Value 卖保开仓使用保证金
	case(PROPERTY_ID_SellHedgePosition): return TYPE_ID_Volume 卖开仓量(保)
	case(PROPERTY_ID_SellHedgeTurnOver): return TYPE_ID_Value 卖保成交额
	case(PROPERTY_ID_SellHedgeVolume): return TYPE_ID_Volume 卖成交量(保)
	case(PROPERTY_ID_SellOffsHPosition): return TYPE_ID_Volume 卖平今量(保)
	case(PROPERTY_ID_SellOffsSPosition): return TYPE_ID_Volume 卖平今量(投)
	case(PROPERTY_ID_SellSpecOffsetMargin): return TYPE_ID_Value 卖投平仓返回保证金
	case(PROPERTY_ID_SellSpecOffsetProfit): return TYPE_ID_Value 卖投平仓盈亏
	case(PROPERTY_ID_SellSpecOpenFrozMargin): return TYPE_ID_Value 卖投开仓冻结保证金
	case(PROPERTY_ID_SellSpecOpenUsedMargin): return TYPE_ID_Value 卖投开仓使用保证金
	case(PROPERTY_ID_SellSpecPosition): return TYPE_ID_Volume 卖开仓量(投)
	case(PROPERTY_ID_SellSpecTurnOver): return TYPE_ID_Value 卖投成交额
	case(PROPERTY_ID_SellSpecVolume): return TYPE_ID_Volume 卖成交量(投)
	case(PROPERTY_ID_SendTime): return TYPE_ID_Time 发送时间
	case(PROPERTY_ID_SequenceNo): return TYPE_ID_SequenceNo 序列号
	case(PROPERTY_ID_SequenceSeries): return TYPE_ID_SequenceSeries 序列类别号
	case(PROPERTY_ID_ServerAppName): return TYPE_ID_ServerAppName 会员应用系统名称
	case(PROPERTY_ID_SettlePrice): return TYPE_ID_Price 结算价
	case(PROPERTY_ID_ShortCutKey): return TYPE_ID_CharType 输入快捷键
	case(PROPERTY_ID_ShortOffsFrozHPosition): return TYPE_ID_Volume 空头平仓冻结持仓手(保)
	case(PROPERTY_ID_ShortOffsFrozSPosition): return TYPE_ID_Volume 空头平仓冻结持仓手(投)
	case(PROPERTY_ID_ShortOpenFrozHPosition): return TYPE_ID_Volume 空头开仓冻结持仓手（保）
	case(PROPERTY_ID_ShortOpenFrozSPosition): return TYPE_ID_Volume 空头开仓冻结持仓手（投）
	case(PROPERTY_ID_StartDelvDate): return TYPE_ID_Date 开始交割日
	case(PROPERTY_ID_StartTime): return TYPE_ID_Time 开始时间
	case(PROPERTY_ID_StartTrdDate): return TYPE_ID_Date 开始交易日
	case(PROPERTY_ID_StopPrice): return TYPE_ID_Price 止损价格
	case(PROPERTY_ID_SuspendTime): return TYPE_ID_Time 挂起时间
	case(PROPERTY_ID_StrikePrice): return TYPE_ID_Price 执行价格
	case(PROPERTY_ID_ThroughTime): return TYPE_ID_Time 直到时间
	case(PROPERTY_ID_Tick): return TYPE_ID_Price 最小价位
	case(PROPERTY_ID_TimeOut): return TYPE_ID_TimeOut 发送监测信号时间间隔
	case(PROPERTY_ID_TimeSpan): return TYPE_ID_NumberType<3> 时区，正数表示东区，负数表示西区
	case(PROPERTY_ID_TimeStamp): return TYPE_ID_TimeStamp 时间戳
	case(PROPERTY_ID_TotalMarketMatchData): return TYPE_ID_IntType 发送成交行情记录总数，网络序
	case(PROPERTY_ID_TotalVolume): return TYPE_ID_Volume 总成交量
	case(PROPERTY_ID_TradeDate): return TYPE_ID_Date 交易日期
	case(PROPERTY_ID_TradeId): return TYPE_ID_TradeId 成交编号
	case(PROPERTY_ID_TradeLot): return TYPE_ID_IntType 总成交手数，双向计算
	case(PROPERTY_ID_TradePrice): return TYPE_ID_Price 最新成交价格
	case(PROPERTY_ID_TradeRights): return TYPE_ID_TradeRight 交易权限
	case(PROPERTY_ID_TradeTurnover): return TYPE_ID_Volume 总成交金额，双向计算
	case(PROPERTY_ID_TradeType): return TYPE_ID_TradeType 市场交易类型
	case(PROPERTY_ID_TradeVolume): return TYPE_ID_IntType 今成交量
	case(PROPERTY_ID_Unit): return TYPE_ID_IntType 每手乘数
	case(PROPERTY_ID_UpdateTime): return TYPE_ID_Time 最后修改时间
	case(PROPERTY_ID_URLLink): return TYPE_ID_StringType<200> 此消息的WEB 联结
	case(PROPERTY_ID_UserId): return TYPE_ID_UserId 交易员编码
	case(PROPERTY_ID_UserStatus): return TYPE_ID_UserStatus 交易员状态
	case(PROPERTY_ID_UserType): return TYPE_ID_UserType 交易员类别
	case(PROPERTY_ID_UnderlyingInstrID): return TYPE_ID_StringType<30> 基础商品代码
	case(PROPERTY_ID_UnderlyingMultiple): return TYPE_ID_Volume 基础商品乘数
	case(PROPERTY_ID_ValidThrough): return TYPE_ID_Date 有效时间约束
	case(PROPERTY_ID_Volume): return TYPE_ID_Volume 数量
	case(PROPERTY_ID_VolumeTotal): return TYPE_ID_IntType 剩余总申报数量（以手为单位）
	case(PROPERTY_ID_VolumeTotalOrginal): return TYPE_ID_IntType 原始总申报数量（以手为单位）
	case(PROPERTY_ID_VolumeType): return TYPE_ID_VolumeType 数量类型
	case(PROPERTY_ID_YdBuyHedgePosition): return TYPE_ID_Volume 前买持仓量(保)
	case(PROPERTY_ID_YdBuyOffsHPosition): return TYPE_ID_Volume 买平昨量(保)
	case(PROPERTY_ID_YdBuyOffsSPosition): return TYPE_ID_Volume 买平昨量(投)
		case(PROPERTY_ID_YdBuySpecPosition Volume 前买持仓量(投)
	}
	return 0;
}

}
#endif