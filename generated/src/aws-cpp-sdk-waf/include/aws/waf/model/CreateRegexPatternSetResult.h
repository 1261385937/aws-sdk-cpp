﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/RegexPatternSet.h>
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
namespace WAF
{
namespace Model
{
  class CreateRegexPatternSetResult
  {
  public:
    AWS_WAF_API CreateRegexPatternSetResult();
    AWS_WAF_API CreateRegexPatternSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateRegexPatternSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a>RegexPatternSet</a> that contains no objects.</p>
     */
    inline const RegexPatternSet& GetRegexPatternSet() const{ return m_regexPatternSet; }
    inline void SetRegexPatternSet(const RegexPatternSet& value) { m_regexPatternSet = value; }
    inline void SetRegexPatternSet(RegexPatternSet&& value) { m_regexPatternSet = std::move(value); }
    inline CreateRegexPatternSetResult& WithRegexPatternSet(const RegexPatternSet& value) { SetRegexPatternSet(value); return *this;}
    inline CreateRegexPatternSetResult& WithRegexPatternSet(RegexPatternSet&& value) { SetRegexPatternSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRegexPatternSet</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateRegexPatternSetResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateRegexPatternSetResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateRegexPatternSetResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRegexPatternSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRegexPatternSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRegexPatternSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RegexPatternSet m_regexPatternSet;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
