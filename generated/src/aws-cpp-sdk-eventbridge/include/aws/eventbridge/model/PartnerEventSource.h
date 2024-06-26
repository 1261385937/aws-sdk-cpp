﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>A partner event source is created by an SaaS partner. If a customer creates a
   * partner event bus that matches this event source, that Amazon Web Services
   * account can receive events from the partner's applications or
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PartnerEventSource">AWS
   * API Reference</a></p>
   */
  class PartnerEventSource
  {
  public:
    AWS_EVENTBRIDGE_API PartnerEventSource();
    AWS_EVENTBRIDGE_API PartnerEventSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API PartnerEventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline PartnerEventSource& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PartnerEventSource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PartnerEventSource& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partner event source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PartnerEventSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PartnerEventSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PartnerEventSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
