#ifndef FTD20_REQUSERLOGINFIELD_H
#define FTD20_REQUSERLOGINFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqUserLoginField
	{
            TTPropertyDataFlowFlag dataFlowFlag;
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyPassword password;
            TTPropertyConnectionReference connectionReference;
            TTPropertyServerAppName serverAppName;
            TTPropertyProtocolVersion protocolVersion;
            TTPropertyTimeOut timeOut;
            TTPropertyIpAddr ipAddr;
	};

	class ReqUserLoginFieldHelper
	{
	public:
		static void writeBuffer(const ReqUserLoginField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyDataFlowFlag::writeBuffer(field.dataFlowFlag, buffer);
            buffer += TPropertyDataFlowFlag::getMsgLength();
            data_length += TPropertyDataFlowFlag::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyPassword::writeBuffer(field.password, buffer);
            buffer += TPropertyPassword::getMsgLength();
            data_length += TPropertyPassword::getMsgLength();
            TPropertyConnectionReference::writeBuffer(field.connectionReference, buffer);
            buffer += TPropertyConnectionReference::getMsgLength();
            data_length += TPropertyConnectionReference::getMsgLength();
            TPropertyServerAppName::writeBuffer(field.serverAppName, buffer);
            buffer += TPropertyServerAppName::getMsgLength();
            data_length += TPropertyServerAppName::getMsgLength();
            TPropertyProtocolVersion::writeBuffer(field.protocolVersion, buffer);
            buffer += TPropertyProtocolVersion::getMsgLength();
            data_length += TPropertyProtocolVersion::getMsgLength();
            TPropertyTimeOut::writeBuffer(field.timeOut, buffer);
            buffer += TPropertyTimeOut::getMsgLength();
            data_length += TPropertyTimeOut::getMsgLength();
            TPropertyIpAddr::writeBuffer(field.ipAddr, buffer);
            buffer += TPropertyIpAddr::getMsgLength();
            data_length += TPropertyIpAddr::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqUserLoginField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyDataFlowFlag::readBuffer(buffer, field.dataFlowFlag);
            buffer += TPropertyDataFlowFlag::getMsgLength();
            data_length += TPropertyDataFlowFlag::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyPassword::readBuffer(buffer, field.password);
            buffer += TPropertyPassword::getMsgLength();
            data_length += TPropertyPassword::getMsgLength();
            TPropertyConnectionReference::readBuffer(buffer, field.connectionReference);
            buffer += TPropertyConnectionReference::getMsgLength();
            data_length += TPropertyConnectionReference::getMsgLength();
            TPropertyServerAppName::readBuffer(buffer, field.serverAppName);
            buffer += TPropertyServerAppName::getMsgLength();
            data_length += TPropertyServerAppName::getMsgLength();
            TPropertyProtocolVersion::readBuffer(buffer, field.protocolVersion);
            buffer += TPropertyProtocolVersion::getMsgLength();
            data_length += TPropertyProtocolVersion::getMsgLength();
            TPropertyTimeOut::readBuffer(buffer, field.timeOut);
            buffer += TPropertyTimeOut::getMsgLength();
            data_length += TPropertyTimeOut::getMsgLength();
            TPropertyIpAddr::readBuffer(buffer, field.ipAddr);
            buffer += TPropertyIpAddr::getMsgLength();
            data_length += TPropertyIpAddr::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif