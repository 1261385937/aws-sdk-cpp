﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Notification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/Subscriber.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>A notification with subscribers. A notification can have one SNS subscriber
   * and up to 10 email subscribers, for a total of 11 subscribers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/NotificationWithSubscribers">AWS
   * API Reference</a></p>
   */
  class NotificationWithSubscribers
  {
  public:
    AWS_BUDGETS_API NotificationWithSubscribers();
    AWS_BUDGETS_API NotificationWithSubscribers(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API NotificationWithSubscribers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The notification that's associated with a budget.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline NotificationWithSubscribers& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline NotificationWithSubscribers& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }
    inline NotificationWithSubscribers& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}
    inline NotificationWithSubscribers& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}
    inline NotificationWithSubscribers& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }
    inline NotificationWithSubscribers& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
