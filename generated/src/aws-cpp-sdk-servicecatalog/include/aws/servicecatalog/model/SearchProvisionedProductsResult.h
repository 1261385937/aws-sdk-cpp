﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductAttribute.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class SearchProvisionedProductsResult
  {
  public:
    AWS_SERVICECATALOG_API SearchProvisionedProductsResult();
    AWS_SERVICECATALOG_API SearchProvisionedProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API SearchProvisionedProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the provisioned products.</p>
     */
    inline const Aws::Vector<ProvisionedProductAttribute>& GetProvisionedProducts() const{ return m_provisionedProducts; }
    inline void SetProvisionedProducts(const Aws::Vector<ProvisionedProductAttribute>& value) { m_provisionedProducts = value; }
    inline void SetProvisionedProducts(Aws::Vector<ProvisionedProductAttribute>&& value) { m_provisionedProducts = std::move(value); }
    inline SearchProvisionedProductsResult& WithProvisionedProducts(const Aws::Vector<ProvisionedProductAttribute>& value) { SetProvisionedProducts(value); return *this;}
    inline SearchProvisionedProductsResult& WithProvisionedProducts(Aws::Vector<ProvisionedProductAttribute>&& value) { SetProvisionedProducts(std::move(value)); return *this;}
    inline SearchProvisionedProductsResult& AddProvisionedProducts(const ProvisionedProductAttribute& value) { m_provisionedProducts.push_back(value); return *this; }
    inline SearchProvisionedProductsResult& AddProvisionedProducts(ProvisionedProductAttribute&& value) { m_provisionedProducts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of provisioned products found.</p>
     */
    inline int GetTotalResultsCount() const{ return m_totalResultsCount; }
    inline void SetTotalResultsCount(int value) { m_totalResultsCount = value; }
    inline SearchProvisionedProductsResult& WithTotalResultsCount(int value) { SetTotalResultsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline SearchProvisionedProductsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline SearchProvisionedProductsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline SearchProvisionedProductsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchProvisionedProductsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchProvisionedProductsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchProvisionedProductsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionedProductAttribute> m_provisionedProducts;

    int m_totalResultsCount;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
