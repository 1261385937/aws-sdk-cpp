﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/Datapoint.h>
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
  class GetScalingPlanResourceForecastDataResult
  {
  public:
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult();
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUTOSCALINGPLANS_API GetScalingPlanResourceForecastDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data points to return.</p>
     */
    inline const Aws::Vector<Datapoint>& GetDatapoints() const{ return m_datapoints; }
    inline void SetDatapoints(const Aws::Vector<Datapoint>& value) { m_datapoints = value; }
    inline void SetDatapoints(Aws::Vector<Datapoint>&& value) { m_datapoints = std::move(value); }
    inline GetScalingPlanResourceForecastDataResult& WithDatapoints(const Aws::Vector<Datapoint>& value) { SetDatapoints(value); return *this;}
    inline GetScalingPlanResourceForecastDataResult& WithDatapoints(Aws::Vector<Datapoint>&& value) { SetDatapoints(std::move(value)); return *this;}
    inline GetScalingPlanResourceForecastDataResult& AddDatapoints(const Datapoint& value) { m_datapoints.push_back(value); return *this; }
    inline GetScalingPlanResourceForecastDataResult& AddDatapoints(Datapoint&& value) { m_datapoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetScalingPlanResourceForecastDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetScalingPlanResourceForecastDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetScalingPlanResourceForecastDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Datapoint> m_datapoints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
