/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_MESSAGESTORE_H
#define FIX_MESSAGESTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Package.h"
#include "SessionID.h"
#include "FixTypes.h"
#include <map>
#include <vector>
#include <string>


namespace FTD
{
class PackageStore;

/**
 * This interface must be implemented to create a MessageStore.
 */
class PackageStoreFactory
{
public:
  virtual ~PackageStoreFactory() {}
  virtual PackageStore* create( const SessionID& ) = 0;
  virtual void destroy( PackageStore* ) = 0;
};

/**
 * Creates a memory based implementation of MessageStore.
 *
 * This will lose all data on process termination. This class should only
 * be used for test applications, never in production.
 */
class MemoryStoreFactory : public PackageStoreFactory
{
public:
  PackageStore* create( const SessionID& );
  void destroy( PackageStore* );
};

/**
 * This interface must be implemented to store and retrieve messages and
 * sequence numbers.
 */
class PackageStore
{
public:
  virtual ~PackageStore() {}

  virtual bool set( int, const std::string& )
  throw ( IOException ) = 0;
  virtual void get( int, int, std::vector < std::string > & ) const
  throw ( IOException ) = 0;

  virtual int getNextSenderMsgSeqNum() const throw ( IOException ) = 0;
  virtual int getNextTargetMsgSeqNum() const throw ( IOException ) = 0;
  virtual void setNextSenderMsgSeqNum( int ) throw ( IOException ) = 0;
  virtual void setNextTargetMsgSeqNum( int ) throw ( IOException ) = 0;
  virtual void incrNextSenderMsgSeqNum() throw ( IOException ) = 0;
  virtual void incrNextTargetMsgSeqNum() throw ( IOException ) = 0;

  virtual UtcTimeStamp getCreationTime() const throw ( IOException ) = 0;

  virtual void reset() throw ( IOException ) = 0;
  virtual void refresh() throw ( IOException ) = 0;
};
/*! @} */

/**
 * Memory based implementation of MessageStore.
 *
 * This will lose all data on process terminition. This class should only
 * be used for test applications, never in production.
 */
class MemoryStore : public PackageStore
{
public:
  MemoryStore() : m_nextSenderMsgSeqNum( 1 ), m_nextTargetMsgSeqNum( 1 ) {}

  bool set( int, const std::string& ) throw ( IOException );
  void get( int, int, std::vector < std::string > & ) const throw ( IOException );

  int getNextSenderMsgSeqNum() const throw ( IOException )
  { return m_nextSenderMsgSeqNum; }
  int getNextTargetMsgSeqNum() const throw ( IOException )
  { return m_nextTargetMsgSeqNum; }
  void setNextSenderMsgSeqNum( int value ) throw ( IOException )
  { m_nextSenderMsgSeqNum = value; }
  void setNextTargetMsgSeqNum( int value ) throw ( IOException )
  { m_nextTargetMsgSeqNum = value; }
  void incrNextSenderMsgSeqNum() throw ( IOException )
  { ++m_nextSenderMsgSeqNum; }
  void incrNextTargetMsgSeqNum() throw ( IOException )
  { ++m_nextTargetMsgSeqNum; }

  void setCreationTime( const UtcTimeStamp& creationTime ) throw ( IOException )
  { m_creationTime = creationTime; }
  UtcTimeStamp getCreationTime() const throw ( IOException )
  { return m_creationTime; }

  void reset() throw ( IOException )
  {
    m_nextSenderMsgSeqNum = 1; m_nextTargetMsgSeqNum = 1;
    m_messages.clear(); m_creationTime.setCurrent();
  }
  void refresh() throw ( IOException ) {}

private:
  typedef std::map < int, std::string > Messages;

  Messages m_messages;
  int m_nextSenderMsgSeqNum;
  int m_nextTargetMsgSeqNum;
  UtcTimeStamp m_creationTime;
};

class MessageStoreFactoryExceptionWrapper
{
private:
  PackageStoreFactory* m_pFactory;
public:
  MessageStoreFactoryExceptionWrapper( PackageStoreFactory* pFactory )
  : m_pFactory( pFactory ) {}

  PackageStore* create( const SessionID&, bool&, ConfigError& );
  void destroy( PackageStore* );
};

class MessageStoreExceptionWrapper
{
private:
  PackageStore* m_pStore;
public:
  MessageStoreExceptionWrapper( PackageStore* pStore ) : m_pStore( pStore ) {}
  ~MessageStoreExceptionWrapper() { delete m_pStore; }

  bool set( int, const std::string&, bool&, IOException& );
  void get( int, int, std::vector < std::string > &, bool&, IOException& ) const;
  int getNextSenderMsgSeqNum( bool&, IOException& ) const;
  int getNextTargetMsgSeqNum( bool&, IOException& ) const;
  void setNextSenderMsgSeqNum( int, bool&, IOException& );
  void setNextTargetMsgSeqNum( int, bool&, IOException& );
  void incrNextSenderMsgSeqNum( bool&, IOException& );
  void incrNextTargetMsgSeqNum( bool&, IOException& );

  UtcTimeStamp getCreationTime( bool&, IOException& );

  void reset( bool&, IOException& );
  void refresh( bool&, IOException& );
};
}

#endif //FIX_MESSAGESTORE_H
