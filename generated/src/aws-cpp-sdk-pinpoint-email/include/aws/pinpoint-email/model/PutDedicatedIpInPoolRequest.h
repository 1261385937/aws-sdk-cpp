﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to move a dedicated IP address to a dedicated IP
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutDedicatedIpInPoolRequest">AWS
   * API Reference</a></p>
   */
  class PutDedicatedIpInPoolRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutDedicatedIpInPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDedicatedIpInPool"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IP address that you want to move to the dedicated IP pool. The value you
     * specify has to be a dedicated IP address that's associated with your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }
    inline PutDedicatedIpInPoolRequest& WithIp(const Aws::String& value) { SetIp(value); return *this;}
    inline PutDedicatedIpInPoolRequest& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}
    inline PutDedicatedIpInPoolRequest& WithIp(const char* value) { SetIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IP pool that you want to add the dedicated IP address to. You
     * have to specify an IP pool that already exists.</p>
     */
    inline const Aws::String& GetDestinationPoolName() const{ return m_destinationPoolName; }
    inline bool DestinationPoolNameHasBeenSet() const { return m_destinationPoolNameHasBeenSet; }
    inline void SetDestinationPoolName(const Aws::String& value) { m_destinationPoolNameHasBeenSet = true; m_destinationPoolName = value; }
    inline void SetDestinationPoolName(Aws::String&& value) { m_destinationPoolNameHasBeenSet = true; m_destinationPoolName = std::move(value); }
    inline void SetDestinationPoolName(const char* value) { m_destinationPoolNameHasBeenSet = true; m_destinationPoolName.assign(value); }
    inline PutDedicatedIpInPoolRequest& WithDestinationPoolName(const Aws::String& value) { SetDestinationPoolName(value); return *this;}
    inline PutDedicatedIpInPoolRequest& WithDestinationPoolName(Aws::String&& value) { SetDestinationPoolName(std::move(value)); return *this;}
    inline PutDedicatedIpInPoolRequest& WithDestinationPoolName(const char* value) { SetDestinationPoolName(value); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_destinationPoolName;
    bool m_destinationPoolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
