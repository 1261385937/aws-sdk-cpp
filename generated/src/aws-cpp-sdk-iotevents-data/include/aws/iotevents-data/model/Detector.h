﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/DetectorState.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Information about the detector (instance).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/Detector">AWS
   * API Reference</a></p>
   */
  class Detector
  {
  public:
    AWS_IOTEVENTSDATA_API Detector();
    AWS_IOTEVENTSDATA_API Detector(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Detector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the detector model that created this detector (instance).</p>
     */
    inline const Aws::String& GetDetectorModelName() const{ return m_detectorModelName; }
    inline bool DetectorModelNameHasBeenSet() const { return m_detectorModelNameHasBeenSet; }
    inline void SetDetectorModelName(const Aws::String& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = value; }
    inline void SetDetectorModelName(Aws::String&& value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName = std::move(value); }
    inline void SetDetectorModelName(const char* value) { m_detectorModelNameHasBeenSet = true; m_detectorModelName.assign(value); }
    inline Detector& WithDetectorModelName(const Aws::String& value) { SetDetectorModelName(value); return *this;}
    inline Detector& WithDetectorModelName(Aws::String&& value) { SetDetectorModelName(std::move(value)); return *this;}
    inline Detector& WithDetectorModelName(const char* value) { SetDetectorModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the key (identifying the device or system) that caused the
     * creation of this detector (instance).</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }
    inline Detector& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}
    inline Detector& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}
    inline Detector& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the detector model that created this detector (instance).</p>
     */
    inline const Aws::String& GetDetectorModelVersion() const{ return m_detectorModelVersion; }
    inline bool DetectorModelVersionHasBeenSet() const { return m_detectorModelVersionHasBeenSet; }
    inline void SetDetectorModelVersion(const Aws::String& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = value; }
    inline void SetDetectorModelVersion(Aws::String&& value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion = std::move(value); }
    inline void SetDetectorModelVersion(const char* value) { m_detectorModelVersionHasBeenSet = true; m_detectorModelVersion.assign(value); }
    inline Detector& WithDetectorModelVersion(const Aws::String& value) { SetDetectorModelVersion(value); return *this;}
    inline Detector& WithDetectorModelVersion(Aws::String&& value) { SetDetectorModelVersion(std::move(value)); return *this;}
    inline Detector& WithDetectorModelVersion(const char* value) { SetDetectorModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the detector (instance).</p>
     */
    inline const DetectorState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DetectorState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DetectorState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Detector& WithState(const DetectorState& value) { SetState(value); return *this;}
    inline Detector& WithState(DetectorState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector (instance) was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Detector& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Detector& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the detector (instance) was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline Detector& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline Detector& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorModelName;
    bool m_detectorModelNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    Aws::String m_detectorModelVersion;
    bool m_detectorModelVersionHasBeenSet = false;

    DetectorState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
