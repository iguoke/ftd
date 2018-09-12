/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_RSPUSERLOGINFIELD_H
#define FTD20_RSPUSERLOGINFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct RspUserLoginField
{
    TTItemDataFlowFlag dataFlowFlag;
    TTItemParticipantId participantId;
    TTItemUserId userId;
    TTItemPassword password;
    TTItemExchangeDateTime exchangeDateTime;
    TTItemTimeSpan timeSpan;
    TTItemIpAddr ipAddr;
    TTItemMaxOrderLocalId maxOrderLocalId;
};

class RspUserLoginFieldHelper
{
public:
	static void writeBuffer(const RspUserLoginField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemDataFlowFlag::writeBuffer(field.dataFlowFlag, buffer);
        buffer += TItemDataFlowFlag::getMsgLength();
        data_length += TItemDataFlowFlag::getMsgLength();
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemUserId::writeBuffer(field.userId, buffer);
        buffer += TItemUserId::getMsgLength();
        data_length += TItemUserId::getMsgLength();
        TItemPassword::writeBuffer(field.password, buffer);
        buffer += TItemPassword::getMsgLength();
        data_length += TItemPassword::getMsgLength();
        TItemExchangeDateTime::writeBuffer(field.exchangeDateTime, buffer);
        buffer += TItemExchangeDateTime::getMsgLength();
        data_length += TItemExchangeDateTime::getMsgLength();
        TItemTimeSpan::writeBuffer(field.timeSpan, buffer);
        buffer += TItemTimeSpan::getMsgLength();
        data_length += TItemTimeSpan::getMsgLength();
        TItemIpAddr::writeBuffer(field.ipAddr, buffer);
        buffer += TItemIpAddr::getMsgLength();
        data_length += TItemIpAddr::getMsgLength();
        TItemMaxOrderLocalId::writeBuffer(field.maxOrderLocalId, buffer);
        buffer += TItemMaxOrderLocalId::getMsgLength();
        data_length += TItemMaxOrderLocalId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, RspUserLoginField& field, int& readLen)
	{
		int data_length = 0;
        TItemDataFlowFlag::readBuffer(buffer, field.dataFlowFlag);
        buffer += TItemDataFlowFlag::getMsgLength();
        data_length += TItemDataFlowFlag::getMsgLength();
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemUserId::readBuffer(buffer, field.userId);
        buffer += TItemUserId::getMsgLength();
        data_length += TItemUserId::getMsgLength();
        TItemPassword::readBuffer(buffer, field.password);
        buffer += TItemPassword::getMsgLength();
        data_length += TItemPassword::getMsgLength();
        TItemExchangeDateTime::readBuffer(buffer, field.exchangeDateTime);
        buffer += TItemExchangeDateTime::getMsgLength();
        data_length += TItemExchangeDateTime::getMsgLength();
        TItemTimeSpan::readBuffer(buffer, field.timeSpan);
        buffer += TItemTimeSpan::getMsgLength();
        data_length += TItemTimeSpan::getMsgLength();
        TItemIpAddr::readBuffer(buffer, field.ipAddr);
        buffer += TItemIpAddr::getMsgLength();
        data_length += TItemIpAddr::getMsgLength();
        TItemMaxOrderLocalId::readBuffer(buffer, field.maxOrderLocalId);
        buffer += TItemMaxOrderLocalId::getMsgLength();
        data_length += TItemMaxOrderLocalId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif