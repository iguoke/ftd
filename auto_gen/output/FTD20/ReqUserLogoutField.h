/*
���ļ��Զ����ɣ������ֹ��޸�
*/

#ifndef FTD20_REQUSERLOGOUTFIELD_H
#define FTD20_REQUSERLOGOUTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqUserLogoutField
	{
            TTItemDataFlowFlag dataFlowFlag;
            TTItemParticipantId participantId;
            TTItemUserId userId;
	};

	class ReqUserLogoutFieldHelper
	{
	public:
		static void writeBuffer(const ReqUserLogoutField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemDataFlowFlag::writeBuffer(field.dataFlowFlag, buffer);
            buffer += TItemDataFlowFlag::getMsgLength();
            data_length += TItemDataFlowFlag::getMsgLength();
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqUserLogoutField& field, int& readLen)
		{
			int data_length = 0;
            TItemDataFlowFlag::readBuffer(buffer, field.dataFlowFlag);
            buffer += TItemDataFlowFlag::getMsgLength();
            data_length += TItemDataFlowFlag::getMsgLength();
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif