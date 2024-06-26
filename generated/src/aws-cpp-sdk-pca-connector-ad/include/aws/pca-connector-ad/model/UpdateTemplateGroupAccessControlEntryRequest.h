﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/pca-connector-ad/model/AccessRights.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class UpdateTemplateGroupAccessControlEntryRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API UpdateTemplateGroupAccessControlEntryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplateGroupAccessControlEntry"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline const AccessRights& GetAccessRights() const{ return m_accessRights; }
    inline bool AccessRightsHasBeenSet() const { return m_accessRightsHasBeenSet; }
    inline void SetAccessRights(const AccessRights& value) { m_accessRightsHasBeenSet = true; m_accessRights = value; }
    inline void SetAccessRights(AccessRights&& value) { m_accessRightsHasBeenSet = true; m_accessRights = std::move(value); }
    inline UpdateTemplateGroupAccessControlEntryRequest& WithAccessRights(const AccessRights& value) { SetAccessRights(value); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithAccessRights(AccessRights&& value) { SetAccessRights(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline const Aws::String& GetGroupDisplayName() const{ return m_groupDisplayName; }
    inline bool GroupDisplayNameHasBeenSet() const { return m_groupDisplayNameHasBeenSet; }
    inline void SetGroupDisplayName(const Aws::String& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = value; }
    inline void SetGroupDisplayName(Aws::String&& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = std::move(value); }
    inline void SetGroupDisplayName(const char* value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName.assign(value); }
    inline UpdateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(const Aws::String& value) { SetGroupDisplayName(value); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(Aws::String&& value) { SetGroupDisplayName(std::move(value)); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(const char* value) { SetGroupDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline const Aws::String& GetGroupSecurityIdentifier() const{ return m_groupSecurityIdentifier; }
    inline bool GroupSecurityIdentifierHasBeenSet() const { return m_groupSecurityIdentifierHasBeenSet; }
    inline void SetGroupSecurityIdentifier(const Aws::String& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = value; }
    inline void SetGroupSecurityIdentifier(Aws::String&& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = std::move(value); }
    inline void SetGroupSecurityIdentifier(const char* value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier.assign(value); }
    inline UpdateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(const Aws::String& value) { SetGroupSecurityIdentifier(value); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(Aws::String&& value) { SetGroupSecurityIdentifier(std::move(value)); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(const char* value) { SetGroupSecurityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline UpdateTemplateGroupAccessControlEntryRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline UpdateTemplateGroupAccessControlEntryRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}
  private:

    AccessRights m_accessRights;
    bool m_accessRightsHasBeenSet = false;

    Aws::String m_groupDisplayName;
    bool m_groupDisplayNameHasBeenSet = false;

    Aws::String m_groupSecurityIdentifier;
    bool m_groupSecurityIdentifierHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
