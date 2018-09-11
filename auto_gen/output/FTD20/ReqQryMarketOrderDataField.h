/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYMARKETORDERDATAFIELD_H
#define FTD20_REQQRYMARKETORDERDATAFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqQryMarketOrderDataField
	{
            TTItemInstrumentId instrumentId;
            TTItemDirection direction;
	};

	class ReqQryMarketOrderDataFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryMarketOrderDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemDirection::writeBuffer(field.direction, buffer);
            buffer += TItemDirection::getMsgLength();
            data_length += TItemDirection::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryMarketOrderDataField& field, int& readLen)
		{
			int data_length = 0;
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemDirection::readBuffer(buffer, field.direction);
            buffer += TItemDirection::getMsgLength();
            data_length += TItemDirection::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif