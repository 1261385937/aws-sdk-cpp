﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRuleGroup.h>
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
namespace Route53Resolver
{
namespace Model
{
  class GetFirewallRuleGroupResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupResult();
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of rules used to filter DNS network traffic. </p>
     */
    inline const FirewallRuleGroup& GetFirewallRuleGroup() const{ return m_firewallRuleGroup; }
    inline void SetFirewallRuleGroup(const FirewallRuleGroup& value) { m_firewallRuleGroup = value; }
    inline void SetFirewallRuleGroup(FirewallRuleGroup&& value) { m_firewallRuleGroup = std::move(value); }
    inline GetFirewallRuleGroupResult& WithFirewallRuleGroup(const FirewallRuleGroup& value) { SetFirewallRuleGroup(value); return *this;}
    inline GetFirewallRuleGroupResult& WithFirewallRuleGroup(FirewallRuleGroup&& value) { SetFirewallRuleGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFirewallRuleGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFirewallRuleGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFirewallRuleGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FirewallRuleGroup m_firewallRuleGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
