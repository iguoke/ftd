#ifndef FTD20_ORDERINSERTFIELD_H
#define FTD20_ORDERINSERTFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct OrderInsertField
	{
            TTPropertyOrderSysId orderSysId;
            TTPropertyOrderLocalId orderLocalId;
            TTPropertyUserId userId;
            TTPropertyParticipantId participantId;
            TTPropertyClientId clientId;
            TTPropertyInstrumentId instrumentId;
            TTPropertyDirection direction;
            TTPropertyOffsetFlag offsetFlag;
            TTPropertyHedgeFlag hedgeFlag;
            TTPropertyStopPrice stopPrice;
            TTPropertyLimitPrice limitPrice;
            TTPropertyVolumeTotalOrginal volumeTotalOrginal;
            TTPropertyOrderType orderType;
            TTPropertyMatchCondition matchCondition;
            TTPropertyMatchSession matchSession;
            TTPropertyValidThrough validThrough;
            TTPropertyMinimalVolume minimalVolume;
            TTPropertyAutoSuspend autoSuspend;
            TTPropertyInsertTime insertTime;
            TTPropertyMessageReference messageReference;
	};

	class OrderInsertFieldHelper
	{
	public:
		static void writeBuffer(const OrderInsertField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyOrderLocalId::writeBuffer(field.orderLocalId, buffer);
            buffer += TPropertyOrderLocalId::getMsgLength();
            data_length += TPropertyOrderLocalId::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientId::writeBuffer(field.clientId, buffer);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyDirection::writeBuffer(field.direction, buffer);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
            TPropertyOffsetFlag::writeBuffer(field.offsetFlag, buffer);
            buffer += TPropertyOffsetFlag::getMsgLength();
            data_length += TPropertyOffsetFlag::getMsgLength();
            TPropertyHedgeFlag::writeBuffer(field.hedgeFlag, buffer);
            buffer += TPropertyHedgeFlag::getMsgLength();
            data_length += TPropertyHedgeFlag::getMsgLength();
            TPropertyStopPrice::writeBuffer(field.stopPrice, buffer);
            buffer += TPropertyStopPrice::getMsgLength();
            data_length += TPropertyStopPrice::getMsgLength();
            TPropertyLimitPrice::writeBuffer(field.limitPrice, buffer);
            buffer += TPropertyLimitPrice::getMsgLength();
            data_length += TPropertyLimitPrice::getMsgLength();
            TPropertyVolumeTotalOrginal::writeBuffer(field.volumeTotalOrginal, buffer);
            buffer += TPropertyVolumeTotalOrginal::getMsgLength();
            data_length += TPropertyVolumeTotalOrginal::getMsgLength();
            TPropertyOrderType::writeBuffer(field.orderType, buffer);
            buffer += TPropertyOrderType::getMsgLength();
            data_length += TPropertyOrderType::getMsgLength();
            TPropertyMatchCondition::writeBuffer(field.matchCondition, buffer);
            buffer += TPropertyMatchCondition::getMsgLength();
            data_length += TPropertyMatchCondition::getMsgLength();
            TPropertyMatchSession::writeBuffer(field.matchSession, buffer);
            buffer += TPropertyMatchSession::getMsgLength();
            data_length += TPropertyMatchSession::getMsgLength();
            TPropertyValidThrough::writeBuffer(field.validThrough, buffer);
            buffer += TPropertyValidThrough::getMsgLength();
            data_length += TPropertyValidThrough::getMsgLength();
            TPropertyMinimalVolume::writeBuffer(field.minimalVolume, buffer);
            buffer += TPropertyMinimalVolume::getMsgLength();
            data_length += TPropertyMinimalVolume::getMsgLength();
            TPropertyAutoSuspend::writeBuffer(field.autoSuspend, buffer);
            buffer += TPropertyAutoSuspend::getMsgLength();
            data_length += TPropertyAutoSuspend::getMsgLength();
            TPropertyInsertTime::writeBuffer(field.insertTime, buffer);
            buffer += TPropertyInsertTime::getMsgLength();
            data_length += TPropertyInsertTime::getMsgLength();
            TPropertyMessageReference::writeBuffer(field.messageReference, buffer);
            buffer += TPropertyMessageReference::getMsgLength();
            data_length += TPropertyMessageReference::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, OrderInsertField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyOrderLocalId::readBuffer(buffer, field.orderLocalId);
            buffer += TPropertyOrderLocalId::getMsgLength();
            data_length += TPropertyOrderLocalId::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyClientId::readBuffer(buffer, field.clientId);
            buffer += TPropertyClientId::getMsgLength();
            data_length += TPropertyClientId::getMsgLength();
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyDirection::readBuffer(buffer, field.direction);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
            TPropertyOffsetFlag::readBuffer(buffer, field.offsetFlag);
            buffer += TPropertyOffsetFlag::getMsgLength();
            data_length += TPropertyOffsetFlag::getMsgLength();
            TPropertyHedgeFlag::readBuffer(buffer, field.hedgeFlag);
            buffer += TPropertyHedgeFlag::getMsgLength();
            data_length += TPropertyHedgeFlag::getMsgLength();
            TPropertyStopPrice::readBuffer(buffer, field.stopPrice);
            buffer += TPropertyStopPrice::getMsgLength();
            data_length += TPropertyStopPrice::getMsgLength();
            TPropertyLimitPrice::readBuffer(buffer, field.limitPrice);
            buffer += TPropertyLimitPrice::getMsgLength();
            data_length += TPropertyLimitPrice::getMsgLength();
            TPropertyVolumeTotalOrginal::readBuffer(buffer, field.volumeTotalOrginal);
            buffer += TPropertyVolumeTotalOrginal::getMsgLength();
            data_length += TPropertyVolumeTotalOrginal::getMsgLength();
            TPropertyOrderType::readBuffer(buffer, field.orderType);
            buffer += TPropertyOrderType::getMsgLength();
            data_length += TPropertyOrderType::getMsgLength();
            TPropertyMatchCondition::readBuffer(buffer, field.matchCondition);
            buffer += TPropertyMatchCondition::getMsgLength();
            data_length += TPropertyMatchCondition::getMsgLength();
            TPropertyMatchSession::readBuffer(buffer, field.matchSession);
            buffer += TPropertyMatchSession::getMsgLength();
            data_length += TPropertyMatchSession::getMsgLength();
            TPropertyValidThrough::readBuffer(buffer, field.validThrough);
            buffer += TPropertyValidThrough::getMsgLength();
            data_length += TPropertyValidThrough::getMsgLength();
            TPropertyMinimalVolume::readBuffer(buffer, field.minimalVolume);
            buffer += TPropertyMinimalVolume::getMsgLength();
            data_length += TPropertyMinimalVolume::getMsgLength();
            TPropertyAutoSuspend::readBuffer(buffer, field.autoSuspend);
            buffer += TPropertyAutoSuspend::getMsgLength();
            data_length += TPropertyAutoSuspend::getMsgLength();
            TPropertyInsertTime::readBuffer(buffer, field.insertTime);
            buffer += TPropertyInsertTime::getMsgLength();
            data_length += TPropertyInsertTime::getMsgLength();
            TPropertyMessageReference::readBuffer(buffer, field.messageReference);
            buffer += TPropertyMessageReference::getMsgLength();
            data_length += TPropertyMessageReference::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif