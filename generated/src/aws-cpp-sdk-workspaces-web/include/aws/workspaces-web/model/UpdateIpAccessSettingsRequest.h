﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/IpRule.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateIpAccessSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIpAccessSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateIpAccessSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateIpAccessSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateIpAccessSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IP access settings.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateIpAccessSettingsRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIpAccessSettingsRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIpAccessSettingsRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the IP access settings.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateIpAccessSettingsRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateIpAccessSettingsRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateIpAccessSettingsRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IP access settings.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const{ return m_ipAccessSettingsArn; }
    inline bool IpAccessSettingsArnHasBeenSet() const { return m_ipAccessSettingsArnHasBeenSet; }
    inline void SetIpAccessSettingsArn(const Aws::String& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = value; }
    inline void SetIpAccessSettingsArn(Aws::String&& value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn = std::move(value); }
    inline void SetIpAccessSettingsArn(const char* value) { m_ipAccessSettingsArnHasBeenSet = true; m_ipAccessSettingsArn.assign(value); }
    inline UpdateIpAccessSettingsRequest& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}
    inline UpdateIpAccessSettingsRequest& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}
    inline UpdateIpAccessSettingsRequest& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated IP rules of the IP access settings.</p>
     */
    inline const Aws::Vector<IpRule>& GetIpRules() const{ return m_ipRules; }
    inline bool IpRulesHasBeenSet() const { return m_ipRulesHasBeenSet; }
    inline void SetIpRules(const Aws::Vector<IpRule>& value) { m_ipRulesHasBeenSet = true; m_ipRules = value; }
    inline void SetIpRules(Aws::Vector<IpRule>&& value) { m_ipRulesHasBeenSet = true; m_ipRules = std::move(value); }
    inline UpdateIpAccessSettingsRequest& WithIpRules(const Aws::Vector<IpRule>& value) { SetIpRules(value); return *this;}
    inline UpdateIpAccessSettingsRequest& WithIpRules(Aws::Vector<IpRule>&& value) { SetIpRules(std::move(value)); return *this;}
    inline UpdateIpAccessSettingsRequest& AddIpRules(const IpRule& value) { m_ipRulesHasBeenSet = true; m_ipRules.push_back(value); return *this; }
    inline UpdateIpAccessSettingsRequest& AddIpRules(IpRule&& value) { m_ipRulesHasBeenSet = true; m_ipRules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_ipAccessSettingsArn;
    bool m_ipAccessSettingsArnHasBeenSet = false;

    Aws::Vector<IpRule> m_ipRules;
    bool m_ipRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
