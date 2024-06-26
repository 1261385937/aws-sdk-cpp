﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/DLMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/SettablePolicyStateValues.h>
#include <aws/dlm/model/PolicyDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dlm/model/DefaultPolicyTypeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/Exclusions.h>
#include <aws/dlm/model/CrossRegionCopyTarget.h>
#include <utility>

namespace Aws
{
namespace DLM
{
namespace Model
{

  /**
   */
  class CreateLifecyclePolicyRequest : public DLMRequest
  {
  public:
    AWS_DLM_API CreateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLifecyclePolicy"; }

    AWS_DLM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to run the operations
     * specified by the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline CreateLifecyclePolicyRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the lifecycle policy. The characters ^[0-9A-Za-z _-]+$ are
     * supported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation state of the lifecycle policy after creation.</p>
     */
    inline const SettablePolicyStateValues& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithState(const SettablePolicyStateValues& value) { SetState(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithState(SettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the lifecycle policy.</p>  <p>If you
     * create a default policy, you can specify the request parameters either in the
     * request body, or in the PolicyDetails request structure, but not both.</p>
     * 
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the lifecycle policy during creation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLifecyclePolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specify the type of default policy to
     * create.</p> <ul> <li> <p>To create a default policy for EBS snapshots, that
     * creates snapshots of all volumes in the Region that do not have recent backups,
     * specify <code>VOLUME</code>.</p> </li> <li> <p>To create a default policy for
     * EBS-backed AMIs, that creates EBS-backed AMIs from all instances in the Region
     * that do not have recent backups, specify <code>INSTANCE</code>.</p> </li> </ul>
     */
    inline const DefaultPolicyTypeValues& GetDefaultPolicy() const{ return m_defaultPolicy; }
    inline bool DefaultPolicyHasBeenSet() const { return m_defaultPolicyHasBeenSet; }
    inline void SetDefaultPolicy(const DefaultPolicyTypeValues& value) { m_defaultPolicyHasBeenSet = true; m_defaultPolicy = value; }
    inline void SetDefaultPolicy(DefaultPolicyTypeValues&& value) { m_defaultPolicyHasBeenSet = true; m_defaultPolicy = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithDefaultPolicy(const DefaultPolicyTypeValues& value) { SetDefaultPolicy(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithDefaultPolicy(DefaultPolicyTypeValues&& value) { SetDefaultPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how often the policy should run and
     * create snapshots or AMIs. The creation frequency can range from 1 to 7 days. If
     * you do not specify a value, the default is 1.</p> <p>Default: 1</p>
     */
    inline int GetCreateInterval() const{ return m_createInterval; }
    inline bool CreateIntervalHasBeenSet() const { return m_createIntervalHasBeenSet; }
    inline void SetCreateInterval(int value) { m_createIntervalHasBeenSet = true; m_createInterval = value; }
    inline CreateLifecyclePolicyRequest& WithCreateInterval(int value) { SetCreateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies how long the policy should retain
     * snapshots or AMIs before deleting them. The retention period can range from 2 to
     * 14 days, but it must be greater than the creation frequency to ensure that the
     * policy retains at least 1 snapshot or AMI at any given time. If you do not
     * specify a value, the default is 7.</p> <p>Default: 7</p>
     */
    inline int GetRetainInterval() const{ return m_retainInterval; }
    inline bool RetainIntervalHasBeenSet() const { return m_retainIntervalHasBeenSet; }
    inline void SetRetainInterval(int value) { m_retainIntervalHasBeenSet = true; m_retainInterval = value; }
    inline CreateLifecyclePolicyRequest& WithRetainInterval(int value) { SetRetainInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Indicates whether the policy should copy tags
     * from the source resource to the snapshot or AMI. If you do not specify a value,
     * the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CreateLifecyclePolicyRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Defines the snapshot or AMI retention
     * behavior for the policy if the source volume or instance is deleted, or if the
     * policy enters the error, disabled, or deleted state.</p> <p>By default
     * (<b>ExtendDeletion=false</b>):</p> <ul> <li> <p>If a source resource is deleted,
     * Amazon Data Lifecycle Manager will continue to delete previously created
     * snapshots or AMIs, up to but not including the last one, based on the specified
     * retention period. If you want Amazon Data Lifecycle Manager to delete all
     * snapshots or AMIs, including the last one, specify <code>true</code>.</p> </li>
     * <li> <p>If a policy enters the error, disabled, or deleted state, Amazon Data
     * Lifecycle Manager stops deleting snapshots and AMIs. If you want Amazon Data
     * Lifecycle Manager to continue deleting snapshots or AMIs, including the last
     * one, if the policy enters one of these states, specify <code>true</code>.</p>
     * </li> </ul> <p>If you enable extended deletion (<b>ExtendDeletion=true</b>), you
     * override both default behaviors simultaneously.</p> <p>If you do not specify a
     * value, the default is <code>false</code>.</p> <p>Default: false</p>
     */
    inline bool GetExtendDeletion() const{ return m_extendDeletion; }
    inline bool ExtendDeletionHasBeenSet() const { return m_extendDeletionHasBeenSet; }
    inline void SetExtendDeletion(bool value) { m_extendDeletionHasBeenSet = true; m_extendDeletion = value; }
    inline CreateLifecyclePolicyRequest& WithExtendDeletion(bool value) { SetExtendDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies destination Regions for snapshot or
     * AMI copies. You can specify up to 3 destination Regions. If you do not want to
     * create cross-Region copies, omit this parameter.</p>
     */
    inline const Aws::Vector<CrossRegionCopyTarget>& GetCrossRegionCopyTargets() const{ return m_crossRegionCopyTargets; }
    inline bool CrossRegionCopyTargetsHasBeenSet() const { return m_crossRegionCopyTargetsHasBeenSet; }
    inline void SetCrossRegionCopyTargets(const Aws::Vector<CrossRegionCopyTarget>& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = value; }
    inline void SetCrossRegionCopyTargets(Aws::Vector<CrossRegionCopyTarget>&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithCrossRegionCopyTargets(const Aws::Vector<CrossRegionCopyTarget>& value) { SetCrossRegionCopyTargets(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithCrossRegionCopyTargets(Aws::Vector<CrossRegionCopyTarget>&& value) { SetCrossRegionCopyTargets(std::move(value)); return *this;}
    inline CreateLifecyclePolicyRequest& AddCrossRegionCopyTargets(const CrossRegionCopyTarget& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.push_back(value); return *this; }
    inline CreateLifecyclePolicyRequest& AddCrossRegionCopyTargets(CrossRegionCopyTarget&& value) { m_crossRegionCopyTargetsHasBeenSet = true; m_crossRegionCopyTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
     * instances for which you do not want to create snapshots or AMIs. The policy will
     * not create snapshots or AMIs for target resources that match any of the
     * specified exclusion parameters.</p>
     */
    inline const Exclusions& GetExclusions() const{ return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    inline void SetExclusions(const Exclusions& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }
    inline void SetExclusions(Exclusions&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }
    inline CreateLifecyclePolicyRequest& WithExclusions(const Exclusions& value) { SetExclusions(value); return *this;}
    inline CreateLifecyclePolicyRequest& WithExclusions(Exclusions&& value) { SetExclusions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SettablePolicyStateValues m_state;
    bool m_stateHasBeenSet = false;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DefaultPolicyTypeValues m_defaultPolicy;
    bool m_defaultPolicyHasBeenSet = false;

    int m_createInterval;
    bool m_createIntervalHasBeenSet = false;

    int m_retainInterval;
    bool m_retainIntervalHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    bool m_extendDeletion;
    bool m_extendDeletionHasBeenSet = false;

    Aws::Vector<CrossRegionCopyTarget> m_crossRegionCopyTargets;
    bool m_crossRegionCopyTargetsHasBeenSet = false;

    Exclusions m_exclusions;
    bool m_exclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
