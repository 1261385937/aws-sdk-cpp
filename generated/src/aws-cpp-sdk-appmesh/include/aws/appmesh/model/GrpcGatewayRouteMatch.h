﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteHostnameMatch.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/GrpcGatewayRouteMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the criteria for determining a request
   * match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcGatewayRouteMatch">AWS
   * API Reference</a></p>
   */
  class GrpcGatewayRouteMatch
  {
  public:
    AWS_APPMESH_API GrpcGatewayRouteMatch();
    AWS_APPMESH_API GrpcGatewayRouteMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcGatewayRouteMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The gateway route host name to be matched on.</p>
     */
    inline const GatewayRouteHostnameMatch& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const GatewayRouteHostnameMatch& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(GatewayRouteHostnameMatch&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline GrpcGatewayRouteMatch& WithHostname(const GatewayRouteHostnameMatch& value) { SetHostname(value); return *this;}
    inline GrpcGatewayRouteMatch& WithHostname(GatewayRouteHostnameMatch&& value) { SetHostname(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gateway route metadata to be matched on.</p>
     */
    inline const Aws::Vector<GrpcGatewayRouteMetadata>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Vector<GrpcGatewayRouteMetadata>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Vector<GrpcGatewayRouteMetadata>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline GrpcGatewayRouteMatch& WithMetadata(const Aws::Vector<GrpcGatewayRouteMetadata>& value) { SetMetadata(value); return *this;}
    inline GrpcGatewayRouteMatch& WithMetadata(Aws::Vector<GrpcGatewayRouteMetadata>&& value) { SetMetadata(std::move(value)); return *this;}
    inline GrpcGatewayRouteMatch& AddMetadata(const GrpcGatewayRouteMetadata& value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }
    inline GrpcGatewayRouteMatch& AddMetadata(GrpcGatewayRouteMetadata&& value) { m_metadataHasBeenSet = true; m_metadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The gateway route port to be matched on.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GrpcGatewayRouteMatch& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name for the service to match from the
     * request.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline GrpcGatewayRouteMatch& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline GrpcGatewayRouteMatch& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline GrpcGatewayRouteMatch& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}
  private:

    GatewayRouteHostnameMatch m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::Vector<GrpcGatewayRouteMetadata> m_metadata;
    bool m_metadataHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
