﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DescribeAccountAssignmentCreationStatusRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountAssignmentCreationStatus"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier that is used to track the request operation progress.</p>
     */
    inline const Aws::String& GetAccountAssignmentCreationRequestId() const{ return m_accountAssignmentCreationRequestId; }
    inline bool AccountAssignmentCreationRequestIdHasBeenSet() const { return m_accountAssignmentCreationRequestIdHasBeenSet; }
    inline void SetAccountAssignmentCreationRequestId(const Aws::String& value) { m_accountAssignmentCreationRequestIdHasBeenSet = true; m_accountAssignmentCreationRequestId = value; }
    inline void SetAccountAssignmentCreationRequestId(Aws::String&& value) { m_accountAssignmentCreationRequestIdHasBeenSet = true; m_accountAssignmentCreationRequestId = std::move(value); }
    inline void SetAccountAssignmentCreationRequestId(const char* value) { m_accountAssignmentCreationRequestIdHasBeenSet = true; m_accountAssignmentCreationRequestId.assign(value); }
    inline DescribeAccountAssignmentCreationStatusRequest& WithAccountAssignmentCreationRequestId(const Aws::String& value) { SetAccountAssignmentCreationRequestId(value); return *this;}
    inline DescribeAccountAssignmentCreationStatusRequest& WithAccountAssignmentCreationRequestId(Aws::String&& value) { SetAccountAssignmentCreationRequestId(std::move(value)); return *this;}
    inline DescribeAccountAssignmentCreationStatusRequest& WithAccountAssignmentCreationRequestId(const char* value) { SetAccountAssignmentCreationRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline DescribeAccountAssignmentCreationStatusRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline DescribeAccountAssignmentCreationStatusRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline DescribeAccountAssignmentCreationStatusRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_accountAssignmentCreationRequestId;
    bool m_accountAssignmentCreationRequestIdHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
