﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/GroupedResourceCount.h>
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
  class GetAggregateDiscoveredResourceCountsResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateDiscoveredResourceCountsResult();
    AWS_CONFIGSERVICE_API GetAggregateDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateDiscoveredResourceCountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of resources that are present in an aggregator with the
     * filters that you provide.</p>
     */
    inline long long GetTotalDiscoveredResources() const{ return m_totalDiscoveredResources; }
    inline void SetTotalDiscoveredResources(long long value) { m_totalDiscoveredResources = value; }
    inline GetAggregateDiscoveredResourceCountsResult& WithTotalDiscoveredResources(long long value) { SetTotalDiscoveredResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key passed into the request object. If <code>GroupByKey</code> is not
     * provided, the result will be empty.</p>
     */
    inline const Aws::String& GetGroupByKey() const{ return m_groupByKey; }
    inline void SetGroupByKey(const Aws::String& value) { m_groupByKey = value; }
    inline void SetGroupByKey(Aws::String&& value) { m_groupByKey = std::move(value); }
    inline void SetGroupByKey(const char* value) { m_groupByKey.assign(value); }
    inline GetAggregateDiscoveredResourceCountsResult& WithGroupByKey(const Aws::String& value) { SetGroupByKey(value); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithGroupByKey(Aws::String&& value) { SetGroupByKey(std::move(value)); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithGroupByKey(const char* value) { SetGroupByKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of GroupedResourceCount objects.</p>
     */
    inline const Aws::Vector<GroupedResourceCount>& GetGroupedResourceCounts() const{ return m_groupedResourceCounts; }
    inline void SetGroupedResourceCounts(const Aws::Vector<GroupedResourceCount>& value) { m_groupedResourceCounts = value; }
    inline void SetGroupedResourceCounts(Aws::Vector<GroupedResourceCount>&& value) { m_groupedResourceCounts = std::move(value); }
    inline GetAggregateDiscoveredResourceCountsResult& WithGroupedResourceCounts(const Aws::Vector<GroupedResourceCount>& value) { SetGroupedResourceCounts(value); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithGroupedResourceCounts(Aws::Vector<GroupedResourceCount>&& value) { SetGroupedResourceCounts(std::move(value)); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& AddGroupedResourceCounts(const GroupedResourceCount& value) { m_groupedResourceCounts.push_back(value); return *this; }
    inline GetAggregateDiscoveredResourceCountsResult& AddGroupedResourceCounts(GroupedResourceCount&& value) { m_groupedResourceCounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAggregateDiscoveredResourceCountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAggregateDiscoveredResourceCountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAggregateDiscoveredResourceCountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    long long m_totalDiscoveredResources;

    Aws::String m_groupByKey;

    Aws::Vector<GroupedResourceCount> m_groupedResourceCounts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
