﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Specifies the method and snapshot to use when restarting an application using
   * previously saved application state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationRestoreConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationRestoreConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration();
    AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationRestoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how the application should be restored.</p>
     */
    inline const ApplicationRestoreType& GetApplicationRestoreType() const{ return m_applicationRestoreType; }
    inline bool ApplicationRestoreTypeHasBeenSet() const { return m_applicationRestoreTypeHasBeenSet; }
    inline void SetApplicationRestoreType(const ApplicationRestoreType& value) { m_applicationRestoreTypeHasBeenSet = true; m_applicationRestoreType = value; }
    inline void SetApplicationRestoreType(ApplicationRestoreType&& value) { m_applicationRestoreTypeHasBeenSet = true; m_applicationRestoreType = std::move(value); }
    inline ApplicationRestoreConfiguration& WithApplicationRestoreType(const ApplicationRestoreType& value) { SetApplicationRestoreType(value); return *this;}
    inline ApplicationRestoreConfiguration& WithApplicationRestoreType(ApplicationRestoreType&& value) { SetApplicationRestoreType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an existing snapshot of application state to use to restart
     * an application. The application uses this value if
     * <code>RESTORE_FROM_CUSTOM_SNAPSHOT</code> is specified for the
     * <code>ApplicationRestoreType</code>.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline ApplicationRestoreConfiguration& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline ApplicationRestoreConfiguration& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline ApplicationRestoreConfiguration& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
    ///@}
  private:

    ApplicationRestoreType m_applicationRestoreType;
    bool m_applicationRestoreTypeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
