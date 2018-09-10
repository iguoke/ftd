#ifndef FTD20_RSPUSERPASSWORDUPDATEFIELD_H
#define FTD20_RSPUSERPASSWORDUPDATEFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct RspUserPasswordUpdateField
	{
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyNewPassword newPassword;
	};

	class RspUserPasswordUpdateFieldHelper
	{
	public:
		static void writeBuffer(const RspUserPasswordUpdateField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyNewPassword::writeBuffer(field.newPassword, buffer);
            buffer += TPropertyNewPassword::getMsgLength();
            data_length += TPropertyNewPassword::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, RspUserPasswordUpdateField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyNewPassword::readBuffer(buffer, field.newPassword);
            buffer += TPropertyNewPassword::getMsgLength();
            data_length += TPropertyNewPassword::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif