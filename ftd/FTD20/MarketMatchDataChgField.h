#ifndef FTD20_MARKETMATCHDATACHGFIELD_H
#define FTD20_MARKETMATCHDATACHGFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct MarketMatchDataChgField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyOpenPrice openPrice;
            TTPropertyHighPrice highPrice;
            TTPropertyLowPrice lowPrice;
            TTPropertyLastPrice lastPrice;
            TTPropertyBidPrice bidPrice;
            TTPropertyAskPrice askPrice;
            TTPropertyBidLot bidLot;
            TTPropertyAskLot askLot;
            TTPropertyVolume volume;
            TTPropertyOpenInterest openInterest;
	};

	class MarketMatchDataChgFieldHelper
	{
	public:
		static void writeBuffer(const MarketMatchDataChgField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyOpenPrice::writeBuffer(field.openPrice, buffer);
            buffer += TPropertyOpenPrice::getMsgLength();
            data_length += TPropertyOpenPrice::getMsgLength();
            TPropertyHighPrice::writeBuffer(field.highPrice, buffer);
            buffer += TPropertyHighPrice::getMsgLength();
            data_length += TPropertyHighPrice::getMsgLength();
            TPropertyLowPrice::writeBuffer(field.lowPrice, buffer);
            buffer += TPropertyLowPrice::getMsgLength();
            data_length += TPropertyLowPrice::getMsgLength();
            TPropertyLastPrice::writeBuffer(field.lastPrice, buffer);
            buffer += TPropertyLastPrice::getMsgLength();
            data_length += TPropertyLastPrice::getMsgLength();
            TPropertyBidPrice::writeBuffer(field.bidPrice, buffer);
            buffer += TPropertyBidPrice::getMsgLength();
            data_length += TPropertyBidPrice::getMsgLength();
            TPropertyAskPrice::writeBuffer(field.askPrice, buffer);
            buffer += TPropertyAskPrice::getMsgLength();
            data_length += TPropertyAskPrice::getMsgLength();
            TPropertyBidLot::writeBuffer(field.bidLot, buffer);
            buffer += TPropertyBidLot::getMsgLength();
            data_length += TPropertyBidLot::getMsgLength();
            TPropertyAskLot::writeBuffer(field.askLot, buffer);
            buffer += TPropertyAskLot::getMsgLength();
            data_length += TPropertyAskLot::getMsgLength();
            TPropertyVolume::writeBuffer(field.volume, buffer);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyOpenInterest::writeBuffer(field.openInterest, buffer);
            buffer += TPropertyOpenInterest::getMsgLength();
            data_length += TPropertyOpenInterest::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketMatchDataChgField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyOpenPrice::readBuffer(buffer, field.openPrice);
            buffer += TPropertyOpenPrice::getMsgLength();
            data_length += TPropertyOpenPrice::getMsgLength();
            TPropertyHighPrice::readBuffer(buffer, field.highPrice);
            buffer += TPropertyHighPrice::getMsgLength();
            data_length += TPropertyHighPrice::getMsgLength();
            TPropertyLowPrice::readBuffer(buffer, field.lowPrice);
            buffer += TPropertyLowPrice::getMsgLength();
            data_length += TPropertyLowPrice::getMsgLength();
            TPropertyLastPrice::readBuffer(buffer, field.lastPrice);
            buffer += TPropertyLastPrice::getMsgLength();
            data_length += TPropertyLastPrice::getMsgLength();
            TPropertyBidPrice::readBuffer(buffer, field.bidPrice);
            buffer += TPropertyBidPrice::getMsgLength();
            data_length += TPropertyBidPrice::getMsgLength();
            TPropertyAskPrice::readBuffer(buffer, field.askPrice);
            buffer += TPropertyAskPrice::getMsgLength();
            data_length += TPropertyAskPrice::getMsgLength();
            TPropertyBidLot::readBuffer(buffer, field.bidLot);
            buffer += TPropertyBidLot::getMsgLength();
            data_length += TPropertyBidLot::getMsgLength();
            TPropertyAskLot::readBuffer(buffer, field.askLot);
            buffer += TPropertyAskLot::getMsgLength();
            data_length += TPropertyAskLot::getMsgLength();
            TPropertyVolume::readBuffer(buffer, field.volume);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyOpenInterest::readBuffer(buffer, field.openInterest);
            buffer += TPropertyOpenInterest::getMsgLength();
            data_length += TPropertyOpenInterest::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif