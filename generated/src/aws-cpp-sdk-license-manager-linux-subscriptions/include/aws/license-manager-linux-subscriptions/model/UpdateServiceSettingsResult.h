﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscovery.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscoverySettings.h>
#include <aws/license-manager-linux-subscriptions/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{
  class UpdateServiceSettingsResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsResult();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API UpdateServiceSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Region in which License Manager displays the aggregated data for Linux
     * subscriptions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHomeRegions() const{ return m_homeRegions; }
    inline void SetHomeRegions(const Aws::Vector<Aws::String>& value) { m_homeRegions = value; }
    inline void SetHomeRegions(Aws::Vector<Aws::String>&& value) { m_homeRegions = std::move(value); }
    inline UpdateServiceSettingsResult& WithHomeRegions(const Aws::Vector<Aws::String>& value) { SetHomeRegions(value); return *this;}
    inline UpdateServiceSettingsResult& WithHomeRegions(Aws::Vector<Aws::String>&& value) { SetHomeRegions(std::move(value)); return *this;}
    inline UpdateServiceSettingsResult& AddHomeRegions(const Aws::String& value) { m_homeRegions.push_back(value); return *this; }
    inline UpdateServiceSettingsResult& AddHomeRegions(Aws::String&& value) { m_homeRegions.push_back(std::move(value)); return *this; }
    inline UpdateServiceSettingsResult& AddHomeRegions(const char* value) { m_homeRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists if discovery has been enabled for Linux subscriptions.</p>
     */
    inline const LinuxSubscriptionsDiscovery& GetLinuxSubscriptionsDiscovery() const{ return m_linuxSubscriptionsDiscovery; }
    inline void SetLinuxSubscriptionsDiscovery(const LinuxSubscriptionsDiscovery& value) { m_linuxSubscriptionsDiscovery = value; }
    inline void SetLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery&& value) { m_linuxSubscriptionsDiscovery = std::move(value); }
    inline UpdateServiceSettingsResult& WithLinuxSubscriptionsDiscovery(const LinuxSubscriptionsDiscovery& value) { SetLinuxSubscriptionsDiscovery(value); return *this;}
    inline UpdateServiceSettingsResult& WithLinuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery&& value) { SetLinuxSubscriptionsDiscovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings defined for Linux subscriptions discovery. The settings include
     * if Organizations integration has been enabled, and which Regions data will be
     * aggregated from.</p>
     */
    inline const LinuxSubscriptionsDiscoverySettings& GetLinuxSubscriptionsDiscoverySettings() const{ return m_linuxSubscriptionsDiscoverySettings; }
    inline void SetLinuxSubscriptionsDiscoverySettings(const LinuxSubscriptionsDiscoverySettings& value) { m_linuxSubscriptionsDiscoverySettings = value; }
    inline void SetLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettings&& value) { m_linuxSubscriptionsDiscoverySettings = std::move(value); }
    inline UpdateServiceSettingsResult& WithLinuxSubscriptionsDiscoverySettings(const LinuxSubscriptionsDiscoverySettings& value) { SetLinuxSubscriptionsDiscoverySettings(value); return *this;}
    inline UpdateServiceSettingsResult& WithLinuxSubscriptionsDiscoverySettings(LinuxSubscriptionsDiscoverySettings&& value) { SetLinuxSubscriptionsDiscoverySettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of Linux subscriptions settings being applied.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline UpdateServiceSettingsResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline UpdateServiceSettingsResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message which details the Linux subscriptions service settings current
     * status.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::Map<Aws::String, Aws::String>& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::Map<Aws::String, Aws::String>&& value) { m_statusMessage = std::move(value); }
    inline UpdateServiceSettingsResult& WithStatusMessage(const Aws::Map<Aws::String, Aws::String>& value) { SetStatusMessage(value); return *this;}
    inline UpdateServiceSettingsResult& WithStatusMessage(Aws::Map<Aws::String, Aws::String>&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline UpdateServiceSettingsResult& AddStatusMessage(const Aws::String& key, const Aws::String& value) { m_statusMessage.emplace(key, value); return *this; }
    inline UpdateServiceSettingsResult& AddStatusMessage(Aws::String&& key, const Aws::String& value) { m_statusMessage.emplace(std::move(key), value); return *this; }
    inline UpdateServiceSettingsResult& AddStatusMessage(const Aws::String& key, Aws::String&& value) { m_statusMessage.emplace(key, std::move(value)); return *this; }
    inline UpdateServiceSettingsResult& AddStatusMessage(Aws::String&& key, Aws::String&& value) { m_statusMessage.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateServiceSettingsResult& AddStatusMessage(const char* key, Aws::String&& value) { m_statusMessage.emplace(key, std::move(value)); return *this; }
    inline UpdateServiceSettingsResult& AddStatusMessage(Aws::String&& key, const char* value) { m_statusMessage.emplace(std::move(key), value); return *this; }
    inline UpdateServiceSettingsResult& AddStatusMessage(const char* key, const char* value) { m_statusMessage.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateServiceSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateServiceSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateServiceSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_homeRegions;

    LinuxSubscriptionsDiscovery m_linuxSubscriptionsDiscovery;

    LinuxSubscriptionsDiscoverySettings m_linuxSubscriptionsDiscoverySettings;

    Status m_status;

    Aws::Map<Aws::String, Aws::String> m_statusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
