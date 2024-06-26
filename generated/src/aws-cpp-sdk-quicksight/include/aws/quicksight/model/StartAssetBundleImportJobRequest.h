﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssetBundleImportSource.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideParameters.h>
#include <aws/quicksight/model/AssetBundleImportFailureAction.h>
#include <aws/quicksight/model/AssetBundleImportJobOverridePermissions.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideTags.h>
#include <aws/quicksight/model/AssetBundleImportJobOverrideValidationStrategy.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class StartAssetBundleImportJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API StartAssetBundleImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssetBundleImportJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to import assets into. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline StartAssetBundleImportJobRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline StartAssetBundleImportJobRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const{ return m_assetBundleImportJobId; }
    inline bool AssetBundleImportJobIdHasBeenSet() const { return m_assetBundleImportJobIdHasBeenSet; }
    inline void SetAssetBundleImportJobId(const Aws::String& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = value; }
    inline void SetAssetBundleImportJobId(Aws::String&& value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId = std::move(value); }
    inline void SetAssetBundleImportJobId(const char* value) { m_assetBundleImportJobIdHasBeenSet = true; m_assetBundleImportJobId.assign(value); }
    inline StartAssetBundleImportJobRequest& WithAssetBundleImportJobId(const Aws::String& value) { SetAssetBundleImportJobId(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithAssetBundleImportJobId(Aws::String&& value) { SetAssetBundleImportJobId(std::move(value)); return *this;}
    inline StartAssetBundleImportJobRequest& WithAssetBundleImportJobId(const char* value) { SetAssetBundleImportJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the asset bundle zip file that contains the data that you want
     * to import. The file must be in <code>QUICKSIGHT_JSON</code> format. </p>
     */
    inline const AssetBundleImportSource& GetAssetBundleImportSource() const{ return m_assetBundleImportSource; }
    inline bool AssetBundleImportSourceHasBeenSet() const { return m_assetBundleImportSourceHasBeenSet; }
    inline void SetAssetBundleImportSource(const AssetBundleImportSource& value) { m_assetBundleImportSourceHasBeenSet = true; m_assetBundleImportSource = value; }
    inline void SetAssetBundleImportSource(AssetBundleImportSource&& value) { m_assetBundleImportSourceHasBeenSet = true; m_assetBundleImportSource = std::move(value); }
    inline StartAssetBundleImportJobRequest& WithAssetBundleImportSource(const AssetBundleImportSource& value) { SetAssetBundleImportSource(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithAssetBundleImportSource(AssetBundleImportSource&& value) { SetAssetBundleImportSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideParameters& GetOverrideParameters() const{ return m_overrideParameters; }
    inline bool OverrideParametersHasBeenSet() const { return m_overrideParametersHasBeenSet; }
    inline void SetOverrideParameters(const AssetBundleImportJobOverrideParameters& value) { m_overrideParametersHasBeenSet = true; m_overrideParameters = value; }
    inline void SetOverrideParameters(AssetBundleImportJobOverrideParameters&& value) { m_overrideParametersHasBeenSet = true; m_overrideParameters = std::move(value); }
    inline StartAssetBundleImportJobRequest& WithOverrideParameters(const AssetBundleImportJobOverrideParameters& value) { SetOverrideParameters(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithOverrideParameters(AssetBundleImportJobOverrideParameters&& value) { SetOverrideParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure action for the import job.</p> <p>If you choose
     * <code>ROLLBACK</code>, failed import jobs will attempt to undo any asset changes
     * caused by the failed job.</p> <p>If you choose <code>DO_NOTHING</code>, failed
     * import jobs will not attempt to roll back any asset changes caused by the failed
     * job, possibly keeping the Amazon QuickSight account in an inconsistent
     * state.</p>
     */
    inline const AssetBundleImportFailureAction& GetFailureAction() const{ return m_failureAction; }
    inline bool FailureActionHasBeenSet() const { return m_failureActionHasBeenSet; }
    inline void SetFailureAction(const AssetBundleImportFailureAction& value) { m_failureActionHasBeenSet = true; m_failureAction = value; }
    inline void SetFailureAction(AssetBundleImportFailureAction&& value) { m_failureActionHasBeenSet = true; m_failureAction = std::move(value); }
    inline StartAssetBundleImportJobRequest& WithFailureAction(const AssetBundleImportFailureAction& value) { SetFailureAction(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithFailureAction(AssetBundleImportFailureAction&& value) { SetFailureAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional permission overrides that are applied to the resource configuration
     * before import.</p>
     */
    inline const AssetBundleImportJobOverridePermissions& GetOverridePermissions() const{ return m_overridePermissions; }
    inline bool OverridePermissionsHasBeenSet() const { return m_overridePermissionsHasBeenSet; }
    inline void SetOverridePermissions(const AssetBundleImportJobOverridePermissions& value) { m_overridePermissionsHasBeenSet = true; m_overridePermissions = value; }
    inline void SetOverridePermissions(AssetBundleImportJobOverridePermissions&& value) { m_overridePermissionsHasBeenSet = true; m_overridePermissions = std::move(value); }
    inline StartAssetBundleImportJobRequest& WithOverridePermissions(const AssetBundleImportJobOverridePermissions& value) { SetOverridePermissions(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithOverridePermissions(AssetBundleImportJobOverridePermissions&& value) { SetOverridePermissions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tag overrides that are applied to the resource configuration before
     * import.</p>
     */
    inline const AssetBundleImportJobOverrideTags& GetOverrideTags() const{ return m_overrideTags; }
    inline bool OverrideTagsHasBeenSet() const { return m_overrideTagsHasBeenSet; }
    inline void SetOverrideTags(const AssetBundleImportJobOverrideTags& value) { m_overrideTagsHasBeenSet = true; m_overrideTags = value; }
    inline void SetOverrideTags(AssetBundleImportJobOverrideTags&& value) { m_overrideTagsHasBeenSet = true; m_overrideTags = std::move(value); }
    inline StartAssetBundleImportJobRequest& WithOverrideTags(const AssetBundleImportJobOverrideTags& value) { SetOverrideTags(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithOverrideTags(AssetBundleImportJobOverrideTags&& value) { SetOverrideTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional validation strategy override for all analyses and dashboards that
     * is applied to the resource configuration before import. </p>
     */
    inline const AssetBundleImportJobOverrideValidationStrategy& GetOverrideValidationStrategy() const{ return m_overrideValidationStrategy; }
    inline bool OverrideValidationStrategyHasBeenSet() const { return m_overrideValidationStrategyHasBeenSet; }
    inline void SetOverrideValidationStrategy(const AssetBundleImportJobOverrideValidationStrategy& value) { m_overrideValidationStrategyHasBeenSet = true; m_overrideValidationStrategy = value; }
    inline void SetOverrideValidationStrategy(AssetBundleImportJobOverrideValidationStrategy&& value) { m_overrideValidationStrategyHasBeenSet = true; m_overrideValidationStrategy = std::move(value); }
    inline StartAssetBundleImportJobRequest& WithOverrideValidationStrategy(const AssetBundleImportJobOverrideValidationStrategy& value) { SetOverrideValidationStrategy(value); return *this;}
    inline StartAssetBundleImportJobRequest& WithOverrideValidationStrategy(AssetBundleImportJobOverrideValidationStrategy&& value) { SetOverrideValidationStrategy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assetBundleImportJobId;
    bool m_assetBundleImportJobIdHasBeenSet = false;

    AssetBundleImportSource m_assetBundleImportSource;
    bool m_assetBundleImportSourceHasBeenSet = false;

    AssetBundleImportJobOverrideParameters m_overrideParameters;
    bool m_overrideParametersHasBeenSet = false;

    AssetBundleImportFailureAction m_failureAction;
    bool m_failureActionHasBeenSet = false;

    AssetBundleImportJobOverridePermissions m_overridePermissions;
    bool m_overridePermissionsHasBeenSet = false;

    AssetBundleImportJobOverrideTags m_overrideTags;
    bool m_overrideTagsHasBeenSet = false;

    AssetBundleImportJobOverrideValidationStrategy m_overrideValidationStrategy;
    bool m_overrideValidationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
