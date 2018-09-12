/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_MARKETMATCHDATAFIELD_H
#define FTD20_MARKETMATCHDATAFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct MarketMatchDataField
{
    TTItemInstrumentId instrumentId;
    TTItemInstrumentVersion instrumentVersion;
    TTItemPreClose preClose;
    TTItemPreSettle preSettle;
    TTItemPreOpenInterest preOpenInterest;
    TTItemOpenPrice openPrice;
    TTItemBidPrice bidPrice;
    TTItemBidLot bidLot;
    TTItemAskPrice askPrice;
    TTItemAskLot askLot;
    TTItemLastPrice lastPrice;
    TTItemLastLot lastLot;
    TTItemTradeLot tradeLot;
    TTItemTradeTurnover tradeTurnover;
    TTItemOpenInterest openInterest;
    TTItemHighPrice highPrice;
    TTItemLowPrice lowPrice;
    TTItemClosePrice closePrice;
    TTItemSettlePrice settlePrice;
    TTItemClearPrice clearPrice;
    TTItemAveragePrice averagePrice;
    TTItemLifeHigh lifeHigh;
    TTItemLifeLow lifeLow;
    TTItemHighLimit highLimit;
    TTItemLowLimit lowLimit;
    TTItemTotalVolume totalVolume;
    TTItemUpdateTime updateTime;
    TTItemMarketMatchDataStatus marketMatchDataStatus;
    TTItemTotalMarketMatchData totalMarketMatchData;
    TTItemBroadcastSequenceNo broadcastSequenceNo;
};

class MarketMatchDataFieldHelper
{
public:
	static void writeBuffer(const MarketMatchDataField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemPreClose::writeBuffer(field.preClose, buffer);
        buffer += TItemPreClose::getMsgLength();
        data_length += TItemPreClose::getMsgLength();
        TItemPreSettle::writeBuffer(field.preSettle, buffer);
        buffer += TItemPreSettle::getMsgLength();
        data_length += TItemPreSettle::getMsgLength();
        TItemPreOpenInterest::writeBuffer(field.preOpenInterest, buffer);
        buffer += TItemPreOpenInterest::getMsgLength();
        data_length += TItemPreOpenInterest::getMsgLength();
        TItemOpenPrice::writeBuffer(field.openPrice, buffer);
        buffer += TItemOpenPrice::getMsgLength();
        data_length += TItemOpenPrice::getMsgLength();
        TItemBidPrice::writeBuffer(field.bidPrice, buffer);
        buffer += TItemBidPrice::getMsgLength();
        data_length += TItemBidPrice::getMsgLength();
        TItemBidLot::writeBuffer(field.bidLot, buffer);
        buffer += TItemBidLot::getMsgLength();
        data_length += TItemBidLot::getMsgLength();
        TItemAskPrice::writeBuffer(field.askPrice, buffer);
        buffer += TItemAskPrice::getMsgLength();
        data_length += TItemAskPrice::getMsgLength();
        TItemAskLot::writeBuffer(field.askLot, buffer);
        buffer += TItemAskLot::getMsgLength();
        data_length += TItemAskLot::getMsgLength();
        TItemLastPrice::writeBuffer(field.lastPrice, buffer);
        buffer += TItemLastPrice::getMsgLength();
        data_length += TItemLastPrice::getMsgLength();
        TItemLastLot::writeBuffer(field.lastLot, buffer);
        buffer += TItemLastLot::getMsgLength();
        data_length += TItemLastLot::getMsgLength();
        TItemTradeLot::writeBuffer(field.tradeLot, buffer);
        buffer += TItemTradeLot::getMsgLength();
        data_length += TItemTradeLot::getMsgLength();
        TItemTradeTurnover::writeBuffer(field.tradeTurnover, buffer);
        buffer += TItemTradeTurnover::getMsgLength();
        data_length += TItemTradeTurnover::getMsgLength();
        TItemOpenInterest::writeBuffer(field.openInterest, buffer);
        buffer += TItemOpenInterest::getMsgLength();
        data_length += TItemOpenInterest::getMsgLength();
        TItemHighPrice::writeBuffer(field.highPrice, buffer);
        buffer += TItemHighPrice::getMsgLength();
        data_length += TItemHighPrice::getMsgLength();
        TItemLowPrice::writeBuffer(field.lowPrice, buffer);
        buffer += TItemLowPrice::getMsgLength();
        data_length += TItemLowPrice::getMsgLength();
        TItemClosePrice::writeBuffer(field.closePrice, buffer);
        buffer += TItemClosePrice::getMsgLength();
        data_length += TItemClosePrice::getMsgLength();
        TItemSettlePrice::writeBuffer(field.settlePrice, buffer);
        buffer += TItemSettlePrice::getMsgLength();
        data_length += TItemSettlePrice::getMsgLength();
        TItemClearPrice::writeBuffer(field.clearPrice, buffer);
        buffer += TItemClearPrice::getMsgLength();
        data_length += TItemClearPrice::getMsgLength();
        TItemAveragePrice::writeBuffer(field.averagePrice, buffer);
        buffer += TItemAveragePrice::getMsgLength();
        data_length += TItemAveragePrice::getMsgLength();
        TItemLifeHigh::writeBuffer(field.lifeHigh, buffer);
        buffer += TItemLifeHigh::getMsgLength();
        data_length += TItemLifeHigh::getMsgLength();
        TItemLifeLow::writeBuffer(field.lifeLow, buffer);
        buffer += TItemLifeLow::getMsgLength();
        data_length += TItemLifeLow::getMsgLength();
        TItemHighLimit::writeBuffer(field.highLimit, buffer);
        buffer += TItemHighLimit::getMsgLength();
        data_length += TItemHighLimit::getMsgLength();
        TItemLowLimit::writeBuffer(field.lowLimit, buffer);
        buffer += TItemLowLimit::getMsgLength();
        data_length += TItemLowLimit::getMsgLength();
        TItemTotalVolume::writeBuffer(field.totalVolume, buffer);
        buffer += TItemTotalVolume::getMsgLength();
        data_length += TItemTotalVolume::getMsgLength();
        TItemUpdateTime::writeBuffer(field.updateTime, buffer);
        buffer += TItemUpdateTime::getMsgLength();
        data_length += TItemUpdateTime::getMsgLength();
        TItemMarketMatchDataStatus::writeBuffer(field.marketMatchDataStatus, buffer);
        buffer += TItemMarketMatchDataStatus::getMsgLength();
        data_length += TItemMarketMatchDataStatus::getMsgLength();
        TItemTotalMarketMatchData::writeBuffer(field.totalMarketMatchData, buffer);
        buffer += TItemTotalMarketMatchData::getMsgLength();
        data_length += TItemTotalMarketMatchData::getMsgLength();
        TItemBroadcastSequenceNo::writeBuffer(field.broadcastSequenceNo, buffer);
        buffer += TItemBroadcastSequenceNo::getMsgLength();
        data_length += TItemBroadcastSequenceNo::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, MarketMatchDataField& field, int& readLen)
	{
		int data_length = 0;
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemPreClose::readBuffer(buffer, field.preClose);
        buffer += TItemPreClose::getMsgLength();
        data_length += TItemPreClose::getMsgLength();
        TItemPreSettle::readBuffer(buffer, field.preSettle);
        buffer += TItemPreSettle::getMsgLength();
        data_length += TItemPreSettle::getMsgLength();
        TItemPreOpenInterest::readBuffer(buffer, field.preOpenInterest);
        buffer += TItemPreOpenInterest::getMsgLength();
        data_length += TItemPreOpenInterest::getMsgLength();
        TItemOpenPrice::readBuffer(buffer, field.openPrice);
        buffer += TItemOpenPrice::getMsgLength();
        data_length += TItemOpenPrice::getMsgLength();
        TItemBidPrice::readBuffer(buffer, field.bidPrice);
        buffer += TItemBidPrice::getMsgLength();
        data_length += TItemBidPrice::getMsgLength();
        TItemBidLot::readBuffer(buffer, field.bidLot);
        buffer += TItemBidLot::getMsgLength();
        data_length += TItemBidLot::getMsgLength();
        TItemAskPrice::readBuffer(buffer, field.askPrice);
        buffer += TItemAskPrice::getMsgLength();
        data_length += TItemAskPrice::getMsgLength();
        TItemAskLot::readBuffer(buffer, field.askLot);
        buffer += TItemAskLot::getMsgLength();
        data_length += TItemAskLot::getMsgLength();
        TItemLastPrice::readBuffer(buffer, field.lastPrice);
        buffer += TItemLastPrice::getMsgLength();
        data_length += TItemLastPrice::getMsgLength();
        TItemLastLot::readBuffer(buffer, field.lastLot);
        buffer += TItemLastLot::getMsgLength();
        data_length += TItemLastLot::getMsgLength();
        TItemTradeLot::readBuffer(buffer, field.tradeLot);
        buffer += TItemTradeLot::getMsgLength();
        data_length += TItemTradeLot::getMsgLength();
        TItemTradeTurnover::readBuffer(buffer, field.tradeTurnover);
        buffer += TItemTradeTurnover::getMsgLength();
        data_length += TItemTradeTurnover::getMsgLength();
        TItemOpenInterest::readBuffer(buffer, field.openInterest);
        buffer += TItemOpenInterest::getMsgLength();
        data_length += TItemOpenInterest::getMsgLength();
        TItemHighPrice::readBuffer(buffer, field.highPrice);
        buffer += TItemHighPrice::getMsgLength();
        data_length += TItemHighPrice::getMsgLength();
        TItemLowPrice::readBuffer(buffer, field.lowPrice);
        buffer += TItemLowPrice::getMsgLength();
        data_length += TItemLowPrice::getMsgLength();
        TItemClosePrice::readBuffer(buffer, field.closePrice);
        buffer += TItemClosePrice::getMsgLength();
        data_length += TItemClosePrice::getMsgLength();
        TItemSettlePrice::readBuffer(buffer, field.settlePrice);
        buffer += TItemSettlePrice::getMsgLength();
        data_length += TItemSettlePrice::getMsgLength();
        TItemClearPrice::readBuffer(buffer, field.clearPrice);
        buffer += TItemClearPrice::getMsgLength();
        data_length += TItemClearPrice::getMsgLength();
        TItemAveragePrice::readBuffer(buffer, field.averagePrice);
        buffer += TItemAveragePrice::getMsgLength();
        data_length += TItemAveragePrice::getMsgLength();
        TItemLifeHigh::readBuffer(buffer, field.lifeHigh);
        buffer += TItemLifeHigh::getMsgLength();
        data_length += TItemLifeHigh::getMsgLength();
        TItemLifeLow::readBuffer(buffer, field.lifeLow);
        buffer += TItemLifeLow::getMsgLength();
        data_length += TItemLifeLow::getMsgLength();
        TItemHighLimit::readBuffer(buffer, field.highLimit);
        buffer += TItemHighLimit::getMsgLength();
        data_length += TItemHighLimit::getMsgLength();
        TItemLowLimit::readBuffer(buffer, field.lowLimit);
        buffer += TItemLowLimit::getMsgLength();
        data_length += TItemLowLimit::getMsgLength();
        TItemTotalVolume::readBuffer(buffer, field.totalVolume);
        buffer += TItemTotalVolume::getMsgLength();
        data_length += TItemTotalVolume::getMsgLength();
        TItemUpdateTime::readBuffer(buffer, field.updateTime);
        buffer += TItemUpdateTime::getMsgLength();
        data_length += TItemUpdateTime::getMsgLength();
        TItemMarketMatchDataStatus::readBuffer(buffer, field.marketMatchDataStatus);
        buffer += TItemMarketMatchDataStatus::getMsgLength();
        data_length += TItemMarketMatchDataStatus::getMsgLength();
        TItemTotalMarketMatchData::readBuffer(buffer, field.totalMarketMatchData);
        buffer += TItemTotalMarketMatchData::getMsgLength();
        data_length += TItemTotalMarketMatchData::getMsgLength();
        TItemBroadcastSequenceNo::readBuffer(buffer, field.broadcastSequenceNo);
        buffer += TItemBroadcastSequenceNo::getMsgLength();
        data_length += TItemBroadcastSequenceNo::getMsgLength();
		readLen = data_length;
	}
};

}
#endif