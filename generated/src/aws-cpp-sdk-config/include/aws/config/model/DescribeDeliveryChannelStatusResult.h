﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/DeliveryChannelStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeDeliveryChannelStatus</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDeliveryChannelStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult();
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeDeliveryChannelStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the status of a specified delivery channel.</p>
     */
    inline const Aws::Vector<DeliveryChannelStatus>& GetDeliveryChannelsStatus() const{ return m_deliveryChannelsStatus; }
    inline void SetDeliveryChannelsStatus(const Aws::Vector<DeliveryChannelStatus>& value) { m_deliveryChannelsStatus = value; }
    inline void SetDeliveryChannelsStatus(Aws::Vector<DeliveryChannelStatus>&& value) { m_deliveryChannelsStatus = std::move(value); }
    inline DescribeDeliveryChannelStatusResult& WithDeliveryChannelsStatus(const Aws::Vector<DeliveryChannelStatus>& value) { SetDeliveryChannelsStatus(value); return *this;}
    inline DescribeDeliveryChannelStatusResult& WithDeliveryChannelsStatus(Aws::Vector<DeliveryChannelStatus>&& value) { SetDeliveryChannelsStatus(std::move(value)); return *this;}
    inline DescribeDeliveryChannelStatusResult& AddDeliveryChannelsStatus(const DeliveryChannelStatus& value) { m_deliveryChannelsStatus.push_back(value); return *this; }
    inline DescribeDeliveryChannelStatusResult& AddDeliveryChannelsStatus(DeliveryChannelStatus&& value) { m_deliveryChannelsStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDeliveryChannelStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDeliveryChannelStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDeliveryChannelStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeliveryChannelStatus> m_deliveryChannelsStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
