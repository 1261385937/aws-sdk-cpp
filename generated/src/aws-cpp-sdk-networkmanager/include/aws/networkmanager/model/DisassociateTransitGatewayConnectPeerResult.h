﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociation.h>
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
namespace NetworkManager
{
namespace Model
{
  class DisassociateTransitGatewayConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerResult();
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline const TransitGatewayConnectPeerAssociation& GetTransitGatewayConnectPeerAssociation() const{ return m_transitGatewayConnectPeerAssociation; }
    inline void SetTransitGatewayConnectPeerAssociation(const TransitGatewayConnectPeerAssociation& value) { m_transitGatewayConnectPeerAssociation = value; }
    inline void SetTransitGatewayConnectPeerAssociation(TransitGatewayConnectPeerAssociation&& value) { m_transitGatewayConnectPeerAssociation = std::move(value); }
    inline DisassociateTransitGatewayConnectPeerResult& WithTransitGatewayConnectPeerAssociation(const TransitGatewayConnectPeerAssociation& value) { SetTransitGatewayConnectPeerAssociation(value); return *this;}
    inline DisassociateTransitGatewayConnectPeerResult& WithTransitGatewayConnectPeerAssociation(TransitGatewayConnectPeerAssociation&& value) { SetTransitGatewayConnectPeerAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateTransitGatewayConnectPeerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateTransitGatewayConnectPeerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateTransitGatewayConnectPeerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TransitGatewayConnectPeerAssociation m_transitGatewayConnectPeerAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
