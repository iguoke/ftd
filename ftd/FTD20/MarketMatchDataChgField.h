/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_MARKETMATCHDATACHGFIELD_H
#define FTD20_MARKETMATCHDATACHGFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct MarketMatchDataChgField
	{
            TTItemInstrumentId instrumentId;
            TTItemInstrumentVersion instrumentVersion;
            TTItemOpenPrice openPrice;
            TTItemHighPrice highPrice;
            TTItemLowPrice lowPrice;
            TTItemLastPrice lastPrice;
            TTItemBidPrice bidPrice;
            TTItemAskPrice askPrice;
            TTItemBidLot bidLot;
            TTItemAskLot askLot;
            TTItemVolume volume;
            TTItemOpenInterest openInterest;
	};

	class MarketMatchDataChgFieldHelper
	{
	public:
		static void writeBuffer(const MarketMatchDataChgField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemOpenPrice::writeBuffer(field.openPrice, buffer);
            buffer += TItemOpenPrice::getMsgLength();
            data_length += TItemOpenPrice::getMsgLength();
            TItemHighPrice::writeBuffer(field.highPrice, buffer);
            buffer += TItemHighPrice::getMsgLength();
            data_length += TItemHighPrice::getMsgLength();
            TItemLowPrice::writeBuffer(field.lowPrice, buffer);
            buffer += TItemLowPrice::getMsgLength();
            data_length += TItemLowPrice::getMsgLength();
            TItemLastPrice::writeBuffer(field.lastPrice, buffer);
            buffer += TItemLastPrice::getMsgLength();
            data_length += TItemLastPrice::getMsgLength();
            TItemBidPrice::writeBuffer(field.bidPrice, buffer);
            buffer += TItemBidPrice::getMsgLength();
            data_length += TItemBidPrice::getMsgLength();
            TItemAskPrice::writeBuffer(field.askPrice, buffer);
            buffer += TItemAskPrice::getMsgLength();
            data_length += TItemAskPrice::getMsgLength();
            TItemBidLot::writeBuffer(field.bidLot, buffer);
            buffer += TItemBidLot::getMsgLength();
            data_length += TItemBidLot::getMsgLength();
            TItemAskLot::writeBuffer(field.askLot, buffer);
            buffer += TItemAskLot::getMsgLength();
            data_length += TItemAskLot::getMsgLength();
            TItemVolume::writeBuffer(field.volume, buffer);
            buffer += TItemVolume::getMsgLength();
            data_length += TItemVolume::getMsgLength();
            TItemOpenInterest::writeBuffer(field.openInterest, buffer);
            buffer += TItemOpenInterest::getMsgLength();
            data_length += TItemOpenInterest::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketMatchDataChgField& field, int& readLen)
		{
			int data_length = 0;
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemOpenPrice::readBuffer(buffer, field.openPrice);
            buffer += TItemOpenPrice::getMsgLength();
            data_length += TItemOpenPrice::getMsgLength();
            TItemHighPrice::readBuffer(buffer, field.highPrice);
            buffer += TItemHighPrice::getMsgLength();
            data_length += TItemHighPrice::getMsgLength();
            TItemLowPrice::readBuffer(buffer, field.lowPrice);
            buffer += TItemLowPrice::getMsgLength();
            data_length += TItemLowPrice::getMsgLength();
            TItemLastPrice::readBuffer(buffer, field.lastPrice);
            buffer += TItemLastPrice::getMsgLength();
            data_length += TItemLastPrice::getMsgLength();
            TItemBidPrice::readBuffer(buffer, field.bidPrice);
            buffer += TItemBidPrice::getMsgLength();
            data_length += TItemBidPrice::getMsgLength();
            TItemAskPrice::readBuffer(buffer, field.askPrice);
            buffer += TItemAskPrice::getMsgLength();
            data_length += TItemAskPrice::getMsgLength();
            TItemBidLot::readBuffer(buffer, field.bidLot);
            buffer += TItemBidLot::getMsgLength();
            data_length += TItemBidLot::getMsgLength();
            TItemAskLot::readBuffer(buffer, field.askLot);
            buffer += TItemAskLot::getMsgLength();
            data_length += TItemAskLot::getMsgLength();
            TItemVolume::readBuffer(buffer, field.volume);
            buffer += TItemVolume::getMsgLength();
            data_length += TItemVolume::getMsgLength();
            TItemOpenInterest::readBuffer(buffer, field.openInterest);
            buffer += TItemOpenInterest::getMsgLength();
            data_length += TItemOpenInterest::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif