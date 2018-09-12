/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_MARKETORDERDATAFIELD_H
#define FTD20_MARKETORDERDATAFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct MarketOrderDataField
{
    TTItemInstrumentId instrumentId;
    TTItemInstrumentVersion instrumentVersion;
    TTItemVolumeType volumeType;
    TTItemDirection direction;
    TTItemPrice price;
    TTItemVolume volume;
    TTItemBroadcastSequenceNo broadcastSequenceNo;
};

class MarketOrderDataFieldHelper
{
public:
	static void writeBuffer(const MarketOrderDataField& field, char* buffer, int& writenLen)
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
        TItemDirection::writeBuffer(field.direction, buffer);
        buffer += TItemDirection::getMsgLength();
        data_length += TItemDirection::getMsgLength();
        TItemPrice::writeBuffer(field.price, buffer);
        buffer += TItemPrice::getMsgLength();
        data_length += TItemPrice::getMsgLength();
        TItemVolume::writeBuffer(field.volume, buffer);
        buffer += TItemVolume::getMsgLength();
        data_length += TItemVolume::getMsgLength();
        TItemBroadcastSequenceNo::writeBuffer(field.broadcastSequenceNo, buffer);
        buffer += TItemBroadcastSequenceNo::getMsgLength();
        data_length += TItemBroadcastSequenceNo::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, MarketOrderDataField& field, int& readLen)
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
        TItemDirection::readBuffer(buffer, field.direction);
        buffer += TItemDirection::getMsgLength();
        data_length += TItemDirection::getMsgLength();
        TItemPrice::readBuffer(buffer, field.price);
        buffer += TItemPrice::getMsgLength();
        data_length += TItemPrice::getMsgLength();
        TItemVolume::readBuffer(buffer, field.volume);
        buffer += TItemVolume::getMsgLength();
        data_length += TItemVolume::getMsgLength();
        TItemBroadcastSequenceNo::readBuffer(buffer, field.broadcastSequenceNo);
        buffer += TItemBroadcastSequenceNo::getMsgLength();
        data_length += TItemBroadcastSequenceNo::getMsgLength();
		readLen = data_length;
	}
};

}
#endif