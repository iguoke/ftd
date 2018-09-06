#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Parser.h"
#include "Utility.h"
#include "ftd.h"
#include <algorithm>

namespace FTD
{
	bool Parser::extractLength(int& length, 
		const std::string& buffer)
		throw(MessageParseError)
	{
		int header_size = sizeof(FTDHeader);
		std::string::size_type pos = 0;

		if (buffer.length() < header_size)
			return false;
		FTDHeader header;
		memcpy(&header, m_buffer.c_str(), sizeof(header));
		length = header_size + header.FTDExtHeaderLength + header.FTDCLength;
		return true;
	}

	bool Parser::readFixMessage(std::string& str)
		throw(MessageParseError)
	{
		int length = 0;
		if (!extractLength(length, m_buffer))
			return false;
		if (m_buffer.size() < length)
			return false;
		str.assign(m_buffer, 0, length);
		m_buffer.erase(0, length);
		return true;
	}
}
