﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateConfiguredTableAssociationRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredTableAssociation"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the configured table association to update.
     * Currently accepts the configured table association ID.</p>
     */
    inline const Aws::String& GetConfiguredTableAssociationIdentifier() const{ return m_configuredTableAssociationIdentifier; }
    inline bool ConfiguredTableAssociationIdentifierHasBeenSet() const { return m_configuredTableAssociationIdentifierHasBeenSet; }
    inline void SetConfiguredTableAssociationIdentifier(const Aws::String& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = value; }
    inline void SetConfiguredTableAssociationIdentifier(Aws::String&& value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier = std::move(value); }
    inline void SetConfiguredTableAssociationIdentifier(const char* value) { m_configuredTableAssociationIdentifierHasBeenSet = true; m_configuredTableAssociationIdentifier.assign(value); }
    inline UpdateConfiguredTableAssociationRequest& WithConfiguredTableAssociationIdentifier(const Aws::String& value) { SetConfiguredTableAssociationIdentifier(value); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithConfiguredTableAssociationIdentifier(Aws::String&& value) { SetConfiguredTableAssociationIdentifier(std::move(value)); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithConfiguredTableAssociationIdentifier(const char* value) { SetConfiguredTableAssociationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the membership that the configured table association
     * belongs to.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline UpdateConfiguredTableAssociationRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the configured table association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateConfiguredTableAssociationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service will assume this role to access catalog metadata and query the
     * table.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateConfiguredTableAssociationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateConfiguredTableAssociationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredTableAssociationIdentifier;
    bool m_configuredTableAssociationIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
