﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallConfig.h>
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
  class ListFirewallConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallConfigsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFirewallConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFirewallConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFirewallConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for the firewall behavior provided by DNS Firewall for
     * VPCs from Amazon Virtual Private Cloud (Amazon VPC). </p>
     */
    inline const Aws::Vector<FirewallConfig>& GetFirewallConfigs() const{ return m_firewallConfigs; }
    inline void SetFirewallConfigs(const Aws::Vector<FirewallConfig>& value) { m_firewallConfigs = value; }
    inline void SetFirewallConfigs(Aws::Vector<FirewallConfig>&& value) { m_firewallConfigs = std::move(value); }
    inline ListFirewallConfigsResult& WithFirewallConfigs(const Aws::Vector<FirewallConfig>& value) { SetFirewallConfigs(value); return *this;}
    inline ListFirewallConfigsResult& WithFirewallConfigs(Aws::Vector<FirewallConfig>&& value) { SetFirewallConfigs(std::move(value)); return *this;}
    inline ListFirewallConfigsResult& AddFirewallConfigs(const FirewallConfig& value) { m_firewallConfigs.push_back(value); return *this; }
    inline ListFirewallConfigsResult& AddFirewallConfigs(FirewallConfig&& value) { m_firewallConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFirewallConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFirewallConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFirewallConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallConfig> m_firewallConfigs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
