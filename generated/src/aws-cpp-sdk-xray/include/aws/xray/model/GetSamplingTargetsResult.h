﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/SamplingTargetDocument.h>
#include <aws/xray/model/UnprocessedStatistics.h>
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
namespace XRay
{
namespace Model
{
  class GetSamplingTargetsResult
  {
  public:
    AWS_XRAY_API GetSamplingTargetsResult();
    AWS_XRAY_API GetSamplingTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetSamplingTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline const Aws::Vector<SamplingTargetDocument>& GetSamplingTargetDocuments() const{ return m_samplingTargetDocuments; }
    inline void SetSamplingTargetDocuments(const Aws::Vector<SamplingTargetDocument>& value) { m_samplingTargetDocuments = value; }
    inline void SetSamplingTargetDocuments(Aws::Vector<SamplingTargetDocument>&& value) { m_samplingTargetDocuments = std::move(value); }
    inline GetSamplingTargetsResult& WithSamplingTargetDocuments(const Aws::Vector<SamplingTargetDocument>& value) { SetSamplingTargetDocuments(value); return *this;}
    inline GetSamplingTargetsResult& WithSamplingTargetDocuments(Aws::Vector<SamplingTargetDocument>&& value) { SetSamplingTargetDocuments(std::move(value)); return *this;}
    inline GetSamplingTargetsResult& AddSamplingTargetDocuments(const SamplingTargetDocument& value) { m_samplingTargetDocuments.push_back(value); return *this; }
    inline GetSamplingTargetsResult& AddSamplingTargetDocuments(SamplingTargetDocument&& value) { m_samplingTargetDocuments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a
     * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingRules.html">GetSamplingRules</a>
     * to get the latest version.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRuleModification() const{ return m_lastRuleModification; }
    inline void SetLastRuleModification(const Aws::Utils::DateTime& value) { m_lastRuleModification = value; }
    inline void SetLastRuleModification(Aws::Utils::DateTime&& value) { m_lastRuleModification = std::move(value); }
    inline GetSamplingTargetsResult& WithLastRuleModification(const Aws::Utils::DateTime& value) { SetLastRuleModification(value); return *this;}
    inline GetSamplingTargetsResult& WithLastRuleModification(Aws::Utils::DateTime&& value) { SetLastRuleModification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about <a
     * href="https://docs.aws.amazon.com/xray/latest/api/API_SamplingStatisticsDocument.html">SamplingStatisticsDocument</a>
     * that X-Ray could not process.</p>
     */
    inline const Aws::Vector<UnprocessedStatistics>& GetUnprocessedStatistics() const{ return m_unprocessedStatistics; }
    inline void SetUnprocessedStatistics(const Aws::Vector<UnprocessedStatistics>& value) { m_unprocessedStatistics = value; }
    inline void SetUnprocessedStatistics(Aws::Vector<UnprocessedStatistics>&& value) { m_unprocessedStatistics = std::move(value); }
    inline GetSamplingTargetsResult& WithUnprocessedStatistics(const Aws::Vector<UnprocessedStatistics>& value) { SetUnprocessedStatistics(value); return *this;}
    inline GetSamplingTargetsResult& WithUnprocessedStatistics(Aws::Vector<UnprocessedStatistics>&& value) { SetUnprocessedStatistics(std::move(value)); return *this;}
    inline GetSamplingTargetsResult& AddUnprocessedStatistics(const UnprocessedStatistics& value) { m_unprocessedStatistics.push_back(value); return *this; }
    inline GetSamplingTargetsResult& AddUnprocessedStatistics(UnprocessedStatistics&& value) { m_unprocessedStatistics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSamplingTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSamplingTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSamplingTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SamplingTargetDocument> m_samplingTargetDocuments;

    Aws::Utils::DateTime m_lastRuleModification;

    Aws::Vector<UnprocessedStatistics> m_unprocessedStatistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
