﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifact.h>
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
  class DescribeProductViewResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProductViewResult();
    AWS_SERVICECATALOG_API DescribeProductViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProductViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the product.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummary = value; }
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummary = std::move(value); }
    inline DescribeProductViewResult& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}
    inline DescribeProductViewResult& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioning artifacts for the product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifact>& GetProvisioningArtifacts() const{ return m_provisioningArtifacts; }
    inline void SetProvisioningArtifacts(const Aws::Vector<ProvisioningArtifact>& value) { m_provisioningArtifacts = value; }
    inline void SetProvisioningArtifacts(Aws::Vector<ProvisioningArtifact>&& value) { m_provisioningArtifacts = std::move(value); }
    inline DescribeProductViewResult& WithProvisioningArtifacts(const Aws::Vector<ProvisioningArtifact>& value) { SetProvisioningArtifacts(value); return *this;}
    inline DescribeProductViewResult& WithProvisioningArtifacts(Aws::Vector<ProvisioningArtifact>&& value) { SetProvisioningArtifacts(std::move(value)); return *this;}
    inline DescribeProductViewResult& AddProvisioningArtifacts(const ProvisioningArtifact& value) { m_provisioningArtifacts.push_back(value); return *this; }
    inline DescribeProductViewResult& AddProvisioningArtifacts(ProvisioningArtifact&& value) { m_provisioningArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProductViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProductViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProductViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ProductViewSummary m_productViewSummary;

    Aws::Vector<ProvisioningArtifact> m_provisioningArtifacts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
