﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardVersion.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Dashboard">AWS
   * API Reference</a></p>
   */
  class Dashboard
  {
  public:
    AWS_QUICKSIGHT_API Dashboard();
    AWS_QUICKSIGHT_API Dashboard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Dashboard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dashboard ID.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline Dashboard& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline Dashboard& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline Dashboard& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Dashboard& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Dashboard& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Dashboard& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Dashboard& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Dashboard& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Dashboard& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version.</p>
     */
    inline const DashboardVersion& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const DashboardVersion& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(DashboardVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline Dashboard& WithVersion(const DashboardVersion& value) { SetVersion(value); return *this;}
    inline Dashboard& WithVersion(DashboardVersion&& value) { SetVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dashboard was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Dashboard& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Dashboard& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dashboard was published.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPublishedTime() const{ return m_lastPublishedTime; }
    inline bool LastPublishedTimeHasBeenSet() const { return m_lastPublishedTimeHasBeenSet; }
    inline void SetLastPublishedTime(const Aws::Utils::DateTime& value) { m_lastPublishedTimeHasBeenSet = true; m_lastPublishedTime = value; }
    inline void SetLastPublishedTime(Aws::Utils::DateTime&& value) { m_lastPublishedTimeHasBeenSet = true; m_lastPublishedTime = std::move(value); }
    inline Dashboard& WithLastPublishedTime(const Aws::Utils::DateTime& value) { SetLastPublishedTime(value); return *this;}
    inline Dashboard& WithLastPublishedTime(Aws::Utils::DateTime&& value) { SetLastPublishedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that this dashboard was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline Dashboard& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline Dashboard& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkEntities() const{ return m_linkEntities; }
    inline bool LinkEntitiesHasBeenSet() const { return m_linkEntitiesHasBeenSet; }
    inline void SetLinkEntities(const Aws::Vector<Aws::String>& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = value; }
    inline void SetLinkEntities(Aws::Vector<Aws::String>&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = std::move(value); }
    inline Dashboard& WithLinkEntities(const Aws::Vector<Aws::String>& value) { SetLinkEntities(value); return *this;}
    inline Dashboard& WithLinkEntities(Aws::Vector<Aws::String>&& value) { SetLinkEntities(std::move(value)); return *this;}
    inline Dashboard& AddLinkEntities(const Aws::String& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.push_back(value); return *this; }
    inline Dashboard& AddLinkEntities(Aws::String&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.push_back(std::move(value)); return *this; }
    inline Dashboard& AddLinkEntities(const char* value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DashboardVersion m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastPublishedTime;
    bool m_lastPublishedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkEntities;
    bool m_linkEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
