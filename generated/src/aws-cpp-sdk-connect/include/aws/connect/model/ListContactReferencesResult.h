﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ReferenceSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListContactReferencesResult
  {
  public:
    AWS_CONNECT_API ListContactReferencesResult();
    AWS_CONNECT_API ListContactReferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactReferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the flows.</p>
     */
    inline const Aws::Vector<ReferenceSummary>& GetReferenceSummaryList() const{ return m_referenceSummaryList; }
    inline void SetReferenceSummaryList(const Aws::Vector<ReferenceSummary>& value) { m_referenceSummaryList = value; }
    inline void SetReferenceSummaryList(Aws::Vector<ReferenceSummary>&& value) { m_referenceSummaryList = std::move(value); }
    inline ListContactReferencesResult& WithReferenceSummaryList(const Aws::Vector<ReferenceSummary>& value) { SetReferenceSummaryList(value); return *this;}
    inline ListContactReferencesResult& WithReferenceSummaryList(Aws::Vector<ReferenceSummary>&& value) { SetReferenceSummaryList(std::move(value)); return *this;}
    inline ListContactReferencesResult& AddReferenceSummaryList(const ReferenceSummary& value) { m_referenceSummaryList.push_back(value); return *this; }
    inline ListContactReferencesResult& AddReferenceSummaryList(ReferenceSummary&& value) { m_referenceSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>  <p>This is always returned as null in the response.</p>
     * 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListContactReferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContactReferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContactReferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContactReferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContactReferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContactReferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ReferenceSummary> m_referenceSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
