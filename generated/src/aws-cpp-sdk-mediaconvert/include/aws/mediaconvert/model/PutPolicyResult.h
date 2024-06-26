﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Policy.h>
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
namespace MediaConvert
{
namespace Model
{
  class PutPolicyResult
  {
  public:
    AWS_MEDIACONVERT_API PutPolicyResult();
    AWS_MEDIACONVERT_API PutPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API PutPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Policy& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Policy& value) { m_policy = value; }
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }
    inline PutPolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}
    inline PutPolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Policy m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
