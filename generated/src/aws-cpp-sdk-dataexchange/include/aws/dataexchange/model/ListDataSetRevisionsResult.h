﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/RevisionEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListDataSetRevisionsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListDataSetRevisionsResult();
    AWS_DATAEXCHANGE_API ListDataSetRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListDataSetRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataSetRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSetRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSetRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline const Aws::Vector<RevisionEntry>& GetRevisions() const{ return m_revisions; }
    inline void SetRevisions(const Aws::Vector<RevisionEntry>& value) { m_revisions = value; }
    inline void SetRevisions(Aws::Vector<RevisionEntry>&& value) { m_revisions = std::move(value); }
    inline ListDataSetRevisionsResult& WithRevisions(const Aws::Vector<RevisionEntry>& value) { SetRevisions(value); return *this;}
    inline ListDataSetRevisionsResult& WithRevisions(Aws::Vector<RevisionEntry>&& value) { SetRevisions(std::move(value)); return *this;}
    inline ListDataSetRevisionsResult& AddRevisions(const RevisionEntry& value) { m_revisions.push_back(value); return *this; }
    inline ListDataSetRevisionsResult& AddRevisions(RevisionEntry&& value) { m_revisions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataSetRevisionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataSetRevisionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataSetRevisionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RevisionEntry> m_revisions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
