﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class SearchDataSetsResult
  {
  public:
    AWS_QUICKSIGHT_API SearchDataSetsResult();
    AWS_QUICKSIGHT_API SearchDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API SearchDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>DataSetSummaries</code> object that returns a summary of a
     * dataset.</p>
     */
    inline const Aws::Vector<DataSetSummary>& GetDataSetSummaries() const{ return m_dataSetSummaries; }
    inline void SetDataSetSummaries(const Aws::Vector<DataSetSummary>& value) { m_dataSetSummaries = value; }
    inline void SetDataSetSummaries(Aws::Vector<DataSetSummary>&& value) { m_dataSetSummaries = std::move(value); }
    inline SearchDataSetsResult& WithDataSetSummaries(const Aws::Vector<DataSetSummary>& value) { SetDataSetSummaries(value); return *this;}
    inline SearchDataSetsResult& WithDataSetSummaries(Aws::Vector<DataSetSummary>&& value) { SetDataSetSummaries(std::move(value)); return *this;}
    inline SearchDataSetsResult& AddDataSetSummaries(const DataSetSummary& value) { m_dataSetSummaries.push_back(value); return *this; }
    inline SearchDataSetsResult& AddDataSetSummaries(DataSetSummary&& value) { m_dataSetSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchDataSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchDataSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchDataSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline SearchDataSetsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchDataSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchDataSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchDataSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetSummary> m_dataSetSummaries;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
