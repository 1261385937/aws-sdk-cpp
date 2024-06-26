﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalingPlanResource.h>
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
namespace AutoScalingPlans
{
namespace Model
{
  class DescribeScalingPlanResourcesResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult();
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API DescribeScalingPlanResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the scalable resources.</p>
     */
    inline const Aws::Vector<ScalingPlanResource>& GetScalingPlanResources() const{ return m_scalingPlanResources; }
    inline void SetScalingPlanResources(const Aws::Vector<ScalingPlanResource>& value) { m_scalingPlanResources = value; }
    inline void SetScalingPlanResources(Aws::Vector<ScalingPlanResource>&& value) { m_scalingPlanResources = std::move(value); }
    inline DescribeScalingPlanResourcesResult& WithScalingPlanResources(const Aws::Vector<ScalingPlanResource>& value) { SetScalingPlanResources(value); return *this;}
    inline DescribeScalingPlanResourcesResult& WithScalingPlanResources(Aws::Vector<ScalingPlanResource>&& value) { SetScalingPlanResources(std::move(value)); return *this;}
    inline DescribeScalingPlanResourcesResult& AddScalingPlanResources(const ScalingPlanResource& value) { m_scalingPlanResources.push_back(value); return *this; }
    inline DescribeScalingPlanResourcesResult& AddScalingPlanResources(ScalingPlanResource&& value) { m_scalingPlanResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeScalingPlanResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScalingPlanResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScalingPlanResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeScalingPlanResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeScalingPlanResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeScalingPlanResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ScalingPlanResource> m_scalingPlanResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
