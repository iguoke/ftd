#ifndef FTD20_REQQRYPOSITIONFIELD_H
#define FTD20_REQQRYPOSITIONFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryPositionField
	{
            TTPropertyParticipantId participantId;
            TTPropertyClientId clientId;
            TTPropertyInstrumentId instrumentId;
	};

	class ReqQryPositionFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryPositionField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientId::writeBuffer(field.clientId, buffer);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryPositionField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientId::readBuffer(buffer, field.clientId);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif