/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_INSTRUMENTFIELD_H
#define FTD20_INSTRUMENTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct InstrumentField
{
    TTItemMarketId marketId;
    TTItemInstrumentId instrumentId;
    TTItemInstrumentVersion instrumentVersion;
    TTItemInstrumentName instrumentName;
    TTItemShortCutKey shortCutKey;
    TTItemStartTrdDate startTrdDate;
    TTItemEndTrdDate endTrdDate;
    TTItemInstrumentType instrumentType;
    TTItemEndDelvDate endDelvDate;
    TTItemStartDelvDate startDelvDate;
    TTItemInstrStopCode instrStopCode;
    TTItemCurrency currency;
    TTItemTradeRights tradeRights;
    TTItemFuseRights fuseRights;
    TTItemUnit unit;
    TTItemTick tick;
    TTItemHighLimitRate highLimitRate;
    TTItemLowLimitRate lowLimitRate;
    TTItemMaxLot maxLot;
    TTItemMinLot minLot;
    TTItemPubstyle pubstyle;
    TTItemFuselimit fuselimit;
    TTItemFusepersisttime fusepersisttime;
    TTItemFusepoint fusepoint;
    TTItemFuseFlag fuseFlag;
    TTItemForcedistime forcedistime;
};

class InstrumentFieldHelper
{
public:
	static void writeBuffer(const InstrumentField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemInstrumentName::writeBuffer(field.instrumentName, buffer);
        buffer += TItemInstrumentName::getMsgLength();
        data_length += TItemInstrumentName::getMsgLength();
        TItemShortCutKey::writeBuffer(field.shortCutKey, buffer);
        buffer += TItemShortCutKey::getMsgLength();
        data_length += TItemShortCutKey::getMsgLength();
        TItemStartTrdDate::writeBuffer(field.startTrdDate, buffer);
        buffer += TItemStartTrdDate::getMsgLength();
        data_length += TItemStartTrdDate::getMsgLength();
        TItemEndTrdDate::writeBuffer(field.endTrdDate, buffer);
        buffer += TItemEndTrdDate::getMsgLength();
        data_length += TItemEndTrdDate::getMsgLength();
        TItemInstrumentType::writeBuffer(field.instrumentType, buffer);
        buffer += TItemInstrumentType::getMsgLength();
        data_length += TItemInstrumentType::getMsgLength();
        TItemEndDelvDate::writeBuffer(field.endDelvDate, buffer);
        buffer += TItemEndDelvDate::getMsgLength();
        data_length += TItemEndDelvDate::getMsgLength();
        TItemStartDelvDate::writeBuffer(field.startDelvDate, buffer);
        buffer += TItemStartDelvDate::getMsgLength();
        data_length += TItemStartDelvDate::getMsgLength();
        TItemInstrStopCode::writeBuffer(field.instrStopCode, buffer);
        buffer += TItemInstrStopCode::getMsgLength();
        data_length += TItemInstrStopCode::getMsgLength();
        TItemCurrency::writeBuffer(field.currency, buffer);
        buffer += TItemCurrency::getMsgLength();
        data_length += TItemCurrency::getMsgLength();
        TItemTradeRights::writeBuffer(field.tradeRights, buffer);
        buffer += TItemTradeRights::getMsgLength();
        data_length += TItemTradeRights::getMsgLength();
        TItemFuseRights::writeBuffer(field.fuseRights, buffer);
        buffer += TItemFuseRights::getMsgLength();
        data_length += TItemFuseRights::getMsgLength();
        TItemUnit::writeBuffer(field.unit, buffer);
        buffer += TItemUnit::getMsgLength();
        data_length += TItemUnit::getMsgLength();
        TItemTick::writeBuffer(field.tick, buffer);
        buffer += TItemTick::getMsgLength();
        data_length += TItemTick::getMsgLength();
        TItemHighLimitRate::writeBuffer(field.highLimitRate, buffer);
        buffer += TItemHighLimitRate::getMsgLength();
        data_length += TItemHighLimitRate::getMsgLength();
        TItemLowLimitRate::writeBuffer(field.lowLimitRate, buffer);
        buffer += TItemLowLimitRate::getMsgLength();
        data_length += TItemLowLimitRate::getMsgLength();
        TItemMaxLot::writeBuffer(field.maxLot, buffer);
        buffer += TItemMaxLot::getMsgLength();
        data_length += TItemMaxLot::getMsgLength();
        TItemMinLot::writeBuffer(field.minLot, buffer);
        buffer += TItemMinLot::getMsgLength();
        data_length += TItemMinLot::getMsgLength();
        TItemPubstyle::writeBuffer(field.pubstyle, buffer);
        buffer += TItemPubstyle::getMsgLength();
        data_length += TItemPubstyle::getMsgLength();
        TItemFuselimit::writeBuffer(field.fuselimit, buffer);
        buffer += TItemFuselimit::getMsgLength();
        data_length += TItemFuselimit::getMsgLength();
        TItemFusepersisttime::writeBuffer(field.fusepersisttime, buffer);
        buffer += TItemFusepersisttime::getMsgLength();
        data_length += TItemFusepersisttime::getMsgLength();
        TItemFusepoint::writeBuffer(field.fusepoint, buffer);
        buffer += TItemFusepoint::getMsgLength();
        data_length += TItemFusepoint::getMsgLength();
        TItemFuseFlag::writeBuffer(field.fuseFlag, buffer);
        buffer += TItemFuseFlag::getMsgLength();
        data_length += TItemFuseFlag::getMsgLength();
        TItemForcedistime::writeBuffer(field.forcedistime, buffer);
        buffer += TItemForcedistime::getMsgLength();
        data_length += TItemForcedistime::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, InstrumentField& field, int& readLen)
	{
		int data_length = 0;
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemInstrumentName::readBuffer(buffer, field.instrumentName);
        buffer += TItemInstrumentName::getMsgLength();
        data_length += TItemInstrumentName::getMsgLength();
        TItemShortCutKey::readBuffer(buffer, field.shortCutKey);
        buffer += TItemShortCutKey::getMsgLength();
        data_length += TItemShortCutKey::getMsgLength();
        TItemStartTrdDate::readBuffer(buffer, field.startTrdDate);
        buffer += TItemStartTrdDate::getMsgLength();
        data_length += TItemStartTrdDate::getMsgLength();
        TItemEndTrdDate::readBuffer(buffer, field.endTrdDate);
        buffer += TItemEndTrdDate::getMsgLength();
        data_length += TItemEndTrdDate::getMsgLength();
        TItemInstrumentType::readBuffer(buffer, field.instrumentType);
        buffer += TItemInstrumentType::getMsgLength();
        data_length += TItemInstrumentType::getMsgLength();
        TItemEndDelvDate::readBuffer(buffer, field.endDelvDate);
        buffer += TItemEndDelvDate::getMsgLength();
        data_length += TItemEndDelvDate::getMsgLength();
        TItemStartDelvDate::readBuffer(buffer, field.startDelvDate);
        buffer += TItemStartDelvDate::getMsgLength();
        data_length += TItemStartDelvDate::getMsgLength();
        TItemInstrStopCode::readBuffer(buffer, field.instrStopCode);
        buffer += TItemInstrStopCode::getMsgLength();
        data_length += TItemInstrStopCode::getMsgLength();
        TItemCurrency::readBuffer(buffer, field.currency);
        buffer += TItemCurrency::getMsgLength();
        data_length += TItemCurrency::getMsgLength();
        TItemTradeRights::readBuffer(buffer, field.tradeRights);
        buffer += TItemTradeRights::getMsgLength();
        data_length += TItemTradeRights::getMsgLength();
        TItemFuseRights::readBuffer(buffer, field.fuseRights);
        buffer += TItemFuseRights::getMsgLength();
        data_length += TItemFuseRights::getMsgLength();
        TItemUnit::readBuffer(buffer, field.unit);
        buffer += TItemUnit::getMsgLength();
        data_length += TItemUnit::getMsgLength();
        TItemTick::readBuffer(buffer, field.tick);
        buffer += TItemTick::getMsgLength();
        data_length += TItemTick::getMsgLength();
        TItemHighLimitRate::readBuffer(buffer, field.highLimitRate);
        buffer += TItemHighLimitRate::getMsgLength();
        data_length += TItemHighLimitRate::getMsgLength();
        TItemLowLimitRate::readBuffer(buffer, field.lowLimitRate);
        buffer += TItemLowLimitRate::getMsgLength();
        data_length += TItemLowLimitRate::getMsgLength();
        TItemMaxLot::readBuffer(buffer, field.maxLot);
        buffer += TItemMaxLot::getMsgLength();
        data_length += TItemMaxLot::getMsgLength();
        TItemMinLot::readBuffer(buffer, field.minLot);
        buffer += TItemMinLot::getMsgLength();
        data_length += TItemMinLot::getMsgLength();
        TItemPubstyle::readBuffer(buffer, field.pubstyle);
        buffer += TItemPubstyle::getMsgLength();
        data_length += TItemPubstyle::getMsgLength();
        TItemFuselimit::readBuffer(buffer, field.fuselimit);
        buffer += TItemFuselimit::getMsgLength();
        data_length += TItemFuselimit::getMsgLength();
        TItemFusepersisttime::readBuffer(buffer, field.fusepersisttime);
        buffer += TItemFusepersisttime::getMsgLength();
        data_length += TItemFusepersisttime::getMsgLength();
        TItemFusepoint::readBuffer(buffer, field.fusepoint);
        buffer += TItemFusepoint::getMsgLength();
        data_length += TItemFusepoint::getMsgLength();
        TItemFuseFlag::readBuffer(buffer, field.fuseFlag);
        buffer += TItemFuseFlag::getMsgLength();
        data_length += TItemFuseFlag::getMsgLength();
        TItemForcedistime::readBuffer(buffer, field.forcedistime);
        buffer += TItemForcedistime::getMsgLength();
        data_length += TItemForcedistime::getMsgLength();
		readLen = data_length;
	}
};

}
#endif