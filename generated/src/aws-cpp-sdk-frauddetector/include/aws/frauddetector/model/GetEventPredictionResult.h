﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelScores.h>
#include <aws/frauddetector/model/RuleResult.h>
#include <aws/frauddetector/model/ExternalModelOutputs.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetEventPredictionResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventPredictionResult();
    AWS_FRAUDDETECTOR_API GetEventPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The model scores. Amazon Fraud Detector generates model scores between 0 and
     * 1000, where 0 is low fraud risk and 1000 is high fraud risk. Model scores are
     * directly related to the false positive rate (FPR). For example, a score of 600
     * corresponds to an estimated 10% false positive rate whereas a score of 900
     * corresponds to an estimated 2% false positive rate.</p>
     */
    inline const Aws::Vector<ModelScores>& GetModelScores() const{ return m_modelScores; }
    inline void SetModelScores(const Aws::Vector<ModelScores>& value) { m_modelScores = value; }
    inline void SetModelScores(Aws::Vector<ModelScores>&& value) { m_modelScores = std::move(value); }
    inline GetEventPredictionResult& WithModelScores(const Aws::Vector<ModelScores>& value) { SetModelScores(value); return *this;}
    inline GetEventPredictionResult& WithModelScores(Aws::Vector<ModelScores>&& value) { SetModelScores(std::move(value)); return *this;}
    inline GetEventPredictionResult& AddModelScores(const ModelScores& value) { m_modelScores.push_back(value); return *this; }
    inline GetEventPredictionResult& AddModelScores(ModelScores&& value) { m_modelScores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The results from the rules.</p>
     */
    inline const Aws::Vector<RuleResult>& GetRuleResults() const{ return m_ruleResults; }
    inline void SetRuleResults(const Aws::Vector<RuleResult>& value) { m_ruleResults = value; }
    inline void SetRuleResults(Aws::Vector<RuleResult>&& value) { m_ruleResults = std::move(value); }
    inline GetEventPredictionResult& WithRuleResults(const Aws::Vector<RuleResult>& value) { SetRuleResults(value); return *this;}
    inline GetEventPredictionResult& WithRuleResults(Aws::Vector<RuleResult>&& value) { SetRuleResults(std::move(value)); return *this;}
    inline GetEventPredictionResult& AddRuleResults(const RuleResult& value) { m_ruleResults.push_back(value); return *this; }
    inline GetEventPredictionResult& AddRuleResults(RuleResult&& value) { m_ruleResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model scores for Amazon SageMaker models.</p>
     */
    inline const Aws::Vector<ExternalModelOutputs>& GetExternalModelOutputs() const{ return m_externalModelOutputs; }
    inline void SetExternalModelOutputs(const Aws::Vector<ExternalModelOutputs>& value) { m_externalModelOutputs = value; }
    inline void SetExternalModelOutputs(Aws::Vector<ExternalModelOutputs>&& value) { m_externalModelOutputs = std::move(value); }
    inline GetEventPredictionResult& WithExternalModelOutputs(const Aws::Vector<ExternalModelOutputs>& value) { SetExternalModelOutputs(value); return *this;}
    inline GetEventPredictionResult& WithExternalModelOutputs(Aws::Vector<ExternalModelOutputs>&& value) { SetExternalModelOutputs(std::move(value)); return *this;}
    inline GetEventPredictionResult& AddExternalModelOutputs(const ExternalModelOutputs& value) { m_externalModelOutputs.push_back(value); return *this; }
    inline GetEventPredictionResult& AddExternalModelOutputs(ExternalModelOutputs&& value) { m_externalModelOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEventPredictionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEventPredictionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEventPredictionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ModelScores> m_modelScores;

    Aws::Vector<RuleResult> m_ruleResults;

    Aws::Vector<ExternalModelOutputs> m_externalModelOutputs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
