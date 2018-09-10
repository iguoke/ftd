#ifndef FTD20_ERRORFIELD_H
#define FTD20_ERRORFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ErrorField
	{
            TTPropertyErrorCode errorCode;
            TTPropertyErrorText errorText;
            TTPropertyTimeStamp timeStamp;
	};

	class ErrorFieldHelper
	{
	public:
		static void writeBuffer(const ErrorField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyErrorCode::writeBuffer(field.errorCode, buffer);
            buffer += TPropertyErrorCode::getMsgLength();
            data_length += TPropertyErrorCode::getMsgLength();
            TPropertyErrorText::writeBuffer(field.errorText, buffer);
            buffer += TPropertyErrorText::getMsgLength();
            data_length += TPropertyErrorText::getMsgLength();
            TPropertyTimeStamp::writeBuffer(field.timeStamp, buffer);
            buffer += TPropertyTimeStamp::getMsgLength();
            data_length += TPropertyTimeStamp::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ErrorField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyErrorCode::readBuffer(buffer, field.errorCode);
            buffer += TPropertyErrorCode::getMsgLength();
            data_length += TPropertyErrorCode::getMsgLength();
            TPropertyErrorText::readBuffer(buffer, field.errorText);
            buffer += TPropertyErrorText::getMsgLength();
            data_length += TPropertyErrorText::getMsgLength();
            TPropertyTimeStamp::readBuffer(buffer, field.timeStamp);
            buffer += TPropertyTimeStamp::getMsgLength();
            data_length += TPropertyTimeStamp::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif