#ifndef FTD20_PARTICIPANTFIELD_H
#define FTD20_PARTICIPANTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ParticipantField
	{
            TTPropertyParticipantId participantId;
            TTPropertyParticipantName participantName;
            TTPropertyParticipantType participantType;
            TTPropertyPartiTrdRight partiTrdRight;
	};

	class ParticipantFieldHelper
	{
	public:
		static void writeBuffer(const ParticipantField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyParticipantName::writeBuffer(field.participantName, buffer);
            buffer += TPropertyParticipantName::getMsgLength();
            data_length += TPropertyParticipantName::getMsgLength();
            TPropertyParticipantType::writeBuffer(field.participantType, buffer);
            buffer += TPropertyParticipantType::getMsgLength();
            data_length += TPropertyParticipantType::getMsgLength();
            TPropertyPartiTrdRight::writeBuffer(field.partiTrdRight, buffer);
            buffer += TPropertyPartiTrdRight::getMsgLength();
            data_length += TPropertyPartiTrdRight::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ParticipantField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyParticipantName::readBuffer(buffer, field.participantName);
            buffer += TPropertyParticipantName::getMsgLength();
            data_length += TPropertyParticipantName::getMsgLength();
            TPropertyParticipantType::readBuffer(buffer, field.participantType);
            buffer += TPropertyParticipantType::getMsgLength();
            data_length += TPropertyParticipantType::getMsgLength();
            TPropertyPartiTrdRight::readBuffer(buffer, field.partiTrdRight);
            buffer += TPropertyPartiTrdRight::getMsgLength();
            data_length += TPropertyPartiTrdRight::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif