﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessGatewayServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTWireless
{
namespace Model
{
  class GetServiceEndpointResult
  {
  public:
    AWS_IOTWIRELESS_API GetServiceEndpointResult();
    AWS_IOTWIRELESS_API GetServiceEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetServiceEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint's service type.</p>
     */
    inline const WirelessGatewayServiceType& GetServiceType() const{ return m_serviceType; }
    inline void SetServiceType(const WirelessGatewayServiceType& value) { m_serviceType = value; }
    inline void SetServiceType(WirelessGatewayServiceType&& value) { m_serviceType = std::move(value); }
    inline GetServiceEndpointResult& WithServiceType(const WirelessGatewayServiceType& value) { SetServiceType(value); return *this;}
    inline GetServiceEndpointResult& WithServiceType(WirelessGatewayServiceType&& value) { SetServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service endpoint value.</p>
     */
    inline const Aws::String& GetServiceEndpoint() const{ return m_serviceEndpoint; }
    inline void SetServiceEndpoint(const Aws::String& value) { m_serviceEndpoint = value; }
    inline void SetServiceEndpoint(Aws::String&& value) { m_serviceEndpoint = std::move(value); }
    inline void SetServiceEndpoint(const char* value) { m_serviceEndpoint.assign(value); }
    inline GetServiceEndpointResult& WithServiceEndpoint(const Aws::String& value) { SetServiceEndpoint(value); return *this;}
    inline GetServiceEndpointResult& WithServiceEndpoint(Aws::String&& value) { SetServiceEndpoint(std::move(value)); return *this;}
    inline GetServiceEndpointResult& WithServiceEndpoint(const char* value) { SetServiceEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Root CA of the server trust certificate.</p>
     */
    inline const Aws::String& GetServerTrust() const{ return m_serverTrust; }
    inline void SetServerTrust(const Aws::String& value) { m_serverTrust = value; }
    inline void SetServerTrust(Aws::String&& value) { m_serverTrust = std::move(value); }
    inline void SetServerTrust(const char* value) { m_serverTrust.assign(value); }
    inline GetServiceEndpointResult& WithServerTrust(const Aws::String& value) { SetServerTrust(value); return *this;}
    inline GetServiceEndpointResult& WithServerTrust(Aws::String&& value) { SetServerTrust(std::move(value)); return *this;}
    inline GetServiceEndpointResult& WithServerTrust(const char* value) { SetServerTrust(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WirelessGatewayServiceType m_serviceType;

    Aws::String m_serviceEndpoint;

    Aws::String m_serverTrust;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
