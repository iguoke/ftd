/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQUSERPASSWORDUPDATEFIELD_H
#define FTD20_REQUSERPASSWORDUPDATEFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqUserPasswordUpdateField
	{
            TTItemParticipantId participantId;
            TTItemUserId userId;
            TTItemNewPassword newPassword;
            TTItemOldPassword oldPassword;
	};

	class ReqUserPasswordUpdateFieldHelper
	{
	public:
		static void writeBuffer(const ReqUserPasswordUpdateField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemNewPassword::writeBuffer(field.newPassword, buffer);
            buffer += TItemNewPassword::getMsgLength();
            data_length += TItemNewPassword::getMsgLength();
            TItemOldPassword::writeBuffer(field.oldPassword, buffer);
            buffer += TItemOldPassword::getMsgLength();
            data_length += TItemOldPassword::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqUserPasswordUpdateField& field, int& readLen)
		{
			int data_length = 0;
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemNewPassword::readBuffer(buffer, field.newPassword);
            buffer += TItemNewPassword::getMsgLength();
            data_length += TItemNewPassword::getMsgLength();
            TItemOldPassword::readBuffer(buffer, field.oldPassword);
            buffer += TItemOldPassword::getMsgLength();
            data_length += TItemOldPassword::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif