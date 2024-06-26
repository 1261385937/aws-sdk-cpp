﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HIT.h>
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
namespace MTurk
{
namespace Model
{
  class ListHITsResult
  {
  public:
    AWS_MTURK_API ListHITsResult();
    AWS_MTURK_API ListHITsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListHITsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHITsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHITsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHITsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of HITs on this page in the filtered results list, equivalent to
     * the number of HITs being returned by this call.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline void SetNumResults(int value) { m_numResults = value; }
    inline ListHITsResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline const Aws::Vector<HIT>& GetHITs() const{ return m_hITs; }
    inline void SetHITs(const Aws::Vector<HIT>& value) { m_hITs = value; }
    inline void SetHITs(Aws::Vector<HIT>&& value) { m_hITs = std::move(value); }
    inline ListHITsResult& WithHITs(const Aws::Vector<HIT>& value) { SetHITs(value); return *this;}
    inline ListHITsResult& WithHITs(Aws::Vector<HIT>&& value) { SetHITs(std::move(value)); return *this;}
    inline ListHITsResult& AddHITs(const HIT& value) { m_hITs.push_back(value); return *this; }
    inline ListHITsResult& AddHITs(HIT&& value) { m_hITs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHITsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHITsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHITsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    int m_numResults;

    Aws::Vector<HIT> m_hITs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
