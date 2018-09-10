#ifndef FTD20_BULLETINFIELD_H
#define FTD20_BULLETINFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct BulletinField
	{
            TTPropertyNewsType newsType;
            TTPropertyNewsUrgency newsUrgency;
            TTPropertySendTime sendTime;
            TTPropertyAbstract abstract;
            TTPropertyComeFrom comeFrom;
            TTPropertyMarketId marketId;
            TTPropertyContent content;
            TTPropertyURLLink uRLLink;
	};

	class BulletinFieldHelper
	{
	public:
		static void writeBuffer(const BulletinField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyNewsType::writeBuffer(field.newsType, buffer);
            buffer += TPropertyNewsType::getMsgLength();
            data_length += TPropertyNewsType::getMsgLength();
            TPropertyNewsUrgency::writeBuffer(field.newsUrgency, buffer);
            buffer += TPropertyNewsUrgency::getMsgLength();
            data_length += TPropertyNewsUrgency::getMsgLength();
            TPropertySendTime::writeBuffer(field.sendTime, buffer);
            buffer += TPropertySendTime::getMsgLength();
            data_length += TPropertySendTime::getMsgLength();
            TPropertyAbstract::writeBuffer(field.abstract, buffer);
            buffer += TPropertyAbstract::getMsgLength();
            data_length += TPropertyAbstract::getMsgLength();
            TPropertyComeFrom::writeBuffer(field.comeFrom, buffer);
            buffer += TPropertyComeFrom::getMsgLength();
            data_length += TPropertyComeFrom::getMsgLength();
            TPropertyMarketId::writeBuffer(field.marketId, buffer);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyContent::writeBuffer(field.content, buffer);
            buffer += TPropertyContent::getMsgLength();
            data_length += TPropertyContent::getMsgLength();
            TPropertyURLLink::writeBuffer(field.uRLLink, buffer);
            buffer += TPropertyURLLink::getMsgLength();
            data_length += TPropertyURLLink::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, BulletinField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyNewsType::readBuffer(buffer, field.newsType);
            buffer += TPropertyNewsType::getMsgLength();
            data_length += TPropertyNewsType::getMsgLength();
            TPropertyNewsUrgency::readBuffer(buffer, field.newsUrgency);
            buffer += TPropertyNewsUrgency::getMsgLength();
            data_length += TPropertyNewsUrgency::getMsgLength();
            TPropertySendTime::readBuffer(buffer, field.sendTime);
            buffer += TPropertySendTime::getMsgLength();
            data_length += TPropertySendTime::getMsgLength();
            TPropertyAbstract::readBuffer(buffer, field.abstract);
            buffer += TPropertyAbstract::getMsgLength();
            data_length += TPropertyAbstract::getMsgLength();
            TPropertyComeFrom::readBuffer(buffer, field.comeFrom);
            buffer += TPropertyComeFrom::getMsgLength();
            data_length += TPropertyComeFrom::getMsgLength();
            TPropertyMarketId::readBuffer(buffer, field.marketId);
            buffer += TPropertyMarketId::getMsgLength();
            data_length += TPropertyMarketId::getMsgLength();
            TPropertyContent::readBuffer(buffer, field.content);
            buffer += TPropertyContent::getMsgLength();
            data_length += TPropertyContent::getMsgLength();
            TPropertyURLLink::readBuffer(buffer, field.uRLLink);
            buffer += TPropertyURLLink::getMsgLength();
            data_length += TPropertyURLLink::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif