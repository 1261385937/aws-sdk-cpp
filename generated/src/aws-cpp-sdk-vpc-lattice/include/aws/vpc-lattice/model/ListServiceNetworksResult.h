﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ServiceNetworkSummary.h>
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
namespace VPCLattice
{
namespace Model
{
  class ListServiceNetworksResult
  {
  public:
    AWS_VPCLATTICE_API ListServiceNetworksResult();
    AWS_VPCLATTICE_API ListServiceNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API ListServiceNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the service networks.</p>
     */
    inline const Aws::Vector<ServiceNetworkSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ServiceNetworkSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ServiceNetworkSummary>&& value) { m_items = std::move(value); }
    inline ListServiceNetworksResult& WithItems(const Aws::Vector<ServiceNetworkSummary>& value) { SetItems(value); return *this;}
    inline ListServiceNetworksResult& WithItems(Aws::Vector<ServiceNetworkSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListServiceNetworksResult& AddItems(const ServiceNetworkSummary& value) { m_items.push_back(value); return *this; }
    inline ListServiceNetworksResult& AddItems(ServiceNetworkSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, a pagination token for the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceNetworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceNetworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceNetworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceNetworksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceNetworksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceNetworksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceNetworkSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
