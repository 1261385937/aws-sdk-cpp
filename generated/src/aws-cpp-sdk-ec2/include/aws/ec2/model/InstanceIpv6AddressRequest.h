﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes an IPv6 address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceIpv6AddressRequest">AWS
   * API Reference</a></p>
   */
  class InstanceIpv6AddressRequest
  {
  public:
    AWS_EC2_API InstanceIpv6AddressRequest();
    AWS_EC2_API InstanceIpv6AddressRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceIpv6AddressRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv6 address.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }
    inline InstanceIpv6AddressRequest& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}
    inline InstanceIpv6AddressRequest& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}
    inline InstanceIpv6AddressRequest& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}
    ///@}
  private:

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
