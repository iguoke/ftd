/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_ERRORFIELD_H
#define FTD20_ERRORFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ErrorField
{
    TTItemErrorCode errorCode;
    TTItemErrorText errorText;
    TTItemTimeStamp timeStamp;
};

class ErrorFieldHelper
{
public:
	static void writeBuffer(const ErrorField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemErrorCode::writeBuffer(field.errorCode, buffer);
        buffer += TItemErrorCode::getMsgLength();
        data_length += TItemErrorCode::getMsgLength();
        TItemErrorText::writeBuffer(field.errorText, buffer);
        buffer += TItemErrorText::getMsgLength();
        data_length += TItemErrorText::getMsgLength();
        TItemTimeStamp::writeBuffer(field.timeStamp, buffer);
        buffer += TItemTimeStamp::getMsgLength();
        data_length += TItemTimeStamp::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ErrorField& field, int& readLen)
	{
		int data_length = 0;
        TItemErrorCode::readBuffer(buffer, field.errorCode);
        buffer += TItemErrorCode::getMsgLength();
        data_length += TItemErrorCode::getMsgLength();
        TItemErrorText::readBuffer(buffer, field.errorText);
        buffer += TItemErrorText::getMsgLength();
        data_length += TItemErrorText::getMsgLength();
        TItemTimeStamp::readBuffer(buffer, field.timeStamp);
        buffer += TItemTimeStamp::getMsgLength();
        data_length += TItemTimeStamp::getMsgLength();
		readLen = data_length;
	}
};

}
#endif