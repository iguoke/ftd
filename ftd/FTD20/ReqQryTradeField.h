#ifndef FTD20_REQQRYTRADEFIELD_H
#define FTD20_REQQRYTRADEFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryTradeField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyParticipantId participantId;
            TTPropertyUserId userId;
            TTPropertyClientId clientId;
            TTPropertyOrderSysId orderSysId;
            TTPropertyStartTime startTime;
            TTPropertyThroughTime throughTime;
	};

	class ReqQryTradeFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryTradeField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyClientId::writeBuffer(field.clientId, buffer);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyStartTime::writeBuffer(field.startTime, buffer);
            buffer += TPropertyStartTime::getMsgLength();
            data_length += TPropertyStartTime::getMsgLength();
            TPropertyThroughTime::writeBuffer(field.throughTime, buffer);
            buffer += TPropertyThroughTime::getMsgLength();
            data_length += TPropertyThroughTime::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryTradeField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyClientId::readBuffer(buffer, field.clientId);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyStartTime::readBuffer(buffer, field.startTime);
            buffer += TPropertyStartTime::getMsgLength();
            data_length += TPropertyStartTime::getMsgLength();
            TPropertyThroughTime::readBuffer(buffer, field.throughTime);
            buffer += TPropertyThroughTime::getMsgLength();
            data_length += TPropertyThroughTime::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif