/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYORDERFIELD_H
#define FTD20_REQQRYORDERFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqQryOrderField
	{
            TTItemInstrumentId instrumentId;
            TTItemInstrumentVersion instrumentVersion;
            TTItemParticipantId participantId;
            TTItemUserId userId;
            TTItemClientId clientId;
            TTItemOrderSysId orderSysId;
	};

	class ReqQryOrderFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryOrderField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemClientId::writeBuffer(field.clientId, buffer);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TItemOrderSysId::getMsgLength();
            data_length += TItemOrderSysId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryOrderField& field, int& readLen)
		{
			int data_length = 0;
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemClientId::readBuffer(buffer, field.clientId);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TItemOrderSysId::getMsgLength();
            data_length += TItemOrderSysId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif