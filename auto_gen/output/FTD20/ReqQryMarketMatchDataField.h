/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYMARKETMATCHDATAFIELD_H
#define FTD20_REQQRYMARKETMATCHDATAFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqQryMarketMatchDataField
	{
            TTItemInstrumentId instrumentId;
	};

	class ReqQryMarketMatchDataFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryMarketMatchDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryMarketMatchDataField& field, int& readLen)
		{
			int data_length = 0;
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif