﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Result.h>
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
namespace SecurityHub
{
namespace Model
{
  class DeleteMembersResult
  {
  public:
    AWS_SECURITYHUB_API DeleteMembersResult();
    AWS_SECURITYHUB_API DeleteMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DeleteMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Amazon Web Services accounts that were not deleted. For each
     * account, the list includes the account ID and the email address.</p>
     */
    inline const Aws::Vector<Result>& GetUnprocessedAccounts() const{ return m_unprocessedAccounts; }
    inline void SetUnprocessedAccounts(const Aws::Vector<Result>& value) { m_unprocessedAccounts = value; }
    inline void SetUnprocessedAccounts(Aws::Vector<Result>&& value) { m_unprocessedAccounts = std::move(value); }
    inline DeleteMembersResult& WithUnprocessedAccounts(const Aws::Vector<Result>& value) { SetUnprocessedAccounts(value); return *this;}
    inline DeleteMembersResult& WithUnprocessedAccounts(Aws::Vector<Result>&& value) { SetUnprocessedAccounts(std::move(value)); return *this;}
    inline DeleteMembersResult& AddUnprocessedAccounts(const Result& value) { m_unprocessedAccounts.push_back(value); return *this; }
    inline DeleteMembersResult& AddUnprocessedAccounts(Result&& value) { m_unprocessedAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Result> m_unprocessedAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
