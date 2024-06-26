﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteCacheCluster</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DeleteCacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class DeleteCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DeleteCacheClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCacheCluster"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The cluster identifier for the cluster to be deleted. This parameter is not
     * case sensitive.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }
    inline DeleteCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}
    inline DeleteCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}
    inline DeleteCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied name of a final cluster snapshot. This is the unique name
     * that identifies the snapshot. ElastiCache creates the snapshot, and then deletes
     * the cluster immediately afterward.</p>
     */
    inline const Aws::String& GetFinalSnapshotIdentifier() const{ return m_finalSnapshotIdentifier; }
    inline bool FinalSnapshotIdentifierHasBeenSet() const { return m_finalSnapshotIdentifierHasBeenSet; }
    inline void SetFinalSnapshotIdentifier(const Aws::String& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = value; }
    inline void SetFinalSnapshotIdentifier(Aws::String&& value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier = std::move(value); }
    inline void SetFinalSnapshotIdentifier(const char* value) { m_finalSnapshotIdentifierHasBeenSet = true; m_finalSnapshotIdentifier.assign(value); }
    inline DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(const Aws::String& value) { SetFinalSnapshotIdentifier(value); return *this;}
    inline DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(Aws::String&& value) { SetFinalSnapshotIdentifier(std::move(value)); return *this;}
    inline DeleteCacheClusterRequest& WithFinalSnapshotIdentifier(const char* value) { SetFinalSnapshotIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_finalSnapshotIdentifier;
    bool m_finalSnapshotIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
