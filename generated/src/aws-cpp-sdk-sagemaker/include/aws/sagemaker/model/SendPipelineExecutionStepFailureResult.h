﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class SendPipelineExecutionStepFailureResult
  {
  public:
    AWS_SAGEMAKER_API SendPipelineExecutionStepFailureResult();
    AWS_SAGEMAKER_API SendPipelineExecutionStepFailureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API SendPipelineExecutionStepFailureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const{ return m_pipelineExecutionArn; }
    inline void SetPipelineExecutionArn(const Aws::String& value) { m_pipelineExecutionArn = value; }
    inline void SetPipelineExecutionArn(Aws::String&& value) { m_pipelineExecutionArn = std::move(value); }
    inline void SetPipelineExecutionArn(const char* value) { m_pipelineExecutionArn.assign(value); }
    inline SendPipelineExecutionStepFailureResult& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}
    inline SendPipelineExecutionStepFailureResult& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}
    inline SendPipelineExecutionStepFailureResult& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendPipelineExecutionStepFailureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendPipelineExecutionStepFailureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendPipelineExecutionStepFailureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
