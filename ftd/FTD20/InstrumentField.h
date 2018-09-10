#ifndef FTD20_INSTRUMENTFIELD_H
#define FTD20_INSTRUMENTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct InstrumentField
	{
            TTPropertyMarketId marketId;
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyInstrumentName instrumentName;
            TTPropertyShortCutKey shortCutKey;
            TTPropertyStartTrdDate startTrdDate;
            TTPropertyEndTrdDate endTrdDate;
            TTPropertyInstrumentType instrumentType;
            TTPropertyEndDelvDate endDelvDate;
            TTPropertyStartDelvDate startDelvDate;
            TTPropertyInstrStopCode instrStopCode;
            TTPropertyCurrency currency;
            TTPropertyTradeRights tradeRights;
            TTPropertyFuseRights fuseRights;
            TTPropertyUnit unit;
            TTPropertyTick tick;
            TTPropertyHighLimitRate highLimitRate;
            TTPropertyLowLimitRate lowLimitRate;
            TTPropertyMaxLot maxLot;
            TTPropertyMinLot minLot;
            TTPropertyPubstyle pubstyle;
            TTPropertyFuselimit fuselimit;
            TTPropertyFusepersisttime fusepersisttime;
            TTPropertyFusepoint fusepoint;
            TTPropertyFuseFlag fuseFlag;
            TTPropertyForcedistime forcedistime;
	};

	class InstrumentFieldHelper
	{
	public:
		static void writeBuffer(const InstrumentField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyMarketId::writeBuffer(field.marketId, buffer);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyInstrumentName::writeBuffer(field.instrumentName, buffer);
            buffer += TPropertyInstrumentName::getMsgLength();
            data_length += TPropertyInstrumentName::getMsgLength();
            TPropertyShortCutKey::writeBuffer(field.shortCutKey, buffer);
            buffer += TPropertyShortCutKey::getMsgLength();
            data_length += TPropertyShortCutKey::getMsgLength();
            TPropertyStartTrdDate::writeBuffer(field.startTrdDate, buffer);
            buffer += TPropertyStartTrdDate::getMsgLength();
            data_length += TPropertyStartTrdDate::getMsgLength();
            TPropertyEndTrdDate::writeBuffer(field.endTrdDate, buffer);
            buffer += TPropertyEndTrdDate::getMsgLength();
            data_length += TPropertyEndTrdDate::getMsgLength();
            TPropertyInstrumentType::writeBuffer(field.instrumentType, buffer);
            buffer += TPropertyInstrumentType::getMsgLength();
            data_length += TPropertyInstrumentType::getMsgLength();
            TPropertyEndDelvDate::writeBuffer(field.endDelvDate, buffer);
            buffer += TPropertyEndDelvDate::getMsgLength();
            data_length += TPropertyEndDelvDate::getMsgLength();
            TPropertyStartDelvDate::writeBuffer(field.startDelvDate, buffer);
            buffer += TPropertyStartDelvDate::getMsgLength();
            data_length += TPropertyStartDelvDate::getMsgLength();
            TPropertyInstrStopCode::writeBuffer(field.instrStopCode, buffer);
            buffer += TPropertyInstrStopCode::getMsgLength();
            data_length += TPropertyInstrStopCode::getMsgLength();
            TPropertyCurrency::writeBuffer(field.currency, buffer);
            buffer += TPropertyCurrency::getMsgLength();
            data_length += TPropertyCurrency::getMsgLength();
            TPropertyTradeRights::writeBuffer(field.tradeRights, buffer);
            buffer += TPropertyTradeRights::getMsgLength();
            data_length += TPropertyTradeRights::getMsgLength();
            TPropertyFuseRights::writeBuffer(field.fuseRights, buffer);
            buffer += TPropertyFuseRights::getMsgLength();
            data_length += TPropertyFuseRights::getMsgLength();
            TPropertyUnit::writeBuffer(field.unit, buffer);
            buffer += TPropertyUnit::getMsgLength();
            data_length += TPropertyUnit::getMsgLength();
            TPropertyTick::writeBuffer(field.tick, buffer);
            buffer += TPropertyTick::getMsgLength();
            data_length += TPropertyTick::getMsgLength();
            TPropertyHighLimitRate::writeBuffer(field.highLimitRate, buffer);
            buffer += TPropertyHighLimitRate::getMsgLength();
            data_length += TPropertyHighLimitRate::getMsgLength();
            TPropertyLowLimitRate::writeBuffer(field.lowLimitRate, buffer);
            buffer += TPropertyLowLimitRate::getMsgLength();
            data_length += TPropertyLowLimitRate::getMsgLength();
            TPropertyMaxLot::writeBuffer(field.maxLot, buffer);
            buffer += TPropertyMaxLot::getMsgLength();
            data_length += TPropertyMaxLot::getMsgLength();
            TPropertyMinLot::writeBuffer(field.minLot, buffer);
            buffer += TPropertyMinLot::getMsgLength();
            data_length += TPropertyMinLot::getMsgLength();
            TPropertyPubstyle::writeBuffer(field.pubstyle, buffer);
            buffer += TPropertyPubstyle::getMsgLength();
            data_length += TPropertyPubstyle::getMsgLength();
            TPropertyFuselimit::writeBuffer(field.fuselimit, buffer);
            buffer += TPropertyFuselimit::getMsgLength();
            data_length += TPropertyFuselimit::getMsgLength();
            TPropertyFusepersisttime::writeBuffer(field.fusepersisttime, buffer);
            buffer += TPropertyFusepersisttime::getMsgLength();
            data_length += TPropertyFusepersisttime::getMsgLength();
            TPropertyFusepoint::writeBuffer(field.fusepoint, buffer);
            buffer += TPropertyFusepoint::getMsgLength();
            data_length += TPropertyFusepoint::getMsgLength();
            TPropertyFuseFlag::writeBuffer(field.fuseFlag, buffer);
            buffer += TPropertyFuseFlag::getMsgLength();
            data_length += TPropertyFuseFlag::getMsgLength();
            TPropertyForcedistime::writeBuffer(field.forcedistime, buffer);
            buffer += TPropertyForcedistime::getMsgLength();
            data_length += TPropertyForcedistime::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, InstrumentField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyMarketId::readBuffer(buffer, field.marketId);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyInstrumentName::readBuffer(buffer, field.instrumentName);
            buffer += TPropertyInstrumentName::getMsgLength();
            data_length += TPropertyInstrumentName::getMsgLength();
            TPropertyShortCutKey::readBuffer(buffer, field.shortCutKey);
            buffer += TPropertyShortCutKey::getMsgLength();
            data_length += TPropertyShortCutKey::getMsgLength();
            TPropertyStartTrdDate::readBuffer(buffer, field.startTrdDate);
            buffer += TPropertyStartTrdDate::getMsgLength();
            data_length += TPropertyStartTrdDate::getMsgLength();
            TPropertyEndTrdDate::readBuffer(buffer, field.endTrdDate);
            buffer += TPropertyEndTrdDate::getMsgLength();
            data_length += TPropertyEndTrdDate::getMsgLength();
            TPropertyInstrumentType::readBuffer(buffer, field.instrumentType);
            buffer += TPropertyInstrumentType::getMsgLength();
            data_length += TPropertyInstrumentType::getMsgLength();
            TPropertyEndDelvDate::readBuffer(buffer, field.endDelvDate);
            buffer += TPropertyEndDelvDate::getMsgLength();
            data_length += TPropertyEndDelvDate::getMsgLength();
            TPropertyStartDelvDate::readBuffer(buffer, field.startDelvDate);
            buffer += TPropertyStartDelvDate::getMsgLength();
            data_length += TPropertyStartDelvDate::getMsgLength();
            TPropertyInstrStopCode::readBuffer(buffer, field.instrStopCode);
            buffer += TPropertyInstrStopCode::getMsgLength();
            data_length += TPropertyInstrStopCode::getMsgLength();
            TPropertyCurrency::readBuffer(buffer, field.currency);
            buffer += TPropertyCurrency::getMsgLength();
            data_length += TPropertyCurrency::getMsgLength();
            TPropertyTradeRights::readBuffer(buffer, field.tradeRights);
            buffer += TPropertyTradeRights::getMsgLength();
            data_length += TPropertyTradeRights::getMsgLength();
            TPropertyFuseRights::readBuffer(buffer, field.fuseRights);
            buffer += TPropertyFuseRights::getMsgLength();
            data_length += TPropertyFuseRights::getMsgLength();
            TPropertyUnit::readBuffer(buffer, field.unit);
            buffer += TPropertyUnit::getMsgLength();
            data_length += TPropertyUnit::getMsgLength();
            TPropertyTick::readBuffer(buffer, field.tick);
            buffer += TPropertyTick::getMsgLength();
            data_length += TPropertyTick::getMsgLength();
            TPropertyHighLimitRate::readBuffer(buffer, field.highLimitRate);
            buffer += TPropertyHighLimitRate::getMsgLength();
            data_length += TPropertyHighLimitRate::getMsgLength();
            TPropertyLowLimitRate::readBuffer(buffer, field.lowLimitRate);
            buffer += TPropertyLowLimitRate::getMsgLength();
            data_length += TPropertyLowLimitRate::getMsgLength();
            TPropertyMaxLot::readBuffer(buffer, field.maxLot);
            buffer += TPropertyMaxLot::getMsgLength();
            data_length += TPropertyMaxLot::getMsgLength();
            TPropertyMinLot::readBuffer(buffer, field.minLot);
            buffer += TPropertyMinLot::getMsgLength();
            data_length += TPropertyMinLot::getMsgLength();
            TPropertyPubstyle::readBuffer(buffer, field.pubstyle);
            buffer += TPropertyPubstyle::getMsgLength();
            data_length += TPropertyPubstyle::getMsgLength();
            TPropertyFuselimit::readBuffer(buffer, field.fuselimit);
            buffer += TPropertyFuselimit::getMsgLength();
            data_length += TPropertyFuselimit::getMsgLength();
            TPropertyFusepersisttime::readBuffer(buffer, field.fusepersisttime);
            buffer += TPropertyFusepersisttime::getMsgLength();
            data_length += TPropertyFusepersisttime::getMsgLength();
            TPropertyFusepoint::readBuffer(buffer, field.fusepoint);
            buffer += TPropertyFusepoint::getMsgLength();
            data_length += TPropertyFusepoint::getMsgLength();
            TPropertyFuseFlag::readBuffer(buffer, field.fuseFlag);
            buffer += TPropertyFuseFlag::getMsgLength();
            data_length += TPropertyFuseFlag::getMsgLength();
            TPropertyForcedistime::readBuffer(buffer, field.forcedistime);
            buffer += TPropertyForcedistime::getMsgLength();
            data_length += TPropertyForcedistime::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif