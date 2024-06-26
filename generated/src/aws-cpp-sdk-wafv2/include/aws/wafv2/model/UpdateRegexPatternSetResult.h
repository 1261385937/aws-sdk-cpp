﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{
  class UpdateRegexPatternSetResult
  {
  public:
    AWS_WAFV2_API UpdateRegexPatternSetResult();
    AWS_WAFV2_API UpdateRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API UpdateRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline const Aws::String& GetNextLockToken() const{ return m_nextLockToken; }
    inline void SetNextLockToken(const Aws::String& value) { m_nextLockToken = value; }
    inline void SetNextLockToken(Aws::String&& value) { m_nextLockToken = std::move(value); }
    inline void SetNextLockToken(const char* value) { m_nextLockToken.assign(value); }
    inline UpdateRegexPatternSetResult& WithNextLockToken(const Aws::String& value) { SetNextLockToken(value); return *this;}
    inline UpdateRegexPatternSetResult& WithNextLockToken(Aws::String&& value) { SetNextLockToken(std::move(value)); return *this;}
    inline UpdateRegexPatternSetResult& WithNextLockToken(const char* value) { SetNextLockToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRegexPatternSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRegexPatternSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRegexPatternSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextLockToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
