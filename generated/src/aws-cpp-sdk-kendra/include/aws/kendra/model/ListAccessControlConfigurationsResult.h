﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/AccessControlConfigurationSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListAccessControlConfigurationsResult
  {
  public:
    AWS_KENDRA_API ListAccessControlConfigurationsResult();
    AWS_KENDRA_API ListAccessControlConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListAccessControlConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in the subsequent request to retrieve the next set of access control
     * configurations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccessControlConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccessControlConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccessControlConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of your access control configurations.</p>
     */
    inline const Aws::Vector<AccessControlConfigurationSummary>& GetAccessControlConfigurations() const{ return m_accessControlConfigurations; }
    inline void SetAccessControlConfigurations(const Aws::Vector<AccessControlConfigurationSummary>& value) { m_accessControlConfigurations = value; }
    inline void SetAccessControlConfigurations(Aws::Vector<AccessControlConfigurationSummary>&& value) { m_accessControlConfigurations = std::move(value); }
    inline ListAccessControlConfigurationsResult& WithAccessControlConfigurations(const Aws::Vector<AccessControlConfigurationSummary>& value) { SetAccessControlConfigurations(value); return *this;}
    inline ListAccessControlConfigurationsResult& WithAccessControlConfigurations(Aws::Vector<AccessControlConfigurationSummary>&& value) { SetAccessControlConfigurations(std::move(value)); return *this;}
    inline ListAccessControlConfigurationsResult& AddAccessControlConfigurations(const AccessControlConfigurationSummary& value) { m_accessControlConfigurations.push_back(value); return *this; }
    inline ListAccessControlConfigurationsResult& AddAccessControlConfigurations(AccessControlConfigurationSummary&& value) { m_accessControlConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccessControlConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccessControlConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccessControlConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<AccessControlConfigurationSummary> m_accessControlConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
