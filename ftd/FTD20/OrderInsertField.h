/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_ORDERINSERTFIELD_H
#define FTD20_ORDERINSERTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct OrderInsertField
	{
            TTItemOrderSysId orderSysId;
            TTItemOrderLocalId orderLocalId;
            TTItemUserId userId;
            TTItemParticipantId participantId;
            TTItemClientId clientId;
            TTItemInstrumentId instrumentId;
            TTItemDirection direction;
            TTItemOffsetFlag offsetFlag;
            TTItemHedgeFlag hedgeFlag;
            TTItemStopPrice stopPrice;
            TTItemLimitPrice limitPrice;
            TTItemVolumeTotalOrginal volumeTotalOrginal;
            TTItemOrderType orderType;
            TTItemMatchCondition matchCondition;
            TTItemMatchSession matchSession;
            TTItemValidThrough validThrough;
            TTItemMinimalVolume minimalVolume;
            TTItemAutoSuspend autoSuspend;
            TTItemInsertTime insertTime;
            TTItemMessageReference messageReference;
	};

	class OrderInsertFieldHelper
	{
	public:
		static void writeBuffer(const OrderInsertField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TItemOrderSysId::getMsgLength();
            data_length += TItemOrderSysId::getMsgLength();
            TItemOrderLocalId::writeBuffer(field.orderLocalId, buffer);
            buffer += TItemOrderLocalId::getMsgLength();
            data_length += TItemOrderLocalId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemClientId::writeBuffer(field.clientId, buffer);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemDirection::writeBuffer(field.direction, buffer);
            buffer += TItemDirection::getMsgLength();
            data_length += TItemDirection::getMsgLength();
            TItemOffsetFlag::writeBuffer(field.offsetFlag, buffer);
            buffer += TItemOffsetFlag::getMsgLength();
            data_length += TItemOffsetFlag::getMsgLength();
            TItemHedgeFlag::writeBuffer(field.hedgeFlag, buffer);
            buffer += TItemHedgeFlag::getMsgLength();
            data_length += TItemHedgeFlag::getMsgLength();
            TItemStopPrice::writeBuffer(field.stopPrice, buffer);
            buffer += TItemStopPrice::getMsgLength();
            data_length += TItemStopPrice::getMsgLength();
            TItemLimitPrice::writeBuffer(field.limitPrice, buffer);
            buffer += TItemLimitPrice::getMsgLength();
            data_length += TItemLimitPrice::getMsgLength();
            TItemVolumeTotalOrginal::writeBuffer(field.volumeTotalOrginal, buffer);
            buffer += TItemVolumeTotalOrginal::getMsgLength();
            data_length += TItemVolumeTotalOrginal::getMsgLength();
            TItemOrderType::writeBuffer(field.orderType, buffer);
            buffer += TItemOrderType::getMsgLength();
            data_length += TItemOrderType::getMsgLength();
            TItemMatchCondition::writeBuffer(field.matchCondition, buffer);
            buffer += TItemMatchCondition::getMsgLength();
            data_length += TItemMatchCondition::getMsgLength();
            TItemMatchSession::writeBuffer(field.matchSession, buffer);
            buffer += TItemMatchSession::getMsgLength();
            data_length += TItemMatchSession::getMsgLength();
            TItemValidThrough::writeBuffer(field.validThrough, buffer);
            buffer += TItemValidThrough::getMsgLength();
            data_length += TItemValidThrough::getMsgLength();
            TItemMinimalVolume::writeBuffer(field.minimalVolume, buffer);
            buffer += TItemMinimalVolume::getMsgLength();
            data_length += TItemMinimalVolume::getMsgLength();
            TItemAutoSuspend::writeBuffer(field.autoSuspend, buffer);
            buffer += TItemAutoSuspend::getMsgLength();
            data_length += TItemAutoSuspend::getMsgLength();
            TItemInsertTime::writeBuffer(field.insertTime, buffer);
            buffer += TItemInsertTime::getMsgLength();
            data_length += TItemInsertTime::getMsgLength();
            TItemMessageReference::writeBuffer(field.messageReference, buffer);
            buffer += TItemMessageReference::getMsgLength();
            data_length += TItemMessageReference::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, OrderInsertField& field, int& readLen)
		{
			int data_length = 0;
            TItemOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TItemOrderSysId::getMsgLength();
            data_length += TItemOrderSysId::getMsgLength();
            TItemOrderLocalId::readBuffer(buffer, field.orderLocalId);
            buffer += TItemOrderLocalId::getMsgLength();
            data_length += TItemOrderLocalId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemClientId::readBuffer(buffer, field.clientId);
            buffer += TItemClientId::getMsgLength();
            data_length += TItemClientId::getMsgLength();
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemDirection::readBuffer(buffer, field.direction);
            buffer += TItemDirection::getMsgLength();
            data_length += TItemDirection::getMsgLength();
            TItemOffsetFlag::readBuffer(buffer, field.offsetFlag);
            buffer += TItemOffsetFlag::getMsgLength();
            data_length += TItemOffsetFlag::getMsgLength();
            TItemHedgeFlag::readBuffer(buffer, field.hedgeFlag);
            buffer += TItemHedgeFlag::getMsgLength();
            data_length += TItemHedgeFlag::getMsgLength();
            TItemStopPrice::readBuffer(buffer, field.stopPrice);
            buffer += TItemStopPrice::getMsgLength();
            data_length += TItemStopPrice::getMsgLength();
            TItemLimitPrice::readBuffer(buffer, field.limitPrice);
            buffer += TItemLimitPrice::getMsgLength();
            data_length += TItemLimitPrice::getMsgLength();
            TItemVolumeTotalOrginal::readBuffer(buffer, field.volumeTotalOrginal);
            buffer += TItemVolumeTotalOrginal::getMsgLength();
            data_length += TItemVolumeTotalOrginal::getMsgLength();
            TItemOrderType::readBuffer(buffer, field.orderType);
            buffer += TItemOrderType::getMsgLength();
            data_length += TItemOrderType::getMsgLength();
            TItemMatchCondition::readBuffer(buffer, field.matchCondition);
            buffer += TItemMatchCondition::getMsgLength();
            data_length += TItemMatchCondition::getMsgLength();
            TItemMatchSession::readBuffer(buffer, field.matchSession);
            buffer += TItemMatchSession::getMsgLength();
            data_length += TItemMatchSession::getMsgLength();
            TItemValidThrough::readBuffer(buffer, field.validThrough);
            buffer += TItemValidThrough::getMsgLength();
            data_length += TItemValidThrough::getMsgLength();
            TItemMinimalVolume::readBuffer(buffer, field.minimalVolume);
            buffer += TItemMinimalVolume::getMsgLength();
            data_length += TItemMinimalVolume::getMsgLength();
            TItemAutoSuspend::readBuffer(buffer, field.autoSuspend);
            buffer += TItemAutoSuspend::getMsgLength();
            data_length += TItemAutoSuspend::getMsgLength();
            TItemInsertTime::readBuffer(buffer, field.insertTime);
            buffer += TItemInsertTime::getMsgLength();
            data_length += TItemInsertTime::getMsgLength();
            TItemMessageReference::readBuffer(buffer, field.messageReference);
            buffer += TItemMessageReference::getMsgLength();
            data_length += TItemMessageReference::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif