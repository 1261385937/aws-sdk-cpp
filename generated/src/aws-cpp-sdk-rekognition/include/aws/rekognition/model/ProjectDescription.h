﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/ProjectStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/CustomizationFeature.h>
#include <aws/rekognition/model/ProjectAutoUpdate.h>
#include <aws/rekognition/model/DatasetMetadata.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A description of an Amazon Rekognition Custom Labels project. For more
   * information, see <a>DescribeProjects</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProjectDescription">AWS
   * API Reference</a></p>
   */
  class ProjectDescription
  {
  public:
    AWS_REKOGNITION_API ProjectDescription();
    AWS_REKOGNITION_API ProjectDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline ProjectDescription& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline ProjectDescription& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline ProjectDescription& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline ProjectDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline ProjectDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the project.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProjectStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProjectStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProjectDescription& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}
    inline ProjectDescription& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDatasets() const{ return m_datasets; }
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }
    inline void SetDatasets(const Aws::Vector<DatasetMetadata>& value) { m_datasetsHasBeenSet = true; m_datasets = value; }
    inline void SetDatasets(Aws::Vector<DatasetMetadata>&& value) { m_datasetsHasBeenSet = true; m_datasets = std::move(value); }
    inline ProjectDescription& WithDatasets(const Aws::Vector<DatasetMetadata>& value) { SetDatasets(value); return *this;}
    inline ProjectDescription& WithDatasets(Aws::Vector<DatasetMetadata>&& value) { SetDatasets(std::move(value)); return *this;}
    inline ProjectDescription& AddDatasets(const DatasetMetadata& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(value); return *this; }
    inline ProjectDescription& AddDatasets(DatasetMetadata&& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the project that is being customized.</p>
     */
    inline const CustomizationFeature& GetFeature() const{ return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(const CustomizationFeature& value) { m_featureHasBeenSet = true; m_feature = value; }
    inline void SetFeature(CustomizationFeature&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }
    inline ProjectDescription& WithFeature(const CustomizationFeature& value) { SetFeature(value); return *this;}
    inline ProjectDescription& WithFeature(CustomizationFeature&& value) { SetFeature(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether automatic retraining will be attempted for the versions of
     * the project. Applies only to adapters. </p>
     */
    inline const ProjectAutoUpdate& GetAutoUpdate() const{ return m_autoUpdate; }
    inline bool AutoUpdateHasBeenSet() const { return m_autoUpdateHasBeenSet; }
    inline void SetAutoUpdate(const ProjectAutoUpdate& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = value; }
    inline void SetAutoUpdate(ProjectAutoUpdate&& value) { m_autoUpdateHasBeenSet = true; m_autoUpdate = std::move(value); }
    inline ProjectDescription& WithAutoUpdate(const ProjectAutoUpdate& value) { SetAutoUpdate(value); return *this;}
    inline ProjectDescription& WithAutoUpdate(ProjectAutoUpdate&& value) { SetAutoUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    ProjectStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<DatasetMetadata> m_datasets;
    bool m_datasetsHasBeenSet = false;

    CustomizationFeature m_feature;
    bool m_featureHasBeenSet = false;

    ProjectAutoUpdate m_autoUpdate;
    bool m_autoUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
