﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a provisioning artifact (also known as a version)
   * for a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactSummary">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactSummary
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactSummary();
    AWS_SERVICECATALOG_API ProvisioningArtifactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProvisioningArtifactSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProvisioningArtifactSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProvisioningArtifactSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProvisioningArtifactSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProvisioningArtifactSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProvisioningArtifactSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisioningArtifactSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisioningArtifactSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisioningArtifactSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ProvisioningArtifactSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ProvisioningArtifactSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the provisioning artifact. This is used with Amazon Web
     * Services Marketplace products.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProvisioningArtifactMetadata() const{ return m_provisioningArtifactMetadata; }
    inline bool ProvisioningArtifactMetadataHasBeenSet() const { return m_provisioningArtifactMetadataHasBeenSet; }
    inline void SetProvisioningArtifactMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata = value; }
    inline void SetProvisioningArtifactMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata = std::move(value); }
    inline ProvisioningArtifactSummary& WithProvisioningArtifactMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetProvisioningArtifactMetadata(value); return *this;}
    inline ProvisioningArtifactSummary& WithProvisioningArtifactMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetProvisioningArtifactMetadata(std::move(value)); return *this;}
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const Aws::String& key, const Aws::String& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, value); return *this; }
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(Aws::String&& key, const Aws::String& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::move(key), value); return *this; }
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const Aws::String& key, Aws::String&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, std::move(value)); return *this; }
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(Aws::String&& key, Aws::String&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const char* key, Aws::String&& value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, std::move(value)); return *this; }
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(Aws::String&& key, const char* value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(std::move(key), value); return *this; }
    inline ProvisioningArtifactSummary& AddProvisioningArtifactMetadata(const char* key, const char* value) { m_provisioningArtifactMetadataHasBeenSet = true; m_provisioningArtifactMetadata.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_provisioningArtifactMetadata;
    bool m_provisioningArtifactMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
