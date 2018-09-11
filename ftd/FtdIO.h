#ifndef FTD_IO_H
#define FTD_IO_H

#include "Utility.h"
#include "ftd.h"

int readUInt32(const char* buffer, uint32_t& result)
{
	memcpy(&result, buffer, 4);
	result = ntohl(result);
	return 4;
}

int readInt32(const char* buffer, int32_t& result)
{
	memcpy(&result, buffer, 4);
	result = ntohl(result);
	return 4;
}

int readUInt16(const char* buffer, uint16_t & result)
{
	memcpy(&result, buffer, 2);
	result = ntohs(result);
	return 2;
}

int readInt16(const char* buffer, int16_t & result)
{
	memcpy(&result, buffer, 2);
	result = ntohs(result);
	return 2;
}

int readChar(const char* buffer, char& result)
{
	memcpy(&result, buffer, 1);
	return 1;
}

int readUInt8(const char* buffer, uint8_t& result)
{
	memcpy(&result, buffer, 1);
	return 1;

}

const char* ReadFTDCHeader(const char* buffer, FTDCHeader* header)
{
	const char* pos = buffer;
	pos += readUInt8(buffer, header->version);
	pos += readUInt32(buffer, header->transactionId);
	pos += readChar(buffer, header->chain);
	pos += readUInt16(buffer, header->sequenceSeries);
	pos += readUInt32(buffer, header->sequenceNO);
	pos += readUInt16(buffer, header->fieldCount);
	pos += readUInt16(buffer, header->contentLength);
	return pos;
}

const char* ReadFTDCFieldHeader(const char* buffer, FTDCFieldHeader* header)
{
	const char* pos = buffer;
	pos += readInt32(buffer, header->fid);
	pos += readUInt16(buffer, header->fidLength);
	return pos;
}

#endif