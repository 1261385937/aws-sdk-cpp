﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/PromoteMode.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   * <p>Promotes a data replication replica broker to the primary broker
   * role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/PromoteRequest">AWS
   * API Reference</a></p>
   */
  class PromoteRequest : public MQRequest
  {
  public:
    AWS_MQ_API PromoteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Promote"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }
    inline PromoteRequest& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}
    inline PromoteRequest& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}
    inline PromoteRequest& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Promote mode requested. Note: Valid values for the parameter are
     * SWITCHOVER, FAILOVER.</p>
     */
    inline const PromoteMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const PromoteMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(PromoteMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline PromoteRequest& WithMode(const PromoteMode& value) { SetMode(value); return *this;}
    inline PromoteRequest& WithMode(PromoteMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    PromoteMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
