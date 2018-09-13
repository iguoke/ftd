/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_USERLOGINFIELD_H
#define FTD20_USERLOGINFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct UserLoginField
	{
            TTItemParticipantId participantId;
            TTItemUserId userId;
            TTItemIpAddr ipAddr;
            TTItemDialogStreamStatus dialogStreamStatus;
            TTItemDialogLoginTime dialogLoginTime;
            TTItemDialogLogoutTime dialogLogoutTime;
            TTItemPrivateStreamStatus privateStreamStatus;
            TTItemPrivateLoginTime privateLoginTime;
            TTItemPrivateLogoutTime privateLogoutTime;
            TTItemBroadcastStreamStatus broadcastStreamStatus;
            TTItemBroadcastLoginTime broadcastLoginTime;
            TTItemBroadcastLogOutTime broadcastLogOutTime;
            TTItemFrontId frontId;
	};

	class UserLoginFieldHelper
	{
	public:
		static void writeBuffer(const UserLoginField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemIpAddr::writeBuffer(field.ipAddr, buffer);
            buffer += TItemIpAddr::getMsgLength();
            data_length += TItemIpAddr::getMsgLength();
            TItemDialogStreamStatus::writeBuffer(field.dialogStreamStatus, buffer);
            buffer += TItemDialogStreamStatus::getMsgLength();
            data_length += TItemDialogStreamStatus::getMsgLength();
            TItemDialogLoginTime::writeBuffer(field.dialogLoginTime, buffer);
            buffer += TItemDialogLoginTime::getMsgLength();
            data_length += TItemDialogLoginTime::getMsgLength();
            TItemDialogLogoutTime::writeBuffer(field.dialogLogoutTime, buffer);
            buffer += TItemDialogLogoutTime::getMsgLength();
            data_length += TItemDialogLogoutTime::getMsgLength();
            TItemPrivateStreamStatus::writeBuffer(field.privateStreamStatus, buffer);
            buffer += TItemPrivateStreamStatus::getMsgLength();
            data_length += TItemPrivateStreamStatus::getMsgLength();
            TItemPrivateLoginTime::writeBuffer(field.privateLoginTime, buffer);
            buffer += TItemPrivateLoginTime::getMsgLength();
            data_length += TItemPrivateLoginTime::getMsgLength();
            TItemPrivateLogoutTime::writeBuffer(field.privateLogoutTime, buffer);
            buffer += TItemPrivateLogoutTime::getMsgLength();
            data_length += TItemPrivateLogoutTime::getMsgLength();
            TItemBroadcastStreamStatus::writeBuffer(field.broadcastStreamStatus, buffer);
            buffer += TItemBroadcastStreamStatus::getMsgLength();
            data_length += TItemBroadcastStreamStatus::getMsgLength();
            TItemBroadcastLoginTime::writeBuffer(field.broadcastLoginTime, buffer);
            buffer += TItemBroadcastLoginTime::getMsgLength();
            data_length += TItemBroadcastLoginTime::getMsgLength();
            TItemBroadcastLogOutTime::writeBuffer(field.broadcastLogOutTime, buffer);
            buffer += TItemBroadcastLogOutTime::getMsgLength();
            data_length += TItemBroadcastLogOutTime::getMsgLength();
            TItemFrontId::writeBuffer(field.frontId, buffer);
            buffer += TItemFrontId::getMsgLength();
            data_length += TItemFrontId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, UserLoginField& field, int& readLen)
		{
			int data_length = 0;
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemIpAddr::readBuffer(buffer, field.ipAddr);
            buffer += TItemIpAddr::getMsgLength();
            data_length += TItemIpAddr::getMsgLength();
            TItemDialogStreamStatus::readBuffer(buffer, field.dialogStreamStatus);
            buffer += TItemDialogStreamStatus::getMsgLength();
            data_length += TItemDialogStreamStatus::getMsgLength();
            TItemDialogLoginTime::readBuffer(buffer, field.dialogLoginTime);
            buffer += TItemDialogLoginTime::getMsgLength();
            data_length += TItemDialogLoginTime::getMsgLength();
            TItemDialogLogoutTime::readBuffer(buffer, field.dialogLogoutTime);
            buffer += TItemDialogLogoutTime::getMsgLength();
            data_length += TItemDialogLogoutTime::getMsgLength();
            TItemPrivateStreamStatus::readBuffer(buffer, field.privateStreamStatus);
            buffer += TItemPrivateStreamStatus::getMsgLength();
            data_length += TItemPrivateStreamStatus::getMsgLength();
            TItemPrivateLoginTime::readBuffer(buffer, field.privateLoginTime);
            buffer += TItemPrivateLoginTime::getMsgLength();
            data_length += TItemPrivateLoginTime::getMsgLength();
            TItemPrivateLogoutTime::readBuffer(buffer, field.privateLogoutTime);
            buffer += TItemPrivateLogoutTime::getMsgLength();
            data_length += TItemPrivateLogoutTime::getMsgLength();
            TItemBroadcastStreamStatus::readBuffer(buffer, field.broadcastStreamStatus);
            buffer += TItemBroadcastStreamStatus::getMsgLength();
            data_length += TItemBroadcastStreamStatus::getMsgLength();
            TItemBroadcastLoginTime::readBuffer(buffer, field.broadcastLoginTime);
            buffer += TItemBroadcastLoginTime::getMsgLength();
            data_length += TItemBroadcastLoginTime::getMsgLength();
            TItemBroadcastLogOutTime::readBuffer(buffer, field.broadcastLogOutTime);
            buffer += TItemBroadcastLogOutTime::getMsgLength();
            data_length += TItemBroadcastLogOutTime::getMsgLength();
            TItemFrontId::readBuffer(buffer, field.frontId);
            buffer += TItemFrontId::getMsgLength();
            data_length += TItemFrontId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif