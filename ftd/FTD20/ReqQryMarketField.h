#ifndef FTD20_REQQRYMARKETFIELD_H
#define FTD20_REQQRYMARKETFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryMarketField
	{
            TTPropertyMarketId marketId;
	};

	class ReqQryMarketFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryMarketField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyMarketId::writeBuffer(field.marketId, buffer);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryMarketField& field, int& readLen)
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