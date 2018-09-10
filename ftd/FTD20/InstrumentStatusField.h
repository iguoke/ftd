#ifndef FTD20_INSTRUMENTSTATUSFIELD_H
#define FTD20_INSTRUMENTSTATUSFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct InstrumentStatusField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentStatus instrumentStatus;
	};

	class InstrumentStatusFieldHelper
	{
	public:
		static void writeBuffer(const InstrumentStatusField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentStatus::writeBuffer(field.instrumentStatus, buffer);
            buffer += TPropertyInstrumentStatus::getMsgLength();
            data_length += TPropertyInstrumentStatus::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, InstrumentStatusField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentStatus::readBuffer(buffer, field.instrumentStatus);
            buffer += TPropertyInstrumentStatus::getMsgLength();
            data_length += TPropertyInstrumentStatus::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif