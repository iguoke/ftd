#ifndef FTD20_ERROR_H
#define FTD20_ERROR_H

#include "Fields.h"
#include <vector>
#include "../ftd.h"
#include "../FTDPackage.h"
#include "../FtdIO.h"

using namespace FTD;

namespace FTD20 
{

	struct Error : public Package
	{
		std::vector<ErrorField> errorFields;
		std::vector<ErrorTargetSequenceField> errorTargetSequenceFields;
		std::vector<ErrorTargetOrderField> errorTargetOrderFields;

		bool checkFieldCount()
		{
			if (errorFields.size() == 1
				&& errorTargetSequenceFields.size() <= 1
				&& errorTargetOrderFields.size() <= 1)
				return true;
			else
				return false;
		}

		void clear()
		{
			errorFields.clear();
			errorTargetSequenceFields.clear();
			errorTargetOrderFields.clear();			
		}

		static bool onFtdcMessage(const FTDCHeader& header, const std::string& ftdcContent, Error&  package)
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
			package.header.contentLength = header.contentLength;
			FTDCFieldHeader field_header = { 0 };
			FTD20::Field field = { 0 };
			const char* buffer = ftdcContent.c_str();
			int pos = 0;
			for (int i = 0; i < header.contentLength; i++)
			{
				ReadFTDCFieldHeader(buffer, &field_header);
				buffer += sizeof(field_header);
				if(field_header.fidLength != )
			}
		}
	};

}

#endif
