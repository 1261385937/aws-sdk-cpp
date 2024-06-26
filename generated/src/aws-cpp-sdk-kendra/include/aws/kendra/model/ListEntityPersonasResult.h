﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/PersonasSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListEntityPersonasResult
  {
  public:
    AWS_KENDRA_API ListEntityPersonasResult();
    AWS_KENDRA_API ListEntityPersonasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListEntityPersonasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more users or groups.</p>
     */
    inline const Aws::Vector<PersonasSummary>& GetSummaryItems() const{ return m_summaryItems; }
    inline void SetSummaryItems(const Aws::Vector<PersonasSummary>& value) { m_summaryItems = value; }
    inline void SetSummaryItems(Aws::Vector<PersonasSummary>&& value) { m_summaryItems = std::move(value); }
    inline ListEntityPersonasResult& WithSummaryItems(const Aws::Vector<PersonasSummary>& value) { SetSummaryItems(value); return *this;}
    inline ListEntityPersonasResult& WithSummaryItems(Aws::Vector<PersonasSummary>&& value) { SetSummaryItems(std::move(value)); return *this;}
    inline ListEntityPersonasResult& AddSummaryItems(const PersonasSummary& value) { m_summaryItems.push_back(value); return *this; }
    inline ListEntityPersonasResult& AddSummaryItems(PersonasSummary&& value) { m_summaryItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of users or groups.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEntityPersonasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEntityPersonasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEntityPersonasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEntityPersonasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEntityPersonasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEntityPersonasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PersonasSummary> m_summaryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
