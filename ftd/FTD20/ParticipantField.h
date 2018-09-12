/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_PARTICIPANTFIELD_H
#define FTD20_PARTICIPANTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ParticipantField
{
    TTItemParticipantId participantId;
    TTItemParticipantName participantName;
    TTItemParticipantType participantType;
    TTItemPartiTrdRight partiTrdRight;
};

class ParticipantFieldHelper
{
public:
	static void writeBuffer(const ParticipantField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemParticipantName::writeBuffer(field.participantName, buffer);
        buffer += TItemParticipantName::getMsgLength();
        data_length += TItemParticipantName::getMsgLength();
        TItemParticipantType::writeBuffer(field.participantType, buffer);
        buffer += TItemParticipantType::getMsgLength();
        data_length += TItemParticipantType::getMsgLength();
        TItemPartiTrdRight::writeBuffer(field.partiTrdRight, buffer);
        buffer += TItemPartiTrdRight::getMsgLength();
        data_length += TItemPartiTrdRight::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ParticipantField& field, int& readLen)
	{
		int data_length = 0;
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemParticipantName::readBuffer(buffer, field.participantName);
        buffer += TItemParticipantName::getMsgLength();
        data_length += TItemParticipantName::getMsgLength();
        TItemParticipantType::readBuffer(buffer, field.participantType);
        buffer += TItemParticipantType::getMsgLength();
        data_length += TItemParticipantType::getMsgLength();
        TItemPartiTrdRight::readBuffer(buffer, field.partiTrdRight);
        buffer += TItemPartiTrdRight::getMsgLength();
        data_length += TItemPartiTrdRight::getMsgLength();
		readLen = data_length;
	}
};

}
#endif