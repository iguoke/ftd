#ifndef FTD20_USERFIELD_H
#define FTD20_USERFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct UserField
	{
            TTPropertyUserId userId;
            TTPropertyParticipantId participantId;
            TTPropertyName name;
            TTPropertyIsLogin isLogin;
            TTPropertyUserStatus userStatus;
            TTPropertyUserType userType;
	};

	class UserFieldHelper
	{
	public:
		static void writeBuffer(const UserField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyName::writeBuffer(field.name, buffer);
            buffer += TPropertyName::getMsgLength();
            data_length += TPropertyName::getMsgLength();
            TPropertyIsLogin::writeBuffer(field.isLogin, buffer);
            buffer += TPropertyIsLogin::getMsgLength();
            data_length += TPropertyIsLogin::getMsgLength();
            TPropertyUserStatus::writeBuffer(field.userStatus, buffer);
            buffer += TPropertyUserStatus::getMsgLength();
            data_length += TPropertyUserStatus::getMsgLength();
            TPropertyUserType::writeBuffer(field.userType, buffer);
            buffer += TPropertyUserType::getMsgLength();
            data_length += TPropertyUserType::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, UserField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyName::readBuffer(buffer, field.name);
            buffer += TPropertyName::getMsgLength();
            data_length += TPropertyName::getMsgLength();
            TPropertyIsLogin::readBuffer(buffer, field.isLogin);
            buffer += TPropertyIsLogin::getMsgLength();
            data_length += TPropertyIsLogin::getMsgLength();
            TPropertyUserStatus::readBuffer(buffer, field.userStatus);
            buffer += TPropertyUserStatus::getMsgLength();
            data_length += TPropertyUserStatus::getMsgLength();
            TPropertyUserType::readBuffer(buffer, field.userType);
            buffer += TPropertyUserType::getMsgLength();
            data_length += TPropertyUserType::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif