﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DomainInformation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/InboundCrossClusterSearchConnectionStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies details of an inbound connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/InboundCrossClusterSearchConnection">AWS
   * API Reference</a></p>
   */
  class InboundCrossClusterSearchConnection
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnection();
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the source
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetSourceDomainInfo() const{ return m_sourceDomainInfo; }
    inline bool SourceDomainInfoHasBeenSet() const { return m_sourceDomainInfoHasBeenSet; }
    inline void SetSourceDomainInfo(const DomainInformation& value) { m_sourceDomainInfoHasBeenSet = true; m_sourceDomainInfo = value; }
    inline void SetSourceDomainInfo(DomainInformation&& value) { m_sourceDomainInfoHasBeenSet = true; m_sourceDomainInfo = std::move(value); }
    inline InboundCrossClusterSearchConnection& WithSourceDomainInfo(const DomainInformation& value) { SetSourceDomainInfo(value); return *this;}
    inline InboundCrossClusterSearchConnection& WithSourceDomainInfo(DomainInformation&& value) { SetSourceDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>DomainInformation</a></code> for the destination
     * Elasticsearch domain.</p>
     */
    inline const DomainInformation& GetDestinationDomainInfo() const{ return m_destinationDomainInfo; }
    inline bool DestinationDomainInfoHasBeenSet() const { return m_destinationDomainInfoHasBeenSet; }
    inline void SetDestinationDomainInfo(const DomainInformation& value) { m_destinationDomainInfoHasBeenSet = true; m_destinationDomainInfo = value; }
    inline void SetDestinationDomainInfo(DomainInformation&& value) { m_destinationDomainInfoHasBeenSet = true; m_destinationDomainInfo = std::move(value); }
    inline InboundCrossClusterSearchConnection& WithDestinationDomainInfo(const DomainInformation& value) { SetDestinationDomainInfo(value); return *this;}
    inline InboundCrossClusterSearchConnection& WithDestinationDomainInfo(DomainInformation&& value) { SetDestinationDomainInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the connection id for the inbound cross-cluster search
     * connection.</p>
     */
    inline const Aws::String& GetCrossClusterSearchConnectionId() const{ return m_crossClusterSearchConnectionId; }
    inline bool CrossClusterSearchConnectionIdHasBeenSet() const { return m_crossClusterSearchConnectionIdHasBeenSet; }
    inline void SetCrossClusterSearchConnectionId(const Aws::String& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = value; }
    inline void SetCrossClusterSearchConnectionId(Aws::String&& value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId = std::move(value); }
    inline void SetCrossClusterSearchConnectionId(const char* value) { m_crossClusterSearchConnectionIdHasBeenSet = true; m_crossClusterSearchConnectionId.assign(value); }
    inline InboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(const Aws::String& value) { SetCrossClusterSearchConnectionId(value); return *this;}
    inline InboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(Aws::String&& value) { SetCrossClusterSearchConnectionId(std::move(value)); return *this;}
    inline InboundCrossClusterSearchConnection& WithCrossClusterSearchConnectionId(const char* value) { SetCrossClusterSearchConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnectionStatus</a></code>
     * for the outbound connection.</p>
     */
    inline const InboundCrossClusterSearchConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(const InboundCrossClusterSearchConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline void SetConnectionStatus(InboundCrossClusterSearchConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }
    inline InboundCrossClusterSearchConnection& WithConnectionStatus(const InboundCrossClusterSearchConnectionStatus& value) { SetConnectionStatus(value); return *this;}
    inline InboundCrossClusterSearchConnection& WithConnectionStatus(InboundCrossClusterSearchConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}
  private:

    DomainInformation m_sourceDomainInfo;
    bool m_sourceDomainInfoHasBeenSet = false;

    DomainInformation m_destinationDomainInfo;
    bool m_destinationDomainInfoHasBeenSet = false;

    Aws::String m_crossClusterSearchConnectionId;
    bool m_crossClusterSearchConnectionIdHasBeenSet = false;

    InboundCrossClusterSearchConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
