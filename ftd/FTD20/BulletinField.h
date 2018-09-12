/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_BULLETINFIELD_H
#define FTD20_BULLETINFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct BulletinField
{
    TTItemNewsType newsType;
    TTItemNewsUrgency newsUrgency;
    TTItemSendTime sendTime;
    TTItemAbstract abstract;
    TTItemComeFrom comeFrom;
    TTItemMarketId marketId;
    TTItemContent content;
    TTItemURLLink uRLLink;
};

class BulletinFieldHelper
{
public:
	static void writeBuffer(const BulletinField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemNewsType::writeBuffer(field.newsType, buffer);
        buffer += TItemNewsType::getMsgLength();
        data_length += TItemNewsType::getMsgLength();
        TItemNewsUrgency::writeBuffer(field.newsUrgency, buffer);
        buffer += TItemNewsUrgency::getMsgLength();
        data_length += TItemNewsUrgency::getMsgLength();
        TItemSendTime::writeBuffer(field.sendTime, buffer);
        buffer += TItemSendTime::getMsgLength();
        data_length += TItemSendTime::getMsgLength();
        TItemAbstract::writeBuffer(field.abstract, buffer);
        buffer += TItemAbstract::getMsgLength();
        data_length += TItemAbstract::getMsgLength();
        TItemComeFrom::writeBuffer(field.comeFrom, buffer);
        buffer += TItemComeFrom::getMsgLength();
        data_length += TItemComeFrom::getMsgLength();
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemContent::writeBuffer(field.content, buffer);
        buffer += TItemContent::getMsgLength();
        data_length += TItemContent::getMsgLength();
        TItemURLLink::writeBuffer(field.uRLLink, buffer);
        buffer += TItemURLLink::getMsgLength();
        data_length += TItemURLLink::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, BulletinField& field, int& readLen)
	{
		int data_length = 0;
        TItemNewsType::readBuffer(buffer, field.newsType);
        buffer += TItemNewsType::getMsgLength();
        data_length += TItemNewsType::getMsgLength();
        TItemNewsUrgency::readBuffer(buffer, field.newsUrgency);
        buffer += TItemNewsUrgency::getMsgLength();
        data_length += TItemNewsUrgency::getMsgLength();
        TItemSendTime::readBuffer(buffer, field.sendTime);
        buffer += TItemSendTime::getMsgLength();
        data_length += TItemSendTime::getMsgLength();
        TItemAbstract::readBuffer(buffer, field.abstract);
        buffer += TItemAbstract::getMsgLength();
        data_length += TItemAbstract::getMsgLength();
        TItemComeFrom::readBuffer(buffer, field.comeFrom);
        buffer += TItemComeFrom::getMsgLength();
        data_length += TItemComeFrom::getMsgLength();
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
        TItemContent::readBuffer(buffer, field.content);
        buffer += TItemContent::getMsgLength();
        data_length += TItemContent::getMsgLength();
        TItemURLLink::readBuffer(buffer, field.uRLLink);
        buffer += TItemURLLink::getMsgLength();
        data_length += TItemURLLink::getMsgLength();
		readLen = data_length;
	}
};

}
#endif