/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_MARKETSTATUSFIELD_H
#define FTD20_MARKETSTATUSFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct MarketStatusField
{
    TTItemMarketId marketId;
    TTItemMarketStatusId marketStatusId;
    TTItemBroadcastSequenceNo broadcastSequenceNo;
};

class MarketStatusFieldHelper
{
public:
	static void writeBuffer(const MarketStatusField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemMarketStatusId::writeBuffer(field.marketStatusId, buffer);
        buffer += TItemMarketStatusId::getMsgLength();
        data_length += TItemMarketStatusId::getMsgLength();
        TItemBroadcastSequenceNo::writeBuffer(field.broadcastSequenceNo, buffer);
        buffer += TItemBroadcastSequenceNo::getMsgLength();
        data_length += TItemBroadcastSequenceNo::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, MarketStatusField& field, int& readLen)
	{
		int data_length = 0;
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemMarketStatusId::readBuffer(buffer, field.marketStatusId);
        buffer += TItemMarketStatusId::getMsgLength();
        data_length += TItemMarketStatusId::getMsgLength();
        TItemBroadcastSequenceNo::readBuffer(buffer, field.broadcastSequenceNo);
        buffer += TItemBroadcastSequenceNo::getMsgLength();
        data_length += TItemBroadcastSequenceNo::getMsgLength();
		readLen = data_length;
	}
};

}
#endif