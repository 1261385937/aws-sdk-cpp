﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class DeleteDomainResult
  {
  public:
    AWS_CUSTOMERPROFILES_API DeleteDomainResult();
    AWS_CUSTOMERPROFILES_API DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A message that indicates the delete request is done.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DeleteDomainResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DeleteDomainResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DeleteDomainResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_message;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
