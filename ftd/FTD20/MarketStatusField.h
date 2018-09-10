#ifndef FTD20_MARKETSTATUSFIELD_H
#define FTD20_MARKETSTATUSFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct MarketStatusField
	{
            TTPropertyMarketId marketId;
            TTPropertyMarketStatusId marketStatusId;
            TTPropertyBroadcastSequenceNo broadcastSequenceNo;
	};

	class MarketStatusFieldHelper
	{
	public:
		static void writeBuffer(const MarketStatusField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyMarketId::writeBuffer(field.marketId, buffer);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyMarketStatusId::writeBuffer(field.marketStatusId, buffer);
            buffer += TPropertyMarketStatusId::getMsgLength();
            data_length += TPropertyMarketStatusId::getMsgLength();
            TPropertyBroadcastSequenceNo::writeBuffer(field.broadcastSequenceNo, buffer);
            buffer += TPropertyBroadcastSequenceNo::getMsgLength();
            data_length += TPropertyBroadcastSequenceNo::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketStatusField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyMarketId::readBuffer(buffer, field.marketId);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyMarketStatusId::readBuffer(buffer, field.marketStatusId);
            buffer += TPropertyMarketStatusId::getMsgLength();
            data_length += TPropertyMarketStatusId::getMsgLength();
            TPropertyBroadcastSequenceNo::readBuffer(buffer, field.broadcastSequenceNo);
            buffer += TPropertyBroadcastSequenceNo::getMsgLength();
            data_length += TPropertyBroadcastSequenceNo::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif