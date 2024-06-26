﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/ServerCatalogStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/Server.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{
  class GetServersResult
  {
  public:
    AWS_SMS_API GetServersResult();
    AWS_SMS_API GetServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time when the server was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }
    inline GetServersResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline GetServersResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the server catalog.</p>
     */
    inline const ServerCatalogStatus& GetServerCatalogStatus() const{ return m_serverCatalogStatus; }
    inline void SetServerCatalogStatus(const ServerCatalogStatus& value) { m_serverCatalogStatus = value; }
    inline void SetServerCatalogStatus(ServerCatalogStatus&& value) { m_serverCatalogStatus = std::move(value); }
    inline GetServersResult& WithServerCatalogStatus(const ServerCatalogStatus& value) { SetServerCatalogStatus(value); return *this;}
    inline GetServersResult& WithServerCatalogStatus(ServerCatalogStatus&& value) { SetServerCatalogStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the servers.</p>
     */
    inline const Aws::Vector<Server>& GetServerList() const{ return m_serverList; }
    inline void SetServerList(const Aws::Vector<Server>& value) { m_serverList = value; }
    inline void SetServerList(Aws::Vector<Server>&& value) { m_serverList = std::move(value); }
    inline GetServersResult& WithServerList(const Aws::Vector<Server>& value) { SetServerList(value); return *this;}
    inline GetServersResult& WithServerList(Aws::Vector<Server>&& value) { SetServerList(std::move(value)); return *this;}
    inline GetServersResult& AddServerList(const Server& value) { m_serverList.push_back(value); return *this; }
    inline GetServersResult& AddServerList(Server&& value) { m_serverList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastModifiedOn;

    ServerCatalogStatus m_serverCatalogStatus;

    Aws::Vector<Server> m_serverList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
