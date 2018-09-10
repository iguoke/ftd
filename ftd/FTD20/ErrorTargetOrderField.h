#ifndef FTD20_ERRORTARGETORDERFIELD_H
#define FTD20_ERRORTARGETORDERFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ErrorTargetOrderField
	{
            TTPropertyOrderSysId orderSysId;
            TTPropertyOrderLocalId orderLocalId;
	};

	class ErrorTargetOrderFieldHelper
	{
	public:
		static void writeBuffer(const ErrorTargetOrderField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyOrderLocalId::writeBuffer(field.orderLocalId, buffer);
            buffer += TPropertyOrderLocalId::getMsgLength();
            data_length += TPropertyOrderLocalId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ErrorTargetOrderField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyOrderLocalId::readBuffer(buffer, field.orderLocalId);
            buffer += TPropertyOrderLocalId::getMsgLength();
            data_length += TPropertyOrderLocalId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif