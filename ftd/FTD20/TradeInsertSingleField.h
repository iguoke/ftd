#ifndef FTD20_TRADEINSERTSINGLEFIELD_H
#define FTD20_TRADEINSERTSINGLEFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct TradeInsertSingleField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyCancelFlag cancelFlag;
            TTPropertyCancelDate cancelDate;
            TTPropertyCancelTime cancelTime;
            TTPropertyTradeId tradeId;
            TTPropertyMatchDate matchDate;
            TTPropertyMatchTime matchTime;
            TTPropertyClearDate clearDate;
            TTPropertyPrice price;
            TTPropertyVolume volume;
            TTPropertyOrderSysId orderSysId;
            TTPropertyUserId userId;
            TTPropertyDirection direction;
            TTPropertyOffsetFlag offsetFlag;
            TTPropertyHedgeFlag hedgeFlag;
            TTPropertyParticipantId participantId;
            TTPropertyClientId clientId;
            TTPropertyOrderLocalId orderLocalId;
	};

	class TradeInsertSingleFieldHelper
	{
	public:
		static void writeBuffer(const TradeInsertSingleField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyCancelFlag::writeBuffer(field.cancelFlag, buffer);
            buffer += TPropertyCancelFlag::getMsgLength();
            data_length += TPropertyCancelFlag::getMsgLength();
            TPropertyCancelDate::writeBuffer(field.cancelDate, buffer);
            buffer += TPropertyCancelDate::getMsgLength();
            data_length += TPropertyCancelDate::getMsgLength();
            TPropertyCancelTime::writeBuffer(field.cancelTime, buffer);
            buffer += TPropertyCancelTime::getMsgLength();
            data_length += TPropertyCancelTime::getMsgLength();
            TPropertyTradeId::writeBuffer(field.tradeId, buffer);
            buffer += TPropertyTradeId::getMsgLength();
            data_length += TPropertyTradeId::getMsgLength();
            TPropertyMatchDate::writeBuffer(field.matchDate, buffer);
            buffer += TPropertyMatchDate::getMsgLength();
            data_length += TPropertyMatchDate::getMsgLength();
            TPropertyMatchTime::writeBuffer(field.matchTime, buffer);
            buffer += TPropertyMatchTime::getMsgLength();
            data_length += TPropertyMatchTime::getMsgLength();
            TPropertyClearDate::writeBuffer(field.clearDate, buffer);
            buffer += TPropertyClearDate::getMsgLength();
            data_length += TPropertyClearDate::getMsgLength();
            TPropertyPrice::writeBuffer(field.price, buffer);
            buffer += TPropertyPrice::getMsgLength();
            data_length += TPropertyPrice::getMsgLength();
            TPropertyVolume::writeBuffer(field.volume, buffer);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyDirection::writeBuffer(field.direction, buffer);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
            TPropertyOffsetFlag::writeBuffer(field.offsetFlag, buffer);
            buffer += TPropertyOffsetFlag::getMsgLength();
            data_length += TPropertyOffsetFlag::getMsgLength();
            TPropertyHedgeFlag::writeBuffer(field.hedgeFlag, buffer);
            buffer += TPropertyHedgeFlag::getMsgLength();
            data_length += TPropertyHedgeFlag::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientId::writeBuffer(field.clientId, buffer);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyOrderLocalId::writeBuffer(field.orderLocalId, buffer);
            buffer += TPropertyOrderLocalId::getMsgLength();
            data_length += TPropertyOrderLocalId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, TradeInsertSingleField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyCancelFlag::readBuffer(buffer, field.cancelFlag);
            buffer += TPropertyCancelFlag::getMsgLength();
            data_length += TPropertyCancelFlag::getMsgLength();
            TPropertyCancelDate::readBuffer(buffer, field.cancelDate);
            buffer += TPropertyCancelDate::getMsgLength();
            data_length += TPropertyCancelDate::getMsgLength();
            TPropertyCancelTime::readBuffer(buffer, field.cancelTime);
            buffer += TPropertyCancelTime::getMsgLength();
            data_length += TPropertyCancelTime::getMsgLength();
            TPropertyTradeId::readBuffer(buffer, field.tradeId);
            buffer += TPropertyTradeId::getMsgLength();
            data_length += TPropertyTradeId::getMsgLength();
            TPropertyMatchDate::readBuffer(buffer, field.matchDate);
            buffer += TPropertyMatchDate::getMsgLength();
            data_length += TPropertyMatchDate::getMsgLength();
            TPropertyMatchTime::readBuffer(buffer, field.matchTime);
            buffer += TPropertyMatchTime::getMsgLength();
            data_length += TPropertyMatchTime::getMsgLength();
            TPropertyClearDate::readBuffer(buffer, field.clearDate);
            buffer += TPropertyClearDate::getMsgLength();
            data_length += TPropertyClearDate::getMsgLength();
            TPropertyPrice::readBuffer(buffer, field.price);
            buffer += TPropertyPrice::getMsgLength();
            data_length += TPropertyPrice::getMsgLength();
            TPropertyVolume::readBuffer(buffer, field.volume);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyDirection::readBuffer(buffer, field.direction);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
            TPropertyOffsetFlag::readBuffer(buffer, field.offsetFlag);
            buffer += TPropertyOffsetFlag::getMsgLength();
            data_length += TPropertyOffsetFlag::getMsgLength();
            TPropertyHedgeFlag::readBuffer(buffer, field.hedgeFlag);
            buffer += TPropertyHedgeFlag::getMsgLength();
            data_length += TPropertyHedgeFlag::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientId::readBuffer(buffer, field.clientId);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyOrderLocalId::readBuffer(buffer, field.orderLocalId);
            buffer += TPropertyOrderLocalId::getMsgLength();
            data_length += TPropertyOrderLocalId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif