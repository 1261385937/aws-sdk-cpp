﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemResponseElement.h>
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
  class ListResourcesAssociatedToCustomLineItemResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResult();
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The custom line item ARN for which the resource associations are listed.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline ListResourcesAssociatedToCustomLineItemResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of
     * <code>ListResourcesAssociatedToCustomLineItemResponseElement</code> for each
     * resource association retrieved. </p>
     */
    inline const Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>& GetAssociatedResources() const{ return m_associatedResources; }
    inline void SetAssociatedResources(const Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>& value) { m_associatedResources = value; }
    inline void SetAssociatedResources(Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>&& value) { m_associatedResources = std::move(value); }
    inline ListResourcesAssociatedToCustomLineItemResult& WithAssociatedResources(const Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>& value) { SetAssociatedResources(value); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithAssociatedResources(Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement>&& value) { SetAssociatedResources(std::move(value)); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& AddAssociatedResources(const ListResourcesAssociatedToCustomLineItemResponseElement& value) { m_associatedResources.push_back(value); return *this; }
    inline ListResourcesAssociatedToCustomLineItemResult& AddAssociatedResources(ListResourcesAssociatedToCustomLineItemResponseElement&& value) { m_associatedResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token to be used in subsequent requests to retrieve
     * additional results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResourcesAssociatedToCustomLineItemResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourcesAssociatedToCustomLineItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourcesAssociatedToCustomLineItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<ListResourcesAssociatedToCustomLineItemResponseElement> m_associatedResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
