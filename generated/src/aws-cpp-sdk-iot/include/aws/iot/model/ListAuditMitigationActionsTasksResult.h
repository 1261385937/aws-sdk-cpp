﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsTaskMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class ListAuditMitigationActionsTasksResult
  {
  public:
    AWS_IOT_API ListAuditMitigationActionsTasksResult();
    AWS_IOT_API ListAuditMitigationActionsTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditMitigationActionsTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline const Aws::Vector<AuditMitigationActionsTaskMetadata>& GetTasks() const{ return m_tasks; }
    inline void SetTasks(const Aws::Vector<AuditMitigationActionsTaskMetadata>& value) { m_tasks = value; }
    inline void SetTasks(Aws::Vector<AuditMitigationActionsTaskMetadata>&& value) { m_tasks = std::move(value); }
    inline ListAuditMitigationActionsTasksResult& WithTasks(const Aws::Vector<AuditMitigationActionsTaskMetadata>& value) { SetTasks(value); return *this;}
    inline ListAuditMitigationActionsTasksResult& WithTasks(Aws::Vector<AuditMitigationActionsTaskMetadata>&& value) { SetTasks(std::move(value)); return *this;}
    inline ListAuditMitigationActionsTasksResult& AddTasks(const AuditMitigationActionsTaskMetadata& value) { m_tasks.push_back(value); return *this; }
    inline ListAuditMitigationActionsTasksResult& AddTasks(AuditMitigationActionsTaskMetadata&& value) { m_tasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAuditMitigationActionsTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAuditMitigationActionsTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAuditMitigationActionsTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAuditMitigationActionsTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAuditMitigationActionsTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAuditMitigationActionsTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AuditMitigationActionsTaskMetadata> m_tasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
