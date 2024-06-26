﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_CONNECT_API ListInstancesResult();
    AWS_CONNECT_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the instances.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstanceSummaryList() const{ return m_instanceSummaryList; }
    inline void SetInstanceSummaryList(const Aws::Vector<InstanceSummary>& value) { m_instanceSummaryList = value; }
    inline void SetInstanceSummaryList(Aws::Vector<InstanceSummary>&& value) { m_instanceSummaryList = std::move(value); }
    inline ListInstancesResult& WithInstanceSummaryList(const Aws::Vector<InstanceSummary>& value) { SetInstanceSummaryList(value); return *this;}
    inline ListInstancesResult& WithInstanceSummaryList(Aws::Vector<InstanceSummary>&& value) { SetInstanceSummaryList(std::move(value)); return *this;}
    inline ListInstancesResult& AddInstanceSummaryList(const InstanceSummary& value) { m_instanceSummaryList.push_back(value); return *this; }
    inline ListInstancesResult& AddInstanceSummaryList(InstanceSummary&& value) { m_instanceSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSummary> m_instanceSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
