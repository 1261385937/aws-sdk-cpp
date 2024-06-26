﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ReferenceListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListReferencesResult
  {
  public:
    AWS_OMICS_API ListReferencesResult();
    AWS_OMICS_API ListReferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of references.</p>
     */
    inline const Aws::Vector<ReferenceListItem>& GetReferences() const{ return m_references; }
    inline void SetReferences(const Aws::Vector<ReferenceListItem>& value) { m_references = value; }
    inline void SetReferences(Aws::Vector<ReferenceListItem>&& value) { m_references = std::move(value); }
    inline ListReferencesResult& WithReferences(const Aws::Vector<ReferenceListItem>& value) { SetReferences(value); return *this;}
    inline ListReferencesResult& WithReferences(Aws::Vector<ReferenceListItem>&& value) { SetReferences(std::move(value)); return *this;}
    inline ListReferencesResult& AddReferences(const ReferenceListItem& value) { m_references.push_back(value); return *this; }
    inline ListReferencesResult& AddReferences(ReferenceListItem&& value) { m_references.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ReferenceListItem> m_references;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
