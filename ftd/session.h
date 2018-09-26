
#ifndef FTD_SESSION_H
#define FTD_SESSION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SessionState.h"
#include "SessionID.h"
#include "Responder.h"
#include "Application.h"
#include "Mutex.h"
#include "Log.h"
#include <utility>
#include <map>
#include <queue>

namespace FTD
{
/// Maintains the state and implements the logic of a %FIX %session.
class Session
{
public:
  Session( Application&, PackageStoreFactory&,
           const SessionID&,
           int,
           LogFactory* pLogFactory );
  virtual ~Session();

  void logon() 
  { m_state.enabled( true ); m_state.logoutReason( "" ); }
  void logout( const std::string& reason = "" ) 
  { m_state.enabled( false ); m_state.logoutReason( reason ); }
  bool isEnabled() 
  { return m_state.enabled(); }

  bool sentLogon() { return m_state.sentLogon(); }
  bool sentLogout() { return m_state.sentLogout(); }
  bool receivedLogon() { return m_state.receivedLogon(); }
  bool isLoggedOn() { return receivedLogon() && sentLogon(); }
  void reset() throw( IOException ) 
  { 
	  ///generateLogout(); disconnect(); m_state.reset(); 
  }
  void refresh() throw( IOException )
  { m_state.refresh(); }
  void setNextSenderMsgSeqNum( int num ) throw( IOException )
  { m_state.setNextSenderMsgSeqNum( num ); }
  void setNextTargetMsgSeqNum( int num ) throw( IOException )
  { m_state.setNextTargetMsgSeqNum( num ); }

  const int& getSessionID() const
  { return m_sessionID; }





  static bool sendToTarget( Package& message, const SessionID& sessionID )
  throw( SessionNotFound );

  static bool sendToTarget( Package& message,
                            const std::string& userID)
  throw( SessionNotFound );

  static bool broadcast(Package& message);

  static std::set<SessionID> getSessions();
  static bool doesSessionExist( const SessionID& );
  static Session* lookupSession( const SessionID& );
  static Session* lookupSession( const std::string&, bool reverse = false );
  static bool isSessionRegistered( const SessionID& );
  static Session* registerSession( const SessionID& );
  static void unregisterSession( const SessionID& );

  static size_t numSessions();



  bool isInitiator()
    { return m_state.initiate(); }

  bool isAcceptor()
    { return !m_state.initiate(); }


  int getLogonTimeout()
    { return m_state.logonTimeout(); }
  void setLogonTimeout ( int value )
    { m_state.logonTimeout( value ); }

  int getLogoutTimeout()
    { return m_state.logoutTimeout(); }
  void setLogoutTimeout ( int value )
    { m_state.logoutTimeout( value ); }

  void setResponder( Responder* pR )
  {
    m_pResponder = pR;
  }

  bool send( Package& );
  void next();
  void next( const UtcTimeStamp& timeStamp );
  void next( const std::string&, const UtcTimeStamp& timeStamp, bool queued = false );
  void next( const Package&, const UtcTimeStamp& timeStamp, bool queued = false );
  void disconnect();



  Log* getLog() { return &m_state; }
  const PackageStore* getStore() { return &m_state; }

private:
  typedef std::map < SessionID, Session* > Sessions;
  typedef std::set < SessionID > SessionIDs;

  static bool addSession( Session& );
  static void removeSession( Session& );



  Package * newPackage(int transaction_id) const;

  Application& m_application;
  SessionID m_sessionID;



  SessionState m_state;
  PackageStoreFactory& m_packageStoreFactory;
  LogFactory* m_pLogFactory;
  Responder* m_pResponder;
  Mutex m_mutex;

  static Sessions s_sessions;
  static SessionIDs s_sessionIDs;
  static Sessions s_registered;
  static Mutex s_mutex;
};
}

#endif //FIX_SESSION_H
