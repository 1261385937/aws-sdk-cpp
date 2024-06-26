﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
namespace SSMContacts
{
namespace Model
{
  class StartEngagementResult
  {
  public:
    AWS_SSMCONTACTS_API StartEngagementResult();
    AWS_SSMCONTACTS_API StartEngagementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API StartEngagementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the engagement.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArn = value; }
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArn = std::move(value); }
    inline void SetEngagementArn(const char* value) { m_engagementArn.assign(value); }
    inline StartEngagementResult& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}
    inline StartEngagementResult& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}
    inline StartEngagementResult& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartEngagementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartEngagementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartEngagementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_engagementArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
