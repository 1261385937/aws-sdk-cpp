﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/TimeSeriesFeedback.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class GetFeedbackResult
  {
  public:
    AWS_LOOKOUTMETRICS_API GetFeedbackResult();
    AWS_LOOKOUTMETRICS_API GetFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Feedback for an anomalous metric.</p>
     */
    inline const Aws::Vector<TimeSeriesFeedback>& GetAnomalyGroupTimeSeriesFeedback() const{ return m_anomalyGroupTimeSeriesFeedback; }
    inline void SetAnomalyGroupTimeSeriesFeedback(const Aws::Vector<TimeSeriesFeedback>& value) { m_anomalyGroupTimeSeriesFeedback = value; }
    inline void SetAnomalyGroupTimeSeriesFeedback(Aws::Vector<TimeSeriesFeedback>&& value) { m_anomalyGroupTimeSeriesFeedback = std::move(value); }
    inline GetFeedbackResult& WithAnomalyGroupTimeSeriesFeedback(const Aws::Vector<TimeSeriesFeedback>& value) { SetAnomalyGroupTimeSeriesFeedback(value); return *this;}
    inline GetFeedbackResult& WithAnomalyGroupTimeSeriesFeedback(Aws::Vector<TimeSeriesFeedback>&& value) { SetAnomalyGroupTimeSeriesFeedback(std::move(value)); return *this;}
    inline GetFeedbackResult& AddAnomalyGroupTimeSeriesFeedback(const TimeSeriesFeedback& value) { m_anomalyGroupTimeSeriesFeedback.push_back(value); return *this; }
    inline GetFeedbackResult& AddAnomalyGroupTimeSeriesFeedback(TimeSeriesFeedback&& value) { m_anomalyGroupTimeSeriesFeedback.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetFeedbackResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetFeedbackResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetFeedbackResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TimeSeriesFeedback> m_anomalyGroupTimeSeriesFeedback;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
