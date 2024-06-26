﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ExecutionRecord.h>
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
namespace Appflow
{
namespace Model
{
  class DescribeFlowExecutionRecordsResult
  {
  public:
    AWS_APPFLOW_API DescribeFlowExecutionRecordsResult();
    AWS_APPFLOW_API DescribeFlowExecutionRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeFlowExecutionRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns a list of all instances when this flow was run. </p>
     */
    inline const Aws::Vector<ExecutionRecord>& GetFlowExecutions() const{ return m_flowExecutions; }
    inline void SetFlowExecutions(const Aws::Vector<ExecutionRecord>& value) { m_flowExecutions = value; }
    inline void SetFlowExecutions(Aws::Vector<ExecutionRecord>&& value) { m_flowExecutions = std::move(value); }
    inline DescribeFlowExecutionRecordsResult& WithFlowExecutions(const Aws::Vector<ExecutionRecord>& value) { SetFlowExecutions(value); return *this;}
    inline DescribeFlowExecutionRecordsResult& WithFlowExecutions(Aws::Vector<ExecutionRecord>&& value) { SetFlowExecutions(std::move(value)); return *this;}
    inline DescribeFlowExecutionRecordsResult& AddFlowExecutions(const ExecutionRecord& value) { m_flowExecutions.push_back(value); return *this; }
    inline DescribeFlowExecutionRecordsResult& AddFlowExecutions(ExecutionRecord&& value) { m_flowExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFlowExecutionRecordsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFlowExecutionRecordsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFlowExecutionRecordsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFlowExecutionRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFlowExecutionRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFlowExecutionRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionRecord> m_flowExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
