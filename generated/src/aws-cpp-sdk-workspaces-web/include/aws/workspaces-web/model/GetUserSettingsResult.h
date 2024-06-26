﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/UserSettings.h>
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
  class GetUserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetUserSettingsResult();
    AWS_WORKSPACESWEB_API GetUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user settings.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }
    inline void SetUserSettings(const UserSettings& value) { m_userSettings = value; }
    inline void SetUserSettings(UserSettings&& value) { m_userSettings = std::move(value); }
    inline GetUserSettingsResult& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}
    inline GetUserSettingsResult& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUserSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUserSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUserSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UserSettings m_userSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
