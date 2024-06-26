﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateSolutionVersionResult
  {
  public:
    AWS_PERSONALIZE_API CreateSolutionVersionResult();
    AWS_PERSONALIZE_API CreateSolutionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateSolutionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArn.assign(value); }
    inline CreateSolutionVersionResult& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline CreateSolutionVersionResult& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline CreateSolutionVersionResult& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSolutionVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSolutionVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSolutionVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_solutionVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
