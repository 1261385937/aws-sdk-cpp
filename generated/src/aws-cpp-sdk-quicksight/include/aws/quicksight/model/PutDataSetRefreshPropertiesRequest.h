﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetRefreshProperties.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class PutDataSetRefreshPropertiesRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API PutDataSetRefreshPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataSetRefreshProperties"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline PutDataSetRefreshPropertiesRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline PutDataSetRefreshPropertiesRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline PutDataSetRefreshPropertiesRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline PutDataSetRefreshPropertiesRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline PutDataSetRefreshPropertiesRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline PutDataSetRefreshPropertiesRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset refresh properties.</p>
     */
    inline const DataSetRefreshProperties& GetDataSetRefreshProperties() const{ return m_dataSetRefreshProperties; }
    inline bool DataSetRefreshPropertiesHasBeenSet() const { return m_dataSetRefreshPropertiesHasBeenSet; }
    inline void SetDataSetRefreshProperties(const DataSetRefreshProperties& value) { m_dataSetRefreshPropertiesHasBeenSet = true; m_dataSetRefreshProperties = value; }
    inline void SetDataSetRefreshProperties(DataSetRefreshProperties&& value) { m_dataSetRefreshPropertiesHasBeenSet = true; m_dataSetRefreshProperties = std::move(value); }
    inline PutDataSetRefreshPropertiesRequest& WithDataSetRefreshProperties(const DataSetRefreshProperties& value) { SetDataSetRefreshProperties(value); return *this;}
    inline PutDataSetRefreshPropertiesRequest& WithDataSetRefreshProperties(DataSetRefreshProperties&& value) { SetDataSetRefreshProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    DataSetRefreshProperties m_dataSetRefreshProperties;
    bool m_dataSetRefreshPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
