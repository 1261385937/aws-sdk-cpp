﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/BehaviorOnMxFailure.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to configure the custom MAIL FROM domain for a verified
   * identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityMailFromAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityMailFromAttributesRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutEmailIdentityMailFromAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityMailFromAttributes"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The verified email identity that you want to set up the custom MAIL FROM
     * domain for.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }
    inline PutEmailIdentityMailFromAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}
    inline PutEmailIdentityMailFromAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}
    inline PutEmailIdentityMailFromAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMailFromDomain() const{ return m_mailFromDomain; }
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }
    inline void SetMailFromDomain(const Aws::String& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = value; }
    inline void SetMailFromDomain(Aws::String&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::move(value); }
    inline void SetMailFromDomain(const char* value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain.assign(value); }
    inline PutEmailIdentityMailFromAttributesRequest& WithMailFromDomain(const Aws::String& value) { SetMailFromDomain(value); return *this;}
    inline PutEmailIdentityMailFromAttributesRequest& WithMailFromDomain(Aws::String&& value) { SetMailFromDomain(std::move(value)); return *this;}
    inline PutEmailIdentityMailFromAttributesRequest& WithMailFromDomain(const char* value) { SetMailFromDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that you want Amazon Pinpoint to take if it can't read the
     * required MX record when you send an email. When you set this value to
     * <code>UseDefaultValue</code>, Amazon Pinpoint uses <i>amazonses.com</i> as the
     * MAIL FROM domain. When you set this value to <code>RejectMessage</code>, Amazon
     * Pinpoint returns a <code>MailFromDomainNotVerified</code> error, and doesn't
     * attempt to deliver the email.</p> <p>These behaviors are taken when the custom
     * MAIL FROM domain configuration is in the <code>Pending</code>,
     * <code>Failed</code>, and <code>TemporaryFailure</code> states.</p>
     */
    inline const BehaviorOnMxFailure& GetBehaviorOnMxFailure() const{ return m_behaviorOnMxFailure; }
    inline bool BehaviorOnMxFailureHasBeenSet() const { return m_behaviorOnMxFailureHasBeenSet; }
    inline void SetBehaviorOnMxFailure(const BehaviorOnMxFailure& value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = value; }
    inline void SetBehaviorOnMxFailure(BehaviorOnMxFailure&& value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = std::move(value); }
    inline PutEmailIdentityMailFromAttributesRequest& WithBehaviorOnMxFailure(const BehaviorOnMxFailure& value) { SetBehaviorOnMxFailure(value); return *this;}
    inline PutEmailIdentityMailFromAttributesRequest& WithBehaviorOnMxFailure(BehaviorOnMxFailure&& value) { SetBehaviorOnMxFailure(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet = false;

    BehaviorOnMxFailure m_behaviorOnMxFailure;
    bool m_behaviorOnMxFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
