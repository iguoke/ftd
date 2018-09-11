/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_DEPOSITFIELD_H
#define FTD20_DEPOSITFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct DepositField
	{
            TTItemParticipantId participantId;
            TTItemParticipantType participantType;
            TTItemTradeDate tradeDate;
            TTItemInitMargin initMargin;
            TTItemBuySpecOpenUsedMargin buySpecOpenUsedMargin;
            TTItemBuyHedgeOpenUsedMargin buyHedgeOpenUsedMargin;
            TTItemSellSpecOpenUsedMargin sellSpecOpenUsedMargin;
            TTItemSellHedgeOpenUsedMargin sellHedgeOpenUsedMargin;
            TTItemBuySpecOffsetProfit buySpecOffsetProfit;
            TTItemBuyHedgeOffsetProfit buyHedgeOffsetProfit;
            TTItemSellSpecOffsetProfit sellSpecOffsetProfit;
            TTItemSellHedgeOffsetProfit sellHedgeOffsetProfit;
            TTItemBuySpecOpenFrozMargin buySpecOpenFrozMargin;
            TTItemBuyHedgeOpenFrozMargin buyHedgeOpenFrozMargin;
            TTItemSellSpecOpenFrozMargin sellSpecOpenFrozMargin;
            TTItemSellHedgeOpenFrozMargin sellHedgeOpenFrozMargin;
            TTItemBuySpecOffsetMargin buySpecOffsetMargin;
            TTItemBuyHedgeOffsetMargin buyHedgeOffsetMargin;
            TTItemSellSpecOffsetMargin sellSpecOffsetMargin;
            TTItemSellHedgeOffsetMargin sellHedgeOffsetMargin;
            TTItemBuySpecTurnOver buySpecTurnOver;
            TTItemBuyHedgeTurnOver buyHedgeTurnOver;
            TTItemSellSpecTurnOver sellSpecTurnOver;
            TTItemSellHedgeTurnOver sellHedgeTurnOver;
            TTItemAddValue addValue;
            TTItemDelValue delValue;
            TTItemBalanceValue balanceValue;
	};

	class DepositFieldHelper
	{
	public:
		static void writeBuffer(const DepositField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemParticipantType::writeBuffer(field.participantType, buffer);
            buffer += TItemParticipantType::getMsgLength();
            data_length += TItemParticipantType::getMsgLength();
            TItemTradeDate::writeBuffer(field.tradeDate, buffer);
            buffer += TItemTradeDate::getMsgLength();
            data_length += TItemTradeDate::getMsgLength();
            TItemInitMargin::writeBuffer(field.initMargin, buffer);
            buffer += TItemInitMargin::getMsgLength();
            data_length += TItemInitMargin::getMsgLength();
            TItemBuySpecOpenUsedMargin::writeBuffer(field.buySpecOpenUsedMargin, buffer);
            buffer += TItemBuySpecOpenUsedMargin::getMsgLength();
            data_length += TItemBuySpecOpenUsedMargin::getMsgLength();
            TItemBuyHedgeOpenUsedMargin::writeBuffer(field.buyHedgeOpenUsedMargin, buffer);
            buffer += TItemBuyHedgeOpenUsedMargin::getMsgLength();
            data_length += TItemBuyHedgeOpenUsedMargin::getMsgLength();
            TItemSellSpecOpenUsedMargin::writeBuffer(field.sellSpecOpenUsedMargin, buffer);
            buffer += TItemSellSpecOpenUsedMargin::getMsgLength();
            data_length += TItemSellSpecOpenUsedMargin::getMsgLength();
            TItemSellHedgeOpenUsedMargin::writeBuffer(field.sellHedgeOpenUsedMargin, buffer);
            buffer += TItemSellHedgeOpenUsedMargin::getMsgLength();
            data_length += TItemSellHedgeOpenUsedMargin::getMsgLength();
            TItemBuySpecOffsetProfit::writeBuffer(field.buySpecOffsetProfit, buffer);
            buffer += TItemBuySpecOffsetProfit::getMsgLength();
            data_length += TItemBuySpecOffsetProfit::getMsgLength();
            TItemBuyHedgeOffsetProfit::writeBuffer(field.buyHedgeOffsetProfit, buffer);
            buffer += TItemBuyHedgeOffsetProfit::getMsgLength();
            data_length += TItemBuyHedgeOffsetProfit::getMsgLength();
            TItemSellSpecOffsetProfit::writeBuffer(field.sellSpecOffsetProfit, buffer);
            buffer += TItemSellSpecOffsetProfit::getMsgLength();
            data_length += TItemSellSpecOffsetProfit::getMsgLength();
            TItemSellHedgeOffsetProfit::writeBuffer(field.sellHedgeOffsetProfit, buffer);
            buffer += TItemSellHedgeOffsetProfit::getMsgLength();
            data_length += TItemSellHedgeOffsetProfit::getMsgLength();
            TItemBuySpecOpenFrozMargin::writeBuffer(field.buySpecOpenFrozMargin, buffer);
            buffer += TItemBuySpecOpenFrozMargin::getMsgLength();
            data_length += TItemBuySpecOpenFrozMargin::getMsgLength();
            TItemBuyHedgeOpenFrozMargin::writeBuffer(field.buyHedgeOpenFrozMargin, buffer);
            buffer += TItemBuyHedgeOpenFrozMargin::getMsgLength();
            data_length += TItemBuyHedgeOpenFrozMargin::getMsgLength();
            TItemSellSpecOpenFrozMargin::writeBuffer(field.sellSpecOpenFrozMargin, buffer);
            buffer += TItemSellSpecOpenFrozMargin::getMsgLength();
            data_length += TItemSellSpecOpenFrozMargin::getMsgLength();
            TItemSellHedgeOpenFrozMargin::writeBuffer(field.sellHedgeOpenFrozMargin, buffer);
            buffer += TItemSellHedgeOpenFrozMargin::getMsgLength();
            data_length += TItemSellHedgeOpenFrozMargin::getMsgLength();
            TItemBuySpecOffsetMargin::writeBuffer(field.buySpecOffsetMargin, buffer);
            buffer += TItemBuySpecOffsetMargin::getMsgLength();
            data_length += TItemBuySpecOffsetMargin::getMsgLength();
            TItemBuyHedgeOffsetMargin::writeBuffer(field.buyHedgeOffsetMargin, buffer);
            buffer += TItemBuyHedgeOffsetMargin::getMsgLength();
            data_length += TItemBuyHedgeOffsetMargin::getMsgLength();
            TItemSellSpecOffsetMargin::writeBuffer(field.sellSpecOffsetMargin, buffer);
            buffer += TItemSellSpecOffsetMargin::getMsgLength();
            data_length += TItemSellSpecOffsetMargin::getMsgLength();
            TItemSellHedgeOffsetMargin::writeBuffer(field.sellHedgeOffsetMargin, buffer);
            buffer += TItemSellHedgeOffsetMargin::getMsgLength();
            data_length += TItemSellHedgeOffsetMargin::getMsgLength();
            TItemBuySpecTurnOver::writeBuffer(field.buySpecTurnOver, buffer);
            buffer += TItemBuySpecTurnOver::getMsgLength();
            data_length += TItemBuySpecTurnOver::getMsgLength();
            TItemBuyHedgeTurnOver::writeBuffer(field.buyHedgeTurnOver, buffer);
            buffer += TItemBuyHedgeTurnOver::getMsgLength();
            data_length += TItemBuyHedgeTurnOver::getMsgLength();
            TItemSellSpecTurnOver::writeBuffer(field.sellSpecTurnOver, buffer);
            buffer += TItemSellSpecTurnOver::getMsgLength();
            data_length += TItemSellSpecTurnOver::getMsgLength();
            TItemSellHedgeTurnOver::writeBuffer(field.sellHedgeTurnOver, buffer);
            buffer += TItemSellHedgeTurnOver::getMsgLength();
            data_length += TItemSellHedgeTurnOver::getMsgLength();
            TItemAddValue::writeBuffer(field.addValue, buffer);
            buffer += TItemAddValue::getMsgLength();
            data_length += TItemAddValue::getMsgLength();
            TItemDelValue::writeBuffer(field.delValue, buffer);
            buffer += TItemDelValue::getMsgLength();
            data_length += TItemDelValue::getMsgLength();
            TItemBalanceValue::writeBuffer(field.balanceValue, buffer);
            buffer += TItemBalanceValue::getMsgLength();
            data_length += TItemBalanceValue::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, DepositField& field, int& readLen)
		{
			int data_length = 0;
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemParticipantType::readBuffer(buffer, field.participantType);
            buffer += TItemParticipantType::getMsgLength();
            data_length += TItemParticipantType::getMsgLength();
            TItemTradeDate::readBuffer(buffer, field.tradeDate);
            buffer += TItemTradeDate::getMsgLength();
            data_length += TItemTradeDate::getMsgLength();
            TItemInitMargin::readBuffer(buffer, field.initMargin);
            buffer += TItemInitMargin::getMsgLength();
            data_length += TItemInitMargin::getMsgLength();
            TItemBuySpecOpenUsedMargin::readBuffer(buffer, field.buySpecOpenUsedMargin);
            buffer += TItemBuySpecOpenUsedMargin::getMsgLength();
            data_length += TItemBuySpecOpenUsedMargin::getMsgLength();
            TItemBuyHedgeOpenUsedMargin::readBuffer(buffer, field.buyHedgeOpenUsedMargin);
            buffer += TItemBuyHedgeOpenUsedMargin::getMsgLength();
            data_length += TItemBuyHedgeOpenUsedMargin::getMsgLength();
            TItemSellSpecOpenUsedMargin::readBuffer(buffer, field.sellSpecOpenUsedMargin);
            buffer += TItemSellSpecOpenUsedMargin::getMsgLength();
            data_length += TItemSellSpecOpenUsedMargin::getMsgLength();
            TItemSellHedgeOpenUsedMargin::readBuffer(buffer, field.sellHedgeOpenUsedMargin);
            buffer += TItemSellHedgeOpenUsedMargin::getMsgLength();
            data_length += TItemSellHedgeOpenUsedMargin::getMsgLength();
            TItemBuySpecOffsetProfit::readBuffer(buffer, field.buySpecOffsetProfit);
            buffer += TItemBuySpecOffsetProfit::getMsgLength();
            data_length += TItemBuySpecOffsetProfit::getMsgLength();
            TItemBuyHedgeOffsetProfit::readBuffer(buffer, field.buyHedgeOffsetProfit);
            buffer += TItemBuyHedgeOffsetProfit::getMsgLength();
            data_length += TItemBuyHedgeOffsetProfit::getMsgLength();
            TItemSellSpecOffsetProfit::readBuffer(buffer, field.sellSpecOffsetProfit);
            buffer += TItemSellSpecOffsetProfit::getMsgLength();
            data_length += TItemSellSpecOffsetProfit::getMsgLength();
            TItemSellHedgeOffsetProfit::readBuffer(buffer, field.sellHedgeOffsetProfit);
            buffer += TItemSellHedgeOffsetProfit::getMsgLength();
            data_length += TItemSellHedgeOffsetProfit::getMsgLength();
            TItemBuySpecOpenFrozMargin::readBuffer(buffer, field.buySpecOpenFrozMargin);
            buffer += TItemBuySpecOpenFrozMargin::getMsgLength();
            data_length += TItemBuySpecOpenFrozMargin::getMsgLength();
            TItemBuyHedgeOpenFrozMargin::readBuffer(buffer, field.buyHedgeOpenFrozMargin);
            buffer += TItemBuyHedgeOpenFrozMargin::getMsgLength();
            data_length += TItemBuyHedgeOpenFrozMargin::getMsgLength();
            TItemSellSpecOpenFrozMargin::readBuffer(buffer, field.sellSpecOpenFrozMargin);
            buffer += TItemSellSpecOpenFrozMargin::getMsgLength();
            data_length += TItemSellSpecOpenFrozMargin::getMsgLength();
            TItemSellHedgeOpenFrozMargin::readBuffer(buffer, field.sellHedgeOpenFrozMargin);
            buffer += TItemSellHedgeOpenFrozMargin::getMsgLength();
            data_length += TItemSellHedgeOpenFrozMargin::getMsgLength();
            TItemBuySpecOffsetMargin::readBuffer(buffer, field.buySpecOffsetMargin);
            buffer += TItemBuySpecOffsetMargin::getMsgLength();
            data_length += TItemBuySpecOffsetMargin::getMsgLength();
            TItemBuyHedgeOffsetMargin::readBuffer(buffer, field.buyHedgeOffsetMargin);
            buffer += TItemBuyHedgeOffsetMargin::getMsgLength();
            data_length += TItemBuyHedgeOffsetMargin::getMsgLength();
            TItemSellSpecOffsetMargin::readBuffer(buffer, field.sellSpecOffsetMargin);
            buffer += TItemSellSpecOffsetMargin::getMsgLength();
            data_length += TItemSellSpecOffsetMargin::getMsgLength();
            TItemSellHedgeOffsetMargin::readBuffer(buffer, field.sellHedgeOffsetMargin);
            buffer += TItemSellHedgeOffsetMargin::getMsgLength();
            data_length += TItemSellHedgeOffsetMargin::getMsgLength();
            TItemBuySpecTurnOver::readBuffer(buffer, field.buySpecTurnOver);
            buffer += TItemBuySpecTurnOver::getMsgLength();
            data_length += TItemBuySpecTurnOver::getMsgLength();
            TItemBuyHedgeTurnOver::readBuffer(buffer, field.buyHedgeTurnOver);
            buffer += TItemBuyHedgeTurnOver::getMsgLength();
            data_length += TItemBuyHedgeTurnOver::getMsgLength();
            TItemSellSpecTurnOver::readBuffer(buffer, field.sellSpecTurnOver);
            buffer += TItemSellSpecTurnOver::getMsgLength();
            data_length += TItemSellSpecTurnOver::getMsgLength();
            TItemSellHedgeTurnOver::readBuffer(buffer, field.sellHedgeTurnOver);
            buffer += TItemSellHedgeTurnOver::getMsgLength();
            data_length += TItemSellHedgeTurnOver::getMsgLength();
            TItemAddValue::readBuffer(buffer, field.addValue);
            buffer += TItemAddValue::getMsgLength();
            data_length += TItemAddValue::getMsgLength();
            TItemDelValue::readBuffer(buffer, field.delValue);
            buffer += TItemDelValue::getMsgLength();
            data_length += TItemDelValue::getMsgLength();
            TItemBalanceValue::readBuffer(buffer, field.balanceValue);
            buffer += TItemBalanceValue::getMsgLength();
            data_length += TItemBalanceValue::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif