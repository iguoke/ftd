/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYCLIENTFIELD_H
#define FTD20_REQQRYCLIENTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ReqQryClientField
{
    TTItemParticipantId participantId;
    TTItemClientId clientId;
};

class ReqQryClientFieldHelper
{
public:
	static void writeBuffer(const ReqQryClientField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemClientId::writeBuffer(field.clientId, buffer);
        buffer += TItemClientId::getMsgLength();
        data_length += TItemClientId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ReqQryClientField& field, int& readLen)
	{
		int data_length = 0;
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemClientId::readBuffer(buffer, field.clientId);
        buffer += TItemClientId::getMsgLength();
        data_length += TItemClientId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif