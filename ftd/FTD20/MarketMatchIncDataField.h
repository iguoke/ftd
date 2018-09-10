#ifndef FTD20_MARKETMATCHINCDATAFIELD_H
#define FTD20_MARKETMATCHINCDATAFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct MarketMatchIncDataField
	{
            TTPropertyInstrumentId instrumentId;
            TTPropertyInstrumentVersion instrumentVersion;
            TTPropertyVolumeType volumeType;
            TTPropertyPrice price;
            TTPropertyVolume volume;
            TTPropertyMatchFlag matchFlag;
	};

	class MarketMatchIncDataFieldHelper
	{
	public:
		static void writeBuffer(const MarketMatchIncDataField& field, char* buffer, int& writenLen)
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
            TPropertyPrice::writeBuffer(field.price, buffer);
            buffer += TPropertyPrice::getMsgLength();
            data_length += TPropertyPrice::getMsgLength();
            TPropertyVolume::writeBuffer(field.volume, buffer);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyMatchFlag::writeBuffer(field.matchFlag, buffer);
            buffer += TPropertyMatchFlag::getMsgLength();
            data_length += TPropertyMatchFlag::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketMatchIncDataField& field, int& readLen)
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
            TPropertyPrice::readBuffer(buffer, field.price);
            buffer += TPropertyPrice::getMsgLength();
            data_length += TPropertyPrice::getMsgLength();
            TPropertyVolume::readBuffer(buffer, field.volume);
            buffer += TPropertyVolume::getMsgLength();
            data_length += TPropertyVolume::getMsgLength();
            TPropertyMatchFlag::readBuffer(buffer, field.matchFlag);
            buffer += TPropertyMatchFlag::getMsgLength();
            data_length += TPropertyMatchFlag::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif