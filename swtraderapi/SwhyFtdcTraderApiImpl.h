#ifndef SWHY_FTDC_TRADER_API_IMPL_H
#define SWHY_FTDC_TRADER_API_IMPL_H

#include "SwhyFtdcTraderApi.h"

class CSwhyFtdcTraderApiImpl : public CSwhyFtdcTraderApi
{
public:
	CSwhyFtdcTraderApiImpl(const char* pswDir)
	{}

	virtual const char* GetApiVersion();

	virtual void Release();

	virtual void Init();

	virtual int Join();

	virtual const char* GetTradingDay();


	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(CSwhyFtdcTraderSpi *pSpi);


	virtual void SubscribePrivateTopic();


	virtual void SubscribePublicTopic();
};
#endif