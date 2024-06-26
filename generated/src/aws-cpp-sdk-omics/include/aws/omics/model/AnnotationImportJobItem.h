﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/JobStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>An annotation import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/AnnotationImportJobItem">AWS
   * API Reference</a></p>
   */
  class AnnotationImportJobItem
  {
  public:
    AWS_OMICS_API AnnotationImportJobItem();
    AWS_OMICS_API AnnotationImportJobItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API AnnotationImportJobItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AnnotationImportJobItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AnnotationImportJobItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AnnotationImportJobItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's destination annotation store.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }
    inline AnnotationImportJobItem& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline AnnotationImportJobItem& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline AnnotationImportJobItem& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline AnnotationImportJobItem& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline AnnotationImportJobItem& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline AnnotationImportJobItem& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AnnotationImportJobItem& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AnnotationImportJobItem& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AnnotationImportJobItem& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AnnotationImportJobItem& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline AnnotationImportJobItem& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AnnotationImportJobItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AnnotationImportJobItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline AnnotationImportJobItem& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline AnnotationImportJobItem& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline AnnotationImportJobItem& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline AnnotationImportJobItem& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool GetRunLeftNormalization() const{ return m_runLeftNormalization; }
    inline bool RunLeftNormalizationHasBeenSet() const { return m_runLeftNormalizationHasBeenSet; }
    inline void SetRunLeftNormalization(bool value) { m_runLeftNormalizationHasBeenSet = true; m_runLeftNormalization = value; }
    inline AnnotationImportJobItem& WithRunLeftNormalization(bool value) { SetRunLeftNormalization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The annotation schema generated by the parsed annotation data. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAnnotationFields() const{ return m_annotationFields; }
    inline bool AnnotationFieldsHasBeenSet() const { return m_annotationFieldsHasBeenSet; }
    inline void SetAnnotationFields(const Aws::Map<Aws::String, Aws::String>& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields = value; }
    inline void SetAnnotationFields(Aws::Map<Aws::String, Aws::String>&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields = std::move(value); }
    inline AnnotationImportJobItem& WithAnnotationFields(const Aws::Map<Aws::String, Aws::String>& value) { SetAnnotationFields(value); return *this;}
    inline AnnotationImportJobItem& WithAnnotationFields(Aws::Map<Aws::String, Aws::String>&& value) { SetAnnotationFields(std::move(value)); return *this;}
    inline AnnotationImportJobItem& AddAnnotationFields(const Aws::String& key, const Aws::String& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, value); return *this; }
    inline AnnotationImportJobItem& AddAnnotationFields(Aws::String&& key, const Aws::String& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::move(key), value); return *this; }
    inline AnnotationImportJobItem& AddAnnotationFields(const Aws::String& key, Aws::String&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, std::move(value)); return *this; }
    inline AnnotationImportJobItem& AddAnnotationFields(Aws::String&& key, Aws::String&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::move(key), std::move(value)); return *this; }
    inline AnnotationImportJobItem& AddAnnotationFields(const char* key, Aws::String&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, std::move(value)); return *this; }
    inline AnnotationImportJobItem& AddAnnotationFields(Aws::String&& key, const char* value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::move(key), value); return *this; }
    inline AnnotationImportJobItem& AddAnnotationFields(const char* key, const char* value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    bool m_runLeftNormalization;
    bool m_runLeftNormalizationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_annotationFields;
    bool m_annotationFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
