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

}