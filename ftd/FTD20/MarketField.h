/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_MARKETFIELD_H
#define FTD20_MARKETFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct MarketField
{
    TTItemMarketId marketId;
    TTItemMarketName marketName;
    TTItemBroadcastSequenceSeries broadcastSequenceSeries;
    TTItemTradeType tradeType;
};

class MarketFieldHelper
{
public:
	static void writeBuffer(const MarketField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemMarketName::writeBuffer(field.marketName, buffer);
        buffer += TItemMarketName::getMsgLength();
        data_length += TItemMarketName::getMsgLength();
        TItemBroadcastSequenceSeries::writeBuffer(field.broadcastSequenceSeries, buffer);
        buffer += TItemBroadcastSequenceSeries::getMsgLength();
        data_length += TItemBroadcastSequenceSeries::getMsgLength();
        TItemTradeType::writeBuffer(field.tradeType, buffer);
        buffer += TItemTradeType::getMsgLength();
        data_length += TItemTradeType::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, MarketField& field, int& readLen)
	{
		int data_length = 0;
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemMarketName::readBuffer(buffer, field.marketName);
        buffer += TItemMarketName::getMsgLength();
        data_length += TItemMarketName::getMsgLength();
        TItemBroadcastSequenceSeries::readBuffer(buffer, field.broadcastSequenceSeries);
        buffer += TItemBroadcastSequenceSeries::getMsgLength();
        data_length += TItemBroadcastSequenceSeries::getMsgLength();
        TItemTradeType::readBuffer(buffer, field.tradeType);
        buffer += TItemTradeType::getMsgLength();
        data_length += TItemTradeType::getMsgLength();
		readLen = data_length;
	}
};

}
#endif