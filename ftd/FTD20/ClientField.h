#ifndef FTD20_CLIENTFIELD_H
#define FTD20_CLIENTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ClientField
	{
            TTPropertyClientId clientId;
            TTPropertyParticipantId participantId;
            TTPropertyClientName clientName;
            TTPropertyClientType clientType;
            TTPropertyTradeRights tradeRights;
	};

	class ClientFieldHelper
	{
	public:
		static void writeBuffer(const ClientField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyClientId::writeBuffer(field.clientId, buffer);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientName::writeBuffer(field.clientName, buffer);
            buffer += TPropertyClientName::getMsgLength();
            data_length += TPropertyClientName::getMsgLength();
            TPropertyClientType::writeBuffer(field.clientType, buffer);
            buffer += TPropertyClientType::getMsgLength();
            data_length += TPropertyClientType::getMsgLength();
            TPropertyTradeRights::writeBuffer(field.tradeRights, buffer);
            buffer += TPropertyTradeRights::getMsgLength();
            data_length += TPropertyTradeRights::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ClientField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyClientId::readBuffer(buffer, field.clientId);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientName::readBuffer(buffer, field.clientName);
            buffer += TPropertyClientName::getMsgLength();
            data_length += TPropertyClientName::getMsgLength();
            TPropertyClientType::readBuffer(buffer, field.clientType);
            buffer += TPropertyClientType::getMsgLength();
            data_length += TPropertyClientType::getMsgLength();
            TPropertyTradeRights::readBuffer(buffer, field.tradeRights);
            buffer += TPropertyTradeRights::getMsgLength();
            data_length += TPropertyTradeRights::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif