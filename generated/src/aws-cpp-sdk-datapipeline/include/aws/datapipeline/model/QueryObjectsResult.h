﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of QueryObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjectsOutput">AWS
   * API Reference</a></p>
   */
  class QueryObjectsResult
  {
  public:
    AWS_DATAPIPELINE_API QueryObjectsResult();
    AWS_DATAPIPELINE_API QueryObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API QueryObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }
    inline QueryObjectsResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}
    inline QueryObjectsResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}
    inline QueryObjectsResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }
    inline QueryObjectsResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }
    inline QueryObjectsResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline QueryObjectsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline QueryObjectsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline QueryObjectsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline bool GetHasMoreResults() const{ return m_hasMoreResults; }
    inline void SetHasMoreResults(bool value) { m_hasMoreResults = value; }
    inline QueryObjectsResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline QueryObjectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline QueryObjectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline QueryObjectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::String m_marker;

    bool m_hasMoreResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
