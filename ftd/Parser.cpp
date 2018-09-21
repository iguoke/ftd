#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Parser.h"
#include "Utility.h"
#include "ftd.h"
#include "IO.h"
#include <algorithm>

namespace FTD
{
	bool Parser::extractLength(int& length, 
		const std::string& buffer)
		throw(MessageParseError)
	{

		if (buffer.length() < FTD_HEADER_LENGTH)
			return false;
		FtdHeader header;
		readFtdHeader(buffer.c_str(), header);
		length = FTD_HEADER_LENGTH + header.FTDExtHeaderLength + header.FTDCLength;
		return true;
	}

	bool Parser::readFtdMessage(std::string& str)
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
