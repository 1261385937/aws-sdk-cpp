﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FreeTrialAccountInfo.h>
#include <aws/inspector2/model/FreeTrialInfoError.h>
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
  class BatchGetFreeTrialInfoResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult();
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetFreeTrialInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that provide Amazon Inspector free trial details for each
     * of the requested accounts. </p>
     */
    inline const Aws::Vector<FreeTrialAccountInfo>& GetAccounts() const{ return m_accounts; }
    inline void SetAccounts(const Aws::Vector<FreeTrialAccountInfo>& value) { m_accounts = value; }
    inline void SetAccounts(Aws::Vector<FreeTrialAccountInfo>&& value) { m_accounts = std::move(value); }
    inline BatchGetFreeTrialInfoResult& WithAccounts(const Aws::Vector<FreeTrialAccountInfo>& value) { SetAccounts(value); return *this;}
    inline BatchGetFreeTrialInfoResult& WithAccounts(Aws::Vector<FreeTrialAccountInfo>&& value) { SetAccounts(std::move(value)); return *this;}
    inline BatchGetFreeTrialInfoResult& AddAccounts(const FreeTrialAccountInfo& value) { m_accounts.push_back(value); return *this; }
    inline BatchGetFreeTrialInfoResult& AddAccounts(FreeTrialAccountInfo&& value) { m_accounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects detailing any accounts that free trial data could not be
     * returned for.</p>
     */
    inline const Aws::Vector<FreeTrialInfoError>& GetFailedAccounts() const{ return m_failedAccounts; }
    inline void SetFailedAccounts(const Aws::Vector<FreeTrialInfoError>& value) { m_failedAccounts = value; }
    inline void SetFailedAccounts(Aws::Vector<FreeTrialInfoError>&& value) { m_failedAccounts = std::move(value); }
    inline BatchGetFreeTrialInfoResult& WithFailedAccounts(const Aws::Vector<FreeTrialInfoError>& value) { SetFailedAccounts(value); return *this;}
    inline BatchGetFreeTrialInfoResult& WithFailedAccounts(Aws::Vector<FreeTrialInfoError>&& value) { SetFailedAccounts(std::move(value)); return *this;}
    inline BatchGetFreeTrialInfoResult& AddFailedAccounts(const FreeTrialInfoError& value) { m_failedAccounts.push_back(value); return *this; }
    inline BatchGetFreeTrialInfoResult& AddFailedAccounts(FreeTrialInfoError&& value) { m_failedAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetFreeTrialInfoResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetFreeTrialInfoResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetFreeTrialInfoResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FreeTrialAccountInfo> m_accounts;

    Aws::Vector<FreeTrialInfoError> m_failedAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
