﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class ListRestoreJobsByProtectedResourceRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API ListRestoreJobsByProtectedResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRestoreJobsByProtectedResource"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Returns only restore jobs that match the specified resource Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ListRestoreJobsByProtectedResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs associated with the specified job status.</p>
     */
    inline const RestoreJobStatus& GetByStatus() const{ return m_byStatus; }
    inline bool ByStatusHasBeenSet() const { return m_byStatusHasBeenSet; }
    inline void SetByStatus(const RestoreJobStatus& value) { m_byStatusHasBeenSet = true; m_byStatus = value; }
    inline void SetByStatus(RestoreJobStatus&& value) { m_byStatusHasBeenSet = true; m_byStatus = std::move(value); }
    inline ListRestoreJobsByProtectedResourceRequest& WithByStatus(const RestoreJobStatus& value) { SetByStatus(value); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithByStatus(RestoreJobStatus&& value) { SetByStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs of recovery points that were created after the
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByRecoveryPointCreationDateAfter() const{ return m_byRecoveryPointCreationDateAfter; }
    inline bool ByRecoveryPointCreationDateAfterHasBeenSet() const { return m_byRecoveryPointCreationDateAfterHasBeenSet; }
    inline void SetByRecoveryPointCreationDateAfter(const Aws::Utils::DateTime& value) { m_byRecoveryPointCreationDateAfterHasBeenSet = true; m_byRecoveryPointCreationDateAfter = value; }
    inline void SetByRecoveryPointCreationDateAfter(Aws::Utils::DateTime&& value) { m_byRecoveryPointCreationDateAfterHasBeenSet = true; m_byRecoveryPointCreationDateAfter = std::move(value); }
    inline ListRestoreJobsByProtectedResourceRequest& WithByRecoveryPointCreationDateAfter(const Aws::Utils::DateTime& value) { SetByRecoveryPointCreationDateAfter(value); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithByRecoveryPointCreationDateAfter(Aws::Utils::DateTime&& value) { SetByRecoveryPointCreationDateAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns only restore jobs of recovery points that were created before the
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetByRecoveryPointCreationDateBefore() const{ return m_byRecoveryPointCreationDateBefore; }
    inline bool ByRecoveryPointCreationDateBeforeHasBeenSet() const { return m_byRecoveryPointCreationDateBeforeHasBeenSet; }
    inline void SetByRecoveryPointCreationDateBefore(const Aws::Utils::DateTime& value) { m_byRecoveryPointCreationDateBeforeHasBeenSet = true; m_byRecoveryPointCreationDateBefore = value; }
    inline void SetByRecoveryPointCreationDateBefore(Aws::Utils::DateTime&& value) { m_byRecoveryPointCreationDateBeforeHasBeenSet = true; m_byRecoveryPointCreationDateBefore = std::move(value); }
    inline ListRestoreJobsByProtectedResourceRequest& WithByRecoveryPointCreationDateBefore(const Aws::Utils::DateTime& value) { SetByRecoveryPointCreationDateBefore(value); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithByRecoveryPointCreationDateBefore(Aws::Utils::DateTime&& value) { SetByRecoveryPointCreationDateBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request ismade to return <code>MaxResults</code> number of items,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRestoreJobsByProtectedResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRestoreJobsByProtectedResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRestoreJobsByProtectedResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    RestoreJobStatus m_byStatus;
    bool m_byStatusHasBeenSet = false;

    Aws::Utils::DateTime m_byRecoveryPointCreationDateAfter;
    bool m_byRecoveryPointCreationDateAfterHasBeenSet = false;

    Aws::Utils::DateTime m_byRecoveryPointCreationDateBefore;
    bool m_byRecoveryPointCreationDateBeforeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
