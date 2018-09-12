/*
本文件自动生成，请勿手工修改
Version=FTD20
*/

#ifndef FTD20_FIELDS_H
#define FTD20_FIELDS_H

#include "../FTDID.h"
#include "../FtdDeclare.h"

#include "BulletinField.h"
#include "ClientField.h"
#include "DepositField.h"
#include "DissenminationstartField.h"
#include "ErrorField.h"
#include "ErrorTargetOrderField.h"
#include "ErrorTargetSequenceField.h"
#include "ForceExitField.h"
#include "InstrumentField.h"
#include "InstrumentStatusField.h"
#include "MarketStatusField.h"
#include "MarketMatchIncDataField.h"
#include "OrderActionField.h"
#include "OrderInsertField.h"
#include "MarketOrderDataField.h"
#include "OrderStatusField.h"
#include "ParticipantField.h"
#include "PositionField.h"
#include "PPositionField.h"
#include "MarketMatchDataChgField.h"
#include "MarketMatchDataField.h"
#include "ReqQryClientField.h"
#include "ReqQryDepositField.h"
#include "ReqQryInstrumentField.h"
#include "ReqQryInstrumentStatusField.h"
#include "ReqQryMarketField.h"
#include "ReqQryMarketStatusField.h"
#include "ReqQryOrderField.h"
#include "ReqQryMarketOrderDataField.h"
#include "ReqQryParticipantField.h"
#include "ReqQryPositionField.h"
#include "ReqQryPPositionField.h"
#include "ReqQryMarketMatchDataField.h"
#include "ReqQryTradeField.h"
#include "ReqQryUserField.h"
#include "ReqQryUserLoginField.h"
#include "ReqUserLoginField.h"
#include "ReqUserLogoutField.h"
#include "ReqUserPasswordUpdateField.h"
#include "MarketField.h"
#include "RspUserLoginField.h"
#include "RspUserLogoutField.h"
#include "RspUserPasswordUpdateField.h"
#include "TradeInsertSingleField.h"
#include "UserField.h"
#include "UserLoginField.h"

namespace FTD20
{

    DECLARE_PTR(BulletinField)
    DECLARE_PTR(ClientField)
    DECLARE_PTR(DepositField)
    DECLARE_PTR(DissenminationstartField)
    DECLARE_PTR(ErrorField)
    DECLARE_PTR(ErrorTargetOrderField)
    DECLARE_PTR(ErrorTargetSequenceField)
    DECLARE_PTR(ForceExitField)
    DECLARE_PTR(InstrumentField)
    DECLARE_PTR(InstrumentStatusField)
    DECLARE_PTR(MarketStatusField)
    DECLARE_PTR(MarketMatchIncDataField)
    DECLARE_PTR(OrderActionField)
    DECLARE_PTR(OrderInsertField)
    DECLARE_PTR(MarketOrderDataField)
    DECLARE_PTR(OrderStatusField)
    DECLARE_PTR(ParticipantField)
    DECLARE_PTR(PositionField)
    DECLARE_PTR(PPositionField)
    DECLARE_PTR(MarketMatchDataChgField)
    DECLARE_PTR(MarketMatchDataField)
    DECLARE_PTR(ReqQryClientField)
    DECLARE_PTR(ReqQryDepositField)
    DECLARE_PTR(ReqQryInstrumentField)
    DECLARE_PTR(ReqQryInstrumentStatusField)
    DECLARE_PTR(ReqQryMarketField)
    DECLARE_PTR(ReqQryMarketStatusField)
    DECLARE_PTR(ReqQryOrderField)
    DECLARE_PTR(ReqQryMarketOrderDataField)
    DECLARE_PTR(ReqQryParticipantField)
    DECLARE_PTR(ReqQryPositionField)
    DECLARE_PTR(ReqQryPPositionField)
    DECLARE_PTR(ReqQryMarketMatchDataField)
    DECLARE_PTR(ReqQryTradeField)
    DECLARE_PTR(ReqQryUserField)
    DECLARE_PTR(ReqQryUserLoginField)
    DECLARE_PTR(ReqUserLoginField)
    DECLARE_PTR(ReqUserLogoutField)
    DECLARE_PTR(ReqUserPasswordUpdateField)
    DECLARE_PTR(MarketField)
    DECLARE_PTR(RspUserLoginField)
    DECLARE_PTR(RspUserLogoutField)
    DECLARE_PTR(RspUserPasswordUpdateField)
    DECLARE_PTR(TradeInsertSingleField)
    DECLARE_PTR(UserField)
    DECLARE_PTR(UserLoginField)

union Field
{
    BulletinField                  bulletinField;
    ClientField                    clientField;
    DepositField                   depositField;
    DissenminationstartField       dissenminationstartField;
    ErrorField                     errorField;
    ErrorTargetOrderField          errorTargetOrderField;
    ErrorTargetSequenceField       errorTargetSequenceField;
    ForceExitField                 forceExitField;
    InstrumentField                instrumentField;
    InstrumentStatusField          instrumentStatusField;
    MarketStatusField              marketStatusField;
    MarketMatchIncDataField        marketMatchIncDataField;
    OrderActionField               orderActionField;
    OrderInsertField               orderInsertField;
    MarketOrderDataField           marketOrderDataField;
    OrderStatusField               orderStatusField;
    ParticipantField               participantField;
    PositionField                  positionField;
    PPositionField                 pPositionField;
    MarketMatchDataChgField        marketMatchDataChgField;
    MarketMatchDataField           marketMatchDataField;
    ReqQryClientField              reqQryClientField;
    ReqQryDepositField             reqQryDepositField;
    ReqQryInstrumentField          reqQryInstrumentField;
    ReqQryInstrumentStatusField    reqQryInstrumentStatusField;
    ReqQryMarketField              reqQryMarketField;
    ReqQryMarketStatusField        reqQryMarketStatusField;
    ReqQryOrderField               reqQryOrderField;
    ReqQryMarketOrderDataField     reqQryMarketOrderDataField;
    ReqQryParticipantField         reqQryParticipantField;
    ReqQryPositionField            reqQryPositionField;
    ReqQryPPositionField           reqQryPPositionField;
    ReqQryMarketMatchDataField     reqQryMarketMatchDataField;
    ReqQryTradeField               reqQryTradeField;
    ReqQryUserField                reqQryUserField;
    ReqQryUserLoginField           reqQryUserLoginField;
    ReqUserLoginField              reqUserLoginField;
    ReqUserLogoutField             reqUserLogoutField;
    ReqUserPasswordUpdateField     reqUserPasswordUpdateField;
    MarketField                    marketField;
    RspUserLoginField              rspUserLoginField;
    RspUserLogoutField             rspUserLogoutField;
    RspUserPasswordUpdateField     rspUserPasswordUpdateField;
    TradeInsertSingleField         tradeInsertSingleField;
    UserField                      userField;
    UserLoginField                 userLoginField;
};

bool readField(const char* buffer, int fid, union Field& field, int& readLen)
{
	bool read_result = true;
	switch(fid)
	{
    case(FID_BulletinField):
    {
	    BulletinFieldHelper::readBuffer(buffer, field.bulletinField, readLen);
	    break;
    }
    case(FID_ClientField):
    {
	    ClientFieldHelper::readBuffer(buffer, field.clientField, readLen);
	    break;
    }
    case(FID_DepositField):
    {
	    DepositFieldHelper::readBuffer(buffer, field.depositField, readLen);
	    break;
    }
    case(FID_DissenminationstartField):
    {
	    DissenminationstartFieldHelper::readBuffer(buffer, field.dissenminationstartField, readLen);
	    break;
    }
    case(FID_ErrorField):
    {
	    ErrorFieldHelper::readBuffer(buffer, field.errorField, readLen);
	    break;
    }
    case(FID_ErrorTargetOrderField):
    {
	    ErrorTargetOrderFieldHelper::readBuffer(buffer, field.errorTargetOrderField, readLen);
	    break;
    }
    case(FID_ErrorTargetSequenceField):
    {
	    ErrorTargetSequenceFieldHelper::readBuffer(buffer, field.errorTargetSequenceField, readLen);
	    break;
    }
    case(FID_ForceExitField):
    {
	    ForceExitFieldHelper::readBuffer(buffer, field.forceExitField, readLen);
	    break;
    }
    case(FID_InstrumentField):
    {
	    InstrumentFieldHelper::readBuffer(buffer, field.instrumentField, readLen);
	    break;
    }
    case(FID_InstrumentStatusField):
    {
	    InstrumentStatusFieldHelper::readBuffer(buffer, field.instrumentStatusField, readLen);
	    break;
    }
    case(FID_MarketStatusField):
    {
	    MarketStatusFieldHelper::readBuffer(buffer, field.marketStatusField, readLen);
	    break;
    }
    case(FID_MarketMatchIncDataField):
    {
	    MarketMatchIncDataFieldHelper::readBuffer(buffer, field.marketMatchIncDataField, readLen);
	    break;
    }
    case(FID_OrderActionField):
    {
	    OrderActionFieldHelper::readBuffer(buffer, field.orderActionField, readLen);
	    break;
    }
    case(FID_OrderInsertField):
    {
	    OrderInsertFieldHelper::readBuffer(buffer, field.orderInsertField, readLen);
	    break;
    }
    case(FID_MarketOrderDataField):
    {
	    MarketOrderDataFieldHelper::readBuffer(buffer, field.marketOrderDataField, readLen);
	    break;
    }
    case(FID_OrderStatusField):
    {
	    OrderStatusFieldHelper::readBuffer(buffer, field.orderStatusField, readLen);
	    break;
    }
    case(FID_ParticipantField):
    {
	    ParticipantFieldHelper::readBuffer(buffer, field.participantField, readLen);
	    break;
    }
    case(FID_PositionField):
    {
	    PositionFieldHelper::readBuffer(buffer, field.positionField, readLen);
	    break;
    }
    case(FID_PPositionField):
    {
	    PPositionFieldHelper::readBuffer(buffer, field.pPositionField, readLen);
	    break;
    }
    case(FID_MarketMatchDataChgField):
    {
	    MarketMatchDataChgFieldHelper::readBuffer(buffer, field.marketMatchDataChgField, readLen);
	    break;
    }
    case(FID_MarketMatchDataField):
    {
	    MarketMatchDataFieldHelper::readBuffer(buffer, field.marketMatchDataField, readLen);
	    break;
    }
    case(FID_ReqQryClientField):
    {
	    ReqQryClientFieldHelper::readBuffer(buffer, field.reqQryClientField, readLen);
	    break;
    }
    case(FID_ReqQryDepositField):
    {
	    ReqQryDepositFieldHelper::readBuffer(buffer, field.reqQryDepositField, readLen);
	    break;
    }
    case(FID_ReqQryInstrumentField):
    {
	    ReqQryInstrumentFieldHelper::readBuffer(buffer, field.reqQryInstrumentField, readLen);
	    break;
    }
    case(FID_ReqQryInstrumentStatusField):
    {
	    ReqQryInstrumentStatusFieldHelper::readBuffer(buffer, field.reqQryInstrumentStatusField, readLen);
	    break;
    }
    case(FID_ReqQryMarketField):
    {
	    ReqQryMarketFieldHelper::readBuffer(buffer, field.reqQryMarketField, readLen);
	    break;
    }
    case(FID_ReqQryMarketStatusField):
    {
	    ReqQryMarketStatusFieldHelper::readBuffer(buffer, field.reqQryMarketStatusField, readLen);
	    break;
    }
    case(FID_ReqQryOrderField):
    {
	    ReqQryOrderFieldHelper::readBuffer(buffer, field.reqQryOrderField, readLen);
	    break;
    }
    case(FID_ReqQryMarketOrderDataField):
    {
	    ReqQryMarketOrderDataFieldHelper::readBuffer(buffer, field.reqQryMarketOrderDataField, readLen);
	    break;
    }
    case(FID_ReqQryParticipantField):
    {
	    ReqQryParticipantFieldHelper::readBuffer(buffer, field.reqQryParticipantField, readLen);
	    break;
    }
    case(FID_ReqQryPositionField):
    {
	    ReqQryPositionFieldHelper::readBuffer(buffer, field.reqQryPositionField, readLen);
	    break;
    }
    case(FID_ReqQryPPositionField):
    {
	    ReqQryPPositionFieldHelper::readBuffer(buffer, field.reqQryPPositionField, readLen);
	    break;
    }
    case(FID_ReqQryMarketMatchDataField):
    {
	    ReqQryMarketMatchDataFieldHelper::readBuffer(buffer, field.reqQryMarketMatchDataField, readLen);
	    break;
    }
    case(FID_ReqQryTradeField):
    {
	    ReqQryTradeFieldHelper::readBuffer(buffer, field.reqQryTradeField, readLen);
	    break;
    }
    case(FID_ReqQryUserField):
    {
	    ReqQryUserFieldHelper::readBuffer(buffer, field.reqQryUserField, readLen);
	    break;
    }
    case(FID_ReqQryUserLoginField):
    {
	    ReqQryUserLoginFieldHelper::readBuffer(buffer, field.reqQryUserLoginField, readLen);
	    break;
    }
    case(FID_ReqUserLoginField):
    {
	    ReqUserLoginFieldHelper::readBuffer(buffer, field.reqUserLoginField, readLen);
	    break;
    }
    case(FID_ReqUserLogoutField):
    {
	    ReqUserLogoutFieldHelper::readBuffer(buffer, field.reqUserLogoutField, readLen);
	    break;
    }
    case(FID_ReqUserPasswordUpdateField):
    {
	    ReqUserPasswordUpdateFieldHelper::readBuffer(buffer, field.reqUserPasswordUpdateField, readLen);
	    break;
    }
    case(FID_MarketField):
    {
	    MarketFieldHelper::readBuffer(buffer, field.marketField, readLen);
	    break;
    }
    case(FID_RspUserLoginField):
    {
	    RspUserLoginFieldHelper::readBuffer(buffer, field.rspUserLoginField, readLen);
	    break;
    }
    case(FID_RspUserLogoutField):
    {
	    RspUserLogoutFieldHelper::readBuffer(buffer, field.rspUserLogoutField, readLen);
	    break;
    }
    case(FID_RspUserPasswordUpdateField):
    {
	    RspUserPasswordUpdateFieldHelper::readBuffer(buffer, field.rspUserPasswordUpdateField, readLen);
	    break;
    }
    case(FID_TradeInsertSingleField):
    {
	    TradeInsertSingleFieldHelper::readBuffer(buffer, field.tradeInsertSingleField, readLen);
	    break;
    }
    case(FID_UserField):
    {
	    UserFieldHelper::readBuffer(buffer, field.userField, readLen);
	    break;
    }
    case(FID_UserLoginField):
    {
	    UserLoginFieldHelper::readBuffer(buffer, field.userLoginField, readLen);
	    break;
    }
	default:
	{
		read_result = false;
		break;
	}
	}
	return read_result;
}

}
#endif