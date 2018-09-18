
#ifndef FTD_SOCKETCONNECTOR_H
#define FTD_SOCKETCONNECTOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SocketMonitor.h"
#include <string>

namespace FTD
{
/// Connects sockets to remote ports and addresses.
class SocketConnector
{
public:
  class Strategy;

  SocketConnector( int timeout = 0 );

  int connect( const std::string& address, int port, bool noDelay,
                 int sendBufSize, int rcvBufSize,
                 const std::string& sourceAddress = "", int sourcePort = 0);
  int connect( const std::string& address, int port, bool noDelay, 
               int sendBufSize, int rcvBufSize, Strategy& );
  void block( Strategy& strategy, bool poll = 0, double timeout = 0.0 );
  SocketMonitor& getMonitor() { return m_monitor; }

private:
  SocketMonitor m_monitor;

public:
  class Strategy
  {
  public:
    virtual ~Strategy() {}
    virtual void onConnect( SocketConnector&, int socket ) = 0;
    virtual void onWrite( SocketConnector&, int socket ) = 0;
    virtual bool onData( SocketConnector&, int socket ) = 0;
    virtual void onDisconnect( SocketConnector&, int socket ) = 0;
    virtual void onError( SocketConnector& ) = 0;
    virtual void onTimeout( SocketConnector& ) {};
  };
};
}

#endif //FTD_SOCKETCONNECTOR_H
