﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationInstanceTaskLog.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeReplicationInstanceTaskLogsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationInstanceTaskLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArn = value; }
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArn = std::move(value); }
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArn.assign(value); }
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of replication task log metadata. Each member of the array contains
     * the replication task name, ARN, and task log size (in bytes). </p>
     */
    inline const Aws::Vector<ReplicationInstanceTaskLog>& GetReplicationInstanceTaskLogs() const{ return m_replicationInstanceTaskLogs; }
    inline void SetReplicationInstanceTaskLogs(const Aws::Vector<ReplicationInstanceTaskLog>& value) { m_replicationInstanceTaskLogs = value; }
    inline void SetReplicationInstanceTaskLogs(Aws::Vector<ReplicationInstanceTaskLog>&& value) { m_replicationInstanceTaskLogs = std::move(value); }
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceTaskLogs(const Aws::Vector<ReplicationInstanceTaskLog>& value) { SetReplicationInstanceTaskLogs(value); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithReplicationInstanceTaskLogs(Aws::Vector<ReplicationInstanceTaskLog>&& value) { SetReplicationInstanceTaskLogs(std::move(value)); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& AddReplicationInstanceTaskLogs(const ReplicationInstanceTaskLog& value) { m_replicationInstanceTaskLogs.push_back(value); return *this; }
    inline DescribeReplicationInstanceTaskLogsResult& AddReplicationInstanceTaskLogs(ReplicationInstanceTaskLog&& value) { m_replicationInstanceTaskLogs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeReplicationInstanceTaskLogsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReplicationInstanceTaskLogsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReplicationInstanceTaskLogsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceArn;

    Aws::Vector<ReplicationInstanceTaskLog> m_replicationInstanceTaskLogs;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
