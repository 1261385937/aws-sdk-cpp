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
  class CreateTransformJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateTransformJobResult();
    AWS_SAGEMAKER_API CreateTransformJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateTransformJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const{ return m_transformJobArn; }
    inline void SetTransformJobArn(const Aws::String& value) { m_transformJobArn = value; }
    inline void SetTransformJobArn(Aws::String&& value) { m_transformJobArn = std::move(value); }
    inline void SetTransformJobArn(const char* value) { m_transformJobArn.assign(value); }
    inline CreateTransformJobResult& WithTransformJobArn(const Aws::String& value) { SetTransformJobArn(value); return *this;}
    inline CreateTransformJobResult& WithTransformJobArn(Aws::String&& value) { SetTransformJobArn(std::move(value)); return *this;}
    inline CreateTransformJobResult& WithTransformJobArn(const char* value) { SetTransformJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTransformJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTransformJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTransformJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
