#ifndef FTD20_RSPUSERLOGINFIELD_H
#define FTD20_RSPUSERLOGINFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct RspUserLoginField
	{
            TTPropertyDataFlowFlag dataFlowFlag;
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyPassword password;
            TTPropertyExchangeDateTime exchangeDateTime;
            TTPropertyTimeSpan timeSpan;
            TTPropertyIpAddr ipAddr;
            TTPropertyMaxOrderLocalId maxOrderLocalId;
	};

	class RspUserLoginFieldHelper
	{
	public:
		static void writeBuffer(const RspUserLoginField& field, char* buffer, int& writenLen)
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
            TPropertyPassword::writeBuffer(field.password, buffer);
            buffer += TPropertyPassword::getMsgLength();
            data_length += TPropertyPassword::getMsgLength();
            TPropertyExchangeDateTime::writeBuffer(field.exchangeDateTime, buffer);
            buffer += TPropertyExchangeDateTime::getMsgLength();
            data_length += TPropertyExchangeDateTime::getMsgLength();
            TPropertyTimeSpan::writeBuffer(field.timeSpan, buffer);
            buffer += TPropertyTimeSpan::getMsgLength();
            data_length += TPropertyTimeSpan::getMsgLength();
            TPropertyIpAddr::writeBuffer(field.ipAddr, buffer);
            buffer += TPropertyIpAddr::getMsgLength();
            data_length += TPropertyIpAddr::getMsgLength();
            TPropertyMaxOrderLocalId::writeBuffer(field.maxOrderLocalId, buffer);
            buffer += TPropertyMaxOrderLocalId::getMsgLength();
            data_length += TPropertyMaxOrderLocalId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, RspUserLoginField& field, int& readLen)
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
            TPropertyPassword::readBuffer(buffer, field.password);
            buffer += TPropertyPassword::getMsgLength();
            data_length += TPropertyPassword::getMsgLength();
            TPropertyExchangeDateTime::readBuffer(buffer, field.exchangeDateTime);
            buffer += TPropertyExchangeDateTime::getMsgLength();
            data_length += TPropertyExchangeDateTime::getMsgLength();
            TPropertyTimeSpan::readBuffer(buffer, field.timeSpan);
            buffer += TPropertyTimeSpan::getMsgLength();
            data_length += TPropertyTimeSpan::getMsgLength();
            TPropertyIpAddr::readBuffer(buffer, field.ipAddr);
            buffer += TPropertyIpAddr::getMsgLength();
            data_length += TPropertyIpAddr::getMsgLength();
            TPropertyMaxOrderLocalId::readBuffer(buffer, field.maxOrderLocalId);
            buffer += TPropertyMaxOrderLocalId::getMsgLength();
            data_length += TPropertyMaxOrderLocalId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif