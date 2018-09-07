#ifndef FTD_PARSER_H
#define FTD_PARSER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Exceptions.h"
#include <iostream>
#include <string>

namespace FTD
{
	/// Parses %FIX messages off an input stream.
	class Parser
	{
	public:
		Parser() {}
		~Parser() {}

		bool extractLength(int& length,
			const std::string& buffer)
			throw (MessageParseError);
		bool readFixMessage(std::string& str)
			throw (MessageParseError);

		void addToStream(const char* str, size_t len)
		{
			m_buffer.append(str, len);
		}
		void addToStream(const std::string& str)
		{
			m_buffer.append(str);
		}

	private:
		std::string m_buffer;
	};
}

#endif