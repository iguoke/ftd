/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_INSTRUMENTSTATUSFIELD_H
#define FTD20_INSTRUMENTSTATUSFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct InstrumentStatusField
{
    TTItemInstrumentId instrumentId;
    TTItemInstrumentStatus instrumentStatus;
};

class InstrumentStatusFieldHelper
{
public:
	static void writeBuffer(const InstrumentStatusField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentStatus::writeBuffer(field.instrumentStatus, buffer);
        buffer += TItemInstrumentStatus::getMsgLength();
        data_length += TItemInstrumentStatus::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, InstrumentStatusField& field, int& readLen)
	{
		int data_length = 0;
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentStatus::readBuffer(buffer, field.instrumentStatus);
        buffer += TItemInstrumentStatus::getMsgLength();
        data_length += TItemInstrumentStatus::getMsgLength();
		readLen = data_length;
	}
};

}
#endif