﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualNodeConnectionPool.h>
#include <aws/appmesh/model/HealthCheckPolicy.h>
#include <aws/appmesh/model/OutlierDetection.h>
#include <aws/appmesh/model/PortMapping.h>
#include <aws/appmesh/model/ListenerTimeout.h>
#include <aws/appmesh/model/ListenerTls.h>
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
   * <p>An object that represents a listener for a virtual node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_APPMESH_API Listener();
    AWS_APPMESH_API Listener(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Listener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection pool information for the listener.</p>
     */
    inline const VirtualNodeConnectionPool& GetConnectionPool() const{ return m_connectionPool; }
    inline bool ConnectionPoolHasBeenSet() const { return m_connectionPoolHasBeenSet; }
    inline void SetConnectionPool(const VirtualNodeConnectionPool& value) { m_connectionPoolHasBeenSet = true; m_connectionPool = value; }
    inline void SetConnectionPool(VirtualNodeConnectionPool&& value) { m_connectionPoolHasBeenSet = true; m_connectionPool = std::move(value); }
    inline Listener& WithConnectionPool(const VirtualNodeConnectionPool& value) { SetConnectionPool(value); return *this;}
    inline Listener& WithConnectionPool(VirtualNodeConnectionPool&& value) { SetConnectionPool(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health check information for the listener.</p>
     */
    inline const HealthCheckPolicy& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const HealthCheckPolicy& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(HealthCheckPolicy&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline Listener& WithHealthCheck(const HealthCheckPolicy& value) { SetHealthCheck(value); return *this;}
    inline Listener& WithHealthCheck(HealthCheckPolicy&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outlier detection information for the listener.</p>
     */
    inline const OutlierDetection& GetOutlierDetection() const{ return m_outlierDetection; }
    inline bool OutlierDetectionHasBeenSet() const { return m_outlierDetectionHasBeenSet; }
    inline void SetOutlierDetection(const OutlierDetection& value) { m_outlierDetectionHasBeenSet = true; m_outlierDetection = value; }
    inline void SetOutlierDetection(OutlierDetection&& value) { m_outlierDetectionHasBeenSet = true; m_outlierDetection = std::move(value); }
    inline Listener& WithOutlierDetection(const OutlierDetection& value) { SetOutlierDetection(value); return *this;}
    inline Listener& WithOutlierDetection(OutlierDetection&& value) { SetOutlierDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port mapping information for the listener.</p>
     */
    inline const PortMapping& GetPortMapping() const{ return m_portMapping; }
    inline bool PortMappingHasBeenSet() const { return m_portMappingHasBeenSet; }
    inline void SetPortMapping(const PortMapping& value) { m_portMappingHasBeenSet = true; m_portMapping = value; }
    inline void SetPortMapping(PortMapping&& value) { m_portMappingHasBeenSet = true; m_portMapping = std::move(value); }
    inline Listener& WithPortMapping(const PortMapping& value) { SetPortMapping(value); return *this;}
    inline Listener& WithPortMapping(PortMapping&& value) { SetPortMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents timeouts for different protocols.</p>
     */
    inline const ListenerTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const ListenerTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(ListenerTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline Listener& WithTimeout(const ListenerTimeout& value) { SetTimeout(value); return *this;}
    inline Listener& WithTimeout(ListenerTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents the Transport Layer Security (TLS)
     * properties for a listener.</p>
     */
    inline const ListenerTls& GetTls() const{ return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    inline void SetTls(const ListenerTls& value) { m_tlsHasBeenSet = true; m_tls = value; }
    inline void SetTls(ListenerTls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }
    inline Listener& WithTls(const ListenerTls& value) { SetTls(value); return *this;}
    inline Listener& WithTls(ListenerTls&& value) { SetTls(std::move(value)); return *this;}
    ///@}
  private:

    VirtualNodeConnectionPool m_connectionPool;
    bool m_connectionPoolHasBeenSet = false;

    HealthCheckPolicy m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    OutlierDetection m_outlierDetection;
    bool m_outlierDetectionHasBeenSet = false;

    PortMapping m_portMapping;
    bool m_portMappingHasBeenSet = false;

    ListenerTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;

    ListenerTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
