﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensShareSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListLensSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListLensSharesResult();
    AWS_WELLARCHITECTED_API ListLensSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListLensSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lens share summaries.</p>
     */
    inline const Aws::Vector<LensShareSummary>& GetLensShareSummaries() const{ return m_lensShareSummaries; }
    inline void SetLensShareSummaries(const Aws::Vector<LensShareSummary>& value) { m_lensShareSummaries = value; }
    inline void SetLensShareSummaries(Aws::Vector<LensShareSummary>&& value) { m_lensShareSummaries = std::move(value); }
    inline ListLensSharesResult& WithLensShareSummaries(const Aws::Vector<LensShareSummary>& value) { SetLensShareSummaries(value); return *this;}
    inline ListLensSharesResult& WithLensShareSummaries(Aws::Vector<LensShareSummary>&& value) { SetLensShareSummaries(std::move(value)); return *this;}
    inline ListLensSharesResult& AddLensShareSummaries(const LensShareSummary& value) { m_lensShareSummaries.push_back(value); return *this; }
    inline ListLensSharesResult& AddLensShareSummaries(LensShareSummary&& value) { m_lensShareSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLensSharesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLensSharesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLensSharesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLensSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLensSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLensSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LensShareSummary> m_lensShareSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
