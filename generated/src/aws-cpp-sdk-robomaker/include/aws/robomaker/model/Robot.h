﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/RobotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/Architecture.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a robot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Robot">AWS API
   * Reference</a></p>
   */
  class Robot
  {
  public:
    AWS_ROBOMAKER_API Robot();
    AWS_ROBOMAKER_API Robot(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Robot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Robot& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Robot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Robot& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the robot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Robot& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Robot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Robot& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline Robot& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline Robot& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline Robot& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the robot.</p>
     */
    inline const RobotStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RobotStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RobotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Robot& WithStatus(const RobotStatus& value) { SetStatus(value); return *this;}
    inline Robot& WithStatus(RobotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline const Aws::String& GetGreenGrassGroupId() const{ return m_greenGrassGroupId; }
    inline bool GreenGrassGroupIdHasBeenSet() const { return m_greenGrassGroupIdHasBeenSet; }
    inline void SetGreenGrassGroupId(const Aws::String& value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId = value; }
    inline void SetGreenGrassGroupId(Aws::String&& value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId = std::move(value); }
    inline void SetGreenGrassGroupId(const char* value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId.assign(value); }
    inline Robot& WithGreenGrassGroupId(const Aws::String& value) { SetGreenGrassGroupId(value); return *this;}
    inline Robot& WithGreenGrassGroupId(Aws::String&& value) { SetGreenGrassGroupId(std::move(value)); return *this;}
    inline Robot& WithGreenGrassGroupId(const char* value) { SetGreenGrassGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Robot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Robot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the robot.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline Robot& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}
    inline Robot& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline const Aws::String& GetLastDeploymentJob() const{ return m_lastDeploymentJob; }
    inline bool LastDeploymentJobHasBeenSet() const { return m_lastDeploymentJobHasBeenSet; }
    inline void SetLastDeploymentJob(const Aws::String& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = value; }
    inline void SetLastDeploymentJob(Aws::String&& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = std::move(value); }
    inline void SetLastDeploymentJob(const char* value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob.assign(value); }
    inline Robot& WithLastDeploymentJob(const Aws::String& value) { SetLastDeploymentJob(value); return *this;}
    inline Robot& WithLastDeploymentJob(Aws::String&& value) { SetLastDeploymentJob(std::move(value)); return *this;}
    inline Robot& WithLastDeploymentJob(const char* value) { SetLastDeploymentJob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const{ return m_lastDeploymentTime; }
    inline bool LastDeploymentTimeHasBeenSet() const { return m_lastDeploymentTimeHasBeenSet; }
    inline void SetLastDeploymentTime(const Aws::Utils::DateTime& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = value; }
    inline void SetLastDeploymentTime(Aws::Utils::DateTime&& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = std::move(value); }
    inline Robot& WithLastDeploymentTime(const Aws::Utils::DateTime& value) { SetLastDeploymentTime(value); return *this;}
    inline Robot& WithLastDeploymentTime(Aws::Utils::DateTime&& value) { SetLastDeploymentTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    RobotStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_greenGrassGroupId;
    bool m_greenGrassGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_lastDeploymentJob;
    bool m_lastDeploymentJobHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentTime;
    bool m_lastDeploymentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
