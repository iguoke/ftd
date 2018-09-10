#ifndef FTD20_FORCEEXITFIELD_H
#define FTD20_FORCEEXITFIELD_H

#include "FTDProperties.h"
#include "FTDFields.h"

using namespace FTD;

namespace FTD20 {

	struct ForceExitField
	{
            TTPropertyForceExitCode forceExitCode;
            TTPropertyForceExitMsg forceExitMsg;
	};

	class ForceExitFieldHelper
	{
	public:
		static void writeBuffer(const ForceExitField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TPropertyForceExitCode::writeBuffer(field.forceExitCode, buffer);
            buffer += TPropertyForceExitCode::getMsgLength();
            data_length += TPropertyForceExitCode::getMsgLength();
            TPropertyForceExitMsg::writeBuffer(field.forceExitMsg, buffer);
            buffer += TPropertyForceExitMsg::getMsgLength();
            data_length += TPropertyForceExitMsg::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ForceExitField& field, int& readLen)
		{
			int data_length = 0;
            TPropertyForceExitCode::readBuffer(buffer, field.forceExitCode);
            buffer += TPropertyForceExitCode::getMsgLength();
            data_length += TPropertyForceExitCode::getMsgLength();
            TPropertyForceExitMsg::readBuffer(buffer, field.forceExitMsg);
            buffer += TPropertyForceExitMsg::getMsgLength();
            data_length += TPropertyForceExitMsg::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif