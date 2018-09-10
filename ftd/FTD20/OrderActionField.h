#ifndef FTD20_ORDERACTIONFIELD_H
#define FTD20_ORDERACTIONFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct OrderActionField
	{
            TTPropertyOrderActionCode orderActionCode;
            TTPropertyOrderSysId orderSysId;
            TTPropertyActionLocalId actionLocalId;
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyUserId userId;
	};

	class OrderActionFieldHelper
	{
	public:
		static void writeBuffer(const OrderActionField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyOrderActionCode::writeBuffer(field.orderActionCode, buffer);
            buffer += TPropertyOrderActionCode::getMsgLength();
            data_length += TPropertyOrderActionCode::getMsgLength();
            TPropertyOrderSysId::writeBuffer(field.orderSysId, buffer);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyActionLocalId::writeBuffer(field.actionLocalId, buffer);
            buffer += TPropertyActionLocalId::getMsgLength();
            data_length += TPropertyActionLocalId::getMsgLength();
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyUserId::writeBuffer(field.userId, buffer);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, OrderActionField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyOrderActionCode::readBuffer(buffer, field.orderActionCode);
            buffer += TPropertyOrderActionCode::getMsgLength();
            data_length += TPropertyOrderActionCode::getMsgLength();
            TPropertyOrderSysId::readBuffer(buffer, field.orderSysId);
            buffer += TPropertyOrderSysId::getMsgLength();
            data_length += TPropertyOrderSysId::getMsgLength();
            TPropertyActionLocalId::readBuffer(buffer, field.actionLocalId);
            buffer += TPropertyActionLocalId::getMsgLength();
            data_length += TPropertyActionLocalId::getMsgLength();
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyUserId::readBuffer(buffer, field.userId);
            buffer += TPropertyUserId::getMsgLength();
            data_length += TPropertyUserId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif