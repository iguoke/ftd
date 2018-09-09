#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <FTDDataTypes.h>
#include <UnitTest++.h>


using namespace FTD;

SUITE(FTD20Test)
{

	TEST(floatTypeRead)
	{
		FTDFloatType<10, 2> st;
		std::string buffer = "-034567.23";
		st.loadData(buffer.c_str());
		CHECK_CLOSE(st.getValue(), -34567.23, 0.001);
	}

}