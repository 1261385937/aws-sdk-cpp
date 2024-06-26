﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/SnapshotAttributeName.h>
#include <aws/ec2/model/CreateVolumePermissionModifications.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/OperationType.h>
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
  class ModifySnapshotAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifySnapshotAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySnapshotAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The snapshot attribute to modify. Only volume creation permissions can be
     * modified.</p>
     */
    inline const SnapshotAttributeName& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const SnapshotAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(SnapshotAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline ModifySnapshotAttributeRequest& WithAttribute(const SnapshotAttributeName& value) { SetAttribute(value); return *this;}
    inline ModifySnapshotAttributeRequest& WithAttribute(SnapshotAttributeName&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline const CreateVolumePermissionModifications& GetCreateVolumePermission() const{ return m_createVolumePermission; }
    inline bool CreateVolumePermissionHasBeenSet() const { return m_createVolumePermissionHasBeenSet; }
    inline void SetCreateVolumePermission(const CreateVolumePermissionModifications& value) { m_createVolumePermissionHasBeenSet = true; m_createVolumePermission = value; }
    inline void SetCreateVolumePermission(CreateVolumePermissionModifications&& value) { m_createVolumePermissionHasBeenSet = true; m_createVolumePermission = std::move(value); }
    inline ModifySnapshotAttributeRequest& WithCreateVolumePermission(const CreateVolumePermissionModifications& value) { SetCreateVolumePermission(value); return *this;}
    inline ModifySnapshotAttributeRequest& WithCreateVolumePermission(CreateVolumePermissionModifications&& value) { SetCreateVolumePermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::move(value); }
    inline ModifySnapshotAttributeRequest& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}
    inline ModifySnapshotAttributeRequest& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(std::move(value)); return *this;}
    inline ModifySnapshotAttributeRequest& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }
    inline ModifySnapshotAttributeRequest& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(std::move(value)); return *this; }
    inline ModifySnapshotAttributeRequest& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline ModifySnapshotAttributeRequest& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}
    inline ModifySnapshotAttributeRequest& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline ModifySnapshotAttributeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline ModifySnapshotAttributeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline ModifySnapshotAttributeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline ModifySnapshotAttributeRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline ModifySnapshotAttributeRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline ModifySnapshotAttributeRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    inline ModifySnapshotAttributeRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }
    inline ModifySnapshotAttributeRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
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
    inline ModifySnapshotAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    SnapshotAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    CreateVolumePermissionModifications m_createVolumePermission;
    bool m_createVolumePermissionHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    OperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
