﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a packet header statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PacketHeaderStatementRequest">AWS
   * API Reference</a></p>
   */
  class PacketHeaderStatementRequest
  {
  public:
    AWS_EC2_API PacketHeaderStatementRequest();
    AWS_EC2_API PacketHeaderStatementRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PacketHeaderStatementRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAddresses() const{ return m_sourceAddresses; }
    inline bool SourceAddressesHasBeenSet() const { return m_sourceAddressesHasBeenSet; }
    inline void SetSourceAddresses(const Aws::Vector<Aws::String>& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses = value; }
    inline void SetSourceAddresses(Aws::Vector<Aws::String>&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses = std::move(value); }
    inline PacketHeaderStatementRequest& WithSourceAddresses(const Aws::Vector<Aws::String>& value) { SetSourceAddresses(value); return *this;}
    inline PacketHeaderStatementRequest& WithSourceAddresses(Aws::Vector<Aws::String>&& value) { SetSourceAddresses(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddSourceAddresses(const Aws::String& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddSourceAddresses(Aws::String&& value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.push_back(std::move(value)); return *this; }
    inline PacketHeaderStatementRequest& AddSourceAddresses(const char* value) { m_sourceAddressesHasBeenSet = true; m_sourceAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationAddresses() const{ return m_destinationAddresses; }
    inline bool DestinationAddressesHasBeenSet() const { return m_destinationAddressesHasBeenSet; }
    inline void SetDestinationAddresses(const Aws::Vector<Aws::String>& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = value; }
    inline void SetDestinationAddresses(Aws::Vector<Aws::String>&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses = std::move(value); }
    inline PacketHeaderStatementRequest& WithDestinationAddresses(const Aws::Vector<Aws::String>& value) { SetDestinationAddresses(value); return *this;}
    inline PacketHeaderStatementRequest& WithDestinationAddresses(Aws::Vector<Aws::String>&& value) { SetDestinationAddresses(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddDestinationAddresses(const Aws::String& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddDestinationAddresses(Aws::String&& value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(std::move(value)); return *this; }
    inline PacketHeaderStatementRequest& AddDestinationAddresses(const char* value) { m_destinationAddressesHasBeenSet = true; m_destinationAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source ports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourcePorts() const{ return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    inline void SetSourcePorts(const Aws::Vector<Aws::String>& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = value; }
    inline void SetSourcePorts(Aws::Vector<Aws::String>&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::move(value); }
    inline PacketHeaderStatementRequest& WithSourcePorts(const Aws::Vector<Aws::String>& value) { SetSourcePorts(value); return *this;}
    inline PacketHeaderStatementRequest& WithSourcePorts(Aws::Vector<Aws::String>&& value) { SetSourcePorts(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddSourcePorts(const Aws::String& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddSourcePorts(Aws::String&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(std::move(value)); return *this; }
    inline PacketHeaderStatementRequest& AddSourcePorts(const char* value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination ports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPorts() const{ return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    inline void SetDestinationPorts(const Aws::Vector<Aws::String>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }
    inline void SetDestinationPorts(Aws::Vector<Aws::String>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }
    inline PacketHeaderStatementRequest& WithDestinationPorts(const Aws::Vector<Aws::String>& value) { SetDestinationPorts(value); return *this;}
    inline PacketHeaderStatementRequest& WithDestinationPorts(Aws::Vector<Aws::String>&& value) { SetDestinationPorts(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddDestinationPorts(const Aws::String& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddDestinationPorts(Aws::String&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(std::move(value)); return *this; }
    inline PacketHeaderStatementRequest& AddDestinationPorts(const char* value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source prefix lists.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourcePrefixLists() const{ return m_sourcePrefixLists; }
    inline bool SourcePrefixListsHasBeenSet() const { return m_sourcePrefixListsHasBeenSet; }
    inline void SetSourcePrefixLists(const Aws::Vector<Aws::String>& value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists = value; }
    inline void SetSourcePrefixLists(Aws::Vector<Aws::String>&& value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists = std::move(value); }
    inline PacketHeaderStatementRequest& WithSourcePrefixLists(const Aws::Vector<Aws::String>& value) { SetSourcePrefixLists(value); return *this;}
    inline PacketHeaderStatementRequest& WithSourcePrefixLists(Aws::Vector<Aws::String>&& value) { SetSourcePrefixLists(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddSourcePrefixLists(const Aws::String& value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddSourcePrefixLists(Aws::String&& value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists.push_back(std::move(value)); return *this; }
    inline PacketHeaderStatementRequest& AddSourcePrefixLists(const char* value) { m_sourcePrefixListsHasBeenSet = true; m_sourcePrefixLists.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination prefix lists.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationPrefixLists() const{ return m_destinationPrefixLists; }
    inline bool DestinationPrefixListsHasBeenSet() const { return m_destinationPrefixListsHasBeenSet; }
    inline void SetDestinationPrefixLists(const Aws::Vector<Aws::String>& value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists = value; }
    inline void SetDestinationPrefixLists(Aws::Vector<Aws::String>&& value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists = std::move(value); }
    inline PacketHeaderStatementRequest& WithDestinationPrefixLists(const Aws::Vector<Aws::String>& value) { SetDestinationPrefixLists(value); return *this;}
    inline PacketHeaderStatementRequest& WithDestinationPrefixLists(Aws::Vector<Aws::String>&& value) { SetDestinationPrefixLists(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddDestinationPrefixLists(const Aws::String& value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddDestinationPrefixLists(Aws::String&& value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists.push_back(std::move(value)); return *this; }
    inline PacketHeaderStatementRequest& AddDestinationPrefixLists(const char* value) { m_destinationPrefixListsHasBeenSet = true; m_destinationPrefixLists.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline PacketHeaderStatementRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}
    inline PacketHeaderStatementRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}
    inline PacketHeaderStatementRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline PacketHeaderStatementRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_sourceAddresses;
    bool m_sourceAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationAddresses;
    bool m_destinationAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourcePorts;
    bool m_sourcePortsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourcePrefixLists;
    bool m_sourcePrefixListsHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinationPrefixLists;
    bool m_destinationPrefixListsHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
