#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <FTDDataTypes.h>
#include <UnitTest++.h>
#include <FTD20/BulletinField.h>

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
	}

}