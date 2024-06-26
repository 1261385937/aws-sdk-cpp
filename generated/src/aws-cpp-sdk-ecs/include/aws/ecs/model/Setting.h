﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/SettingName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/SettingType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The current account setting for a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Setting">AWS API
   * Reference</a></p>
   */
  class Setting
  {
  public:
    AWS_ECS_API Setting();
    AWS_ECS_API Setting(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Setting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon ECS resource name.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline Setting& WithName(const SettingName& value) { SetName(value); return *this;}
    inline Setting& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the account setting is on or off for the specified
     * resource.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Setting& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Setting& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Setting& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the principal. It can be a user, role, or the root user. If this
     * field is omitted, the authenticated user is assumed.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }
    inline Setting& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}
    inline Setting& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}
    inline Setting& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon Web Services manages the account setting, or if the
     * user manages it.</p> <p> <code>aws_managed</code> account settings are
     * read-only, as Amazon Web Services manages such on the customer's behalf.
     * Currently, the <code>guardDutyActivate</code> account setting is the only one
     * Amazon Web Services manages.</p>
     */
    inline const SettingType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SettingType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SettingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Setting& WithType(const SettingType& value) { SetType(value); return *this;}
    inline Setting& WithType(SettingType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    SettingName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    SettingType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
