﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Action.h>
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
namespace Budgets
{
namespace Model
{
  class UpdateBudgetActionResult
  {
  public:
    AWS_BUDGETS_API UpdateBudgetActionResult();
    AWS_BUDGETS_API UpdateBudgetActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API UpdateBudgetActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }
    inline UpdateBudgetActionResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline UpdateBudgetActionResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline UpdateBudgetActionResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBudgetName() const{ return m_budgetName; }
    inline void SetBudgetName(const Aws::String& value) { m_budgetName = value; }
    inline void SetBudgetName(Aws::String&& value) { m_budgetName = std::move(value); }
    inline void SetBudgetName(const char* value) { m_budgetName.assign(value); }
    inline UpdateBudgetActionResult& WithBudgetName(const Aws::String& value) { SetBudgetName(value); return *this;}
    inline UpdateBudgetActionResult& WithBudgetName(Aws::String&& value) { SetBudgetName(std::move(value)); return *this;}
    inline UpdateBudgetActionResult& WithBudgetName(const char* value) { SetBudgetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The previous action resource information. </p>
     */
    inline const Action& GetOldAction() const{ return m_oldAction; }
    inline void SetOldAction(const Action& value) { m_oldAction = value; }
    inline void SetOldAction(Action&& value) { m_oldAction = std::move(value); }
    inline UpdateBudgetActionResult& WithOldAction(const Action& value) { SetOldAction(value); return *this;}
    inline UpdateBudgetActionResult& WithOldAction(Action&& value) { SetOldAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated action resource information. </p>
     */
    inline const Action& GetNewAction() const{ return m_newAction; }
    inline void SetNewAction(const Action& value) { m_newAction = value; }
    inline void SetNewAction(Action&& value) { m_newAction = std::move(value); }
    inline UpdateBudgetActionResult& WithNewAction(const Action& value) { SetNewAction(value); return *this;}
    inline UpdateBudgetActionResult& WithNewAction(Action&& value) { SetNewAction(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBudgetActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBudgetActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBudgetActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;

    Aws::String m_budgetName;

    Action m_oldAction;

    Action m_newAction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
