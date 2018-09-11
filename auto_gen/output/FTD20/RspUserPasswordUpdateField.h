/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_RSPUSERPASSWORDUPDATEFIELD_H
#define FTD20_RSPUSERPASSWORDUPDATEFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct RspUserPasswordUpdateField
	{
            TTItemParticipantId participantId;
            TTItemUserId userId;
            TTItemNewPassword newPassword;
	};

	class RspUserPasswordUpdateFieldHelper
	{
	public:
		static void writeBuffer(const RspUserPasswordUpdateField& field, char* buffer, int& writenLen)
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
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, RspUserPasswordUpdateField& field, int& readLen)
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
			readLen = data_length;
		}
	};
}
#endif