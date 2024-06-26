﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SecurityConfigurationSummary.h>
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
namespace EMR
{
namespace Model
{
  class ListSecurityConfigurationsResult
  {
  public:
    AWS_EMR_API ListSecurityConfigurationsResult();
    AWS_EMR_API ListSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListSecurityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline const Aws::Vector<SecurityConfigurationSummary>& GetSecurityConfigurations() const{ return m_securityConfigurations; }
    inline void SetSecurityConfigurations(const Aws::Vector<SecurityConfigurationSummary>& value) { m_securityConfigurations = value; }
    inline void SetSecurityConfigurations(Aws::Vector<SecurityConfigurationSummary>&& value) { m_securityConfigurations = std::move(value); }
    inline ListSecurityConfigurationsResult& WithSecurityConfigurations(const Aws::Vector<SecurityConfigurationSummary>& value) { SetSecurityConfigurations(value); return *this;}
    inline ListSecurityConfigurationsResult& WithSecurityConfigurations(Aws::Vector<SecurityConfigurationSummary>&& value) { SetSecurityConfigurations(std::move(value)); return *this;}
    inline ListSecurityConfigurationsResult& AddSecurityConfigurations(const SecurityConfigurationSummary& value) { m_securityConfigurations.push_back(value); return *this; }
    inline ListSecurityConfigurationsResult& AddSecurityConfigurations(SecurityConfigurationSummary&& value) { m_securityConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListSecurityConfigurationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListSecurityConfigurationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListSecurityConfigurationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSecurityConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSecurityConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSecurityConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityConfigurationSummary> m_securityConfigurations;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
