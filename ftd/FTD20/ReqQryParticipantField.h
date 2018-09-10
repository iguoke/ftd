#ifndef FTD20_REQQRYPARTICIPANTFIELD_H
#define FTD20_REQQRYPARTICIPANTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ReqQryParticipantField
	{
            TTPropertyParticipantId participantId;
	};

	class ReqQryParticipantFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryParticipantField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryParticipantField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif