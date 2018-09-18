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


int writeUInt32(const uint32_t& result, char* buffer)
{
	uint32_t nvalue = htonl(result);
	memcpy(buffer, &nvalue, 4);
	return 4;
}

int writeInt32(const int32_t& result, char* buffer)
{
	int32_t nvalue = htonl(result);
	memcpy(buffer, &nvalue, 4);
	return 4;
}

int writeUInt16(const uint16_t & result, char* buffer)
{
	uint16_t nvalue = htons(result);
	memcpy(buffer, &nvalue, 2);
	return 2;
}

int writeInt16(const int16_t & result, char* buffer)
{
	int16_t nvalue = htons(result);
	memcpy(buffer, &nvalue, 2);
	return 2;
}

int writeChar(const char& result, char* buffer)
{
	memcpy(buffer, &result, 1);
	return 1;
}

int writeUInt8(const uint8_t& result, char* buffer)
{
	memcpy(buffer, &result, 1);
	return 1;

}

const char* readFTDCHeader(const char* buffer, FTDCHeader& header)
{
	const char* pos = buffer;
	pos += readUInt8(pos, header.version);
	pos += readUInt32(pos, header.transactionId);
	pos += readChar(pos, header.chain);
	pos += readUInt16(pos, header.sequenceSeries);
	pos += readUInt32(pos, header.sequenceNO);
	pos += readUInt16(pos, header.fieldCount);
	pos += readUInt16(pos, header.contentLength);
	return pos;
}

const char* readFTDCFieldHeader(const char* buffer, FTDCFieldHeader& header)
{
	const char* pos = buffer;
	pos += readInt32(pos, header.fid);
	pos += readUInt16(pos, header.fidLength);
	return pos;
}

char* writeFTDCHeader(const FTDCHeader& header, char* buffer)
{
	char* pos = buffer;
	pos += writeUInt8(header.version, pos);
	pos += writeUInt32(header.transactionId, pos);
	pos += writeChar(header.chain, pos);
	pos += writeUInt16(header.sequenceSeries, pos);
	pos += writeUInt32(header.sequenceNO, pos);
	pos += writeUInt16(header.fieldCount, pos);
	pos += writeUInt16(header.contentLength, pos);
	return pos;
}

char* writeFTDCFieldHeader(const FTDCFieldHeader& header, char* buffer)
{
	char* pos = buffer;
	pos += writeInt32(header.fid, pos);
	pos += writeUInt16(header.fidLength, pos);
	return pos;
}

#endif