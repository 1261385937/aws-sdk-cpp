﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/InputDeviceConfigurableSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update an input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDeviceRequest">AWS
   * API Reference</a></p>
   */
  class UpdateInputDeviceRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateInputDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInputDevice"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The settings that you want to apply to the HD input device.
     */
    inline const InputDeviceConfigurableSettings& GetHdDeviceSettings() const{ return m_hdDeviceSettings; }
    inline bool HdDeviceSettingsHasBeenSet() const { return m_hdDeviceSettingsHasBeenSet; }
    inline void SetHdDeviceSettings(const InputDeviceConfigurableSettings& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = value; }
    inline void SetHdDeviceSettings(InputDeviceConfigurableSettings&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::move(value); }
    inline UpdateInputDeviceRequest& WithHdDeviceSettings(const InputDeviceConfigurableSettings& value) { SetHdDeviceSettings(value); return *this;}
    inline UpdateInputDeviceRequest& WithHdDeviceSettings(InputDeviceConfigurableSettings&& value) { SetHdDeviceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline const Aws::String& GetInputDeviceId() const{ return m_inputDeviceId; }
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }
    inline void SetInputDeviceId(const Aws::String& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = value; }
    inline void SetInputDeviceId(Aws::String&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::move(value); }
    inline void SetInputDeviceId(const char* value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId.assign(value); }
    inline UpdateInputDeviceRequest& WithInputDeviceId(const Aws::String& value) { SetInputDeviceId(value); return *this;}
    inline UpdateInputDeviceRequest& WithInputDeviceId(Aws::String&& value) { SetInputDeviceId(std::move(value)); return *this;}
    inline UpdateInputDeviceRequest& WithInputDeviceId(const char* value) { SetInputDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateInputDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateInputDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateInputDeviceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The settings that you want to apply to the UHD input device.
     */
    inline const InputDeviceConfigurableSettings& GetUhdDeviceSettings() const{ return m_uhdDeviceSettings; }
    inline bool UhdDeviceSettingsHasBeenSet() const { return m_uhdDeviceSettingsHasBeenSet; }
    inline void SetUhdDeviceSettings(const InputDeviceConfigurableSettings& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = value; }
    inline void SetUhdDeviceSettings(InputDeviceConfigurableSettings&& value) { m_uhdDeviceSettingsHasBeenSet = true; m_uhdDeviceSettings = std::move(value); }
    inline UpdateInputDeviceRequest& WithUhdDeviceSettings(const InputDeviceConfigurableSettings& value) { SetUhdDeviceSettings(value); return *this;}
    inline UpdateInputDeviceRequest& WithUhdDeviceSettings(InputDeviceConfigurableSettings&& value) { SetUhdDeviceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Availability Zone you want associated with this input device.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline UpdateInputDeviceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline UpdateInputDeviceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline UpdateInputDeviceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}
  private:

    InputDeviceConfigurableSettings m_hdDeviceSettings;
    bool m_hdDeviceSettingsHasBeenSet = false;

    Aws::String m_inputDeviceId;
    bool m_inputDeviceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InputDeviceConfigurableSettings m_uhdDeviceSettings;
    bool m_uhdDeviceSettingsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
