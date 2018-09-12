/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_USERFIELD_H
#define FTD20_USERFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct UserField
{
    TTItemUserId userId;
    TTItemParticipantId participantId;
    TTItemName name;
    TTItemIsLogin isLogin;
    TTItemUserStatus userStatus;
    TTItemUserType userType;
};

class UserFieldHelper
{
public:
	static void writeBuffer(const UserField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemUserId::writeBuffer(field.userId, buffer);
        buffer += TItemUserId::getMsgLength();
        data_length += TItemUserId::getMsgLength();
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemName::writeBuffer(field.name, buffer);
        buffer += TItemName::getMsgLength();
        data_length += TItemName::getMsgLength();
        TItemIsLogin::writeBuffer(field.isLogin, buffer);
        buffer += TItemIsLogin::getMsgLength();
        data_length += TItemIsLogin::getMsgLength();
        TItemUserStatus::writeBuffer(field.userStatus, buffer);
        buffer += TItemUserStatus::getMsgLength();
        data_length += TItemUserStatus::getMsgLength();
        TItemUserType::writeBuffer(field.userType, buffer);
        buffer += TItemUserType::getMsgLength();
        data_length += TItemUserType::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, UserField& field, int& readLen)
	{
		int data_length = 0;
        TItemUserId::readBuffer(buffer, field.userId);
        buffer += TItemUserId::getMsgLength();
        data_length += TItemUserId::getMsgLength();
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemName::readBuffer(buffer, field.name);
        buffer += TItemName::getMsgLength();
        data_length += TItemName::getMsgLength();
        TItemIsLogin::readBuffer(buffer, field.isLogin);
        buffer += TItemIsLogin::getMsgLength();
        data_length += TItemIsLogin::getMsgLength();
        TItemUserStatus::readBuffer(buffer, field.userStatus);
        buffer += TItemUserStatus::getMsgLength();
        data_length += TItemUserStatus::getMsgLength();
        TItemUserType::readBuffer(buffer, field.userType);
        buffer += TItemUserType::getMsgLength();
        data_length += TItemUserType::getMsgLength();
		readLen = data_length;
	}
};

}
#endif