﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AttachmentStatus.h>
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
   * <p>Describes the attachment of a VPC to an internet gateway or an egress-only
   * internet gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InternetGatewayAttachment">AWS
   * API Reference</a></p>
   */
  class InternetGatewayAttachment
  {
  public:
    AWS_EC2_API InternetGatewayAttachment();
    AWS_EC2_API InternetGatewayAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InternetGatewayAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current state of the attachment. For an internet gateway, the state is
     * <code>available</code> when attached to a VPC; otherwise, this value is not
     * returned.</p>
     */
    inline const AttachmentStatus& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AttachmentStatus& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AttachmentStatus&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InternetGatewayAttachment& WithState(const AttachmentStatus& value) { SetState(value); return *this;}
    inline InternetGatewayAttachment& WithState(AttachmentStatus&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline InternetGatewayAttachment& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline InternetGatewayAttachment& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline InternetGatewayAttachment& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    AttachmentStatus m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
