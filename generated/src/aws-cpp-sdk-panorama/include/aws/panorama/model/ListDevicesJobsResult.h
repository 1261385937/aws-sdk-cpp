﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceJob.h>
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
namespace Panorama
{
namespace Model
{
  class ListDevicesJobsResult
  {
  public:
    AWS_PANORAMA_API ListDevicesJobsResult();
    AWS_PANORAMA_API ListDevicesJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListDevicesJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<DeviceJob>& GetDeviceJobs() const{ return m_deviceJobs; }
    inline void SetDeviceJobs(const Aws::Vector<DeviceJob>& value) { m_deviceJobs = value; }
    inline void SetDeviceJobs(Aws::Vector<DeviceJob>&& value) { m_deviceJobs = std::move(value); }
    inline ListDevicesJobsResult& WithDeviceJobs(const Aws::Vector<DeviceJob>& value) { SetDeviceJobs(value); return *this;}
    inline ListDevicesJobsResult& WithDeviceJobs(Aws::Vector<DeviceJob>&& value) { SetDeviceJobs(std::move(value)); return *this;}
    inline ListDevicesJobsResult& AddDeviceJobs(const DeviceJob& value) { m_deviceJobs.push_back(value); return *this; }
    inline ListDevicesJobsResult& AddDeviceJobs(DeviceJob&& value) { m_deviceJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDevicesJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDevicesJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDevicesJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDevicesJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDevicesJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDevicesJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceJob> m_deviceJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
