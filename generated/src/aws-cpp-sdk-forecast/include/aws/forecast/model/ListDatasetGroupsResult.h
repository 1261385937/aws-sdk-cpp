﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DatasetGroupSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListDatasetGroupsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult();
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListDatasetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize each dataset group's properties.</p>
     */
    inline const Aws::Vector<DatasetGroupSummary>& GetDatasetGroups() const{ return m_datasetGroups; }
    inline void SetDatasetGroups(const Aws::Vector<DatasetGroupSummary>& value) { m_datasetGroups = value; }
    inline void SetDatasetGroups(Aws::Vector<DatasetGroupSummary>&& value) { m_datasetGroups = std::move(value); }
    inline ListDatasetGroupsResult& WithDatasetGroups(const Aws::Vector<DatasetGroupSummary>& value) { SetDatasetGroups(value); return *this;}
    inline ListDatasetGroupsResult& WithDatasetGroups(Aws::Vector<DatasetGroupSummary>&& value) { SetDatasetGroups(std::move(value)); return *this;}
    inline ListDatasetGroupsResult& AddDatasetGroups(const DatasetGroupSummary& value) { m_datasetGroups.push_back(value); return *this; }
    inline ListDatasetGroupsResult& AddDatasetGroups(DatasetGroupSummary&& value) { m_datasetGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Forecast returns this token. To retrieve
     * the next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDatasetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDatasetGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDatasetGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDatasetGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetGroupSummary> m_datasetGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
