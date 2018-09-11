/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYPOSITIONFIELD_H
#define FTD20_REQQRYPOSITIONFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqQryPositionField
	{
            TTItemParticipantId participantId;
            TTItemClientId clientId;
            TTItemInstrumentId instrumentId;
	};

	class ReqQryPositionFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryPositionField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemClientId::writeBuffer(field.clientId, buffer);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryPositionField& field, int& readLen)
		{
			int data_length = 0;
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemClientId::readBuffer(buffer, field.clientId);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif