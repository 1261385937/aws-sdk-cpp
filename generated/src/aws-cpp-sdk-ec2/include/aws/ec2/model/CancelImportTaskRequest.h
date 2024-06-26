﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CancelImportTaskRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelImportTask"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The reason for canceling the task.</p>
     */
    inline const Aws::String& GetCancelReason() const{ return m_cancelReason; }
    inline bool CancelReasonHasBeenSet() const { return m_cancelReasonHasBeenSet; }
    inline void SetCancelReason(const Aws::String& value) { m_cancelReasonHasBeenSet = true; m_cancelReason = value; }
    inline void SetCancelReason(Aws::String&& value) { m_cancelReasonHasBeenSet = true; m_cancelReason = std::move(value); }
    inline void SetCancelReason(const char* value) { m_cancelReasonHasBeenSet = true; m_cancelReason.assign(value); }
    inline CancelImportTaskRequest& WithCancelReason(const Aws::String& value) { SetCancelReason(value); return *this;}
    inline CancelImportTaskRequest& WithCancelReason(Aws::String&& value) { SetCancelReason(std::move(value)); return *this;}
    inline CancelImportTaskRequest& WithCancelReason(const char* value) { SetCancelReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CancelImportTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the import image or import snapshot task to be canceled.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }
    inline CancelImportTaskRequest& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}
    inline CancelImportTaskRequest& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}
    inline CancelImportTaskRequest& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}
    ///@}
  private:

    Aws::String m_cancelReason;
    bool m_cancelReasonHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
