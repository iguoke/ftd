#ifndef FTD20_REQQRYMARKETORDERDATAFIELD_H
#define FTD20_REQQRYMARKETORDERDATAFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryMarketOrderDataField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyDirection direction;
	};

	class ReqQryMarketOrderDataFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryMarketOrderDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyDirection::writeBuffer(field.direction, buffer);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryMarketOrderDataField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyDirection::readBuffer(buffer, field.direction);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif