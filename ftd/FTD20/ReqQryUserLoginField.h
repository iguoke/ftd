#ifndef FTD20_REQQRYUSERLOGINFIELD_H
#define FTD20_REQQRYUSERLOGINFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryUserLoginField
	{
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
	};

	class ReqQryUserLoginFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryUserLoginField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryUserLoginField& field, int& readLen)
		{
			int data_length = 0;
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