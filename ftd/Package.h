#ifndef FTD_PACKAGE_H
#define FTD_PACKAGE_H

#include <vector>
#include <string>

#include "ftd.h"
#include "IO.h"
namespace FTD
{
	struct Package
	{
		const uint8_t version;
		const uint32_t transactionId; 
		FtdcHeader header;
		Package(uint8_t version_, uint32_t transactionId_) :
			version(version_), transactionId(transactionId_), header({ 0 })
		{}
		virtual ~Package() {};
		virtual void clear() = 0;
		
		virtual  void toMessages(std::vector<std::string>& resultBuf) { }
		
		bool mergeFtdcMessage(const FtdcHeader& ftdcHeader, const std::string& ftdcContent)
		{
			if (ftdcHeader.contentLength != ftdcContent.size())
				return false;
			if (transactionId != ftdcHeader.transactionId)
			{
				return false;
			}
			if (header.chain == FTDCChainSingle || header.chain == FTDCChainFirst)
			{
				clear();
				header.sequenceNO = ftdcHeader.sequenceNO;
				header.sequenceSeries = ftdcHeader.sequenceSeries;
				header.version = ftdcHeader.version;
			}
			if (header.sequenceNO != ftdcHeader.sequenceNO
				|| header.sequenceSeries != ftdcHeader.sequenceSeries)
				return false;
			header.fieldCount += ftdcHeader.fieldCount;
			header.contentLength += ftdcHeader.contentLength;
			FtdcFieldHeader fieldHeader = { 0 };
			const char* buffer = ftdcContent.c_str();
			const char* pos = buffer;
			for (int i = 0; i < ftdcHeader.fieldCount; i++)
			{
				pos = readFtdcFieldHeader(pos, fieldHeader);
				int readLen = 0;
				mergeFieldMessage(fieldHeader, pos);
				pos += fieldHeader.fidLength;
			}
			if (pos - buffer != header.contentLength)
				return false;
			if (header.chain == FTDCChainSingle || header.chain == FTDCChainLast)
				return true;
			else
				return false;
		}


		bool mergeFtdcMessage(const std::string& ftdcMsg)
		{
			FtdcHeader header;
			const char* ftdcBegin = readFtdcHeader(ftdcMsg.c_str(), header);
			std::string ftdcContent(ftdcBegin, header.contentLength);
			return mergeFtdcMessage(header, ftdcContent);
		}

	protected:
		virtual bool mergeFieldMessage(const FtdcFieldHeader& header, const char* msg) = 0;

		
	};
}


#endif