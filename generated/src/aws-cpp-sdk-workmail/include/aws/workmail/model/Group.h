﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of an WorkMail group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Group">AWS API
   * Reference</a></p>
   */
  class Group
  {
  public:
    AWS_WORKMAIL_API Group();
    AWS_WORKMAIL_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Group& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Group& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Group& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the group.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline Group& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline Group& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline Group& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Group& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Group& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Group& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the group, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Group& WithState(const EntityState& value) { SetState(value); return *this;}
    inline Group& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the group was enabled for WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDateHasBeenSet = true; m_enabledDate = value; }
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::move(value); }
    inline Group& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}
    inline Group& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the group was disabled from WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDateHasBeenSet = true; m_disabledDate = value; }
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::move(value); }
    inline Group& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}
    inline Group& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EntityState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate;
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate;
    bool m_disabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
