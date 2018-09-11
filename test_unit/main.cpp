#include <iostream>

#include "FTDBaseType.h"
using namespace std;
using namespace FTD;

#define WIN32_LEAN_AND_MEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include <UnitTest++.h>
#include <TestReporterStdout.h>
//#include "getopt-repl.h"
//#include "TestHelper.h"
bool test_float_read()
{
	FTDFloatType<10, 2> st;
	std::string buffer = "-034567.23";
	st.loadData(buffer.c_str());
	return st.getValue() - 34567.23 < 0.001;
}

bool test_float_write()
{
	FTDFloatType<10, 2> st;
	char buffer[11];
	memset(buffer, 0, 11);
	st.value = 1234567.23;
	st.writeBuffer(-125.23, buffer);
	return strcmp(buffer, "1234567.23") == 0;
}

bool test_number_read()
{
	FTDNumberType<10> st;
	std::string buffer = "1234567890";
	st.loadData(buffer.c_str());
	return st.getValue() == 1234567890;
}

bool test_number_write()
{
	FTDFloatType<10, 2> st;
	char buffer[11];
	memset(buffer, 0, 11);
	st.value = 1234567.23;
	st.writeBuffer(-125.23, buffer);
	return strcmp(buffer, "1234567890") == 0;
}

int main()
{
	int result = UnitTest::RunAllTests();
	
}