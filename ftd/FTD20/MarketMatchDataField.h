#ifndef FTD20_MARKETMATCHDATAFIELD_H
#define FTD20_MARKETMATCHDATAFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct MarketMatchDataField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyPreClose preClose;
            TTPropertyPreSettle preSettle;
            TTPropertyPreOpenInterest preOpenInterest;
            TTPropertyOpenPrice openPrice;
            TTPropertyBidPrice bidPrice;
            TTPropertyBidLot bidLot;
            TTPropertyAskPrice askPrice;
            TTPropertyAskLot askLot;
            TTPropertyLastPrice lastPrice;
            TTPropertyLastLot lastLot;
            TTPropertyTradeLot tradeLot;
            TTPropertyTradeTurnover tradeTurnover;
            TTPropertyOpenInterest openInterest;
            TTPropertyHighPrice highPrice;
            TTPropertyLowPrice lowPrice;
            TTPropertyClosePrice closePrice;
            TTPropertySettlePrice settlePrice;
            TTPropertyClearPrice clearPrice;
            TTPropertyAveragePrice averagePrice;
            TTPropertyLifeHigh lifeHigh;
            TTPropertyLifeLow lifeLow;
            TTPropertyHighLimit highLimit;
            TTPropertyLowLimit lowLimit;
            TTPropertyTotalVolume totalVolume;
            TTPropertyUpdateTime updateTime;
            TTPropertyMarketMatchDataStatus marketMatchDataStatus;
            TTPropertyTotalMarketMatchData totalMarketMatchData;
            TTPropertyBroadcastSequenceNo broadcastSequenceNo;
	};

	class MarketMatchDataFieldHelper
	{
	public:
		static void writeBuffer(const MarketMatchDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyPreClose::writeBuffer(field.preClose, buffer);
            buffer += TPropertyPreClose::getMsgLength();
            data_length += TPropertyPreClose::getMsgLength();
            TPropertyPreSettle::writeBuffer(field.preSettle, buffer);
            buffer += TPropertyPreSettle::getMsgLength();
            data_length += TPropertyPreSettle::getMsgLength();
            TPropertyPreOpenInterest::writeBuffer(field.preOpenInterest, buffer);
            buffer += TPropertyPreOpenInterest::getMsgLength();
            data_length += TPropertyPreOpenInterest::getMsgLength();
            TPropertyOpenPrice::writeBuffer(field.openPrice, buffer);
            buffer += TPropertyOpenPrice::getMsgLength();
            data_length += TPropertyOpenPrice::getMsgLength();
            TPropertyBidPrice::writeBuffer(field.bidPrice, buffer);
            buffer += TPropertyBidPrice::getMsgLength();
            data_length += TPropertyBidPrice::getMsgLength();
            TPropertyBidLot::writeBuffer(field.bidLot, buffer);
            buffer += TPropertyBidLot::getMsgLength();
            data_length += TPropertyBidLot::getMsgLength();
            TPropertyAskPrice::writeBuffer(field.askPrice, buffer);
            buffer += TPropertyAskPrice::getMsgLength();
            data_length += TPropertyAskPrice::getMsgLength();
            TPropertyAskLot::writeBuffer(field.askLot, buffer);
            buffer += TPropertyAskLot::getMsgLength();
            data_length += TPropertyAskLot::getMsgLength();
            TPropertyLastPrice::writeBuffer(field.lastPrice, buffer);
            buffer += TPropertyLastPrice::getMsgLength();
            data_length += TPropertyLastPrice::getMsgLength();
            TPropertyLastLot::writeBuffer(field.lastLot, buffer);
            buffer += TPropertyLastLot::getMsgLength();
            data_length += TPropertyLastLot::getMsgLength();
            TPropertyTradeLot::writeBuffer(field.tradeLot, buffer);
            buffer += TPropertyTradeLot::getMsgLength();
            data_length += TPropertyTradeLot::getMsgLength();
            TPropertyTradeTurnover::writeBuffer(field.tradeTurnover, buffer);
            buffer += TPropertyTradeTurnover::getMsgLength();
            data_length += TPropertyTradeTurnover::getMsgLength();
            TPropertyOpenInterest::writeBuffer(field.openInterest, buffer);
            buffer += TPropertyOpenInterest::getMsgLength();
            data_length += TPropertyOpenInterest::getMsgLength();
            TPropertyHighPrice::writeBuffer(field.highPrice, buffer);
            buffer += TPropertyHighPrice::getMsgLength();
            data_length += TPropertyHighPrice::getMsgLength();
            TPropertyLowPrice::writeBuffer(field.lowPrice, buffer);
            buffer += TPropertyLowPrice::getMsgLength();
            data_length += TPropertyLowPrice::getMsgLength();
            TPropertyClosePrice::writeBuffer(field.closePrice, buffer);
            buffer += TPropertyClosePrice::getMsgLength();
            data_length += TPropertyClosePrice::getMsgLength();
            TPropertySettlePrice::writeBuffer(field.settlePrice, buffer);
            buffer += TPropertySettlePrice::getMsgLength();
            data_length += TPropertySettlePrice::getMsgLength();
            TPropertyClearPrice::writeBuffer(field.clearPrice, buffer);
            buffer += TPropertyClearPrice::getMsgLength();
            data_length += TPropertyClearPrice::getMsgLength();
            TPropertyAveragePrice::writeBuffer(field.averagePrice, buffer);
            buffer += TPropertyAveragePrice::getMsgLength();
            data_length += TPropertyAveragePrice::getMsgLength();
            TPropertyLifeHigh::writeBuffer(field.lifeHigh, buffer);
            buffer += TPropertyLifeHigh::getMsgLength();
            data_length += TPropertyLifeHigh::getMsgLength();
            TPropertyLifeLow::writeBuffer(field.lifeLow, buffer);
            buffer += TPropertyLifeLow::getMsgLength();
            data_length += TPropertyLifeLow::getMsgLength();
            TPropertyHighLimit::writeBuffer(field.highLimit, buffer);
            buffer += TPropertyHighLimit::getMsgLength();
            data_length += TPropertyHighLimit::getMsgLength();
            TPropertyLowLimit::writeBuffer(field.lowLimit, buffer);
            buffer += TPropertyLowLimit::getMsgLength();
            data_length += TPropertyLowLimit::getMsgLength();
            TPropertyTotalVolume::writeBuffer(field.totalVolume, buffer);
            buffer += TPropertyTotalVolume::getMsgLength();
            data_length += TPropertyTotalVolume::getMsgLength();
            TPropertyUpdateTime::writeBuffer(field.updateTime, buffer);
            buffer += TPropertyUpdateTime::getMsgLength();
            data_length += TPropertyUpdateTime::getMsgLength();
            TPropertyMarketMatchDataStatus::writeBuffer(field.marketMatchDataStatus, buffer);
            buffer += TPropertyMarketMatchDataStatus::getMsgLength();
            data_length += TPropertyMarketMatchDataStatus::getMsgLength();
            TPropertyTotalMarketMatchData::writeBuffer(field.totalMarketMatchData, buffer);
            buffer += TPropertyTotalMarketMatchData::getMsgLength();
            data_length += TPropertyTotalMarketMatchData::getMsgLength();
            TPropertyBroadcastSequenceNo::writeBuffer(field.broadcastSequenceNo, buffer);
            buffer += TPropertyBroadcastSequenceNo::getMsgLength();
            data_length += TPropertyBroadcastSequenceNo::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketMatchDataField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyPreClose::readBuffer(buffer, field.preClose);
            buffer += TPropertyPreClose::getMsgLength();
            data_length += TPropertyPreClose::getMsgLength();
            TPropertyPreSettle::readBuffer(buffer, field.preSettle);
            buffer += TPropertyPreSettle::getMsgLength();
            data_length += TPropertyPreSettle::getMsgLength();
            TPropertyPreOpenInterest::readBuffer(buffer, field.preOpenInterest);
            buffer += TPropertyPreOpenInterest::getMsgLength();
            data_length += TPropertyPreOpenInterest::getMsgLength();
            TPropertyOpenPrice::readBuffer(buffer, field.openPrice);
            buffer += TPropertyOpenPrice::getMsgLength();
            data_length += TPropertyOpenPrice::getMsgLength();
            TPropertyBidPrice::readBuffer(buffer, field.bidPrice);
            buffer += TPropertyBidPrice::getMsgLength();
            data_length += TPropertyBidPrice::getMsgLength();
            TPropertyBidLot::readBuffer(buffer, field.bidLot);
            buffer += TPropertyBidLot::getMsgLength();
            data_length += TPropertyBidLot::getMsgLength();
            TPropertyAskPrice::readBuffer(buffer, field.askPrice);
            buffer += TPropertyAskPrice::getMsgLength();
            data_length += TPropertyAskPrice::getMsgLength();
            TPropertyAskLot::readBuffer(buffer, field.askLot);
            buffer += TPropertyAskLot::getMsgLength();
            data_length += TPropertyAskLot::getMsgLength();
            TPropertyLastPrice::readBuffer(buffer, field.lastPrice);
            buffer += TPropertyLastPrice::getMsgLength();
            data_length += TPropertyLastPrice::getMsgLength();
            TPropertyLastLot::readBuffer(buffer, field.lastLot);
            buffer += TPropertyLastLot::getMsgLength();
            data_length += TPropertyLastLot::getMsgLength();
            TPropertyTradeLot::readBuffer(buffer, field.tradeLot);
            buffer += TPropertyTradeLot::getMsgLength();
            data_length += TPropertyTradeLot::getMsgLength();
            TPropertyTradeTurnover::readBuffer(buffer, field.tradeTurnover);
            buffer += TPropertyTradeTurnover::getMsgLength();
            data_length += TPropertyTradeTurnover::getMsgLength();
            TPropertyOpenInterest::readBuffer(buffer, field.openInterest);
            buffer += TPropertyOpenInterest::getMsgLength();
            data_length += TPropertyOpenInterest::getMsgLength();
            TPropertyHighPrice::readBuffer(buffer, field.highPrice);
            buffer += TPropertyHighPrice::getMsgLength();
            data_length += TPropertyHighPrice::getMsgLength();
            TPropertyLowPrice::readBuffer(buffer, field.lowPrice);
            buffer += TPropertyLowPrice::getMsgLength();
            data_length += TPropertyLowPrice::getMsgLength();
            TPropertyClosePrice::readBuffer(buffer, field.closePrice);
            buffer += TPropertyClosePrice::getMsgLength();
            data_length += TPropertyClosePrice::getMsgLength();
            TPropertySettlePrice::readBuffer(buffer, field.settlePrice);
            buffer += TPropertySettlePrice::getMsgLength();
            data_length += TPropertySettlePrice::getMsgLength();
            TPropertyClearPrice::readBuffer(buffer, field.clearPrice);
            buffer += TPropertyClearPrice::getMsgLength();
            data_length += TPropertyClearPrice::getMsgLength();
            TPropertyAveragePrice::readBuffer(buffer, field.averagePrice);
            buffer += TPropertyAveragePrice::getMsgLength();
            data_length += TPropertyAveragePrice::getMsgLength();
            TPropertyLifeHigh::readBuffer(buffer, field.lifeHigh);
            buffer += TPropertyLifeHigh::getMsgLength();
            data_length += TPropertyLifeHigh::getMsgLength();
            TPropertyLifeLow::readBuffer(buffer, field.lifeLow);
            buffer += TPropertyLifeLow::getMsgLength();
            data_length += TPropertyLifeLow::getMsgLength();
            TPropertyHighLimit::readBuffer(buffer, field.highLimit);
            buffer += TPropertyHighLimit::getMsgLength();
            data_length += TPropertyHighLimit::getMsgLength();
            TPropertyLowLimit::readBuffer(buffer, field.lowLimit);
            buffer += TPropertyLowLimit::getMsgLength();
            data_length += TPropertyLowLimit::getMsgLength();
            TPropertyTotalVolume::readBuffer(buffer, field.totalVolume);
            buffer += TPropertyTotalVolume::getMsgLength();
            data_length += TPropertyTotalVolume::getMsgLength();
            TPropertyUpdateTime::readBuffer(buffer, field.updateTime);
            buffer += TPropertyUpdateTime::getMsgLength();
            data_length += TPropertyUpdateTime::getMsgLength();
            TPropertyMarketMatchDataStatus::readBuffer(buffer, field.marketMatchDataStatus);
            buffer += TPropertyMarketMatchDataStatus::getMsgLength();
            data_length += TPropertyMarketMatchDataStatus::getMsgLength();
            TPropertyTotalMarketMatchData::readBuffer(buffer, field.totalMarketMatchData);
            buffer += TPropertyTotalMarketMatchData::getMsgLength();
            data_length += TPropertyTotalMarketMatchData::getMsgLength();
            TPropertyBroadcastSequenceNo::readBuffer(buffer, field.broadcastSequenceNo);
            buffer += TPropertyBroadcastSequenceNo::getMsgLength();
            data_length += TPropertyBroadcastSequenceNo::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif