﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/PredictionExplanations.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The model version evalutions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelVersionEvaluation">AWS
   * API Reference</a></p>
   */
  class ModelVersionEvaluation
  {
  public:
    AWS_FRAUDDETECTOR_API ModelVersionEvaluation();
    AWS_FRAUDDETECTOR_API ModelVersionEvaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ModelVersionEvaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The output variable name. </p>
     */
    inline const Aws::String& GetOutputVariableName() const{ return m_outputVariableName; }
    inline bool OutputVariableNameHasBeenSet() const { return m_outputVariableNameHasBeenSet; }
    inline void SetOutputVariableName(const Aws::String& value) { m_outputVariableNameHasBeenSet = true; m_outputVariableName = value; }
    inline void SetOutputVariableName(Aws::String&& value) { m_outputVariableNameHasBeenSet = true; m_outputVariableName = std::move(value); }
    inline void SetOutputVariableName(const char* value) { m_outputVariableNameHasBeenSet = true; m_outputVariableName.assign(value); }
    inline ModelVersionEvaluation& WithOutputVariableName(const Aws::String& value) { SetOutputVariableName(value); return *this;}
    inline ModelVersionEvaluation& WithOutputVariableName(Aws::String&& value) { SetOutputVariableName(std::move(value)); return *this;}
    inline ModelVersionEvaluation& WithOutputVariableName(const char* value) { SetOutputVariableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The evaluation score generated for the model version. </p>
     */
    inline const Aws::String& GetEvaluationScore() const{ return m_evaluationScore; }
    inline bool EvaluationScoreHasBeenSet() const { return m_evaluationScoreHasBeenSet; }
    inline void SetEvaluationScore(const Aws::String& value) { m_evaluationScoreHasBeenSet = true; m_evaluationScore = value; }
    inline void SetEvaluationScore(Aws::String&& value) { m_evaluationScoreHasBeenSet = true; m_evaluationScore = std::move(value); }
    inline void SetEvaluationScore(const char* value) { m_evaluationScoreHasBeenSet = true; m_evaluationScore.assign(value); }
    inline ModelVersionEvaluation& WithEvaluationScore(const Aws::String& value) { SetEvaluationScore(value); return *this;}
    inline ModelVersionEvaluation& WithEvaluationScore(Aws::String&& value) { SetEvaluationScore(std::move(value)); return *this;}
    inline ModelVersionEvaluation& WithEvaluationScore(const char* value) { SetEvaluationScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prediction explanations generated for the model version. </p>
     */
    inline const PredictionExplanations& GetPredictionExplanations() const{ return m_predictionExplanations; }
    inline bool PredictionExplanationsHasBeenSet() const { return m_predictionExplanationsHasBeenSet; }
    inline void SetPredictionExplanations(const PredictionExplanations& value) { m_predictionExplanationsHasBeenSet = true; m_predictionExplanations = value; }
    inline void SetPredictionExplanations(PredictionExplanations&& value) { m_predictionExplanationsHasBeenSet = true; m_predictionExplanations = std::move(value); }
    inline ModelVersionEvaluation& WithPredictionExplanations(const PredictionExplanations& value) { SetPredictionExplanations(value); return *this;}
    inline ModelVersionEvaluation& WithPredictionExplanations(PredictionExplanations&& value) { SetPredictionExplanations(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputVariableName;
    bool m_outputVariableNameHasBeenSet = false;

    Aws::String m_evaluationScore;
    bool m_evaluationScoreHasBeenSet = false;

    PredictionExplanations m_predictionExplanations;
    bool m_predictionExplanationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
