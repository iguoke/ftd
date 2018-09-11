/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_CLIENTFIELD_H
#define FTD20_CLIENTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ClientField
	{
            TTItemClientId clientId;
            TTItemParticipantId participantId;
            TTItemClientName clientName;
            TTItemClientType clientType;
            TTItemTradeRights tradeRights;
	};

	class ClientFieldHelper
	{
	public:
		static void writeBuffer(const ClientField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemClientId::writeBuffer(field.clientId, buffer);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemClientName::writeBuffer(field.clientName, buffer);
            buffer += TItemClientName::getMsgLength();
            data_length += TItemClientName::getMsgLength();
            TItemClientType::writeBuffer(field.clientType, buffer);
            buffer += TItemClientType::getMsgLength();
            data_length += TItemClientType::getMsgLength();
            TItemTradeRights::writeBuffer(field.tradeRights, buffer);
            buffer += TItemTradeRights::getMsgLength();
            data_length += TItemTradeRights::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ClientField& field, int& readLen)
		{
			int data_length = 0;
            TItemClientId::readBuffer(buffer, field.clientId);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemClientName::readBuffer(buffer, field.clientName);
            buffer += TItemClientName::getMsgLength();
            data_length += TItemClientName::getMsgLength();
            TItemClientType::readBuffer(buffer, field.clientType);
            buffer += TItemClientType::getMsgLength();
            data_length += TItemClientType::getMsgLength();
            TItemTradeRights::readBuffer(buffer, field.tradeRights);
            buffer += TItemTradeRights::getMsgLength();
            data_length += TItemTradeRights::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif