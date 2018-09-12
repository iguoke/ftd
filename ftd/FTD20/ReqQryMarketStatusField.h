/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYMARKETSTATUSFIELD_H
#define FTD20_REQQRYMARKETSTATUSFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ReqQryMarketStatusField
{
    TTItemMarketId marketId;
};

class ReqQryMarketStatusFieldHelper
{
public:
	static void writeBuffer(const ReqQryMarketStatusField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ReqQryMarketStatusField& field, int& readLen)
	{
		int data_length = 0;
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif