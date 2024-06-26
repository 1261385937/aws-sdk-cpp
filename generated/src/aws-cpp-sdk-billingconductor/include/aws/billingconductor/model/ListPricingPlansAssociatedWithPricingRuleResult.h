﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BillingConductor
{
namespace Model
{
  class ListPricingPlansAssociatedWithPricingRuleResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult();
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriod = value; }
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriod = std::move(value); }
    inline void SetBillingPeriod(const char* value) { m_billingPeriod.assign(value); }
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline const Aws::String& GetPricingRuleArn() const{ return m_pricingRuleArn; }
    inline void SetPricingRuleArn(const Aws::String& value) { m_pricingRuleArn = value; }
    inline void SetPricingRuleArn(Aws::String&& value) { m_pricingRuleArn = std::move(value); }
    inline void SetPricingRuleArn(const char* value) { m_pricingRuleArn.assign(value); }
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(const Aws::String& value) { SetPricingRuleArn(value); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(Aws::String&& value) { SetPricingRuleArn(std::move(value)); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(const char* value) { SetPricingRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingPlanArns() const{ return m_pricingPlanArns; }
    inline void SetPricingPlanArns(const Aws::Vector<Aws::String>& value) { m_pricingPlanArns = value; }
    inline void SetPricingPlanArns(Aws::Vector<Aws::String>&& value) { m_pricingPlanArns = std::move(value); }
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingPlanArns(const Aws::Vector<Aws::String>& value) { SetPricingPlanArns(value); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingPlanArns(Aws::Vector<Aws::String>&& value) { SetPricingPlanArns(std::move(value)); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(const Aws::String& value) { m_pricingPlanArns.push_back(value); return *this; }
    inline ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(Aws::String&& value) { m_pricingPlanArns.push_back(std::move(value)); return *this; }
    inline ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(const char* value) { m_pricingPlanArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_billingPeriod;

    Aws::String m_pricingRuleArn;

    Aws::Vector<Aws::String> m_pricingPlanArns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
