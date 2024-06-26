﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an application revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GenericRevisionInfo">AWS
   * API Reference</a></p>
   */
  class GenericRevisionInfo
  {
  public:
    AWS_CODEDEPLOY_API GenericRevisionInfo();
    AWS_CODEDEPLOY_API GenericRevisionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API GenericRevisionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A comment about the revision.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GenericRevisionInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GenericRevisionInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GenericRevisionInfo& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment groups for which this is the current target revision.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroups() const{ return m_deploymentGroups; }
    inline bool DeploymentGroupsHasBeenSet() const { return m_deploymentGroupsHasBeenSet; }
    inline void SetDeploymentGroups(const Aws::Vector<Aws::String>& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = value; }
    inline void SetDeploymentGroups(Aws::Vector<Aws::String>&& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups = std::move(value); }
    inline GenericRevisionInfo& WithDeploymentGroups(const Aws::Vector<Aws::String>& value) { SetDeploymentGroups(value); return *this;}
    inline GenericRevisionInfo& WithDeploymentGroups(Aws::Vector<Aws::String>&& value) { SetDeploymentGroups(std::move(value)); return *this;}
    inline GenericRevisionInfo& AddDeploymentGroups(const Aws::String& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }
    inline GenericRevisionInfo& AddDeploymentGroups(Aws::String&& value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(std::move(value)); return *this; }
    inline GenericRevisionInfo& AddDeploymentGroups(const char* value) { m_deploymentGroupsHasBeenSet = true; m_deploymentGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the revision was first used by CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstUsedTime() const{ return m_firstUsedTime; }
    inline bool FirstUsedTimeHasBeenSet() const { return m_firstUsedTimeHasBeenSet; }
    inline void SetFirstUsedTime(const Aws::Utils::DateTime& value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = value; }
    inline void SetFirstUsedTime(Aws::Utils::DateTime&& value) { m_firstUsedTimeHasBeenSet = true; m_firstUsedTime = std::move(value); }
    inline GenericRevisionInfo& WithFirstUsedTime(const Aws::Utils::DateTime& value) { SetFirstUsedTime(value); return *this;}
    inline GenericRevisionInfo& WithFirstUsedTime(Aws::Utils::DateTime&& value) { SetFirstUsedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the revision was last used by CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedTime() const{ return m_lastUsedTime; }
    inline bool LastUsedTimeHasBeenSet() const { return m_lastUsedTimeHasBeenSet; }
    inline void SetLastUsedTime(const Aws::Utils::DateTime& value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = value; }
    inline void SetLastUsedTime(Aws::Utils::DateTime&& value) { m_lastUsedTimeHasBeenSet = true; m_lastUsedTime = std::move(value); }
    inline GenericRevisionInfo& WithLastUsedTime(const Aws::Utils::DateTime& value) { SetLastUsedTime(value); return *this;}
    inline GenericRevisionInfo& WithLastUsedTime(Aws::Utils::DateTime&& value) { SetLastUsedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the revision was registered with CodeDeploy.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisterTime() const{ return m_registerTime; }
    inline bool RegisterTimeHasBeenSet() const { return m_registerTimeHasBeenSet; }
    inline void SetRegisterTime(const Aws::Utils::DateTime& value) { m_registerTimeHasBeenSet = true; m_registerTime = value; }
    inline void SetRegisterTime(Aws::Utils::DateTime&& value) { m_registerTimeHasBeenSet = true; m_registerTime = std::move(value); }
    inline GenericRevisionInfo& WithRegisterTime(const Aws::Utils::DateTime& value) { SetRegisterTime(value); return *this;}
    inline GenericRevisionInfo& WithRegisterTime(Aws::Utils::DateTime&& value) { SetRegisterTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_deploymentGroups;
    bool m_deploymentGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_firstUsedTime;
    bool m_firstUsedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUsedTime;
    bool m_lastUsedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_registerTime;
    bool m_registerTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
