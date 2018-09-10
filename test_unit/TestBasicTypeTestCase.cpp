#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <FTDDataTypes.h>
#include <UnitTest++.h>


using namespace FTD;

SUITE(BasicTypeTests)
{

	TEST(floatTypeRead)
	{
		FTDFloatType<10, 2> st;
		std::string buffer = "-034567.23";
		st.loadData(buffer.c_str());
		CHECK_CLOSE(st.getValue(),  -34567.23, 0.001);
	}
	TEST(floatTypeWrite)
	{
		FTDFloatType<10, 2> st;
		char buffer[11];
		memset(buffer, 0, 11);
		st.value = 1234567.23;
		st.writeBuffer(-125.23, buffer);
		CHECK_EQUAL("-000125.23", buffer);
	}

	TEST(numberTypeRead)
	{
		FTDNumberType<10> st;
		std::string buffer = "-034567000";
		st.loadData(buffer.c_str());
		CHECK_EQUAL( -34567000, st.getValue());
	}

	TEST(numberTypeWrite)
	{
		FTDNumberType<10> st;
		char buffer[11];
		memset(buffer, 0, 11);
		st.writeBuffer(-125, buffer);
		CHECK_EQUAL("-000000125", buffer);
	}

	TEST(charTypeWriteAndRead)
	{
		char buffer[1];
		FTDCharType::writeBuffer('a', buffer);
		FTDCharType st;
		st.loadData(buffer);
		CHECK_EQUAL('a', st.getValue());
	}

	TEST(IntTypeWriteAndRead)
	{
		char buffer[4];
		FTDIntType::writeBuffer(234534324, buffer);
		FTDIntType st;
		st.loadData(buffer);
		CHECK_EQUAL(234534324, st.getValue());
	}

	TEST(WordTypeWriteAndRead)
	{
		char buffer[2];
		FTDWordType::writeBuffer(23452, buffer);
		FTDWordType st;
		st.loadData(buffer);
		CHECK_EQUAL(23452, st.getValue());
	}

	TEST(StringTypeRead)
	{
		char s[11];
		memset(s, 0, 11);
		FTDStringType<10>::readBuffer("123       ", s);
		s[10] = 0;
		CHECK_EQUAL("123       ", s);
	}

	TEST(StringTypeWrite)
	{
		char buffer[11];
		char s[] = "123";
		FTDStringType<10>::writeBuffer(s, buffer);
		buffer[10] = 0;
		CHECK_EQUAL("123       ", buffer);
	}
}