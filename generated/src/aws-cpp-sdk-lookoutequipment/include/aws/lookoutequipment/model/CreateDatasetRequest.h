﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/DatasetSchema.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the dataset being created. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline CreateDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline CreateDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline CreateDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline const DatasetSchema& GetDatasetSchema() const{ return m_datasetSchema; }
    inline bool DatasetSchemaHasBeenSet() const { return m_datasetSchemaHasBeenSet; }
    inline void SetDatasetSchema(const DatasetSchema& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = value; }
    inline void SetDatasetSchema(DatasetSchema&& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = std::move(value); }
    inline CreateDatasetRequest& WithDatasetSchema(const DatasetSchema& value) { SetDatasetSchema(value); return *this;}
    inline CreateDatasetRequest& WithDatasetSchema(DatasetSchema&& value) { SetDatasetSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = value; }
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::move(value); }
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId.assign(value); }
    inline CreateDatasetRequest& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}
    inline CreateDatasetRequest& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}
    inline CreateDatasetRequest& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDatasetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDatasetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDatasetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDatasetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDatasetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDatasetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDatasetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetSchema m_datasetSchema;
    bool m_datasetSchemaHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
