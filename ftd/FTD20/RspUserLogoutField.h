#ifndef FTD20_RSPUSERLOGOUTFIELD_H
#define FTD20_RSPUSERLOGOUTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct RspUserLogoutField
	{
            TTPropertyDataFlowFlag dataFlowFlag;
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyExchangeDateTime exchangeDateTime;
	};

	class RspUserLogoutFieldHelper
	{
	public:
		static void writeBuffer(const RspUserLogoutField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyDataFlowFlag::writeBuffer(field.dataFlowFlag, buffer);
            buffer += TPropertyDataFlowFlag::getMsgLength();
            data_length += TPropertyDataFlowFlag::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyExchangeDateTime::writeBuffer(field.exchangeDateTime, buffer);
            buffer += TPropertyExchangeDateTime::getMsgLength();
            data_length += TPropertyExchangeDateTime::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, RspUserLogoutField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyDataFlowFlag::readBuffer(buffer, field.dataFlowFlag);
            buffer += TPropertyDataFlowFlag::getMsgLength();
            data_length += TPropertyDataFlowFlag::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyExchangeDateTime::readBuffer(buffer, field.exchangeDateTime);
            buffer += TPropertyExchangeDateTime::getMsgLength();
            data_length += TPropertyExchangeDateTime::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif