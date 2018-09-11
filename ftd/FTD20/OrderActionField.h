/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_ORDERACTIONFIELD_H
#define FTD20_ORDERACTIONFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct OrderActionField
	{
            TTItemOrderActionCode orderActionCode;
            TTItemOrderSysId orderSysId;
            TTItemActionLocalId actionLocalId;
            TTItemInstrumentId instrumentId;
            TTItemInstrumentVersion instrumentVersion;
            TTItemUserId userId;
	};

	class OrderActionFieldHelper
	{
	public:
		static void writeBuffer(const OrderActionField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemOrderActionCode::writeBuffer(field.orderActionCode, buffer);
            buffer += TItemOrderActionCode::getMsgLength();
            data_length += TItemOrderActionCode::getMsgLength();
            TItemOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TItemOrderSysId::getMsgLength();
            data_length += TItemOrderSysId::getMsgLength();
            TItemActionLocalId::writeBuffer(field.actionLocalId, buffer);
            buffer += TItemActionLocalId::getMsgLength();
            data_length += TItemActionLocalId::getMsgLength();
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, OrderActionField& field, int& readLen)
		{
			int data_length = 0;
            TItemOrderActionCode::readBuffer(buffer, field.orderActionCode);
            buffer += TItemOrderActionCode::getMsgLength();
            data_length += TItemOrderActionCode::getMsgLength();
            TItemOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TItemOrderSysId::getMsgLength();
            data_length += TItemOrderSysId::getMsgLength();
            TItemActionLocalId::readBuffer(buffer, field.actionLocalId);
            buffer += TItemActionLocalId::getMsgLength();
            data_length += TItemActionLocalId::getMsgLength();
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif