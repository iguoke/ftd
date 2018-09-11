#ifndef FTD20_ERROR_H
#define FTD20_ERROR_H

#include "Fields.h"
#include <vector>
#include "../ftd.h"
#include "../FTDPackage.h"
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
			if (header.Chain == FTDCChainSingle || header.Chain == FTDCChainFirst)
			{
				package.clear();
				package.header = header;
				package.header.Chain = FTDCChainSingle;
				package.header.FieldCount = 0;
				package.header.ContentLength = 0;
			}
			if (package.header.SequenceNO != header.SequenceNO
				|| package.header.SequenceSeries != header.SequenceSeries)
				return false;
			if (header.ContentLength != ftdcContent.size())
				return false;
			package.header.FieldCount += header.FieldCount;
			package.header.ContentLength = header.ContentLength;
			FTDCFieldHeader field_header = { 0 };
			FTD20::Field field = { 0 };
			const char* buffer = ftdcContent.c_str();
			int pos = 0;
			for (int i = 0; i < header.FieldCount; i++)
			{
				ReadFTDCFieldHeader(&field_header, buffer);
				buffer += sizeof(field_header);
				if(field_header.FIDLength != )
			}
		}
	};

}

#endif
