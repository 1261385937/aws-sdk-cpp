﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/RobotDeploymentStep.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about the progress of a deployment job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ProgressDetail">AWS
   * API Reference</a></p>
   */
  class ProgressDetail
  {
  public:
    AWS_ROBOMAKER_API ProgressDetail();
    AWS_ROBOMAKER_API ProgressDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API ProgressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current progress status.</p> <dl> <dt>Validating</dt> <dd> <p>Validating
     * the deployment.</p> </dd> <dt>DownloadingExtracting</dt> <dd> <p>Downloading and
     * extracting the bundle on the robot.</p> </dd> <dt>ExecutingPreLaunch</dt> <dd>
     * <p>Executing pre-launch script(s) if provided.</p> </dd> <dt>Launching</dt> <dd>
     * <p>Launching the robot application.</p> </dd> <dt>ExecutingPostLaunch</dt> <dd>
     * <p>Executing post-launch script(s) if provided.</p> </dd> <dt>Finished</dt> <dd>
     * <p>Deployment is complete.</p> </dd> </dl>
     */
    inline const RobotDeploymentStep& GetCurrentProgress() const{ return m_currentProgress; }
    inline bool CurrentProgressHasBeenSet() const { return m_currentProgressHasBeenSet; }
    inline void SetCurrentProgress(const RobotDeploymentStep& value) { m_currentProgressHasBeenSet = true; m_currentProgress = value; }
    inline void SetCurrentProgress(RobotDeploymentStep&& value) { m_currentProgressHasBeenSet = true; m_currentProgress = std::move(value); }
    inline ProgressDetail& WithCurrentProgress(const RobotDeploymentStep& value) { SetCurrentProgress(value); return *this;}
    inline ProgressDetail& WithCurrentProgress(RobotDeploymentStep&& value) { SetCurrentProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Precentage of the step that is done. This currently only applies to the
     * <code>Downloading/Extracting</code> step of the deployment. It is empty for
     * other steps.</p>
     */
    inline double GetPercentDone() const{ return m_percentDone; }
    inline bool PercentDoneHasBeenSet() const { return m_percentDoneHasBeenSet; }
    inline void SetPercentDone(double value) { m_percentDoneHasBeenSet = true; m_percentDone = value; }
    inline ProgressDetail& WithPercentDone(double value) { SetPercentDone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Estimated amount of time in seconds remaining in the step. This currently
     * only applies to the <code>Downloading/Extracting</code> step of the deployment.
     * It is empty for other steps.</p>
     */
    inline int GetEstimatedTimeRemainingSeconds() const{ return m_estimatedTimeRemainingSeconds; }
    inline bool EstimatedTimeRemainingSecondsHasBeenSet() const { return m_estimatedTimeRemainingSecondsHasBeenSet; }
    inline void SetEstimatedTimeRemainingSeconds(int value) { m_estimatedTimeRemainingSecondsHasBeenSet = true; m_estimatedTimeRemainingSeconds = value; }
    inline ProgressDetail& WithEstimatedTimeRemainingSeconds(int value) { SetEstimatedTimeRemainingSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deployment job.</p>
     */
    inline const Aws::String& GetTargetResource() const{ return m_targetResource; }
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }
    inline void SetTargetResource(const Aws::String& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }
    inline void SetTargetResource(Aws::String&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }
    inline void SetTargetResource(const char* value) { m_targetResourceHasBeenSet = true; m_targetResource.assign(value); }
    inline ProgressDetail& WithTargetResource(const Aws::String& value) { SetTargetResource(value); return *this;}
    inline ProgressDetail& WithTargetResource(Aws::String&& value) { SetTargetResource(std::move(value)); return *this;}
    inline ProgressDetail& WithTargetResource(const char* value) { SetTargetResource(value); return *this;}
    ///@}
  private:

    RobotDeploymentStep m_currentProgress;
    bool m_currentProgressHasBeenSet = false;

    double m_percentDone;
    bool m_percentDoneHasBeenSet = false;

    int m_estimatedTimeRemainingSeconds;
    bool m_estimatedTimeRemainingSecondsHasBeenSet = false;

    Aws::String m_targetResource;
    bool m_targetResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
