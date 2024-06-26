﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>CreateEvaluation</code> operation, and is
   * an acknowledgement that Amazon ML received the request.</p> <p>
   * <code>CreateEvaluation</code> operation is asynchronous. You can poll for status
   * updates by using the <code>GetEvcaluation</code> operation and checking the
   * <code>Status</code> parameter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateEvaluationOutput">AWS
   * API Reference</a></p>
   */
  class CreateEvaluationResult
  {
  public:
    AWS_MACHINELEARNING_API CreateEvaluationResult();
    AWS_MACHINELEARNING_API CreateEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user-supplied ID that uniquely identifies the <code>Evaluation</code>.
     * This value should be identical to the value of the <code>EvaluationId</code> in
     * the request.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationId = value; }
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationId = std::move(value); }
    inline void SetEvaluationId(const char* value) { m_evaluationId.assign(value); }
    inline CreateEvaluationResult& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}
    inline CreateEvaluationResult& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}
    inline CreateEvaluationResult& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEvaluationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEvaluationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEvaluationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_evaluationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
