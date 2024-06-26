﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class AssociateNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateNetworkSettingsResult();
    AWS_WORKSPACESWEB_API AssociateNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the network settings.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const{ return m_networkSettingsArn; }
    inline void SetNetworkSettingsArn(const Aws::String& value) { m_networkSettingsArn = value; }
    inline void SetNetworkSettingsArn(Aws::String&& value) { m_networkSettingsArn = std::move(value); }
    inline void SetNetworkSettingsArn(const char* value) { m_networkSettingsArn.assign(value); }
    inline AssociateNetworkSettingsResult& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}
    inline AssociateNetworkSettingsResult& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}
    inline AssociateNetworkSettingsResult& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }
    inline AssociateNetworkSettingsResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}
    inline AssociateNetworkSettingsResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}
    inline AssociateNetworkSettingsResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateNetworkSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateNetworkSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateNetworkSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_networkSettingsArn;

    Aws::String m_portalArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
