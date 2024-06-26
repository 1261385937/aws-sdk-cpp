﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorStatus.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about an an anomaly detector.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/AnomalyDetectorSummary">AWS
   * API Reference</a></p>
   */
  class AnomalyDetectorSummary
  {
  public:
    AWS_LOOKOUTMETRICS_API AnomalyDetectorSummary();
    AWS_LOOKOUTMETRICS_API AnomalyDetectorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API AnomalyDetectorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }
    inline AnomalyDetectorSummary& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}
    inline AnomalyDetectorSummary& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}
    inline AnomalyDetectorSummary& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorName() const{ return m_anomalyDetectorName; }
    inline bool AnomalyDetectorNameHasBeenSet() const { return m_anomalyDetectorNameHasBeenSet; }
    inline void SetAnomalyDetectorName(const Aws::String& value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName = value; }
    inline void SetAnomalyDetectorName(Aws::String&& value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName = std::move(value); }
    inline void SetAnomalyDetectorName(const char* value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName.assign(value); }
    inline AnomalyDetectorSummary& WithAnomalyDetectorName(const Aws::String& value) { SetAnomalyDetectorName(value); return *this;}
    inline AnomalyDetectorSummary& WithAnomalyDetectorName(Aws::String&& value) { SetAnomalyDetectorName(std::move(value)); return *this;}
    inline AnomalyDetectorSummary& WithAnomalyDetectorName(const char* value) { SetAnomalyDetectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const{ return m_anomalyDetectorDescription; }
    inline bool AnomalyDetectorDescriptionHasBeenSet() const { return m_anomalyDetectorDescriptionHasBeenSet; }
    inline void SetAnomalyDetectorDescription(const Aws::String& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = value; }
    inline void SetAnomalyDetectorDescription(Aws::String&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::move(value); }
    inline void SetAnomalyDetectorDescription(const char* value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription.assign(value); }
    inline AnomalyDetectorSummary& WithAnomalyDetectorDescription(const Aws::String& value) { SetAnomalyDetectorDescription(value); return *this;}
    inline AnomalyDetectorSummary& WithAnomalyDetectorDescription(Aws::String&& value) { SetAnomalyDetectorDescription(std::move(value)); return *this;}
    inline AnomalyDetectorSummary& WithAnomalyDetectorDescription(const char* value) { SetAnomalyDetectorDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the detector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AnomalyDetectorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AnomalyDetectorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }
    inline AnomalyDetectorSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline AnomalyDetectorSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of detector.</p>
     */
    inline const AnomalyDetectorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AnomalyDetectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AnomalyDetectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AnomalyDetectorSummary& WithStatus(const AnomalyDetectorStatus& value) { SetStatus(value); return *this;}
    inline AnomalyDetectorSummary& WithStatus(AnomalyDetectorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector's <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AnomalyDetectorSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AnomalyDetectorSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AnomalyDetectorSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AnomalyDetectorSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AnomalyDetectorSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AnomalyDetectorSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AnomalyDetectorSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AnomalyDetectorSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AnomalyDetectorSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_anomalyDetectorName;
    bool m_anomalyDetectorNameHasBeenSet = false;

    Aws::String m_anomalyDetectorDescription;
    bool m_anomalyDetectorDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;

    AnomalyDetectorStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
