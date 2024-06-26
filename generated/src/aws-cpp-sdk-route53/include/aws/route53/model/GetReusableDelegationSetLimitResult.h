﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ReusableDelegationSetLimit.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the requested limit. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetLimitResponse">AWS
   * API Reference</a></p>
   */
  class GetReusableDelegationSetLimitResult
  {
  public:
    AWS_ROUTE53_API GetReusableDelegationSetLimitResult();
    AWS_ROUTE53_API GetReusableDelegationSetLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetReusableDelegationSetLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current setting for the limit on hosted zones that you can associate with
     * the specified reusable delegation set.</p>
     */
    inline const ReusableDelegationSetLimit& GetLimit() const{ return m_limit; }
    inline void SetLimit(const ReusableDelegationSetLimit& value) { m_limit = value; }
    inline void SetLimit(ReusableDelegationSetLimit&& value) { m_limit = std::move(value); }
    inline GetReusableDelegationSetLimitResult& WithLimit(const ReusableDelegationSetLimit& value) { SetLimit(value); return *this;}
    inline GetReusableDelegationSetLimitResult& WithLimit(ReusableDelegationSetLimit&& value) { SetLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of hosted zones that you can associate with the specified
     * reusable delegation set.</p>
     */
    inline long long GetCount() const{ return m_count; }
    inline void SetCount(long long value) { m_count = value; }
    inline GetReusableDelegationSetLimitResult& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReusableDelegationSetLimitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReusableDelegationSetLimitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReusableDelegationSetLimitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReusableDelegationSetLimit m_limit;

    long long m_count;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
