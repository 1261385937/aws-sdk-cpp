﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class UpdateServicePrimaryTaskSetRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateServicePrimaryTaskSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServicePrimaryTaskSet"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline UpdateServicePrimaryTaskSetRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline UpdateServicePrimaryTaskSetRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline UpdateServicePrimaryTaskSetRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline UpdateServicePrimaryTaskSetRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline UpdateServicePrimaryTaskSetRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline UpdateServicePrimaryTaskSetRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to set as
     * the primary task set in the deployment.</p>
     */
    inline const Aws::String& GetPrimaryTaskSet() const{ return m_primaryTaskSet; }
    inline bool PrimaryTaskSetHasBeenSet() const { return m_primaryTaskSetHasBeenSet; }
    inline void SetPrimaryTaskSet(const Aws::String& value) { m_primaryTaskSetHasBeenSet = true; m_primaryTaskSet = value; }
    inline void SetPrimaryTaskSet(Aws::String&& value) { m_primaryTaskSetHasBeenSet = true; m_primaryTaskSet = std::move(value); }
    inline void SetPrimaryTaskSet(const char* value) { m_primaryTaskSetHasBeenSet = true; m_primaryTaskSet.assign(value); }
    inline UpdateServicePrimaryTaskSetRequest& WithPrimaryTaskSet(const Aws::String& value) { SetPrimaryTaskSet(value); return *this;}
    inline UpdateServicePrimaryTaskSetRequest& WithPrimaryTaskSet(Aws::String&& value) { SetPrimaryTaskSet(std::move(value)); return *this;}
    inline UpdateServicePrimaryTaskSetRequest& WithPrimaryTaskSet(const char* value) { SetPrimaryTaskSet(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_primaryTaskSet;
    bool m_primaryTaskSetHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
