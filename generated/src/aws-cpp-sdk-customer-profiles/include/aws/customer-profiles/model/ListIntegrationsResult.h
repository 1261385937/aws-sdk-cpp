﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListIntegrationItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListIntegrationsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListIntegrationsResult();
    AWS_CUSTOMERPROFILES_API ListIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline const Aws::Vector<ListIntegrationItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ListIntegrationItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ListIntegrationItem>&& value) { m_items = std::move(value); }
    inline ListIntegrationsResult& WithItems(const Aws::Vector<ListIntegrationItem>& value) { SetItems(value); return *this;}
    inline ListIntegrationsResult& WithItems(Aws::Vector<ListIntegrationItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListIntegrationsResult& AddItems(const ListIntegrationItem& value) { m_items.push_back(value); return *this; }
    inline ListIntegrationsResult& AddItems(ListIntegrationItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIntegrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIntegrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIntegrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListIntegrationItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
