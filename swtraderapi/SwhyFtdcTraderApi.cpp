#include "SwhyFtdcTraderApiImpl.h"

CSwhyFtdcTraderApi* CSwhyFtdcTraderApi::CreateFtdcTraderApi(const char* pswDir)
{
	return new CSwhyFtdcTraderApiImpl(pswDir);
}