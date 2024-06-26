﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/StopRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class StopWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API StopWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkSpaces to stop. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<StopRequest>& GetStopWorkspaceRequests() const{ return m_stopWorkspaceRequests; }
    inline bool StopWorkspaceRequestsHasBeenSet() const { return m_stopWorkspaceRequestsHasBeenSet; }
    inline void SetStopWorkspaceRequests(const Aws::Vector<StopRequest>& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests = value; }
    inline void SetStopWorkspaceRequests(Aws::Vector<StopRequest>&& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests = std::move(value); }
    inline StopWorkspacesRequest& WithStopWorkspaceRequests(const Aws::Vector<StopRequest>& value) { SetStopWorkspaceRequests(value); return *this;}
    inline StopWorkspacesRequest& WithStopWorkspaceRequests(Aws::Vector<StopRequest>&& value) { SetStopWorkspaceRequests(std::move(value)); return *this;}
    inline StopWorkspacesRequest& AddStopWorkspaceRequests(const StopRequest& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests.push_back(value); return *this; }
    inline StopWorkspacesRequest& AddStopWorkspaceRequests(StopRequest&& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StopRequest> m_stopWorkspaceRequests;
    bool m_stopWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
