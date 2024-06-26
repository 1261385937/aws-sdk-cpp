﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/iotfleethub/IoTFleetHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTFleetHub
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public IoTFleetHubRequest
  {
  public:
    AWS_IOTFLEETHUB_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_IOTFLEETHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the web application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }
    inline UpdateApplicationRequest& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
