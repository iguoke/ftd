/*
本文件自动生成，请勿手工修改
Version=FTD20
*/

#ifndef FTD_ID_TYPE_H
#define FTD_ID_TYPE_H

#define FTD_VERSION 2

namespace FTD {

///TID
#define TID_Error                           0x0001
#define TID_QryMarketMatchData              0x0002
#define TID_OrderInsert                     0x0003
#define TID_OrderAction                     0x0004
#define TID_QryInstrument                   0x0005
#define TID_QryOrder                        0x0006
#define TID_QryTrade                        0x0007
#define TID_QryDeposit                      0x0008
#define TID_QryPPosition                    0x0009
#define TID_QryPosition                     0x000A
#define TID_QryMarket                       0x000B
#define TID_QryClient                       0x000C
#define TID_QryMarketStatus                 0x000D
#define TID_QryInstrumentStatus             0x000E
#define TID_QryMarketOrderData              0x0012
#define TID_QryParticipant                  0x0013
#define TID_QryUser                         0x0014
#define TID_QryUserLogin                    0x0015
#define TID_UserLogin                       0x0016
#define TID_UserLogout                      0x0017
#define TID_UserPasswordUpdate              0x0018
#define TID_TradeInsertSingle               0x1001
#define TID_ParticipantBulletin             0x1002
#define TID_OrderConfirmation               0x1003
#define TID_ForceExit                       0x1005
#define TID_MarketOrderIncData              0x2001
#define TID_MarketMatchIncData              0x2002
#define TID_MarketBulletin                  0x2003
#define TID_MarketMatchData                 0x2004
#define TID_MarketStatusChangeNotify        0x2005
#define TID_InstrumentStatusChangeNotify    0x2006
#define TID_InstrumentChangeNotify          0x2007

///FID
#define FID_BulletinField                   0x0001
#define FID_ClientField                     0x0002
#define FID_DepositField                    0x0003
#define FID_DissenminationstartField        0x0004
#define FID_ErrorField                      0x0005
#define FID_ErrorTargetOrderField           0x002D
#define FID_ErrorTargetSequenceField        0x002E
#define FID_ForceExitField                  0x0006
#define FID_InstrumentField                 0x0007
#define FID_InstrumentStatusField           0x0008
#define FID_MarketStatusField               0x0009
#define FID_MarketMatchIncDataField         0x000A
#define FID_OrderActionField                0x000B
#define FID_OrderInsertField                0x000C
#define FID_MarketOrderDataField            0x000D
#define FID_OrderStatusField                0x000E
#define FID_ParticipantField                0x000F
#define FID_PositionField                   0x0010
#define FID_PPositionField                  0x0011
#define FID_MarketMatchDataChgField         0x0012
#define FID_MarketMatchDataField            0x0013
#define FID_ReqQryClientField               0x0014
#define FID_ReqQryDepositField              0x0015
#define FID_ReqQryInstrumentField           0x0016
#define FID_ReqQryInstrumentStatusField     0x0017
#define FID_ReqQryMarketField               0x0018
#define FID_ReqQryMarketStatusField         0x0019
#define FID_ReqQryOrderField                0x001A
#define FID_ReqQryMarketOrderDataField      0x001B
#define FID_ReqQryParticipantField          0x001C
#define FID_ReqQryPositionField             0x001D
#define FID_ReqQryPPositionField            0x001E
#define FID_ReqQryMarketMatchDataField      0x001F
#define FID_ReqQryTradeField                0x0020
#define FID_ReqQryUserField                 0x0021
#define FID_ReqQryUserLoginField            0x0022
#define FID_ReqUserLoginField               0x0023
#define FID_ReqUserLogoutField              0x0024
#define FID_ReqUserPasswordUpdateField      0x0025
#define FID_MarketField                     0x0026
#define FID_RspUserLoginField               0x0027
#define FID_RspUserLogoutField              0x0028
#define FID_RspUserPasswordUpdateField      0x0029
#define FID_TradeInsertSingleField          0x002A
#define FID_UserField                       0x002B
#define FID_UserLoginField                  0x002C

}
#endif