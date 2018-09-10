#ifndef FTD20_DEPOSITFIELD_H
#define FTD20_DEPOSITFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct DepositField
	{
            TTPropertyParticipantId participantId;
            TTPropertyParticipantType participantType;
            TTPropertyTradeDate tradeDate;
            TTPropertyInitMargin initMargin;
            TTPropertyBuySpecOpenUsedMargin buySpecOpenUsedMargin;
            TTPropertyBuyHedgeOpenUsedMargin buyHedgeOpenUsedMargin;
            TTPropertySellSpecOpenUsedMargin sellSpecOpenUsedMargin;
            TTPropertySellHedgeOpenUsedMargin sellHedgeOpenUsedMargin;
            TTPropertyBuySpecOffsetProfit buySpecOffsetProfit;
            TTPropertyBuyHedgeOffsetProfit buyHedgeOffsetProfit;
            TTPropertySellSpecOffsetProfit sellSpecOffsetProfit;
            TTPropertySellHedgeOffsetProfit sellHedgeOffsetProfit;
            TTPropertyBuySpecOpenFrozMargin buySpecOpenFrozMargin;
            TTPropertyBuyHedgeOpenFrozMargin buyHedgeOpenFrozMargin;
            TTPropertySellSpecOpenFrozMargin sellSpecOpenFrozMargin;
            TTPropertySellHedgeOpenFrozMargin sellHedgeOpenFrozMargin;
            TTPropertyBuySpecOffsetMargin buySpecOffsetMargin;
            TTPropertyBuyHedgeOffsetMargin buyHedgeOffsetMargin;
            TTPropertySellSpecOffsetMargin sellSpecOffsetMargin;
            TTPropertySellHedgeOffsetMargin sellHedgeOffsetMargin;
            TTPropertyBuySpecTurnOver buySpecTurnOver;
            TTPropertyBuyHedgeTurnOver buyHedgeTurnOver;
            TTPropertySellSpecTurnOver sellSpecTurnOver;
            TTPropertySellHedgeTurnOver sellHedgeTurnOver;
            TTPropertyAddValue addValue;
            TTPropertyDelValue delValue;
            TTPropertyBalanceValue balanceValue;
	};

	class DepositFieldHelper
	{
	public:
		static void writeBuffer(const DepositField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyParticipantType::writeBuffer(field.participantType, buffer);
            buffer += TPropertyParticipantType::getMsgLength();
            data_length += TPropertyParticipantType::getMsgLength();
            TPropertyTradeDate::writeBuffer(field.tradeDate, buffer);
            buffer += TPropertyTradeDate::getMsgLength();
            data_length += TPropertyTradeDate::getMsgLength();
            TPropertyInitMargin::writeBuffer(field.initMargin, buffer);
            buffer += TPropertyInitMargin::getMsgLength();
            data_length += TPropertyInitMargin::getMsgLength();
            TPropertyBuySpecOpenUsedMargin::writeBuffer(field.buySpecOpenUsedMargin, buffer);
            buffer += TPropertyBuySpecOpenUsedMargin::getMsgLength();
            data_length += TPropertyBuySpecOpenUsedMargin::getMsgLength();
            TPropertyBuyHedgeOpenUsedMargin::writeBuffer(field.buyHedgeOpenUsedMargin, buffer);
            buffer += TPropertyBuyHedgeOpenUsedMargin::getMsgLength();
            data_length += TPropertyBuyHedgeOpenUsedMargin::getMsgLength();
            TPropertySellSpecOpenUsedMargin::writeBuffer(field.sellSpecOpenUsedMargin, buffer);
            buffer += TPropertySellSpecOpenUsedMargin::getMsgLength();
            data_length += TPropertySellSpecOpenUsedMargin::getMsgLength();
            TPropertySellHedgeOpenUsedMargin::writeBuffer(field.sellHedgeOpenUsedMargin, buffer);
            buffer += TPropertySellHedgeOpenUsedMargin::getMsgLength();
            data_length += TPropertySellHedgeOpenUsedMargin::getMsgLength();
            TPropertyBuySpecOffsetProfit::writeBuffer(field.buySpecOffsetProfit, buffer);
            buffer += TPropertyBuySpecOffsetProfit::getMsgLength();
            data_length += TPropertyBuySpecOffsetProfit::getMsgLength();
            TPropertyBuyHedgeOffsetProfit::writeBuffer(field.buyHedgeOffsetProfit, buffer);
            buffer += TPropertyBuyHedgeOffsetProfit::getMsgLength();
            data_length += TPropertyBuyHedgeOffsetProfit::getMsgLength();
            TPropertySellSpecOffsetProfit::writeBuffer(field.sellSpecOffsetProfit, buffer);
            buffer += TPropertySellSpecOffsetProfit::getMsgLength();
            data_length += TPropertySellSpecOffsetProfit::getMsgLength();
            TPropertySellHedgeOffsetProfit::writeBuffer(field.sellHedgeOffsetProfit, buffer);
            buffer += TPropertySellHedgeOffsetProfit::getMsgLength();
            data_length += TPropertySellHedgeOffsetProfit::getMsgLength();
            TPropertyBuySpecOpenFrozMargin::writeBuffer(field.buySpecOpenFrozMargin, buffer);
            buffer += TPropertyBuySpecOpenFrozMargin::getMsgLength();
            data_length += TPropertyBuySpecOpenFrozMargin::getMsgLength();
            TPropertyBuyHedgeOpenFrozMargin::writeBuffer(field.buyHedgeOpenFrozMargin, buffer);
            buffer += TPropertyBuyHedgeOpenFrozMargin::getMsgLength();
            data_length += TPropertyBuyHedgeOpenFrozMargin::getMsgLength();
            TPropertySellSpecOpenFrozMargin::writeBuffer(field.sellSpecOpenFrozMargin, buffer);
            buffer += TPropertySellSpecOpenFrozMargin::getMsgLength();
            data_length += TPropertySellSpecOpenFrozMargin::getMsgLength();
            TPropertySellHedgeOpenFrozMargin::writeBuffer(field.sellHedgeOpenFrozMargin, buffer);
            buffer += TPropertySellHedgeOpenFrozMargin::getMsgLength();
            data_length += TPropertySellHedgeOpenFrozMargin::getMsgLength();
            TPropertyBuySpecOffsetMargin::writeBuffer(field.buySpecOffsetMargin, buffer);
            buffer += TPropertyBuySpecOffsetMargin::getMsgLength();
            data_length += TPropertyBuySpecOffsetMargin::getMsgLength();
            TPropertyBuyHedgeOffsetMargin::writeBuffer(field.buyHedgeOffsetMargin, buffer);
            buffer += TPropertyBuyHedgeOffsetMargin::getMsgLength();
            data_length += TPropertyBuyHedgeOffsetMargin::getMsgLength();
            TPropertySellSpecOffsetMargin::writeBuffer(field.sellSpecOffsetMargin, buffer);
            buffer += TPropertySellSpecOffsetMargin::getMsgLength();
            data_length += TPropertySellSpecOffsetMargin::getMsgLength();
            TPropertySellHedgeOffsetMargin::writeBuffer(field.sellHedgeOffsetMargin, buffer);
            buffer += TPropertySellHedgeOffsetMargin::getMsgLength();
            data_length += TPropertySellHedgeOffsetMargin::getMsgLength();
            TPropertyBuySpecTurnOver::writeBuffer(field.buySpecTurnOver, buffer);
            buffer += TPropertyBuySpecTurnOver::getMsgLength();
            data_length += TPropertyBuySpecTurnOver::getMsgLength();
            TPropertyBuyHedgeTurnOver::writeBuffer(field.buyHedgeTurnOver, buffer);
            buffer += TPropertyBuyHedgeTurnOver::getMsgLength();
            data_length += TPropertyBuyHedgeTurnOver::getMsgLength();
            TPropertySellSpecTurnOver::writeBuffer(field.sellSpecTurnOver, buffer);
            buffer += TPropertySellSpecTurnOver::getMsgLength();
            data_length += TPropertySellSpecTurnOver::getMsgLength();
            TPropertySellHedgeTurnOver::writeBuffer(field.sellHedgeTurnOver, buffer);
            buffer += TPropertySellHedgeTurnOver::getMsgLength();
            data_length += TPropertySellHedgeTurnOver::getMsgLength();
            TPropertyAddValue::writeBuffer(field.addValue, buffer);
            buffer += TPropertyAddValue::getMsgLength();
            data_length += TPropertyAddValue::getMsgLength();
            TPropertyDelValue::writeBuffer(field.delValue, buffer);
            buffer += TPropertyDelValue::getMsgLength();
            data_length += TPropertyDelValue::getMsgLength();
            TPropertyBalanceValue::writeBuffer(field.balanceValue, buffer);
            buffer += TPropertyBalanceValue::getMsgLength();
            data_length += TPropertyBalanceValue::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, DepositField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyParticipantId::readBuffer(buffer, field.participantId);
            buffer += TPropertyParticipantId::getMsgLength();
            data_length += TPropertyParticipantId::getMsgLength();
            TPropertyParticipantType::readBuffer(buffer, field.participantType);
            buffer += TPropertyParticipantType::getMsgLength();
            data_length += TPropertyParticipantType::getMsgLength();
            TPropertyTradeDate::readBuffer(buffer, field.tradeDate);
            buffer += TPropertyTradeDate::getMsgLength();
            data_length += TPropertyTradeDate::getMsgLength();
            TPropertyInitMargin::readBuffer(buffer, field.initMargin);
            buffer += TPropertyInitMargin::getMsgLength();
            data_length += TPropertyInitMargin::getMsgLength();
            TPropertyBuySpecOpenUsedMargin::readBuffer(buffer, field.buySpecOpenUsedMargin);
            buffer += TPropertyBuySpecOpenUsedMargin::getMsgLength();
            data_length += TPropertyBuySpecOpenUsedMargin::getMsgLength();
            TPropertyBuyHedgeOpenUsedMargin::readBuffer(buffer, field.buyHedgeOpenUsedMargin);
            buffer += TPropertyBuyHedgeOpenUsedMargin::getMsgLength();
            data_length += TPropertyBuyHedgeOpenUsedMargin::getMsgLength();
            TPropertySellSpecOpenUsedMargin::readBuffer(buffer, field.sellSpecOpenUsedMargin);
            buffer += TPropertySellSpecOpenUsedMargin::getMsgLength();
            data_length += TPropertySellSpecOpenUsedMargin::getMsgLength();
            TPropertySellHedgeOpenUsedMargin::readBuffer(buffer, field.sellHedgeOpenUsedMargin);
            buffer += TPropertySellHedgeOpenUsedMargin::getMsgLength();
            data_length += TPropertySellHedgeOpenUsedMargin::getMsgLength();
            TPropertyBuySpecOffsetProfit::readBuffer(buffer, field.buySpecOffsetProfit);
            buffer += TPropertyBuySpecOffsetProfit::getMsgLength();
            data_length += TPropertyBuySpecOffsetProfit::getMsgLength();
            TPropertyBuyHedgeOffsetProfit::readBuffer(buffer, field.buyHedgeOffsetProfit);
            buffer += TPropertyBuyHedgeOffsetProfit::getMsgLength();
            data_length += TPropertyBuyHedgeOffsetProfit::getMsgLength();
            TPropertySellSpecOffsetProfit::readBuffer(buffer, field.sellSpecOffsetProfit);
            buffer += TPropertySellSpecOffsetProfit::getMsgLength();
            data_length += TPropertySellSpecOffsetProfit::getMsgLength();
            TPropertySellHedgeOffsetProfit::readBuffer(buffer, field.sellHedgeOffsetProfit);
            buffer += TPropertySellHedgeOffsetProfit::getMsgLength();
            data_length += TPropertySellHedgeOffsetProfit::getMsgLength();
            TPropertyBuySpecOpenFrozMargin::readBuffer(buffer, field.buySpecOpenFrozMargin);
            buffer += TPropertyBuySpecOpenFrozMargin::getMsgLength();
            data_length += TPropertyBuySpecOpenFrozMargin::getMsgLength();
            TPropertyBuyHedgeOpenFrozMargin::readBuffer(buffer, field.buyHedgeOpenFrozMargin);
            buffer += TPropertyBuyHedgeOpenFrozMargin::getMsgLength();
            data_length += TPropertyBuyHedgeOpenFrozMargin::getMsgLength();
            TPropertySellSpecOpenFrozMargin::readBuffer(buffer, field.sellSpecOpenFrozMargin);
            buffer += TPropertySellSpecOpenFrozMargin::getMsgLength();
            data_length += TPropertySellSpecOpenFrozMargin::getMsgLength();
            TPropertySellHedgeOpenFrozMargin::readBuffer(buffer, field.sellHedgeOpenFrozMargin);
            buffer += TPropertySellHedgeOpenFrozMargin::getMsgLength();
            data_length += TPropertySellHedgeOpenFrozMargin::getMsgLength();
            TPropertyBuySpecOffsetMargin::readBuffer(buffer, field.buySpecOffsetMargin);
            buffer += TPropertyBuySpecOffsetMargin::getMsgLength();
            data_length += TPropertyBuySpecOffsetMargin::getMsgLength();
            TPropertyBuyHedgeOffsetMargin::readBuffer(buffer, field.buyHedgeOffsetMargin);
            buffer += TPropertyBuyHedgeOffsetMargin::getMsgLength();
            data_length += TPropertyBuyHedgeOffsetMargin::getMsgLength();
            TPropertySellSpecOffsetMargin::readBuffer(buffer, field.sellSpecOffsetMargin);
            buffer += TPropertySellSpecOffsetMargin::getMsgLength();
            data_length += TPropertySellSpecOffsetMargin::getMsgLength();
            TPropertySellHedgeOffsetMargin::readBuffer(buffer, field.sellHedgeOffsetMargin);
            buffer += TPropertySellHedgeOffsetMargin::getMsgLength();
            data_length += TPropertySellHedgeOffsetMargin::getMsgLength();
            TPropertyBuySpecTurnOver::readBuffer(buffer, field.buySpecTurnOver);
            buffer += TPropertyBuySpecTurnOver::getMsgLength();
            data_length += TPropertyBuySpecTurnOver::getMsgLength();
            TPropertyBuyHedgeTurnOver::readBuffer(buffer, field.buyHedgeTurnOver);
            buffer += TPropertyBuyHedgeTurnOver::getMsgLength();
            data_length += TPropertyBuyHedgeTurnOver::getMsgLength();
            TPropertySellSpecTurnOver::readBuffer(buffer, field.sellSpecTurnOver);
            buffer += TPropertySellSpecTurnOver::getMsgLength();
            data_length += TPropertySellSpecTurnOver::getMsgLength();
            TPropertySellHedgeTurnOver::readBuffer(buffer, field.sellHedgeTurnOver);
            buffer += TPropertySellHedgeTurnOver::getMsgLength();
            data_length += TPropertySellHedgeTurnOver::getMsgLength();
            TPropertyAddValue::readBuffer(buffer, field.addValue);
            buffer += TPropertyAddValue::getMsgLength();
            data_length += TPropertyAddValue::getMsgLength();
            TPropertyDelValue::readBuffer(buffer, field.delValue);
            buffer += TPropertyDelValue::getMsgLength();
            data_length += TPropertyDelValue::getMsgLength();
            TPropertyBalanceValue::readBuffer(buffer, field.balanceValue);
            buffer += TPropertyBalanceValue::getMsgLength();
            data_length += TPropertyBalanceValue::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif