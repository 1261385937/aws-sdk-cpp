﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class UpdateSceneRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API UpdateSceneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScene"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline UpdateSceneRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline UpdateSceneRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline UpdateSceneRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scene.</p>
     */
    inline const Aws::String& GetSceneId() const{ return m_sceneId; }
    inline bool SceneIdHasBeenSet() const { return m_sceneIdHasBeenSet; }
    inline void SetSceneId(const Aws::String& value) { m_sceneIdHasBeenSet = true; m_sceneId = value; }
    inline void SetSceneId(Aws::String&& value) { m_sceneIdHasBeenSet = true; m_sceneId = std::move(value); }
    inline void SetSceneId(const char* value) { m_sceneIdHasBeenSet = true; m_sceneId.assign(value); }
    inline UpdateSceneRequest& WithSceneId(const Aws::String& value) { SetSceneId(value); return *this;}
    inline UpdateSceneRequest& WithSceneId(Aws::String&& value) { SetSceneId(std::move(value)); return *this;}
    inline UpdateSceneRequest& WithSceneId(const char* value) { SetSceneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline const Aws::String& GetContentLocation() const{ return m_contentLocation; }
    inline bool ContentLocationHasBeenSet() const { return m_contentLocationHasBeenSet; }
    inline void SetContentLocation(const Aws::String& value) { m_contentLocationHasBeenSet = true; m_contentLocation = value; }
    inline void SetContentLocation(Aws::String&& value) { m_contentLocationHasBeenSet = true; m_contentLocation = std::move(value); }
    inline void SetContentLocation(const char* value) { m_contentLocationHasBeenSet = true; m_contentLocation.assign(value); }
    inline UpdateSceneRequest& WithContentLocation(const Aws::String& value) { SetContentLocation(value); return *this;}
    inline UpdateSceneRequest& WithContentLocation(Aws::String&& value) { SetContentLocation(std::move(value)); return *this;}
    inline UpdateSceneRequest& WithContentLocation(const char* value) { SetContentLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of this scene.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateSceneRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSceneRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSceneRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline UpdateSceneRequest& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}
    inline UpdateSceneRequest& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline UpdateSceneRequest& AddCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline UpdateSceneRequest& AddCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    inline UpdateSceneRequest& AddCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scene metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSceneMetadata() const{ return m_sceneMetadata; }
    inline bool SceneMetadataHasBeenSet() const { return m_sceneMetadataHasBeenSet; }
    inline void SetSceneMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata = value; }
    inline void SetSceneMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata = std::move(value); }
    inline UpdateSceneRequest& WithSceneMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetSceneMetadata(value); return *this;}
    inline UpdateSceneRequest& WithSceneMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetSceneMetadata(std::move(value)); return *this;}
    inline UpdateSceneRequest& AddSceneMetadata(const Aws::String& key, const Aws::String& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(key, value); return *this; }
    inline UpdateSceneRequest& AddSceneMetadata(Aws::String&& key, const Aws::String& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(std::move(key), value); return *this; }
    inline UpdateSceneRequest& AddSceneMetadata(const Aws::String& key, Aws::String&& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(key, std::move(value)); return *this; }
    inline UpdateSceneRequest& AddSceneMetadata(Aws::String&& key, Aws::String&& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateSceneRequest& AddSceneMetadata(const char* key, Aws::String&& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(key, std::move(value)); return *this; }
    inline UpdateSceneRequest& AddSceneMetadata(Aws::String&& key, const char* value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(std::move(key), value); return *this; }
    inline UpdateSceneRequest& AddSceneMetadata(const char* key, const char* value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_sceneId;
    bool m_sceneIdHasBeenSet = false;

    Aws::String m_contentLocation;
    bool m_contentLocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sceneMetadata;
    bool m_sceneMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
