/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_REQORDERINSERT_H
#define FTD20_REQORDERINSERT_H

#include "Fields.h"
#include <vector>
#include "../ftd.h"
#include "../FTDPackage.h"
#include "../FtdIO.h"
#include "../FTDID.h"

using namespace FTD;

namespace FTD20 
{

struct ReqOrderInsert : public Package
{

    OrderInsertField orderInsertField;


	void clear()
	{
        memset(&orderInsertField, 0, sizeof(OrderInsertField));			
	}

	bool mergeField(const Field& field, int fid)
	{
        if (fid == FID_OrderInsertField)
        {
        	memcpy(&orderInsertField, &field.orderInsertField, sizeof(OrderInsertField));
        	return true;
        }
		return false;
	}

	static bool onFtdcMessage(const std::string& ftdcMsg, ReqOrderInsert&  package)
	{
		FTDCHeader header;
		const char* ftdcBegin = readFTDCHeader(ftdcMsg.c_str(), header);
		std::string ftdcContent(ftdcBegin, header.contentLength);
		return onFtdcMessage(header, ftdcContent, package);
	}

	static bool onFtdcMessage(const FTDCHeader& header, const std::string& ftdcContent, ReqOrderInsert&  package)
	{
		if (header.chain == FTDCChainSingle || header.chain == FTDCChainFirst)
		{
			package.clear();
			package.header = header;
			package.header.chain = FTDCChainSingle;
			package.header.fieldCount = 0;
			package.header.contentLength = 0;
		}
		if (package.header.sequenceNO != header.sequenceNO
			|| package.header.sequenceSeries != header.sequenceSeries)
			return false;
		if (header.contentLength != ftdcContent.size())
			return false;
		package.header.fieldCount += header.fieldCount;
		package.header.contentLength += header.contentLength;
		FTDCFieldHeader field_header = { 0 };
		FTD20::Field field = { 0 };
		const char* buffer = ftdcContent.c_str();
		const char* pos = buffer;
		bool readFieldSucc = false;
		for (int i = 0; i < header.fieldCount; i++)
		{
			pos = readFTDCFieldHeader(pos, field_header);
			int readLen = 0;
			readFieldSucc = readField(pos, field_header.fid, field, readLen);
			if (readLen != field_header.fidLength)
			{
				return false;
			}
			else
			{
				package.mergeField(field, field_header.fid);
			}
			pos += readLen;
		}
		if (pos - buffer != header.contentLength)
			return false;
		if (header.chain == FTDCChainSingle || header.chain == FTDCChainLast)
			return true;
		else
			return false;
	}
		
		
	static void convertToFtdcString(const ReqOrderInsert& package, std::vector<std::string>& ftdcMsgs)
	{
		std::vector<std::string> ftdcContents;
		std::vector<FTDCHeader> headers;
			
		char* ftdcBuffer = new char[MAX_FTDC_LENGTH + 1];
		char* fieldBuffer = new char[MAX_FTDC_LENGTH + 1];
		char* ftdcHeaderBuffer = new char[FTDC_HEADER_LENGTH + 1];
		FTDCHeader header = { 0 };
		memcpy(&header, &package.header, sizeof(FTDCHeader));
		int writeFieldCount = 0;
		char* nextWrite = ftdcBuffer;
		int vecSize = 0;
		int fieldLen = 0;
        //OrderInsertField
        OrderInsertFieldHelper::writeBuffer(package.orderInsertField,
        	fieldBuffer, fieldLen);
        if (MAX_FTDC_LENGTH - (nextWrite - ftdcBuffer) < FTDC_FIELD_HEADER_LENGTH + fieldLen)
        {
        	header.contentLength = nextWrite - ftdcBuffer;
        	header.fieldCount = writeFieldCount;
        	headers.push_back(header);
        	ftdcContents.push_back(std::string().append(ftdcBuffer, nextWrite - ftdcBuffer));
        	memset(ftdcBuffer, 0, MAX_FTDC_LENGTH + 1);
        	nextWrite = ftdcBuffer;
        	writeFieldCount = 0;
        }
        FTDCFieldHeader fieldHeader;
        fieldHeader.fid = FID_OrderInsertField;
        fieldHeader.fidLength = fieldLen;
        nextWrite = writeFTDCFieldHeader(fieldHeader, nextWrite);
        memcpy(nextWrite, fieldBuffer, fieldLen);
        nextWrite += fieldLen;
        writeFieldCount += 1;
        

		if (nextWrite != ftdcBuffer)
		{
			header.contentLength = nextWrite - ftdcBuffer;
			header.fieldCount = writeFieldCount;
			headers.push_back(header);
			ftdcContents.push_back(std::string().append(ftdcBuffer, nextWrite - ftdcBuffer));
		}
		int contentLength = ftdcContents.size();
		if (contentLength == 1)
		{
			headers[0].chain = FTDCChainSingle;
		}
		if (contentLength > 1)
		{
			headers[0].chain = FTDCChainFirst;
			headers[contentLength - 1].chain = FTDCChainLast;
			for (int i = 1; i < contentLength - 1; i++)
			{
				headers[i].chain = FTDCChainMiddle;
			}
		}
		for (int i = 0; i < contentLength; i++)
		{
			writeFTDCHeader(headers[i], ftdcHeaderBuffer);
			std::string ftdMsg;
			ftdMsg.append(ftdcHeaderBuffer, FTDC_HEADER_LENGTH);
			ftdMsg.append(ftdcContents[i]);
			ftdcMsgs.push_back(ftdMsg);
		}

		delete[] ftdcHeaderBuffer;
		delete[] ftdcBuffer;
		delete[] fieldBuffer;
	}
};

}

#endif
