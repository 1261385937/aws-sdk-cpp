﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/AccountState.h>
#include <aws/inspector2/model/FailedAccount.h>
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
namespace Inspector2
{
namespace Model
{
  class BatchGetAccountStatusResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetAccountStatusResult();
    AWS_INSPECTOR2_API BatchGetAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that provide details on the status of Amazon Inspector
     * for each of the requested accounts.</p>
     */
    inline const Aws::Vector<AccountState>& GetAccounts() const{ return m_accounts; }
    inline void SetAccounts(const Aws::Vector<AccountState>& value) { m_accounts = value; }
    inline void SetAccounts(Aws::Vector<AccountState>&& value) { m_accounts = std::move(value); }
    inline BatchGetAccountStatusResult& WithAccounts(const Aws::Vector<AccountState>& value) { SetAccounts(value); return *this;}
    inline BatchGetAccountStatusResult& WithAccounts(Aws::Vector<AccountState>&& value) { SetAccounts(std::move(value)); return *this;}
    inline BatchGetAccountStatusResult& AddAccounts(const AccountState& value) { m_accounts.push_back(value); return *this; }
    inline BatchGetAccountStatusResult& AddAccounts(AccountState&& value) { m_accounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects detailing any accounts that failed to enable Amazon
     * Inspector and why.</p>
     */
    inline const Aws::Vector<FailedAccount>& GetFailedAccounts() const{ return m_failedAccounts; }
    inline void SetFailedAccounts(const Aws::Vector<FailedAccount>& value) { m_failedAccounts = value; }
    inline void SetFailedAccounts(Aws::Vector<FailedAccount>&& value) { m_failedAccounts = std::move(value); }
    inline BatchGetAccountStatusResult& WithFailedAccounts(const Aws::Vector<FailedAccount>& value) { SetFailedAccounts(value); return *this;}
    inline BatchGetAccountStatusResult& WithFailedAccounts(Aws::Vector<FailedAccount>&& value) { SetFailedAccounts(std::move(value)); return *this;}
    inline BatchGetAccountStatusResult& AddFailedAccounts(const FailedAccount& value) { m_failedAccounts.push_back(value); return *this; }
    inline BatchGetAccountStatusResult& AddFailedAccounts(FailedAccount&& value) { m_failedAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetAccountStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetAccountStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetAccountStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountState> m_accounts;

    Aws::Vector<FailedAccount> m_failedAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
