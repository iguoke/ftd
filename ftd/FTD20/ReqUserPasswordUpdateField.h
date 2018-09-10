#ifndef FTD20_REQUSERPASSWORDUPDATEFIELD_H
#define FTD20_REQUSERPASSWORDUPDATEFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqUserPasswordUpdateField
	{
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyNewPassword newPassword;
            TTPropertyOldPassword oldPassword;
	};

	class ReqUserPasswordUpdateFieldHelper
	{
	public:
		static void writeBuffer(const ReqUserPasswordUpdateField& field, char* buffer, int& writenLen)
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
            TPropertyOldPassword::writeBuffer(field.oldPassword, buffer);
            buffer += TPropertyOldPassword::getMsgLength();
            data_length += TPropertyOldPassword::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqUserPasswordUpdateField& field, int& readLen)
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
            TPropertyOldPassword::readBuffer(buffer, field.oldPassword);
            buffer += TPropertyOldPassword::getMsgLength();
            data_length += TPropertyOldPassword::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif