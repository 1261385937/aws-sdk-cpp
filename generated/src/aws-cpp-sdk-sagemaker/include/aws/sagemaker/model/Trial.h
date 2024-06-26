﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/TrialComponentSimpleSummary.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The properties of a trial as returned by the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Trial">AWS API
   * Reference</a></p>
   */
  class Trial
  {
  public:
    AWS_SAGEMAKER_API Trial();
    AWS_SAGEMAKER_API Trial(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Trial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }
    inline Trial& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}
    inline Trial& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}
    inline Trial& WithTrialName(const char* value) { SetTrialName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }
    inline bool TrialArnHasBeenSet() const { return m_trialArnHasBeenSet; }
    inline void SetTrialArn(const Aws::String& value) { m_trialArnHasBeenSet = true; m_trialArn = value; }
    inline void SetTrialArn(Aws::String&& value) { m_trialArnHasBeenSet = true; m_trialArn = std::move(value); }
    inline void SetTrialArn(const char* value) { m_trialArnHasBeenSet = true; m_trialArn.assign(value); }
    inline Trial& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}
    inline Trial& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}
    inline Trial& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Trial& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Trial& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Trial& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }
    inline Trial& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}
    inline Trial& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}
    inline Trial& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}
    ///@}

    ///@{
    
    inline const TrialSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const TrialSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(TrialSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Trial& WithSource(const TrialSource& value) { SetSource(value); return *this;}
    inline Trial& WithSource(TrialSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the trial was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Trial& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Trial& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline Trial& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline Trial& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the trial.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Trial& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Trial& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline Trial& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline Trial& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }
    inline Trial& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline Trial& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that are associated with the trial. You can use <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
     * API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Trial& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Trial& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Trial& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Trial& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline const Aws::Vector<TrialComponentSimpleSummary>& GetTrialComponentSummaries() const{ return m_trialComponentSummaries; }
    inline bool TrialComponentSummariesHasBeenSet() const { return m_trialComponentSummariesHasBeenSet; }
    inline void SetTrialComponentSummaries(const Aws::Vector<TrialComponentSimpleSummary>& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries = value; }
    inline void SetTrialComponentSummaries(Aws::Vector<TrialComponentSimpleSummary>&& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries = std::move(value); }
    inline Trial& WithTrialComponentSummaries(const Aws::Vector<TrialComponentSimpleSummary>& value) { SetTrialComponentSummaries(value); return *this;}
    inline Trial& WithTrialComponentSummaries(Aws::Vector<TrialComponentSimpleSummary>&& value) { SetTrialComponentSummaries(std::move(value)); return *this;}
    inline Trial& AddTrialComponentSummaries(const TrialComponentSimpleSummary& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries.push_back(value); return *this; }
    inline Trial& AddTrialComponentSummaries(TrialComponentSimpleSummary&& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_trialArn;
    bool m_trialArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    TrialSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<TrialComponentSimpleSummary> m_trialComponentSummaries;
    bool m_trialComponentSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
