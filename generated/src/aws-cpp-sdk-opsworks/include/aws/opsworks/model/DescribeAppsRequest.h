﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeAppsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApps"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The app stack ID. If you use this parameter, <code>DescribeApps</code>
     * returns a description of the apps in the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline DescribeAppsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DescribeAppsRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DescribeAppsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of app IDs for the apps to be described. If you use this parameter,
     * <code>DescribeApps</code> returns a description of the specified apps.
     * Otherwise, it returns a description of every app.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppIds() const{ return m_appIds; }
    inline bool AppIdsHasBeenSet() const { return m_appIdsHasBeenSet; }
    inline void SetAppIds(const Aws::Vector<Aws::String>& value) { m_appIdsHasBeenSet = true; m_appIds = value; }
    inline void SetAppIds(Aws::Vector<Aws::String>&& value) { m_appIdsHasBeenSet = true; m_appIds = std::move(value); }
    inline DescribeAppsRequest& WithAppIds(const Aws::Vector<Aws::String>& value) { SetAppIds(value); return *this;}
    inline DescribeAppsRequest& WithAppIds(Aws::Vector<Aws::String>&& value) { SetAppIds(std::move(value)); return *this;}
    inline DescribeAppsRequest& AddAppIds(const Aws::String& value) { m_appIdsHasBeenSet = true; m_appIds.push_back(value); return *this; }
    inline DescribeAppsRequest& AddAppIds(Aws::String&& value) { m_appIdsHasBeenSet = true; m_appIds.push_back(std::move(value)); return *this; }
    inline DescribeAppsRequest& AddAppIds(const char* value) { m_appIdsHasBeenSet = true; m_appIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_appIds;
    bool m_appIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
