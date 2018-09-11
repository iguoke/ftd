/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQUSERLOGINFIELD_H
#define FTD20_REQUSERLOGINFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqUserLoginField
	{
            TTItemDataFlowFlag dataFlowFlag;
            TTItemParticipantId participantId;
            TTItemUserId userId;
            TTItemPassword password;
            TTItemConnectionReference connectionReference;
            TTItemServerAppName serverAppName;
            TTItemProtocolVersion protocolVersion;
            TTItemTimeOut timeOut;
            TTItemIpAddr ipAddr;
	};

	class ReqUserLoginFieldHelper
	{
	public:
		static void writeBuffer(const ReqUserLoginField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemDataFlowFlag::writeBuffer(field.dataFlowFlag, buffer);
            buffer += TItemDataFlowFlag::getMsgLength();
            data_length += TItemDataFlowFlag::getMsgLength();
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemPassword::writeBuffer(field.password, buffer);
            buffer += TItemPassword::getMsgLength();
            data_length += TItemPassword::getMsgLength();
            TItemConnectionReference::writeBuffer(field.connectionReference, buffer);
            buffer += TItemConnectionReference::getMsgLength();
            data_length += TItemConnectionReference::getMsgLength();
            TItemServerAppName::writeBuffer(field.serverAppName, buffer);
            buffer += TItemServerAppName::getMsgLength();
            data_length += TItemServerAppName::getMsgLength();
            TItemProtocolVersion::writeBuffer(field.protocolVersion, buffer);
            buffer += TItemProtocolVersion::getMsgLength();
            data_length += TItemProtocolVersion::getMsgLength();
            TItemTimeOut::writeBuffer(field.timeOut, buffer);
            buffer += TItemTimeOut::getMsgLength();
            data_length += TItemTimeOut::getMsgLength();
            TItemIpAddr::writeBuffer(field.ipAddr, buffer);
            buffer += TItemIpAddr::getMsgLength();
            data_length += TItemIpAddr::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqUserLoginField& field, int& readLen)
		{
			int data_length = 0;
            TItemDataFlowFlag::readBuffer(buffer, field.dataFlowFlag);
            buffer += TItemDataFlowFlag::getMsgLength();
            data_length += TItemDataFlowFlag::getMsgLength();
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemPassword::readBuffer(buffer, field.password);
            buffer += TItemPassword::getMsgLength();
            data_length += TItemPassword::getMsgLength();
            TItemConnectionReference::readBuffer(buffer, field.connectionReference);
            buffer += TItemConnectionReference::getMsgLength();
            data_length += TItemConnectionReference::getMsgLength();
            TItemServerAppName::readBuffer(buffer, field.serverAppName);
            buffer += TItemServerAppName::getMsgLength();
            data_length += TItemServerAppName::getMsgLength();
            TItemProtocolVersion::readBuffer(buffer, field.protocolVersion);
            buffer += TItemProtocolVersion::getMsgLength();
            data_length += TItemProtocolVersion::getMsgLength();
            TItemTimeOut::readBuffer(buffer, field.timeOut);
            buffer += TItemTimeOut::getMsgLength();
            data_length += TItemTimeOut::getMsgLength();
            TItemIpAddr::readBuffer(buffer, field.ipAddr);
            buffer += TItemIpAddr::getMsgLength();
            data_length += TItemIpAddr::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif