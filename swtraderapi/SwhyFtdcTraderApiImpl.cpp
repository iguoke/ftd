#include "SwhyFtdcTraderApiImpl.h"

const char* CSwhyFtdcTraderApiImpl::GetApiVersion()
{
	return "";
}

void CSwhyFtdcTraderApiImpl::Release()
{}

void CSwhyFtdcTraderApiImpl::Init()
{}

int CSwhyFtdcTraderApiImpl::Join()
{
	return 0;
}

const char* CSwhyFtdcTraderApiImpl::GetTradingDay()
{
	return "";
}


///注册回调接口
///@param pSpi 派生自回调接口类的实例
void CSwhyFtdcTraderApiImpl::RegisterSpi(CSwhyFtdcTraderSpi *pSpi)
{}


void CSwhyFtdcTraderApiImpl::SubscribePrivateTopic()
{}


void CSwhyFtdcTraderApiImpl::SubscribePublicTopic()
{}