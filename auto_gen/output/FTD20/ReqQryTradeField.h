/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYTRADEFIELD_H
#define FTD20_REQQRYTRADEFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqQryTradeField
	{
            TTItemInstrumentId instrumentId;
            TTItemInstrumentVersion instrumentVersion;
            TTItemParticipantId participantId;
            TTItemUserId userId;
            TTItemClientId clientId;
            TTItemOrderSysId orderSysId;
            TTItemStartTime startTime;
            TTItemThroughTime throughTime;
	};

	class ReqQryTradeFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryTradeField& field, char* buffer, int& writenLen)
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
            TItemStartTime::writeBuffer(field.startTime, buffer);
            buffer += TItemStartTime::getMsgLength();
            data_length += TItemStartTime::getMsgLength();
            TItemThroughTime::writeBuffer(field.throughTime, buffer);
            buffer += TItemThroughTime::getMsgLength();
            data_length += TItemThroughTime::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryTradeField& field, int& readLen)
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
            TItemStartTime::readBuffer(buffer, field.startTime);
            buffer += TItemStartTime::getMsgLength();
            data_length += TItemStartTime::getMsgLength();
            TItemThroughTime::readBuffer(buffer, field.throughTime);
            buffer += TItemThroughTime::getMsgLength();
            data_length += TItemThroughTime::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif