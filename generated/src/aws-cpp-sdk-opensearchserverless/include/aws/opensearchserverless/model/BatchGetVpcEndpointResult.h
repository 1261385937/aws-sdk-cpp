﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/VpcEndpointDetail.h>
#include <aws/opensearchserverless/model/VpcEndpointErrorDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class BatchGetVpcEndpointResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetVpcEndpointResult();
    AWS_OPENSEARCHSERVERLESS_API BatchGetVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the specified VPC endpoint.</p>
     */
    inline const Aws::Vector<VpcEndpointDetail>& GetVpcEndpointDetails() const{ return m_vpcEndpointDetails; }
    inline void SetVpcEndpointDetails(const Aws::Vector<VpcEndpointDetail>& value) { m_vpcEndpointDetails = value; }
    inline void SetVpcEndpointDetails(Aws::Vector<VpcEndpointDetail>&& value) { m_vpcEndpointDetails = std::move(value); }
    inline BatchGetVpcEndpointResult& WithVpcEndpointDetails(const Aws::Vector<VpcEndpointDetail>& value) { SetVpcEndpointDetails(value); return *this;}
    inline BatchGetVpcEndpointResult& WithVpcEndpointDetails(Aws::Vector<VpcEndpointDetail>&& value) { SetVpcEndpointDetails(std::move(value)); return *this;}
    inline BatchGetVpcEndpointResult& AddVpcEndpointDetails(const VpcEndpointDetail& value) { m_vpcEndpointDetails.push_back(value); return *this; }
    inline BatchGetVpcEndpointResult& AddVpcEndpointDetails(VpcEndpointDetail&& value) { m_vpcEndpointDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error information for a failed request.</p>
     */
    inline const Aws::Vector<VpcEndpointErrorDetail>& GetVpcEndpointErrorDetails() const{ return m_vpcEndpointErrorDetails; }
    inline void SetVpcEndpointErrorDetails(const Aws::Vector<VpcEndpointErrorDetail>& value) { m_vpcEndpointErrorDetails = value; }
    inline void SetVpcEndpointErrorDetails(Aws::Vector<VpcEndpointErrorDetail>&& value) { m_vpcEndpointErrorDetails = std::move(value); }
    inline BatchGetVpcEndpointResult& WithVpcEndpointErrorDetails(const Aws::Vector<VpcEndpointErrorDetail>& value) { SetVpcEndpointErrorDetails(value); return *this;}
    inline BatchGetVpcEndpointResult& WithVpcEndpointErrorDetails(Aws::Vector<VpcEndpointErrorDetail>&& value) { SetVpcEndpointErrorDetails(std::move(value)); return *this;}
    inline BatchGetVpcEndpointResult& AddVpcEndpointErrorDetails(const VpcEndpointErrorDetail& value) { m_vpcEndpointErrorDetails.push_back(value); return *this; }
    inline BatchGetVpcEndpointResult& AddVpcEndpointErrorDetails(VpcEndpointErrorDetail&& value) { m_vpcEndpointErrorDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetVpcEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetVpcEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetVpcEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointDetail> m_vpcEndpointDetails;

    Aws::Vector<VpcEndpointErrorDetail> m_vpcEndpointErrorDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
