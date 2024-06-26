﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackEvaluationResult.h>
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
  class GetConformancePackComplianceDetailsResult
  {
  public:
    AWS_CONFIGSERVICE_API GetConformancePackComplianceDetailsResult();
    AWS_CONFIGSERVICE_API GetConformancePackComplianceDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetConformancePackComplianceDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackName = value; }
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackName = std::move(value); }
    inline void SetConformancePackName(const char* value) { m_conformancePackName.assign(value); }
    inline GetConformancePackComplianceDetailsResult& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of <code>ConformancePackEvaluationResult</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackEvaluationResult>& GetConformancePackRuleEvaluationResults() const{ return m_conformancePackRuleEvaluationResults; }
    inline void SetConformancePackRuleEvaluationResults(const Aws::Vector<ConformancePackEvaluationResult>& value) { m_conformancePackRuleEvaluationResults = value; }
    inline void SetConformancePackRuleEvaluationResults(Aws::Vector<ConformancePackEvaluationResult>&& value) { m_conformancePackRuleEvaluationResults = std::move(value); }
    inline GetConformancePackComplianceDetailsResult& WithConformancePackRuleEvaluationResults(const Aws::Vector<ConformancePackEvaluationResult>& value) { SetConformancePackRuleEvaluationResults(value); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithConformancePackRuleEvaluationResults(Aws::Vector<ConformancePackEvaluationResult>&& value) { SetConformancePackRuleEvaluationResults(std::move(value)); return *this;}
    inline GetConformancePackComplianceDetailsResult& AddConformancePackRuleEvaluationResults(const ConformancePackEvaluationResult& value) { m_conformancePackRuleEvaluationResults.push_back(value); return *this; }
    inline GetConformancePackComplianceDetailsResult& AddConformancePackRuleEvaluationResults(ConformancePackEvaluationResult&& value) { m_conformancePackRuleEvaluationResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetConformancePackComplianceDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConformancePackComplianceDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConformancePackComplianceDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;

    Aws::Vector<ConformancePackEvaluationResult> m_conformancePackRuleEvaluationResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
