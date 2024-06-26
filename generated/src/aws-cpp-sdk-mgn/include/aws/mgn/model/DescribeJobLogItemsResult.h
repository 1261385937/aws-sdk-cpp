﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/JobLog.h>
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
namespace mgn
{
namespace Model
{
  class DescribeJobLogItemsResult
  {
  public:
    AWS_MGN_API DescribeJobLogItemsResult();
    AWS_MGN_API DescribeJobLogItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API DescribeJobLogItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Request to describe Job log response items.</p>
     */
    inline const Aws::Vector<JobLog>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<JobLog>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<JobLog>&& value) { m_items = std::move(value); }
    inline DescribeJobLogItemsResult& WithItems(const Aws::Vector<JobLog>& value) { SetItems(value); return *this;}
    inline DescribeJobLogItemsResult& WithItems(Aws::Vector<JobLog>&& value) { SetItems(std::move(value)); return *this;}
    inline DescribeJobLogItemsResult& AddItems(const JobLog& value) { m_items.push_back(value); return *this; }
    inline DescribeJobLogItemsResult& AddItems(JobLog&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Request to describe Job log response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeJobLogItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeJobLogItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeJobLogItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobLogItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobLogItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobLogItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobLog> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
