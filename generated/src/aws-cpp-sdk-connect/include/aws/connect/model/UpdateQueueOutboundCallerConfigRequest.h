﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/OutboundCallerConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateQueueOutboundCallerConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateQueueOutboundCallerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueOutboundCallerConfig"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateQueueOutboundCallerConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateQueueOutboundCallerConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateQueueOutboundCallerConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the queue.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline UpdateQueueOutboundCallerConfigRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline UpdateQueueOutboundCallerConfigRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline UpdateQueueOutboundCallerConfigRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline const OutboundCallerConfig& GetOutboundCallerConfig() const{ return m_outboundCallerConfig; }
    inline bool OutboundCallerConfigHasBeenSet() const { return m_outboundCallerConfigHasBeenSet; }
    inline void SetOutboundCallerConfig(const OutboundCallerConfig& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = value; }
    inline void SetOutboundCallerConfig(OutboundCallerConfig&& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = std::move(value); }
    inline UpdateQueueOutboundCallerConfigRequest& WithOutboundCallerConfig(const OutboundCallerConfig& value) { SetOutboundCallerConfig(value); return *this;}
    inline UpdateQueueOutboundCallerConfigRequest& WithOutboundCallerConfig(OutboundCallerConfig&& value) { SetOutboundCallerConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    OutboundCallerConfig m_outboundCallerConfig;
    bool m_outboundCallerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
