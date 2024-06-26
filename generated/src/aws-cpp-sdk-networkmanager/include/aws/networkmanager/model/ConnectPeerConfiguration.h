﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/TunnelProtocol.h>
#include <aws/networkmanager/model/ConnectPeerBgpConfiguration.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network Connect peer configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectPeerConfiguration
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerConfiguration();
    AWS_NETWORKMANAGER_API ConnectPeerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkAddress() const{ return m_coreNetworkAddress; }
    inline bool CoreNetworkAddressHasBeenSet() const { return m_coreNetworkAddressHasBeenSet; }
    inline void SetCoreNetworkAddress(const Aws::String& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = value; }
    inline void SetCoreNetworkAddress(Aws::String&& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = std::move(value); }
    inline void SetCoreNetworkAddress(const char* value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress.assign(value); }
    inline ConnectPeerConfiguration& WithCoreNetworkAddress(const Aws::String& value) { SetCoreNetworkAddress(value); return *this;}
    inline ConnectPeerConfiguration& WithCoreNetworkAddress(Aws::String&& value) { SetCoreNetworkAddress(std::move(value)); return *this;}
    inline ConnectPeerConfiguration& WithCoreNetworkAddress(const char* value) { SetCoreNetworkAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the Connect peer.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }
    inline ConnectPeerConfiguration& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}
    inline ConnectPeerConfiguration& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}
    inline ConnectPeerConfiguration& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inside IP addresses used for a Connect peer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }
    inline ConnectPeerConfiguration& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}
    inline ConnectPeerConfiguration& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}
    inline ConnectPeerConfiguration& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    inline ConnectPeerConfiguration& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }
    inline ConnectPeerConfiguration& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol used for a Connect peer configuration.</p>
     */
    inline const TunnelProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const TunnelProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(TunnelProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline ConnectPeerConfiguration& WithProtocol(const TunnelProtocol& value) { SetProtocol(value); return *this;}
    inline ConnectPeerConfiguration& WithProtocol(TunnelProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer BGP configurations.</p>
     */
    inline const Aws::Vector<ConnectPeerBgpConfiguration>& GetBgpConfigurations() const{ return m_bgpConfigurations; }
    inline bool BgpConfigurationsHasBeenSet() const { return m_bgpConfigurationsHasBeenSet; }
    inline void SetBgpConfigurations(const Aws::Vector<ConnectPeerBgpConfiguration>& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations = value; }
    inline void SetBgpConfigurations(Aws::Vector<ConnectPeerBgpConfiguration>&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations = std::move(value); }
    inline ConnectPeerConfiguration& WithBgpConfigurations(const Aws::Vector<ConnectPeerBgpConfiguration>& value) { SetBgpConfigurations(value); return *this;}
    inline ConnectPeerConfiguration& WithBgpConfigurations(Aws::Vector<ConnectPeerBgpConfiguration>&& value) { SetBgpConfigurations(std::move(value)); return *this;}
    inline ConnectPeerConfiguration& AddBgpConfigurations(const ConnectPeerBgpConfiguration& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations.push_back(value); return *this; }
    inline ConnectPeerConfiguration& AddBgpConfigurations(ConnectPeerBgpConfiguration&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_coreNetworkAddress;
    bool m_coreNetworkAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    TunnelProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::Vector<ConnectPeerBgpConfiguration> m_bgpConfigurations;
    bool m_bgpConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
