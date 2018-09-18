#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <BaseType.h>
#include <UnitTest++.h>
#include <FTD20/Fields.h>
#include <FTD20/Error.h>
using namespace FTD;

SUITE(FTDTest)
{

	TEST(BulltinField)
	{
		FTD::BulletinField field = { 0 };
		char* buffer = new char[4096];
		int writeLen = 20;
		int readLen = 10;
		FTD::BulletinFieldHelper::writeBuffer(field, buffer, writeLen);
		FTD::BulletinFieldHelper::readBuffer(buffer, field, readLen);
		CHECK_EQUAL(writeLen, readLen);
		delete buffer;
	}

	TEST(ClientField)
	{
		FTD::ClientField field = { 0 };
		FTD::ClientField field2 = { 0 };
		strcpy(field.clientId, "12345678");
		char* buffer = new char[4096];
		int writeLen = 20;
		int readLen = 10;
		FTD::ClientFieldHelper::writeBuffer(field, buffer, writeLen);
		FTD::ClientFieldHelper::readBuffer(buffer, field2, readLen);
		CHECK_EQUAL(writeLen, readLen);
		CHECK_EQUAL("12345678", field2.clientId);
		delete buffer;
	}

	TEST(ClientField2)
	{
		FTD::ClientField field = { 0 };
		FTD::ClientField field2 = { 0 };
		strcpy(field.clientId, "1234");
		char* buffer = new char[4096];
		int writeLen = 20;
		int readLen = 10;
		FTD::ClientFieldHelper::writeBuffer(field, buffer, writeLen);
		FTD::ClientFieldHelper::readBuffer(buffer, field2, readLen);
		CHECK_EQUAL(writeLen, readLen);
		CHECK_EQUAL("1234", field2.clientId);
		delete buffer;
	}

	TEST(Error)
	{
		FTD::Error package;
		FTD::Error package2;
		FTD::ErrorField errorField;
		strcpy(errorField.errorCode, "ok");
		FTD::Field field;
		memcpy(&field.errorField, &errorField, sizeof(FTD::ErrorField));

		int len = 1000000;
		//package.errorFields.reserve(len);
		for (int i = 0; i < len; i++)
		{
			package.mergeField(field, FID_ErrorField);
		}
		FTD::ErrorTargetOrderField errorTargetOrderField;
		strcpy(errorTargetOrderField.orderLocalId, "okokokokokokok");
		memcpy(&field.errorTargetOrderField, &errorTargetOrderField, sizeof(FTD::ErrorTargetOrderField));
		package.mergeField(field, FID_ErrorTargetOrderField);

		std::vector<std::string> msgs;
		package.toMessages(msgs);
		for (int i = 0; i < msgs.size(); i++)
		{
			;
			if (package2.mergeFtdcMessage(msgs[i]))
			{
				break;
			}
		}
		CHECK_EQUAL(len, package2.errorFields.size());
		//CHECK_EQUAL("ok", package2.errorFields[len-1].errorCode);
		//CHECK_EQUAL(nullptr, package2.errorTargetOrderFields.get());
		CHECK_EQUAL("okokokokokokok", package2.pErrorTargetOrderField->orderLocalId);
	}

	/*
	TEST(MarketMatchData)
	{
		FTD::MarketMatchData package;
		FTD::MarketMatchData package2;
		FTD::MarketMatchDataField dataField = { 0 };
		FTD::MarketMatchDataChgField chgField = { 0 };
		FTD::Field field;
		int matchCount = 10000;
		int matchChgCount = 10000;
		for (int i = 0; i < matchCount; i++)
		{
			memcpy(&field.marketMatchDataField, &dataField, sizeof(dataField));
			package.mergeField(field, FID_MarketMatchDataField);
		}
		for (int i = 0; i < matchChgCount; i++)
		{
			memcpy(&field.marketMatchDataChgField, &chgField, sizeof(chgField));
			package.mergeField(field, FID_MarketMatchDataChgField);
		}
		std::vector<std::string> msgs;
		package.toMessages(msgs);
		for (int i = 0; i < msgs.size(); i++)
		{
			if (package.mergeFieldMessage(msgs[i]))
				break;
		}
		CHECK_EQUAL(10000, package2.marketMatchDataFields.size());
		CHECK_EQUAL(10000, package2.marketMatchDataChgFields.size());
	}
	*/
}