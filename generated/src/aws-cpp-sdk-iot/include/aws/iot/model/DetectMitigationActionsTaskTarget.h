﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p> The target of a mitigation action task. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetectMitigationActionsTaskTarget">AWS
   * API Reference</a></p>
   */
  class DetectMitigationActionsTaskTarget
  {
  public:
    AWS_IOT_API DetectMitigationActionsTaskTarget();
    AWS_IOT_API DetectMitigationActionsTaskTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionsTaskTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifiers of the violations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetViolationIds() const{ return m_violationIds; }
    inline bool ViolationIdsHasBeenSet() const { return m_violationIdsHasBeenSet; }
    inline void SetViolationIds(const Aws::Vector<Aws::String>& value) { m_violationIdsHasBeenSet = true; m_violationIds = value; }
    inline void SetViolationIds(Aws::Vector<Aws::String>&& value) { m_violationIdsHasBeenSet = true; m_violationIds = std::move(value); }
    inline DetectMitigationActionsTaskTarget& WithViolationIds(const Aws::Vector<Aws::String>& value) { SetViolationIds(value); return *this;}
    inline DetectMitigationActionsTaskTarget& WithViolationIds(Aws::Vector<Aws::String>&& value) { SetViolationIds(std::move(value)); return *this;}
    inline DetectMitigationActionsTaskTarget& AddViolationIds(const Aws::String& value) { m_violationIdsHasBeenSet = true; m_violationIds.push_back(value); return *this; }
    inline DetectMitigationActionsTaskTarget& AddViolationIds(Aws::String&& value) { m_violationIdsHasBeenSet = true; m_violationIds.push_back(std::move(value)); return *this; }
    inline DetectMitigationActionsTaskTarget& AddViolationIds(const char* value) { m_violationIdsHasBeenSet = true; m_violationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the security profile. </p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }
    inline DetectMitigationActionsTaskTarget& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline DetectMitigationActionsTaskTarget& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline DetectMitigationActionsTaskTarget& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the behavior. </p>
     */
    inline const Aws::String& GetBehaviorName() const{ return m_behaviorName; }
    inline bool BehaviorNameHasBeenSet() const { return m_behaviorNameHasBeenSet; }
    inline void SetBehaviorName(const Aws::String& value) { m_behaviorNameHasBeenSet = true; m_behaviorName = value; }
    inline void SetBehaviorName(Aws::String&& value) { m_behaviorNameHasBeenSet = true; m_behaviorName = std::move(value); }
    inline void SetBehaviorName(const char* value) { m_behaviorNameHasBeenSet = true; m_behaviorName.assign(value); }
    inline DetectMitigationActionsTaskTarget& WithBehaviorName(const Aws::String& value) { SetBehaviorName(value); return *this;}
    inline DetectMitigationActionsTaskTarget& WithBehaviorName(Aws::String&& value) { SetBehaviorName(std::move(value)); return *this;}
    inline DetectMitigationActionsTaskTarget& WithBehaviorName(const char* value) { SetBehaviorName(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_violationIds;
    bool m_violationIdsHasBeenSet = false;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_behaviorName;
    bool m_behaviorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
