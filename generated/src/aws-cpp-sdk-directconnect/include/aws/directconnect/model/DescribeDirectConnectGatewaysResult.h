﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGateway.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeDirectConnectGatewaysResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewaysResult();
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Direct Connect gateways.</p>
     */
    inline const Aws::Vector<DirectConnectGateway>& GetDirectConnectGateways() const{ return m_directConnectGateways; }
    inline void SetDirectConnectGateways(const Aws::Vector<DirectConnectGateway>& value) { m_directConnectGateways = value; }
    inline void SetDirectConnectGateways(Aws::Vector<DirectConnectGateway>&& value) { m_directConnectGateways = std::move(value); }
    inline DescribeDirectConnectGatewaysResult& WithDirectConnectGateways(const Aws::Vector<DirectConnectGateway>& value) { SetDirectConnectGateways(value); return *this;}
    inline DescribeDirectConnectGatewaysResult& WithDirectConnectGateways(Aws::Vector<DirectConnectGateway>&& value) { SetDirectConnectGateways(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewaysResult& AddDirectConnectGateways(const DirectConnectGateway& value) { m_directConnectGateways.push_back(value); return *this; }
    inline DescribeDirectConnectGatewaysResult& AddDirectConnectGateways(DirectConnectGateway&& value) { m_directConnectGateways.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDirectConnectGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDirectConnectGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDirectConnectGatewaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDirectConnectGatewaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DirectConnectGateway> m_directConnectGateways;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
