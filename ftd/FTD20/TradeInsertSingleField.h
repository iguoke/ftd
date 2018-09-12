/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_TRADEINSERTSINGLEFIELD_H
#define FTD20_TRADEINSERTSINGLEFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct TradeInsertSingleField
{
    TTItemInstrumentId instrumentId;
    TTItemInstrumentVersion instrumentVersion;
    TTItemCancelFlag cancelFlag;
    TTItemCancelDate cancelDate;
    TTItemCancelTime cancelTime;
    TTItemTradeId tradeId;
    TTItemMatchDate matchDate;
    TTItemMatchTime matchTime;
    TTItemClearDate clearDate;
    TTItemPrice price;
    TTItemVolume volume;
    TTItemOrderSysId orderSysId;
    TTItemUserId userId;
    TTItemDirection direction;
    TTItemOffsetFlag offsetFlag;
    TTItemHedgeFlag hedgeFlag;
    TTItemParticipantId participantId;
    TTItemClientId clientId;
    TTItemOrderLocalId orderLocalId;
};

class TradeInsertSingleFieldHelper
{
public:
	static void writeBuffer(const TradeInsertSingleField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemCancelFlag::writeBuffer(field.cancelFlag, buffer);
        buffer += TItemCancelFlag::getMsgLength();
        data_length += TItemCancelFlag::getMsgLength();
        TItemCancelDate::writeBuffer(field.cancelDate, buffer);
        buffer += TItemCancelDate::getMsgLength();
        data_length += TItemCancelDate::getMsgLength();
        TItemCancelTime::writeBuffer(field.cancelTime, buffer);
        buffer += TItemCancelTime::getMsgLength();
        data_length += TItemCancelTime::getMsgLength();
        TItemTradeId::writeBuffer(field.tradeId, buffer);
        buffer += TItemTradeId::getMsgLength();
        data_length += TItemTradeId::getMsgLength();
        TItemMatchDate::writeBuffer(field.matchDate, buffer);
        buffer += TItemMatchDate::getMsgLength();
        data_length += TItemMatchDate::getMsgLength();
        TItemMatchTime::writeBuffer(field.matchTime, buffer);
        buffer += TItemMatchTime::getMsgLength();
        data_length += TItemMatchTime::getMsgLength();
        TItemClearDate::writeBuffer(field.clearDate, buffer);
        buffer += TItemClearDate::getMsgLength();
        data_length += TItemClearDate::getMsgLength();
        TItemPrice::writeBuffer(field.price, buffer);
        buffer += TItemPrice::getMsgLength();
        data_length += TItemPrice::getMsgLength();
        TItemVolume::writeBuffer(field.volume, buffer);
        buffer += TItemVolume::getMsgLength();
        data_length += TItemVolume::getMsgLength();
        TItemOrderSysId::writeBuffer(field.orderSysId, buffer);
        buffer += TItemOrderSysId::getMsgLength();
        data_length += TItemOrderSysId::getMsgLength();
        TItemUserId::writeBuffer(field.userId, buffer);
        buffer += TItemUserId::getMsgLength();
        data_length += TItemUserId::getMsgLength();
        TItemDirection::writeBuffer(field.direction, buffer);
        buffer += TItemDirection::getMsgLength();
        data_length += TItemDirection::getMsgLength();
        TItemOffsetFlag::writeBuffer(field.offsetFlag, buffer);
        buffer += TItemOffsetFlag::getMsgLength();
        data_length += TItemOffsetFlag::getMsgLength();
        TItemHedgeFlag::writeBuffer(field.hedgeFlag, buffer);
        buffer += TItemHedgeFlag::getMsgLength();
        data_length += TItemHedgeFlag::getMsgLength();
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemClientId::writeBuffer(field.clientId, buffer);
        buffer += TItemClientId::getMsgLength();
        data_length += TItemClientId::getMsgLength();
        TItemOrderLocalId::writeBuffer(field.orderLocalId, buffer);
        buffer += TItemOrderLocalId::getMsgLength();
        data_length += TItemOrderLocalId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, TradeInsertSingleField& field, int& readLen)
	{
		int data_length = 0;
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemCancelFlag::readBuffer(buffer, field.cancelFlag);
        buffer += TItemCancelFlag::getMsgLength();
        data_length += TItemCancelFlag::getMsgLength();
        TItemCancelDate::readBuffer(buffer, field.cancelDate);
        buffer += TItemCancelDate::getMsgLength();
        data_length += TItemCancelDate::getMsgLength();
        TItemCancelTime::readBuffer(buffer, field.cancelTime);
        buffer += TItemCancelTime::getMsgLength();
        data_length += TItemCancelTime::getMsgLength();
        TItemTradeId::readBuffer(buffer, field.tradeId);
        buffer += TItemTradeId::getMsgLength();
        data_length += TItemTradeId::getMsgLength();
        TItemMatchDate::readBuffer(buffer, field.matchDate);
        buffer += TItemMatchDate::getMsgLength();
        data_length += TItemMatchDate::getMsgLength();
        TItemMatchTime::readBuffer(buffer, field.matchTime);
        buffer += TItemMatchTime::getMsgLength();
        data_length += TItemMatchTime::getMsgLength();
        TItemClearDate::readBuffer(buffer, field.clearDate);
        buffer += TItemClearDate::getMsgLength();
        data_length += TItemClearDate::getMsgLength();
        TItemPrice::readBuffer(buffer, field.price);
        buffer += TItemPrice::getMsgLength();
        data_length += TItemPrice::getMsgLength();
        TItemVolume::readBuffer(buffer, field.volume);
        buffer += TItemVolume::getMsgLength();
        data_length += TItemVolume::getMsgLength();
        TItemOrderSysId::readBuffer(buffer, field.orderSysId);
        buffer += TItemOrderSysId::getMsgLength();
        data_length += TItemOrderSysId::getMsgLength();
        TItemUserId::readBuffer(buffer, field.userId);
        buffer += TItemUserId::getMsgLength();
        data_length += TItemUserId::getMsgLength();
        TItemDirection::readBuffer(buffer, field.direction);
        buffer += TItemDirection::getMsgLength();
        data_length += TItemDirection::getMsgLength();
        TItemOffsetFlag::readBuffer(buffer, field.offsetFlag);
        buffer += TItemOffsetFlag::getMsgLength();
        data_length += TItemOffsetFlag::getMsgLength();
        TItemHedgeFlag::readBuffer(buffer, field.hedgeFlag);
        buffer += TItemHedgeFlag::getMsgLength();
        data_length += TItemHedgeFlag::getMsgLength();
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemClientId::readBuffer(buffer, field.clientId);
        buffer += TItemClientId::getMsgLength();
        data_length += TItemClientId::getMsgLength();
        TItemOrderLocalId::readBuffer(buffer, field.orderLocalId);
        buffer += TItemOrderLocalId::getMsgLength();
        data_length += TItemOrderLocalId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif