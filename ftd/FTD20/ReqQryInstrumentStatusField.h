/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYINSTRUMENTSTATUSFIELD_H
#define FTD20_REQQRYINSTRUMENTSTATUSFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ReqQryInstrumentStatusField
{
    TTItemMarketId marketId;
    TTItemInstrumentId instrumentId;
};

class ReqQryInstrumentStatusFieldHelper
{
public:
	static void writeBuffer(const ReqQryInstrumentStatusField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ReqQryInstrumentStatusField& field, int& readLen)
	{
		int data_length = 0;
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif