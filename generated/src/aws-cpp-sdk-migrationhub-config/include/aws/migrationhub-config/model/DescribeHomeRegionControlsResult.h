﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhub-config/model/HomeRegionControl.h>
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
namespace MigrationHubConfig
{
namespace Model
{
  class DescribeHomeRegionControlsResult
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult();
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains your <code>HomeRegionControl</code> objects.</p>
     */
    inline const Aws::Vector<HomeRegionControl>& GetHomeRegionControls() const{ return m_homeRegionControls; }
    inline void SetHomeRegionControls(const Aws::Vector<HomeRegionControl>& value) { m_homeRegionControls = value; }
    inline void SetHomeRegionControls(Aws::Vector<HomeRegionControl>&& value) { m_homeRegionControls = std::move(value); }
    inline DescribeHomeRegionControlsResult& WithHomeRegionControls(const Aws::Vector<HomeRegionControl>& value) { SetHomeRegionControls(value); return *this;}
    inline DescribeHomeRegionControlsResult& WithHomeRegionControls(Aws::Vector<HomeRegionControl>&& value) { SetHomeRegionControls(std::move(value)); return *this;}
    inline DescribeHomeRegionControlsResult& AddHomeRegionControls(const HomeRegionControl& value) { m_homeRegionControls.push_back(value); return *this; }
    inline DescribeHomeRegionControlsResult& AddHomeRegionControls(HomeRegionControl&& value) { m_homeRegionControls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeHomeRegionControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeHomeRegionControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeHomeRegionControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeHomeRegionControlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeHomeRegionControlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeHomeRegionControlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HomeRegionControl> m_homeRegionControls;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
