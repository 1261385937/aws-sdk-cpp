﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceSummary.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class ListAppInstancesResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstancesResult();
    AWS_CHIMESDKIDENTITY_API ListAppInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API ListAppInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information for each <code>AppInstance</code>.</p>
     */
    inline const Aws::Vector<AppInstanceSummary>& GetAppInstances() const{ return m_appInstances; }
    inline void SetAppInstances(const Aws::Vector<AppInstanceSummary>& value) { m_appInstances = value; }
    inline void SetAppInstances(Aws::Vector<AppInstanceSummary>&& value) { m_appInstances = std::move(value); }
    inline ListAppInstancesResult& WithAppInstances(const Aws::Vector<AppInstanceSummary>& value) { SetAppInstances(value); return *this;}
    inline ListAppInstancesResult& WithAppInstances(Aws::Vector<AppInstanceSummary>&& value) { SetAppInstances(std::move(value)); return *this;}
    inline ListAppInstancesResult& AddAppInstances(const AppInstanceSummary& value) { m_appInstances.push_back(value); return *this; }
    inline ListAppInstancesResult& AddAppInstances(AppInstanceSummary&& value) { m_appInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API requests until the maximum number of
     * <code>AppInstance</code>s is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAppInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAppInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAppInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAppInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AppInstanceSummary> m_appInstances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
