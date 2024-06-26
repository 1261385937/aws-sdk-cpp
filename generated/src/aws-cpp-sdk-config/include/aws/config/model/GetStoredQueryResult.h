﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/StoredQuery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConfigService
{
namespace Model
{
  class GetStoredQueryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetStoredQueryResult();
    AWS_CONFIGSERVICE_API GetStoredQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetStoredQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a <code>StoredQuery</code> object.</p>
     */
    inline const StoredQuery& GetStoredQuery() const{ return m_storedQuery; }
    inline void SetStoredQuery(const StoredQuery& value) { m_storedQuery = value; }
    inline void SetStoredQuery(StoredQuery&& value) { m_storedQuery = std::move(value); }
    inline GetStoredQueryResult& WithStoredQuery(const StoredQuery& value) { SetStoredQuery(value); return *this;}
    inline GetStoredQueryResult& WithStoredQuery(StoredQuery&& value) { SetStoredQuery(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStoredQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStoredQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStoredQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StoredQuery m_storedQuery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
