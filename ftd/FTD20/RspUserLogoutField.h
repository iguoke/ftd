/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_RSPUSERLOGOUTFIELD_H
#define FTD20_RSPUSERLOGOUTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct RspUserLogoutField
{
    TTItemDataFlowFlag dataFlowFlag;
    TTItemParticipantId participantId;
    TTItemUserId userId;
    TTItemExchangeDateTime exchangeDateTime;
};

class RspUserLogoutFieldHelper
{
public:
	static void writeBuffer(const RspUserLogoutField& field, char* buffer, int& writenLen)
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
        TItemExchangeDateTime::writeBuffer(field.exchangeDateTime, buffer);
        buffer += TItemExchangeDateTime::getMsgLength();
        data_length += TItemExchangeDateTime::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, RspUserLogoutField& field, int& readLen)
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
        TItemExchangeDateTime::readBuffer(buffer, field.exchangeDateTime);
        buffer += TItemExchangeDateTime::getMsgLength();
        data_length += TItemExchangeDateTime::getMsgLength();
		readLen = data_length;
	}
};

}
#endif