﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EdgeModel.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeDeviceResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDeviceResult();
    AWS_SAGEMAKER_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }
    inline DescribeDeviceResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}
    inline DescribeDeviceResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceName.assign(value); }
    inline DescribeDeviceResult& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline DescribeDeviceResult& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeDeviceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeDeviceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetName.assign(value); }
    inline DescribeDeviceResult& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline DescribeDeviceResult& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device.</p>
     */
    inline const Aws::String& GetIotThingName() const{ return m_iotThingName; }
    inline void SetIotThingName(const Aws::String& value) { m_iotThingName = value; }
    inline void SetIotThingName(Aws::String&& value) { m_iotThingName = std::move(value); }
    inline void SetIotThingName(const char* value) { m_iotThingName.assign(value); }
    inline DescribeDeviceResult& WithIotThingName(const Aws::String& value) { SetIotThingName(value); return *this;}
    inline DescribeDeviceResult& WithIotThingName(Aws::String&& value) { SetIotThingName(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithIotThingName(const char* value) { SetIotThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const{ return m_registrationTime; }
    inline void SetRegistrationTime(const Aws::Utils::DateTime& value) { m_registrationTime = value; }
    inline void SetRegistrationTime(Aws::Utils::DateTime&& value) { m_registrationTime = std::move(value); }
    inline DescribeDeviceResult& WithRegistrationTime(const Aws::Utils::DateTime& value) { SetRegistrationTime(value); return *this;}
    inline DescribeDeviceResult& WithRegistrationTime(Aws::Utils::DateTime&& value) { SetRegistrationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestHeartbeat() const{ return m_latestHeartbeat; }
    inline void SetLatestHeartbeat(const Aws::Utils::DateTime& value) { m_latestHeartbeat = value; }
    inline void SetLatestHeartbeat(Aws::Utils::DateTime&& value) { m_latestHeartbeat = std::move(value); }
    inline DescribeDeviceResult& WithLatestHeartbeat(const Aws::Utils::DateTime& value) { SetLatestHeartbeat(value); return *this;}
    inline DescribeDeviceResult& WithLatestHeartbeat(Aws::Utils::DateTime&& value) { SetLatestHeartbeat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Models on the device.</p>
     */
    inline const Aws::Vector<EdgeModel>& GetModels() const{ return m_models; }
    inline void SetModels(const Aws::Vector<EdgeModel>& value) { m_models = value; }
    inline void SetModels(Aws::Vector<EdgeModel>&& value) { m_models = std::move(value); }
    inline DescribeDeviceResult& WithModels(const Aws::Vector<EdgeModel>& value) { SetModels(value); return *this;}
    inline DescribeDeviceResult& WithModels(Aws::Vector<EdgeModel>&& value) { SetModels(std::move(value)); return *this;}
    inline DescribeDeviceResult& AddModels(const EdgeModel& value) { m_models.push_back(value); return *this; }
    inline DescribeDeviceResult& AddModels(EdgeModel&& value) { m_models.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of models.</p>
     */
    inline int GetMaxModels() const{ return m_maxModels; }
    inline void SetMaxModels(int value) { m_maxModels = value; }
    inline DescribeDeviceResult& WithMaxModels(int value) { SetMaxModels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDeviceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDeviceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Edge Manager agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersion.assign(value); }
    inline DescribeDeviceResult& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline DescribeDeviceResult& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceArn;

    Aws::String m_deviceName;

    Aws::String m_description;

    Aws::String m_deviceFleetName;

    Aws::String m_iotThingName;

    Aws::Utils::DateTime m_registrationTime;

    Aws::Utils::DateTime m_latestHeartbeat;

    Aws::Vector<EdgeModel> m_models;

    int m_maxModels;

    Aws::String m_nextToken;

    Aws::String m_agentVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
