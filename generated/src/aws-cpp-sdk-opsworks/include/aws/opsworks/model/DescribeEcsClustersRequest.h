﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeEcsClustersRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeEcsClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEcsClusters"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of ARNs, one for each cluster to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEcsClusterArns() const{ return m_ecsClusterArns; }
    inline bool EcsClusterArnsHasBeenSet() const { return m_ecsClusterArnsHasBeenSet; }
    inline void SetEcsClusterArns(const Aws::Vector<Aws::String>& value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns = value; }
    inline void SetEcsClusterArns(Aws::Vector<Aws::String>&& value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns = std::move(value); }
    inline DescribeEcsClustersRequest& WithEcsClusterArns(const Aws::Vector<Aws::String>& value) { SetEcsClusterArns(value); return *this;}
    inline DescribeEcsClustersRequest& WithEcsClusterArns(Aws::Vector<Aws::String>&& value) { SetEcsClusterArns(std::move(value)); return *this;}
    inline DescribeEcsClustersRequest& AddEcsClusterArns(const Aws::String& value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns.push_back(value); return *this; }
    inline DescribeEcsClustersRequest& AddEcsClusterArns(Aws::String&& value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns.push_back(std::move(value)); return *this; }
    inline DescribeEcsClustersRequest& AddEcsClusterArns(const char* value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A stack ID. <code>DescribeEcsClusters</code> returns a description of the
     * cluster that is registered with the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline DescribeEcsClustersRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DescribeEcsClustersRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DescribeEcsClustersRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's<code>NextToken</code> parameter value is set to a
     * token. To retrieve the next set of results, call
     * <code>DescribeEcsClusters</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * the previous response object's <code>NextToken</code> parameter is set to
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeEcsClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEcsClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEcsClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To receive a paginated response, use this parameter to specify the maximum
     * number of results to be returned with a single call. If the number of available
     * results exceeds this maximum, the response includes a <code>NextToken</code>
     * value that you can assign to the <code>NextToken</code> request parameter to get
     * the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeEcsClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ecsClusterArns;
    bool m_ecsClusterArnsHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
