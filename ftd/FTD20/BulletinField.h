#ifndef FTD20_BULLETIN_FIELD_H
#define FTD20_BULLETIN_FIELD_H

#include "./FTDProperties.h"
#include "./FTDFields.h"



namespace FTD20 {
	static const int BulletinFieldProperties[] =
	{ 
		PROPERTY_ID_NewsType, //消息类型
		PROPERTY_ID_NewsUrgency, // 紧急程度
		PROPERTY_ID_SendTime, // 发送时间
		PROPERTY_ID_Abstract, // 摘要 / 说明
		PROPERTY_ID_ComeFrom, // 消息来源
		PROPERTY_ID_MarketId, // 市场编码
		PROPERTY_ID_Content, // 消息正文
		PROPERTY_ID_URLLink // 此消息的WEB 联结
	};


	struct BulletinField
	{
		TTPropertyNewsType newsType; //消息类型
		TTPropertyNewsUrgency newsUrgency; // 紧急程度
		TTPropertySendTime  sendTime; // 发送时间
		TTPropertyAbstract  abstract; // 摘要 / 说明
		TTPropertyComeFrom comeFrom; // 消息来源
		TTPropertyMarketId marketId; // 市场编码
		TTPropertyContent content; // 消息正文
		TTPropertyURLLink  urlLink; // 此消息的WEB 联结	
	};
}
#endif