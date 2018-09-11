/*
本文件自动生成，请勿手工修改
*/

#ifndef FTD20_FORCEEXITFIELD_H
#define FTD20_FORCEEXITFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ForceExitField
	{
            TTItemForceExitCode forceExitCode;
            TTItemForceExitMsg forceExitMsg;
	};

	class ForceExitFieldHelper
	{
	public:
		static void writeBuffer(const ForceExitField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemForceExitCode::writeBuffer(field.forceExitCode, buffer);
            buffer += TItemForceExitCode::getMsgLength();
            data_length += TItemForceExitCode::getMsgLength();
            TItemForceExitMsg::writeBuffer(field.forceExitMsg, buffer);
            buffer += TItemForceExitMsg::getMsgLength();
            data_length += TItemForceExitMsg::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ForceExitField& field, int& readLen)
		{
			int data_length = 0;
            TItemForceExitCode::readBuffer(buffer, field.forceExitCode);
            buffer += TItemForceExitCode::getMsgLength();
            data_length += TItemForceExitCode::getMsgLength();
            TItemForceExitMsg::readBuffer(buffer, field.forceExitMsg);
            buffer += TItemForceExitMsg::getMsgLength();
            data_length += TItemForceExitMsg::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif