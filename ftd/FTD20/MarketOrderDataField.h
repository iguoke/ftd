#ifndef FTD20_MARKETORDERDATAFIELD_H
#define FTD20_MARKETORDERDATAFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct MarketOrderDataField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyVolumeType volumeType;
            TTPropertyDirection direction;
            TTPropertyPrice price;
            TTPropertyVolume volume;
            TTPropertyBroadcastSequenceNo broadcastSequenceNo;
	};

	class MarketOrderDataFieldHelper
	{
	public:
		static void writeBuffer(const MarketOrderDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyVolumeType::writeBuffer(field.volumeType, buffer);
            buffer += TPropertyVolumeType::getMsgLength();
            data_length += TPropertyVolumeType::getMsgLength();
            TPropertyDirection::writeBuffer(field.direction, buffer);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
            TPropertyPrice::writeBuffer(field.price, buffer);
            buffer += TPropertyPrice::getMsgLength();
            data_length += TPropertyPrice::getMsgLength();
            TPropertyVolume::writeBuffer(field.volume, buffer);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyBroadcastSequenceNo::writeBuffer(field.broadcastSequenceNo, buffer);
            buffer += TPropertyBroadcastSequenceNo::getMsgLength();
            data_length += TPropertyBroadcastSequenceNo::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketOrderDataField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TPropertyInstrumentId::getMsgLength();
            data_length += TPropertyInstrumentId::getMsgLength();
            TPropertyInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TPropertyInstrumentVersion::getMsgLength();
            data_length += TPropertyInstrumentVersion::getMsgLength();
            TPropertyVolumeType::readBuffer(buffer, field.volumeType);
            buffer += TPropertyVolumeType::getMsgLength();
            data_length += TPropertyVolumeType::getMsgLength();
            TPropertyDirection::readBuffer(buffer, field.direction);
            buffer += TPropertyDirection::getMsgLength();
            data_length += TPropertyDirection::getMsgLength();
            TPropertyPrice::readBuffer(buffer, field.price);
            buffer += TPropertyPrice::getMsgLength();
            data_length += TPropertyPrice::getMsgLength();
            TPropertyVolume::readBuffer(buffer, field.volume);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyBroadcastSequenceNo::readBuffer(buffer, field.broadcastSequenceNo);
            buffer += TPropertyBroadcastSequenceNo::getMsgLength();
            data_length += TPropertyBroadcastSequenceNo::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif