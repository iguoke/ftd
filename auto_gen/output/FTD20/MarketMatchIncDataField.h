/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_MARKETMATCHINCDATAFIELD_H
#define FTD20_MARKETMATCHINCDATAFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct MarketMatchIncDataField
	{
            TTItemInstrumentId instrumentId;
            TTItemInstrumentVersion instrumentVersion;
            TTItemVolumeType volumeType;
            TTItemPrice price;
            TTItemVolume volume;
            TTItemMatchFlag matchFlag;
	};

	class MarketMatchIncDataFieldHelper
	{
	public:
		static void writeBuffer(const MarketMatchIncDataField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemVolumeType::writeBuffer(field.volumeType, buffer);
            buffer += TItemVolumeType::getMsgLength();
            data_length += TItemVolumeType::getMsgLength();
            TItemPrice::writeBuffer(field.price, buffer);
            buffer += TItemPrice::getMsgLength();
            data_length += TItemPrice::getMsgLength();
            TItemVolume::writeBuffer(field.volume, buffer);
            buffer += TItemVolume::getMsgLength();
            data_length += TItemVolume::getMsgLength();
            TItemMatchFlag::writeBuffer(field.matchFlag, buffer);
            buffer += TItemMatchFlag::getMsgLength();
            data_length += TItemMatchFlag::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, MarketMatchIncDataField& field, int& readLen)
		{
			int data_length = 0;
            TItemInstrumentId::readBuffer(buffer, field.instrumentId);
            buffer += TItemInstrumentId::getMsgLength();
            data_length += TItemInstrumentId::getMsgLength();
            TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
            buffer += TItemInstrumentVersion::getMsgLength();
            data_length += TItemInstrumentVersion::getMsgLength();
            TItemVolumeType::readBuffer(buffer, field.volumeType);
            buffer += TItemVolumeType::getMsgLength();
            data_length += TItemVolumeType::getMsgLength();
            TItemPrice::readBuffer(buffer, field.price);
            buffer += TItemPrice::getMsgLength();
            data_length += TItemPrice::getMsgLength();
            TItemVolume::readBuffer(buffer, field.volume);
            buffer += TItemVolume::getMsgLength();
            data_length += TItemVolume::getMsgLength();
            TItemMatchFlag::readBuffer(buffer, field.matchFlag);
            buffer += TItemMatchFlag::getMsgLength();
            data_length += TItemMatchFlag::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif