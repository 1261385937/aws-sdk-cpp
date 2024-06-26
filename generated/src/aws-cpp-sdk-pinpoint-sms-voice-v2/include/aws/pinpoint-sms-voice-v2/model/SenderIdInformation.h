﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for all SenderIds in an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SenderIdInformation">AWS
   * API Reference</a></p>
   */
  class SenderIdInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation();
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline const Aws::String& GetSenderIdArn() const{ return m_senderIdArn; }
    inline bool SenderIdArnHasBeenSet() const { return m_senderIdArnHasBeenSet; }
    inline void SetSenderIdArn(const Aws::String& value) { m_senderIdArnHasBeenSet = true; m_senderIdArn = value; }
    inline void SetSenderIdArn(Aws::String&& value) { m_senderIdArnHasBeenSet = true; m_senderIdArn = std::move(value); }
    inline void SetSenderIdArn(const char* value) { m_senderIdArnHasBeenSet = true; m_senderIdArn.assign(value); }
    inline SenderIdInformation& WithSenderIdArn(const Aws::String& value) { SetSenderIdArn(value); return *this;}
    inline SenderIdInformation& WithSenderIdArn(Aws::String&& value) { SetSenderIdArn(std::move(value)); return *this;}
    inline SenderIdInformation& WithSenderIdArn(const char* value) { SetSenderIdArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }
    inline SenderIdInformation& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}
    inline SenderIdInformation& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}
    inline SenderIdInformation& WithSenderId(const char* value) { SetSenderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }
    inline SenderIdInformation& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline SenderIdInformation& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline SenderIdInformation& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const Aws::Vector<MessageType>& GetMessageTypes() const{ return m_messageTypes; }
    inline bool MessageTypesHasBeenSet() const { return m_messageTypesHasBeenSet; }
    inline void SetMessageTypes(const Aws::Vector<MessageType>& value) { m_messageTypesHasBeenSet = true; m_messageTypes = value; }
    inline void SetMessageTypes(Aws::Vector<MessageType>&& value) { m_messageTypesHasBeenSet = true; m_messageTypes = std::move(value); }
    inline SenderIdInformation& WithMessageTypes(const Aws::Vector<MessageType>& value) { SetMessageTypes(value); return *this;}
    inline SenderIdInformation& WithMessageTypes(Aws::Vector<MessageType>&& value) { SetMessageTypes(std::move(value)); return *this;}
    inline SenderIdInformation& AddMessageTypes(const MessageType& value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(value); return *this; }
    inline SenderIdInformation& AddMessageTypes(MessageType&& value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }
    inline bool MonthlyLeasingPriceHasBeenSet() const { return m_monthlyLeasingPriceHasBeenSet; }
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = value; }
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = std::move(value); }
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice.assign(value); }
    inline SenderIdInformation& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}
    inline SenderIdInformation& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}
    inline SenderIdInformation& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the sender ID can't be
     * deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline SenderIdInformation& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the sender ID is registered.</p>
     */
    inline bool GetRegistered() const{ return m_registered; }
    inline bool RegisteredHasBeenSet() const { return m_registeredHasBeenSet; }
    inline void SetRegistered(bool value) { m_registeredHasBeenSet = true; m_registered = value; }
    inline SenderIdInformation& WithRegistered(bool value) { SetRegistered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationIdHasBeenSet = true; m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationIdHasBeenSet = true; m_registrationId.assign(value); }
    inline SenderIdInformation& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline SenderIdInformation& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline SenderIdInformation& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}
  private:

    Aws::String m_senderIdArn;
    bool m_senderIdArnHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::Vector<MessageType> m_messageTypes;
    bool m_messageTypesHasBeenSet = false;

    Aws::String m_monthlyLeasingPrice;
    bool m_monthlyLeasingPriceHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;

    bool m_registered;
    bool m_registeredHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
