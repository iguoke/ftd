#ifndef FTD20_USERLOGINFIELD_H
#define FTD20_USERLOGINFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct UserLoginField
	{
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyIpAddr ipAddr;
            TTPropertyDialogStreamStatus dialogStreamStatus;
            TTPropertyDialogLoginTime dialogLoginTime;
            TTPropertyDialogLogoutTime dialogLogoutTime;
            TTPropertyPrivateStreamStatus privateStreamStatus;
            TTPropertyPrivateLoginTime privateLoginTime;
            TTPropertyPrivateLogoutTime privateLogoutTime;
            TTPropertyBroadcastStreamStatus broadcastStreamStatus;
            TTPropertyBroadcastLoginTime broadcastLoginTime;
            TTPropertyBroadcastLogOutTime broadcastLogOutTime;
            TTPropertyFrontId frontId;
	};

	class UserLoginFieldHelper
	{
	public:
		static void writeBuffer(const UserLoginField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyIpAddr::writeBuffer(field.ipAddr, buffer);
            buffer += TPropertyIpAddr::getMsgLength();
            data_length += TPropertyIpAddr::getMsgLength();
            TPropertyDialogStreamStatus::writeBuffer(field.dialogStreamStatus, buffer);
            buffer += TPropertyDialogStreamStatus::getMsgLength();
            data_length += TPropertyDialogStreamStatus::getMsgLength();
            TPropertyDialogLoginTime::writeBuffer(field.dialogLoginTime, buffer);
            buffer += TPropertyDialogLoginTime::getMsgLength();
            data_length += TPropertyDialogLoginTime::getMsgLength();
            TPropertyDialogLogoutTime::writeBuffer(field.dialogLogoutTime, buffer);
            buffer += TPropertyDialogLogoutTime::getMsgLength();
            data_length += TPropertyDialogLogoutTime::getMsgLength();
            TPropertyPrivateStreamStatus::writeBuffer(field.privateStreamStatus, buffer);
            buffer += TPropertyPrivateStreamStatus::getMsgLength();
            data_length += TPropertyPrivateStreamStatus::getMsgLength();
            TPropertyPrivateLoginTime::writeBuffer(field.privateLoginTime, buffer);
            buffer += TPropertyPrivateLoginTime::getMsgLength();
            data_length += TPropertyPrivateLoginTime::getMsgLength();
            TPropertyPrivateLogoutTime::writeBuffer(field.privateLogoutTime, buffer);
            buffer += TPropertyPrivateLogoutTime::getMsgLength();
            data_length += TPropertyPrivateLogoutTime::getMsgLength();
            TPropertyBroadcastStreamStatus::writeBuffer(field.broadcastStreamStatus, buffer);
            buffer += TPropertyBroadcastStreamStatus::getMsgLength();
            data_length += TPropertyBroadcastStreamStatus::getMsgLength();
            TPropertyBroadcastLoginTime::writeBuffer(field.broadcastLoginTime, buffer);
            buffer += TPropertyBroadcastLoginTime::getMsgLength();
            data_length += TPropertyBroadcastLoginTime::getMsgLength();
            TPropertyBroadcastLogOutTime::writeBuffer(field.broadcastLogOutTime, buffer);
            buffer += TPropertyBroadcastLogOutTime::getMsgLength();
            data_length += TPropertyBroadcastLogOutTime::getMsgLength();
            TPropertyFrontId::writeBuffer(field.frontId, buffer);
            buffer += TPropertyFrontId::getMsgLength();
            data_length += TPropertyFrontId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, UserLoginField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyIpAddr::readBuffer(buffer, field.ipAddr);
            buffer += TPropertyIpAddr::getMsgLength();
            data_length += TPropertyIpAddr::getMsgLength();
            TPropertyDialogStreamStatus::readBuffer(buffer, field.dialogStreamStatus);
            buffer += TPropertyDialogStreamStatus::getMsgLength();
            data_length += TPropertyDialogStreamStatus::getMsgLength();
            TPropertyDialogLoginTime::readBuffer(buffer, field.dialogLoginTime);
            buffer += TPropertyDialogLoginTime::getMsgLength();
            data_length += TPropertyDialogLoginTime::getMsgLength();
            TPropertyDialogLogoutTime::readBuffer(buffer, field.dialogLogoutTime);
            buffer += TPropertyDialogLogoutTime::getMsgLength();
            data_length += TPropertyDialogLogoutTime::getMsgLength();
            TPropertyPrivateStreamStatus::readBuffer(buffer, field.privateStreamStatus);
            buffer += TPropertyPrivateStreamStatus::getMsgLength();
            data_length += TPropertyPrivateStreamStatus::getMsgLength();
            TPropertyPrivateLoginTime::readBuffer(buffer, field.privateLoginTime);
            buffer += TPropertyPrivateLoginTime::getMsgLength();
            data_length += TPropertyPrivateLoginTime::getMsgLength();
            TPropertyPrivateLogoutTime::readBuffer(buffer, field.privateLogoutTime);
            buffer += TPropertyPrivateLogoutTime::getMsgLength();
            data_length += TPropertyPrivateLogoutTime::getMsgLength();
            TPropertyBroadcastStreamStatus::readBuffer(buffer, field.broadcastStreamStatus);
            buffer += TPropertyBroadcastStreamStatus::getMsgLength();
            data_length += TPropertyBroadcastStreamStatus::getMsgLength();
            TPropertyBroadcastLoginTime::readBuffer(buffer, field.broadcastLoginTime);
            buffer += TPropertyBroadcastLoginTime::getMsgLength();
            data_length += TPropertyBroadcastLoginTime::getMsgLength();
            TPropertyBroadcastLogOutTime::readBuffer(buffer, field.broadcastLogOutTime);
            buffer += TPropertyBroadcastLogOutTime::getMsgLength();
            data_length += TPropertyBroadcastLogOutTime::getMsgLength();
            TPropertyFrontId::readBuffer(buffer, field.frontId);
            buffer += TPropertyFrontId::getMsgLength();
            data_length += TPropertyFrontId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif