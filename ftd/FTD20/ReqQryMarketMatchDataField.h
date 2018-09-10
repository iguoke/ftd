#ifndef FTD20_REQQRYMARKETMATCHDATAFIELD_H
#define FTD20_REQQRYMARKETMATCHDATAFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryMarketMatchDataField
	{
            TTPropertyInstrumentId instrumentId;
	};

	class ReqQryMarketMatchDataFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryMarketMatchDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryMarketMatchDataField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif