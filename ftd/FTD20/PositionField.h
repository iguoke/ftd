/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_POSITIONFIELD_H
#define FTD20_POSITIONFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct PositionField
{
    TTItemParticipantId participantId;
    TTItemClientId clientId;
    TTItemInstrumentId instrumentId;
    TTItemInstrumentVersion instrumentVersion;
    TTItemTradeDate tradeDate;
    TTItemYdBuyHedgePosition ydBuyHedgePosition;
    TTItemYdBuySpecPosition ydBuySpecPosition;
    TTItemYdSellHedgePosition ydSellHedgePosition;
    TTItemYdSellSpecPosition ydSellSpecPosition;
    TTItemBuyHedgeVolume buyHedgeVolume;
    TTItemBuySpecVolume buySpecVolume;
    TTItemSellHedgeVolume sellHedgeVolume;
    TTItemSellSpecVolume sellSpecVolume;
    TTItemBuyHedgePosition buyHedgePosition;
    TTItemBuySpecPosition buySpecPosition;
    TTItemSellHedgePosition sellHedgePosition;
    TTItemSellSpecPosition sellSpecPosition;
    TTItemBuyOffsHPosition buyOffsHPosition;
    TTItemBuyOffsSPosition buyOffsSPosition;
    TTItemSellOffsHPosition sellOffsHPosition;
    TTItemSellOffsSPosition sellOffsSPosition;
    TTItemYdBuyOffsHPosition ydBuyOffsHPosition;
    TTItemYdBuyOffsSPosition ydBuyOffsSPosition;
    TTItemYdSellOffsHPosition ydSellOffsHPosition;
    TTItemYdSellOffsSPosition ydSellOffsSPosition;
    TTItemLongOpenFrozHPosition longOpenFrozHPosition;
    TTItemLongOpenFrozSPosition longOpenFrozSPosition;
    TTItemShortOpenFrozHPosition shortOpenFrozHPosition;
    TTItemShortOpenFrozSPosition shortOpenFrozSPosition;
    TTItemLongOffsFrozHPosition longOffsFrozHPosition;
    TTItemLongOffsFrozSPosition longOffsFrozSPosition;
    TTItemShortOffsFrozHPosition shortOffsFrozHPosition;
    TTItemShortOffsFrozSPosition shortOffsFrozSPosition;
    TTItemYdLongOffsFrozHPosition ydLongOffsFrozHPosition;
    TTItemYdLongOffsFrozSPosition ydLongOffsFrozSPosition;
    TTItemYdShortOffsFrozHPosition ydShortOffsFrozHPosition;
    TTItemYdShortOffsFrozSPosition ydShortOffsFrozSPosition;
};

class PositionFieldHelper
{
public:
	static void writeBuffer(const PositionField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemParticipantId::writeBuffer(field.participantId, buffer);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemClientId::writeBuffer(field.clientId, buffer);
        buffer += TItemClientId::getMsgLength();
        data_length += TItemClientId::getMsgLength();
        TItemInstrumentId::writeBuffer(field.instrumentId, buffer);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::writeBuffer(field.instrumentVersion, buffer);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemTradeDate::writeBuffer(field.tradeDate, buffer);
        buffer += TItemTradeDate::getMsgLength();
        data_length += TItemTradeDate::getMsgLength();
        TItemYdBuyHedgePosition::writeBuffer(field.ydBuyHedgePosition, buffer);
        buffer += TItemYdBuyHedgePosition::getMsgLength();
        data_length += TItemYdBuyHedgePosition::getMsgLength();
        TItemYdBuySpecPosition::writeBuffer(field.ydBuySpecPosition, buffer);
        buffer += TItemYdBuySpecPosition::getMsgLength();
        data_length += TItemYdBuySpecPosition::getMsgLength();
        TItemYdSellHedgePosition::writeBuffer(field.ydSellHedgePosition, buffer);
        buffer += TItemYdSellHedgePosition::getMsgLength();
        data_length += TItemYdSellHedgePosition::getMsgLength();
        TItemYdSellSpecPosition::writeBuffer(field.ydSellSpecPosition, buffer);
        buffer += TItemYdSellSpecPosition::getMsgLength();
        data_length += TItemYdSellSpecPosition::getMsgLength();
        TItemBuyHedgeVolume::writeBuffer(field.buyHedgeVolume, buffer);
        buffer += TItemBuyHedgeVolume::getMsgLength();
        data_length += TItemBuyHedgeVolume::getMsgLength();
        TItemBuySpecVolume::writeBuffer(field.buySpecVolume, buffer);
        buffer += TItemBuySpecVolume::getMsgLength();
        data_length += TItemBuySpecVolume::getMsgLength();
        TItemSellHedgeVolume::writeBuffer(field.sellHedgeVolume, buffer);
        buffer += TItemSellHedgeVolume::getMsgLength();
        data_length += TItemSellHedgeVolume::getMsgLength();
        TItemSellSpecVolume::writeBuffer(field.sellSpecVolume, buffer);
        buffer += TItemSellSpecVolume::getMsgLength();
        data_length += TItemSellSpecVolume::getMsgLength();
        TItemBuyHedgePosition::writeBuffer(field.buyHedgePosition, buffer);
        buffer += TItemBuyHedgePosition::getMsgLength();
        data_length += TItemBuyHedgePosition::getMsgLength();
        TItemBuySpecPosition::writeBuffer(field.buySpecPosition, buffer);
        buffer += TItemBuySpecPosition::getMsgLength();
        data_length += TItemBuySpecPosition::getMsgLength();
        TItemSellHedgePosition::writeBuffer(field.sellHedgePosition, buffer);
        buffer += TItemSellHedgePosition::getMsgLength();
        data_length += TItemSellHedgePosition::getMsgLength();
        TItemSellSpecPosition::writeBuffer(field.sellSpecPosition, buffer);
        buffer += TItemSellSpecPosition::getMsgLength();
        data_length += TItemSellSpecPosition::getMsgLength();
        TItemBuyOffsHPosition::writeBuffer(field.buyOffsHPosition, buffer);
        buffer += TItemBuyOffsHPosition::getMsgLength();
        data_length += TItemBuyOffsHPosition::getMsgLength();
        TItemBuyOffsSPosition::writeBuffer(field.buyOffsSPosition, buffer);
        buffer += TItemBuyOffsSPosition::getMsgLength();
        data_length += TItemBuyOffsSPosition::getMsgLength();
        TItemSellOffsHPosition::writeBuffer(field.sellOffsHPosition, buffer);
        buffer += TItemSellOffsHPosition::getMsgLength();
        data_length += TItemSellOffsHPosition::getMsgLength();
        TItemSellOffsSPosition::writeBuffer(field.sellOffsSPosition, buffer);
        buffer += TItemSellOffsSPosition::getMsgLength();
        data_length += TItemSellOffsSPosition::getMsgLength();
        TItemYdBuyOffsHPosition::writeBuffer(field.ydBuyOffsHPosition, buffer);
        buffer += TItemYdBuyOffsHPosition::getMsgLength();
        data_length += TItemYdBuyOffsHPosition::getMsgLength();
        TItemYdBuyOffsSPosition::writeBuffer(field.ydBuyOffsSPosition, buffer);
        buffer += TItemYdBuyOffsSPosition::getMsgLength();
        data_length += TItemYdBuyOffsSPosition::getMsgLength();
        TItemYdSellOffsHPosition::writeBuffer(field.ydSellOffsHPosition, buffer);
        buffer += TItemYdSellOffsHPosition::getMsgLength();
        data_length += TItemYdSellOffsHPosition::getMsgLength();
        TItemYdSellOffsSPosition::writeBuffer(field.ydSellOffsSPosition, buffer);
        buffer += TItemYdSellOffsSPosition::getMsgLength();
        data_length += TItemYdSellOffsSPosition::getMsgLength();
        TItemLongOpenFrozHPosition::writeBuffer(field.longOpenFrozHPosition, buffer);
        buffer += TItemLongOpenFrozHPosition::getMsgLength();
        data_length += TItemLongOpenFrozHPosition::getMsgLength();
        TItemLongOpenFrozSPosition::writeBuffer(field.longOpenFrozSPosition, buffer);
        buffer += TItemLongOpenFrozSPosition::getMsgLength();
        data_length += TItemLongOpenFrozSPosition::getMsgLength();
        TItemShortOpenFrozHPosition::writeBuffer(field.shortOpenFrozHPosition, buffer);
        buffer += TItemShortOpenFrozHPosition::getMsgLength();
        data_length += TItemShortOpenFrozHPosition::getMsgLength();
        TItemShortOpenFrozSPosition::writeBuffer(field.shortOpenFrozSPosition, buffer);
        buffer += TItemShortOpenFrozSPosition::getMsgLength();
        data_length += TItemShortOpenFrozSPosition::getMsgLength();
        TItemLongOffsFrozHPosition::writeBuffer(field.longOffsFrozHPosition, buffer);
        buffer += TItemLongOffsFrozHPosition::getMsgLength();
        data_length += TItemLongOffsFrozHPosition::getMsgLength();
        TItemLongOffsFrozSPosition::writeBuffer(field.longOffsFrozSPosition, buffer);
        buffer += TItemLongOffsFrozSPosition::getMsgLength();
        data_length += TItemLongOffsFrozSPosition::getMsgLength();
        TItemShortOffsFrozHPosition::writeBuffer(field.shortOffsFrozHPosition, buffer);
        buffer += TItemShortOffsFrozHPosition::getMsgLength();
        data_length += TItemShortOffsFrozHPosition::getMsgLength();
        TItemShortOffsFrozSPosition::writeBuffer(field.shortOffsFrozSPosition, buffer);
        buffer += TItemShortOffsFrozSPosition::getMsgLength();
        data_length += TItemShortOffsFrozSPosition::getMsgLength();
        TItemYdLongOffsFrozHPosition::writeBuffer(field.ydLongOffsFrozHPosition, buffer);
        buffer += TItemYdLongOffsFrozHPosition::getMsgLength();
        data_length += TItemYdLongOffsFrozHPosition::getMsgLength();
        TItemYdLongOffsFrozSPosition::writeBuffer(field.ydLongOffsFrozSPosition, buffer);
        buffer += TItemYdLongOffsFrozSPosition::getMsgLength();
        data_length += TItemYdLongOffsFrozSPosition::getMsgLength();
        TItemYdShortOffsFrozHPosition::writeBuffer(field.ydShortOffsFrozHPosition, buffer);
        buffer += TItemYdShortOffsFrozHPosition::getMsgLength();
        data_length += TItemYdShortOffsFrozHPosition::getMsgLength();
        TItemYdShortOffsFrozSPosition::writeBuffer(field.ydShortOffsFrozSPosition, buffer);
        buffer += TItemYdShortOffsFrozSPosition::getMsgLength();
        data_length += TItemYdShortOffsFrozSPosition::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, PositionField& field, int& readLen)
	{
		int data_length = 0;
        TItemParticipantId::readBuffer(buffer, field.participantId);
        buffer += TItemParticipantId::getMsgLength();
        data_length += TItemParticipantId::getMsgLength();
        TItemClientId::readBuffer(buffer, field.clientId);
        buffer += TItemClientId::getMsgLength();
        data_length += TItemClientId::getMsgLength();
        TItemInstrumentId::readBuffer(buffer, field.instrumentId);
        buffer += TItemInstrumentId::getMsgLength();
        data_length += TItemInstrumentId::getMsgLength();
        TItemInstrumentVersion::readBuffer(buffer, field.instrumentVersion);
        buffer += TItemInstrumentVersion::getMsgLength();
        data_length += TItemInstrumentVersion::getMsgLength();
        TItemTradeDate::readBuffer(buffer, field.tradeDate);
        buffer += TItemTradeDate::getMsgLength();
        data_length += TItemTradeDate::getMsgLength();
        TItemYdBuyHedgePosition::readBuffer(buffer, field.ydBuyHedgePosition);
        buffer += TItemYdBuyHedgePosition::getMsgLength();
        data_length += TItemYdBuyHedgePosition::getMsgLength();
        TItemYdBuySpecPosition::readBuffer(buffer, field.ydBuySpecPosition);
        buffer += TItemYdBuySpecPosition::getMsgLength();
        data_length += TItemYdBuySpecPosition::getMsgLength();
        TItemYdSellHedgePosition::readBuffer(buffer, field.ydSellHedgePosition);
        buffer += TItemYdSellHedgePosition::getMsgLength();
        data_length += TItemYdSellHedgePosition::getMsgLength();
        TItemYdSellSpecPosition::readBuffer(buffer, field.ydSellSpecPosition);
        buffer += TItemYdSellSpecPosition::getMsgLength();
        data_length += TItemYdSellSpecPosition::getMsgLength();
        TItemBuyHedgeVolume::readBuffer(buffer, field.buyHedgeVolume);
        buffer += TItemBuyHedgeVolume::getMsgLength();
        data_length += TItemBuyHedgeVolume::getMsgLength();
        TItemBuySpecVolume::readBuffer(buffer, field.buySpecVolume);
        buffer += TItemBuySpecVolume::getMsgLength();
        data_length += TItemBuySpecVolume::getMsgLength();
        TItemSellHedgeVolume::readBuffer(buffer, field.sellHedgeVolume);
        buffer += TItemSellHedgeVolume::getMsgLength();
        data_length += TItemSellHedgeVolume::getMsgLength();
        TItemSellSpecVolume::readBuffer(buffer, field.sellSpecVolume);
        buffer += TItemSellSpecVolume::getMsgLength();
        data_length += TItemSellSpecVolume::getMsgLength();
        TItemBuyHedgePosition::readBuffer(buffer, field.buyHedgePosition);
        buffer += TItemBuyHedgePosition::getMsgLength();
        data_length += TItemBuyHedgePosition::getMsgLength();
        TItemBuySpecPosition::readBuffer(buffer, field.buySpecPosition);
        buffer += TItemBuySpecPosition::getMsgLength();
        data_length += TItemBuySpecPosition::getMsgLength();
        TItemSellHedgePosition::readBuffer(buffer, field.sellHedgePosition);
        buffer += TItemSellHedgePosition::getMsgLength();
        data_length += TItemSellHedgePosition::getMsgLength();
        TItemSellSpecPosition::readBuffer(buffer, field.sellSpecPosition);
        buffer += TItemSellSpecPosition::getMsgLength();
        data_length += TItemSellSpecPosition::getMsgLength();
        TItemBuyOffsHPosition::readBuffer(buffer, field.buyOffsHPosition);
        buffer += TItemBuyOffsHPosition::getMsgLength();
        data_length += TItemBuyOffsHPosition::getMsgLength();
        TItemBuyOffsSPosition::readBuffer(buffer, field.buyOffsSPosition);
        buffer += TItemBuyOffsSPosition::getMsgLength();
        data_length += TItemBuyOffsSPosition::getMsgLength();
        TItemSellOffsHPosition::readBuffer(buffer, field.sellOffsHPosition);
        buffer += TItemSellOffsHPosition::getMsgLength();
        data_length += TItemSellOffsHPosition::getMsgLength();
        TItemSellOffsSPosition::readBuffer(buffer, field.sellOffsSPosition);
        buffer += TItemSellOffsSPosition::getMsgLength();
        data_length += TItemSellOffsSPosition::getMsgLength();
        TItemYdBuyOffsHPosition::readBuffer(buffer, field.ydBuyOffsHPosition);
        buffer += TItemYdBuyOffsHPosition::getMsgLength();
        data_length += TItemYdBuyOffsHPosition::getMsgLength();
        TItemYdBuyOffsSPosition::readBuffer(buffer, field.ydBuyOffsSPosition);
        buffer += TItemYdBuyOffsSPosition::getMsgLength();
        data_length += TItemYdBuyOffsSPosition::getMsgLength();
        TItemYdSellOffsHPosition::readBuffer(buffer, field.ydSellOffsHPosition);
        buffer += TItemYdSellOffsHPosition::getMsgLength();
        data_length += TItemYdSellOffsHPosition::getMsgLength();
        TItemYdSellOffsSPosition::readBuffer(buffer, field.ydSellOffsSPosition);
        buffer += TItemYdSellOffsSPosition::getMsgLength();
        data_length += TItemYdSellOffsSPosition::getMsgLength();
        TItemLongOpenFrozHPosition::readBuffer(buffer, field.longOpenFrozHPosition);
        buffer += TItemLongOpenFrozHPosition::getMsgLength();
        data_length += TItemLongOpenFrozHPosition::getMsgLength();
        TItemLongOpenFrozSPosition::readBuffer(buffer, field.longOpenFrozSPosition);
        buffer += TItemLongOpenFrozSPosition::getMsgLength();
        data_length += TItemLongOpenFrozSPosition::getMsgLength();
        TItemShortOpenFrozHPosition::readBuffer(buffer, field.shortOpenFrozHPosition);
        buffer += TItemShortOpenFrozHPosition::getMsgLength();
        data_length += TItemShortOpenFrozHPosition::getMsgLength();
        TItemShortOpenFrozSPosition::readBuffer(buffer, field.shortOpenFrozSPosition);
        buffer += TItemShortOpenFrozSPosition::getMsgLength();
        data_length += TItemShortOpenFrozSPosition::getMsgLength();
        TItemLongOffsFrozHPosition::readBuffer(buffer, field.longOffsFrozHPosition);
        buffer += TItemLongOffsFrozHPosition::getMsgLength();
        data_length += TItemLongOffsFrozHPosition::getMsgLength();
        TItemLongOffsFrozSPosition::readBuffer(buffer, field.longOffsFrozSPosition);
        buffer += TItemLongOffsFrozSPosition::getMsgLength();
        data_length += TItemLongOffsFrozSPosition::getMsgLength();
        TItemShortOffsFrozHPosition::readBuffer(buffer, field.shortOffsFrozHPosition);
        buffer += TItemShortOffsFrozHPosition::getMsgLength();
        data_length += TItemShortOffsFrozHPosition::getMsgLength();
        TItemShortOffsFrozSPosition::readBuffer(buffer, field.shortOffsFrozSPosition);
        buffer += TItemShortOffsFrozSPosition::getMsgLength();
        data_length += TItemShortOffsFrozSPosition::getMsgLength();
        TItemYdLongOffsFrozHPosition::readBuffer(buffer, field.ydLongOffsFrozHPosition);
        buffer += TItemYdLongOffsFrozHPosition::getMsgLength();
        data_length += TItemYdLongOffsFrozHPosition::getMsgLength();
        TItemYdLongOffsFrozSPosition::readBuffer(buffer, field.ydLongOffsFrozSPosition);
        buffer += TItemYdLongOffsFrozSPosition::getMsgLength();
        data_length += TItemYdLongOffsFrozSPosition::getMsgLength();
        TItemYdShortOffsFrozHPosition::readBuffer(buffer, field.ydShortOffsFrozHPosition);
        buffer += TItemYdShortOffsFrozHPosition::getMsgLength();
        data_length += TItemYdShortOffsFrozHPosition::getMsgLength();
        TItemYdShortOffsFrozSPosition::readBuffer(buffer, field.ydShortOffsFrozSPosition);
        buffer += TItemYdShortOffsFrozSPosition::getMsgLength();
        data_length += TItemYdShortOffsFrozSPosition::getMsgLength();
		readLen = data_length;
	}
};

}
#endif