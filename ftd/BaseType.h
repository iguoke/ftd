#ifndef FTD_BASE_TYPE_H
#define FTD_BASE_TYPE_H

#include <memory.h>
#include <string>
#include "Utility.h"
namespace FTD
{


	struct FTDCharType
	{
		char getValue() const
		{
			return value;
		}

		void loadData(const char* buffer)
		{
			readBuffer(buffer, value);
		}
		char value;

		static void writeBuffer(char value, char* buffer)
		{
			memcpy(buffer, &value, sizeof(value));
		}

		static void readBuffer(const char* buffer, char& value)
		{
			memcpy(&value, buffer, 1);
		}

		static int getMsgLength()
		{
			return  1;
		}
	};

	template <int len, int precise>
	struct FTDFloatType
	{
		double getValue() const
		{
			return value;
		}

		void loadData(const char* buffer)
		{
			readBuffer(buffer, value);
		}

		static void writeBuffer(double value, char* buffer)
		{
			char local_buffer[len + 1];
			char format_template[] = "%%0%d.%df";
			char format[20];
			sprintf(format, format_template, len, precise);
			sprintf(local_buffer, format, value);
			memcpy(buffer, &local_buffer, len);
		}

		static void readBuffer(const char* buffer, double& value)
		{
			char local_buffer[len + 1];
			memcpy(&local_buffer, buffer, len);
			local_buffer[len] = 0;
			value = atof(local_buffer);
		}

		static int getMsgLength()
		{
			return len;
		}
		double value;
	};

	struct FTDIntType
	{
		int getValue() const
		{
			return value;
		}

		void loadData(const char* buffer)
		{
			readBuffer(buffer, value);
		}
		int value;

		static void writeBuffer(int value, char* buffer)
		{
			value = htonl(value);
			memcpy(buffer, &value, sizeof(value));
		}

		static void readBuffer(const char* buffer, int& value)
		{
			memcpy(&value, buffer, 4);
			value = ntohl(value);
		}

		static int getMsgLength()
		{
			return  4;
		}
	};

	template <int len>
	struct FTDNumberType
	{
		int getValue() const
		{
			return value;
		}

		void loadData(const char* buffer)
		{
			readBuffer(buffer, value);
		}
		int value;

		static void writeBuffer(int value, char* buffer)
		{
			char format_template[] = "%%0%dd";
			char format[20];
			sprintf(format, format_template, len);
			sprintf(buffer, format, value);
		}

		static void readBuffer(const char* buffer, int& value)
		{
			char local_buffer[len + 1];
			memcpy(local_buffer, buffer, len);
			local_buffer[len] = 0;
			value = atoi(local_buffer);
		}

		static int getMsgLength()
		{
			return  len;
		}
	};

	template<int len>
	struct FTDStringType
	{
		char* getValue() const
		{
			return value;
		}

		void loadData(const char* buffer)
		{
			readBuffer(buffer, value);
		}
		char value[len + 1];

		static void writeBuffer(const char* value, char* buffer)
		{
			memset(buffer, ' ', len);
			int string_len = strlen(value);
			if (string_len > len)
				string_len = len;
			memcpy(buffer, value, string_len);
			if (string_len < len)
				buffer[string_len] = '\0';
		}

		static void readBuffer(const char* buffer, char* value)
		{
			memcpy(value, buffer, len);
			value[len] = '\0';
		}


		static int getMsgLength()
		{
			return len;
		}
	};

	struct FTDWordType
	{
		int getValue() const
		{
			return value;
		}

		void loadData(const char* buffer)
		{
			readBuffer(buffer, value);
		}

		static void writeBuffer(int16_t value, char* buffer)
		{
			value = htons(value);
			memcpy(buffer, &value, sizeof(value));
		}

		static void readBuffer(const char* buffer, int16_t& value)
		{
			memcpy(&value, buffer, 2);
			value = ntohs(value);
		}

		static int getMsgLength()
		{
			return  2;
		}

		int16_t value;
	};
}
#endif