#ifndef FTD20_REQUSERLOGOUTFIELD_H
#define FTD20_REQUSERLOGOUTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqUserLogoutField
	{
            TTPropertyDataFlowFlag dataFlowFlag;
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
	};

	class ReqUserLogoutFieldHelper
	{
	public:
		static void writeBuffer(const ReqUserLogoutField& field, char* buffer, int& writenLen)
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
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqUserLogoutField& field, int& readLen)
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
			readLen = data_length;
		}
	};
}
#endif