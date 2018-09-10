#ifndef FTD20_MARKETFIELD_H
#define FTD20_MARKETFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct MarketField
	{
            TTPropertyMarketId marketId;
            TTPropertyMarketName marketName;
            TTPropertyBroadcastSequenceSeries broadcastSequenceSeries;
            TTPropertyTradeType tradeType;
	};

	class MarketFieldHelper
	{
	public:
		static void writeBuffer(const MarketField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyMarketId::writeBuffer(field.marketId, buffer);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyMarketName::writeBuffer(field.marketName, buffer);
            buffer += TPropertyMarketName::getMsgLength();
            data_length += TPropertyMarketName::getMsgLength();
            TPropertyBroadcastSequenceSeries::writeBuffer(field.broadcastSequenceSeries, buffer);
            buffer += TPropertyBroadcastSequenceSeries::getMsgLength();
            data_length += TPropertyBroadcastSequenceSeries::getMsgLength();
            TPropertyTradeType::writeBuffer(field.tradeType, buffer);
            buffer += TPropertyTradeType::getMsgLength();
            data_length += TPropertyTradeType::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyMarketId::readBuffer(buffer, field.marketId);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyMarketName::readBuffer(buffer, field.marketName);
            buffer += TPropertyMarketName::getMsgLength();
            data_length += TPropertyMarketName::getMsgLength();
            TPropertyBroadcastSequenceSeries::readBuffer(buffer, field.broadcastSequenceSeries);
            buffer += TPropertyBroadcastSequenceSeries::getMsgLength();
            data_length += TPropertyBroadcastSequenceSeries::getMsgLength();
            TPropertyTradeType::readBuffer(buffer, field.tradeType);
            buffer += TPropertyTradeType::getMsgLength();
            data_length += TPropertyTradeType::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif