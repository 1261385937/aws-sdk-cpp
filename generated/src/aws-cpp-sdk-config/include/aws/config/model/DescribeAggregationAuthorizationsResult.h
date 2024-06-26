﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregationAuthorization.h>
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
  class DescribeAggregationAuthorizationsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregationAuthorizationsResult();
    AWS_CONFIGSERVICE_API DescribeAggregationAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregationAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of authorizations granted to various aggregator accounts and
     * regions.</p>
     */
    inline const Aws::Vector<AggregationAuthorization>& GetAggregationAuthorizations() const{ return m_aggregationAuthorizations; }
    inline void SetAggregationAuthorizations(const Aws::Vector<AggregationAuthorization>& value) { m_aggregationAuthorizations = value; }
    inline void SetAggregationAuthorizations(Aws::Vector<AggregationAuthorization>&& value) { m_aggregationAuthorizations = std::move(value); }
    inline DescribeAggregationAuthorizationsResult& WithAggregationAuthorizations(const Aws::Vector<AggregationAuthorization>& value) { SetAggregationAuthorizations(value); return *this;}
    inline DescribeAggregationAuthorizationsResult& WithAggregationAuthorizations(Aws::Vector<AggregationAuthorization>&& value) { SetAggregationAuthorizations(std::move(value)); return *this;}
    inline DescribeAggregationAuthorizationsResult& AddAggregationAuthorizations(const AggregationAuthorization& value) { m_aggregationAuthorizations.push_back(value); return *this; }
    inline DescribeAggregationAuthorizationsResult& AddAggregationAuthorizations(AggregationAuthorization&& value) { m_aggregationAuthorizations.push_back(std::move(value)); return *this; }
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
    inline DescribeAggregationAuthorizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAggregationAuthorizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAggregationAuthorizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAggregationAuthorizationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAggregationAuthorizationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAggregationAuthorizationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AggregationAuthorization> m_aggregationAuthorizations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
