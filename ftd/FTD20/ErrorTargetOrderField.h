/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_ERRORTARGETORDERFIELD_H
#define FTD20_ERRORTARGETORDERFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ErrorTargetOrderField
{
    TTItemOrderSysId orderSysId;
    TTItemOrderLocalId orderLocalId;
};

class ErrorTargetOrderFieldHelper
{
public:
	static void writeBuffer(const ErrorTargetOrderField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemOrderSysId::writeBuffer(field.orderSysId, buffer);
        buffer += TItemOrderSysId::getMsgLength();
        data_length += TItemOrderSysId::getMsgLength();
        TItemOrderLocalId::writeBuffer(field.orderLocalId, buffer);
        buffer += TItemOrderLocalId::getMsgLength();
        data_length += TItemOrderLocalId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ErrorTargetOrderField& field, int& readLen)
	{
		int data_length = 0;
        TItemOrderSysId::readBuffer(buffer, field.orderSysId);
        buffer += TItemOrderSysId::getMsgLength();
        data_length += TItemOrderSysId::getMsgLength();
        TItemOrderLocalId::readBuffer(buffer, field.orderLocalId);
        buffer += TItemOrderLocalId::getMsgLength();
        data_length += TItemOrderLocalId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif