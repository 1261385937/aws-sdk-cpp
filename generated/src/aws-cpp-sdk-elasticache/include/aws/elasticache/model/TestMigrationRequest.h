﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/CustomerNodeEndpoint.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class TestMigrationRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API TestMigrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestMigration"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> The ID of the replication group to which data is to be migrated. </p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline TestMigrationRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline TestMigrationRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline TestMigrationRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of endpoints from which data should be migrated. List should have only
     * one element. </p>
     */
    inline const Aws::Vector<CustomerNodeEndpoint>& GetCustomerNodeEndpointList() const{ return m_customerNodeEndpointList; }
    inline bool CustomerNodeEndpointListHasBeenSet() const { return m_customerNodeEndpointListHasBeenSet; }
    inline void SetCustomerNodeEndpointList(const Aws::Vector<CustomerNodeEndpoint>& value) { m_customerNodeEndpointListHasBeenSet = true; m_customerNodeEndpointList = value; }
    inline void SetCustomerNodeEndpointList(Aws::Vector<CustomerNodeEndpoint>&& value) { m_customerNodeEndpointListHasBeenSet = true; m_customerNodeEndpointList = std::move(value); }
    inline TestMigrationRequest& WithCustomerNodeEndpointList(const Aws::Vector<CustomerNodeEndpoint>& value) { SetCustomerNodeEndpointList(value); return *this;}
    inline TestMigrationRequest& WithCustomerNodeEndpointList(Aws::Vector<CustomerNodeEndpoint>&& value) { SetCustomerNodeEndpointList(std::move(value)); return *this;}
    inline TestMigrationRequest& AddCustomerNodeEndpointList(const CustomerNodeEndpoint& value) { m_customerNodeEndpointListHasBeenSet = true; m_customerNodeEndpointList.push_back(value); return *this; }
    inline TestMigrationRequest& AddCustomerNodeEndpointList(CustomerNodeEndpoint&& value) { m_customerNodeEndpointListHasBeenSet = true; m_customerNodeEndpointList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::Vector<CustomerNodeEndpoint> m_customerNodeEndpointList;
    bool m_customerNodeEndpointListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
