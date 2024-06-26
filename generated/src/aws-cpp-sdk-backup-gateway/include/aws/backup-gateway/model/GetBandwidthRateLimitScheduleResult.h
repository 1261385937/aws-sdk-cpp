﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/BandwidthRateLimitInterval.h>
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
namespace BackupGateway
{
namespace Model
{
  class GetBandwidthRateLimitScheduleResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetBandwidthRateLimitScheduleResult();
    AWS_BACKUPGATEWAY_API GetBandwidthRateLimitScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetBandwidthRateLimitScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is
     * empty.</p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const{ return m_bandwidthRateLimitIntervals; }
    inline void SetBandwidthRateLimitIntervals(const Aws::Vector<BandwidthRateLimitInterval>& value) { m_bandwidthRateLimitIntervals = value; }
    inline void SetBandwidthRateLimitIntervals(Aws::Vector<BandwidthRateLimitInterval>&& value) { m_bandwidthRateLimitIntervals = std::move(value); }
    inline GetBandwidthRateLimitScheduleResult& WithBandwidthRateLimitIntervals(const Aws::Vector<BandwidthRateLimitInterval>& value) { SetBandwidthRateLimitIntervals(value); return *this;}
    inline GetBandwidthRateLimitScheduleResult& WithBandwidthRateLimitIntervals(Aws::Vector<BandwidthRateLimitInterval>&& value) { SetBandwidthRateLimitIntervals(std::move(value)); return *this;}
    inline GetBandwidthRateLimitScheduleResult& AddBandwidthRateLimitIntervals(const BandwidthRateLimitInterval& value) { m_bandwidthRateLimitIntervals.push_back(value); return *this; }
    inline GetBandwidthRateLimitScheduleResult& AddBandwidthRateLimitIntervals(BandwidthRateLimitInterval&& value) { m_bandwidthRateLimitIntervals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BGW_ListGateways.html">
     * <code>ListGateways</code> </a> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArn.assign(value); }
    inline GetBandwidthRateLimitScheduleResult& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline GetBandwidthRateLimitScheduleResult& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline GetBandwidthRateLimitScheduleResult& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBandwidthRateLimitScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBandwidthRateLimitScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBandwidthRateLimitScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;

    Aws::String m_gatewayArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
