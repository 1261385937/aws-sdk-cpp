﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxVolumeType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace finspace
{
namespace Model
{

  /**
   */
  class ListKxVolumesRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API ListKxVolumesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListKxVolumes"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;

    AWS_FINSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline ListKxVolumesRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline ListKxVolumesRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline ListKxVolumesRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListKxVolumesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListKxVolumesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListKxVolumesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListKxVolumesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline const KxVolumeType& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const KxVolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(KxVolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline ListKxVolumesRequest& WithVolumeType(const KxVolumeType& value) { SetVolumeType(value); return *this;}
    inline ListKxVolumesRequest& WithVolumeType(KxVolumeType&& value) { SetVolumeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    KxVolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
