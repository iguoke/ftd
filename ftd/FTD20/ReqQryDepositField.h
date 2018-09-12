/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQQRYDEPOSITFIELD_H
#define FTD20_REQQRYDEPOSITFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ReqQryDepositField
{
    TTItemParticipantId participantId;
};

class ReqQryDepositFieldHelper
{
public:
	static void writeBuffer(const ReqQryDepositField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ReqQryDepositField& field, int& readLen)
	{
		int data_length = 0;
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif