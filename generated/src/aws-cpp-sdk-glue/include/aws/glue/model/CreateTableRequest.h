﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/OpenTableFormatInput.h>
#include <aws/glue/model/PartitionIndex.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which to create the <code>Table</code>. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline CreateTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline CreateTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline CreateTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog database in which to create the new table. For Hive
     * compatibility, this name is entirely lowercase.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TableInput</code> object that defines the metadata table to create
     * in the catalog.</p>
     */
    inline const TableInput& GetTableInput() const{ return m_tableInput; }
    inline bool TableInputHasBeenSet() const { return m_tableInputHasBeenSet; }
    inline void SetTableInput(const TableInput& value) { m_tableInputHasBeenSet = true; m_tableInput = value; }
    inline void SetTableInput(TableInput&& value) { m_tableInputHasBeenSet = true; m_tableInput = std::move(value); }
    inline CreateTableRequest& WithTableInput(const TableInput& value) { SetTableInput(value); return *this;}
    inline CreateTableRequest& WithTableInput(TableInput&& value) { SetTableInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of partition indexes, <code>PartitionIndex</code> structures, to
     * create in the table.</p>
     */
    inline const Aws::Vector<PartitionIndex>& GetPartitionIndexes() const{ return m_partitionIndexes; }
    inline bool PartitionIndexesHasBeenSet() const { return m_partitionIndexesHasBeenSet; }
    inline void SetPartitionIndexes(const Aws::Vector<PartitionIndex>& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes = value; }
    inline void SetPartitionIndexes(Aws::Vector<PartitionIndex>&& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes = std::move(value); }
    inline CreateTableRequest& WithPartitionIndexes(const Aws::Vector<PartitionIndex>& value) { SetPartitionIndexes(value); return *this;}
    inline CreateTableRequest& WithPartitionIndexes(Aws::Vector<PartitionIndex>&& value) { SetPartitionIndexes(std::move(value)); return *this;}
    inline CreateTableRequest& AddPartitionIndexes(const PartitionIndex& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes.push_back(value); return *this; }
    inline CreateTableRequest& AddPartitionIndexes(PartitionIndex&& value) { m_partitionIndexesHasBeenSet = true; m_partitionIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline CreateTableRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline CreateTableRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline CreateTableRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an <code>OpenTableFormatInput</code> structure when creating an
     * open format table.</p>
     */
    inline const OpenTableFormatInput& GetOpenTableFormatInput() const{ return m_openTableFormatInput; }
    inline bool OpenTableFormatInputHasBeenSet() const { return m_openTableFormatInputHasBeenSet; }
    inline void SetOpenTableFormatInput(const OpenTableFormatInput& value) { m_openTableFormatInputHasBeenSet = true; m_openTableFormatInput = value; }
    inline void SetOpenTableFormatInput(OpenTableFormatInput&& value) { m_openTableFormatInputHasBeenSet = true; m_openTableFormatInput = std::move(value); }
    inline CreateTableRequest& WithOpenTableFormatInput(const OpenTableFormatInput& value) { SetOpenTableFormatInput(value); return *this;}
    inline CreateTableRequest& WithOpenTableFormatInput(OpenTableFormatInput&& value) { SetOpenTableFormatInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    TableInput m_tableInput;
    bool m_tableInputHasBeenSet = false;

    Aws::Vector<PartitionIndex> m_partitionIndexes;
    bool m_partitionIndexesHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    OpenTableFormatInput m_openTableFormatInput;
    bool m_openTableFormatInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
