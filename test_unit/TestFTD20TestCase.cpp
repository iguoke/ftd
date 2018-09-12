#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <FTDBaseType.h>
#include <UnitTest++.h>
#include <FTD20/BulletinField.h>
#include <FTD20/ClientField.h>
#include <FTD20/Error.h>
#include <FTD20/MarketMatchData.h>
using namespace FTD;

SUITE(FTD20Test)
{

	TEST(BulltinField)
	{
		FTD20::BulletinField field = { 0 };
		char* buffer = new char[4096];
		int writeLen = 20;
		int readLen = 10;
		FTD20::BulletinFieldHelper::writeBuffer(field, buffer, writeLen);
		FTD20::BulletinFieldHelper::readBuffer(buffer, field, readLen);
		CHECK_EQUAL(writeLen, readLen);
		delete buffer;
	}

	TEST(ClientField)
	{
		FTD20::ClientField field = { 0 };
		FTD20::ClientField field2 = { 0 };
		strcpy(field.clientId, "12345678");
		char* buffer = new char[4096];
		int writeLen = 20;
		int readLen = 10;
		FTD20::ClientFieldHelper::writeBuffer(field, buffer, writeLen);
		FTD20::ClientFieldHelper::readBuffer(buffer, field2, readLen);
		CHECK_EQUAL(writeLen, readLen);
		CHECK_EQUAL("12345678", field2.clientId);
		delete buffer;
	}

	TEST(ClientField2)
	{
		FTD20::ClientField field = { 0 };
		FTD20::ClientField field2 = { 0 };
		strcpy(field.clientId, "1234");
		char* buffer = new char[4096];
		int writeLen = 20;
		int readLen = 10;
		FTD20::ClientFieldHelper::writeBuffer(field, buffer, writeLen);
		FTD20::ClientFieldHelper::readBuffer(buffer, field2, readLen);
		CHECK_EQUAL(writeLen, readLen);
		CHECK_EQUAL("1234", field2.clientId);
		delete buffer;
	}

	TEST(Error)
	{
		FTD20::Error package;
		FTD20::Error package2;
		FTD20::ErrorField errorField;
		strcpy(errorField.errorCode, "ok");
		FTD20::Field field;
		memcpy(&field.errorField, &errorField, sizeof(FTD20::ErrorField));

		

		for (int i = 0; i < 10000; i++)
		{
			package.mergeField(field, FID_ErrorField);
		}
		FTD20::ErrorTargetOrderField errorTargetOrderField;
		strcpy(errorTargetOrderField.orderLocalId, "okokokokokokok");
		memcpy(&field.errorTargetOrderField, &errorTargetOrderField, sizeof(FTD20::ErrorTargetOrderField));
		package.mergeField(field, FID_ErrorTargetOrderField);

		std::vector<std::string> msgs;
		FTD20::Error::convertToFtdcString(package, msgs);
		for (int i = 0; i < msgs.size(); i++)
		{
			if (FTD20::Error::onFtdcMessage(msgs[i], package2))
			{
				break;
			}
		}
		CHECK_EQUAL(10000, package2.errorFields.size());
		CHECK_EQUAL("ok", package2.errorFields[9999].errorCode);
		//CHECK_EQUAL(nullptr, package2.errorTargetOrderFields.get());
		CHECK_EQUAL("okokokokokokok", package2.pErrorTargetOrderField->orderLocalId);
	}

	TEST(MarketMatchData)
	{
		FTD20::MarketMatchData package;
		FTD20::MarketMatchData package2;
		FTD20::MarketMatchDataField dataField = { 0 };
		FTD20::MarketMatchDataChgField chgField = { 0 };
		FTD20::Field field;
		for (int i = 0; i < 100; i++)
		{
			memcpy(&field.marketMatchDataField, &dataField, sizeof(dataField));
			package.mergeField(field, FID_MarketMatchDataField);
		}
		for (int i = 0; i < 1000; i++)
		{
			memcpy(&field.marketMatchDataChgField, &chgField, sizeof(chgField));
			package.mergeField(field, FID_MarketMatchDataChgField);
		}
		std::vector<std::string> msgs;
		FTD20::MarketMatchData::convertToFtdcString(package, msgs);
		for (int i = 0; i < msgs.size(); i++)
		{
			if (FTD20::MarketMatchData::onFtdcMessage(msgs[i], package2))
				break;
		}
		CHECK_EQUAL(100, package2.marketMatchDataFields.size());
		CHECK_EQUAL(1000, package2.marketMatchDataChgFields.size());
	}

}