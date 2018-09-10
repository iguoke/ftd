#ifndef FTD20_REQQRYMARKETSTATUSFIELD_H
#define FTD20_REQQRYMARKETSTATUSFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryMarketStatusField
	{
            TTPropertyMarketId marketId;
	};

	class ReqQryMarketStatusFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryMarketStatusField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyMarketId::writeBuffer(field.marketId, buffer);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryMarketStatusField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyMarketId::readBuffer(buffer, field.marketId);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif