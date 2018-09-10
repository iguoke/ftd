#ifndef FTD20_DISSENMINATIONSTARTFIELD_H
#define FTD20_DISSENMINATIONSTARTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct DissenminationstartField
	{
            TTPropertySequenceSeries sequenceSeries;
            TTPropertySequenceNo sequenceNo;
	};

	class DissenminationstartFieldHelper
	{
	public:
		static void writeBuffer(const DissenminationstartField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertySequenceSeries::writeBuffer(field.sequenceSeries, buffer);
            buffer += TPropertySequenceSeries::getMsgLength();
            data_length += TPropertySequenceSeries::getMsgLength();
            TPropertySequenceNo::writeBuffer(field.sequenceNo, buffer);
            buffer += TPropertySequenceNo::getMsgLength();
            data_length += TPropertySequenceNo::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, DissenminationstartField& field, int& readLen)
		{
			int data_length = 0;
            TPropertySequenceSeries::readBuffer(buffer, field.sequenceSeries);
            buffer += TPropertySequenceSeries::getMsgLength();
            data_length += TPropertySequenceSeries::getMsgLength();
            TPropertySequenceNo::readBuffer(buffer, field.sequenceNo);
            buffer += TPropertySequenceNo::getMsgLength();
            data_length += TPropertySequenceNo::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif