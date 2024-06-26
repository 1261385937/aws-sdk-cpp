﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/EventStreamDestinationStatus.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Details of the destination being used for the EventStream.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventStreamDestinationDetails">AWS
   * API Reference</a></p>
   */
  class EventStreamDestinationDetails
  {
  public:
    AWS_CUSTOMERPROFILES_API EventStreamDestinationDetails();
    AWS_CUSTOMERPROFILES_API EventStreamDestinationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API EventStreamDestinationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The StreamARN of the destination to deliver profile events to. For example,
     * arn:aws:kinesis:region:account-id:stream/stream-name.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline EventStreamDestinationDetails& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline EventStreamDestinationDetails& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline EventStreamDestinationDetails& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of enabling the Kinesis stream as a destination for export.</p>
     */
    inline const EventStreamDestinationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EventStreamDestinationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EventStreamDestinationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EventStreamDestinationDetails& WithStatus(const EventStreamDestinationStatus& value) { SetStatus(value); return *this;}
    inline EventStreamDestinationDetails& WithStatus(EventStreamDestinationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the status last changed to <code>UNHEALHY</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUnhealthySince() const{ return m_unhealthySince; }
    inline bool UnhealthySinceHasBeenSet() const { return m_unhealthySinceHasBeenSet; }
    inline void SetUnhealthySince(const Aws::Utils::DateTime& value) { m_unhealthySinceHasBeenSet = true; m_unhealthySince = value; }
    inline void SetUnhealthySince(Aws::Utils::DateTime&& value) { m_unhealthySinceHasBeenSet = true; m_unhealthySince = std::move(value); }
    inline EventStreamDestinationDetails& WithUnhealthySince(const Aws::Utils::DateTime& value) { SetUnhealthySince(value); return *this;}
    inline EventStreamDestinationDetails& WithUnhealthySince(Aws::Utils::DateTime&& value) { SetUnhealthySince(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable string that corresponds to the error or success while
     * enabling the streaming destination.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline EventStreamDestinationDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline EventStreamDestinationDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline EventStreamDestinationDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    EventStreamDestinationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_unhealthySince;
    bool m_unhealthySinceHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
