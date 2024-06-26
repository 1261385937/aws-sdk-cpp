﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{

  /**
   * <p>A wrapper type for the attributes of an Amazon SNS
   * subscription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_SNS_API Subscription();
    AWS_SNS_API Subscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API Subscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The subscription's ARN.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }
    inline Subscription& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}
    inline Subscription& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}
    inline Subscription& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription's owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline Subscription& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline Subscription& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline Subscription& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription's protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline Subscription& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline Subscription& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline Subscription& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription's endpoint (format depends on the protocol).</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline Subscription& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline Subscription& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline Subscription& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the subscription's topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }
    inline Subscription& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline Subscription& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline Subscription& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
