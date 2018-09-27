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

int readFtdHeader(const char* buffer, FtdHeader& header)
{
	int readLen = 0;

	const char* pos = buffer;
	readLen += readUInt8(pos, header.FTDType);

	pos = buffer + readLen;	
	readLen += readUInt8(pos, header.FTDExtHeaderLength);

	pos = buffer + readLen;	
	readLen += readInt16(pos, header.FTDCLength);
	
	return readLen;
}


int readFtdcHeader(const char* buffer, FtdcHeader& header)
{
	int readLen = 0;
	const char* pos = buffer;
	readLen += readUInt8(pos, header.version);

	pos = buffer + readLen;
	readLen += readUInt32(pos, header.transactionId);

	pos = buffer + readLen;
	readLen += readUInt8(pos, header.chain);

	pos = buffer + readLen;
	readLen += readUInt16(pos, header.sequenceSeries);

	pos = buffer + readLen;
	readLen += readUInt32(pos, header.sequenceNO);

	pos = buffer + readLen;
	readLen += readUInt16(pos, header.fieldCount);

	pos = buffer + readLen;
	readLen += readUInt16(pos, header.contentLength);

	return readLen;
}

int readFtdcFieldHeader(const char* buffer, FtdcFieldHeader& header)
{
	int readLen = 0;
	const char* pos = buffer;
	readLen += readInt32(pos, header.fid);

	pos = buffer + readLen;
	readLen += readUInt16(pos, header.fidLength);
	return readLen;
}

int writeFtdcHeader(const FtdcHeader& header, char* buffer)
{
	int writeLen = 0;

	char* pos = buffer;
	writeLen += writeUInt8(header.version, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt32(header.transactionId, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt8(header.chain, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt16(header.sequenceSeries, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt32(header.sequenceNO, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt16(header.fieldCount, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt16(header.contentLength, pos);

	return writeLen;
}

int writeFtdcFieldHeader(const FtdcFieldHeader& header, char* buffer)
{
	int writeLen = 0;
	char* pos = buffer;
	writeLen += writeInt32(header.fid, pos);

	pos = buffer + writeLen;
	writeLen += writeUInt16(header.fidLength, pos);
	return writeLen;
}

#endif