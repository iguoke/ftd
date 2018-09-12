/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYPPOSITIONFIELD_H
#define FTD20_REQQRYPPOSITIONFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ReqQryPPositionField
{
    TTItemParticipantId participantId;
    TTItemInstrumentId instrumentId;
};

class ReqQryPPositionFieldHelper
{
public:
	static void writeBuffer(const ReqQryPPositionField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ReqQryPPositionField& field, int& readLen)
	{
		int data_length = 0;
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif