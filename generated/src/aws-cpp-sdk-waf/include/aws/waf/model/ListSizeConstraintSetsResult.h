﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SizeConstraintSetSummary.h>
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
namespace WAF
{
namespace Model
{
  class ListSizeConstraintSetsResult
  {
  public:
    AWS_WAF_API ListSizeConstraintSetsResult();
    AWS_WAF_API ListSizeConstraintSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListSizeConstraintSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListSizeConstraintSetsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListSizeConstraintSetsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListSizeConstraintSetsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<SizeConstraintSetSummary>& GetSizeConstraintSets() const{ return m_sizeConstraintSets; }
    inline void SetSizeConstraintSets(const Aws::Vector<SizeConstraintSetSummary>& value) { m_sizeConstraintSets = value; }
    inline void SetSizeConstraintSets(Aws::Vector<SizeConstraintSetSummary>&& value) { m_sizeConstraintSets = std::move(value); }
    inline ListSizeConstraintSetsResult& WithSizeConstraintSets(const Aws::Vector<SizeConstraintSetSummary>& value) { SetSizeConstraintSets(value); return *this;}
    inline ListSizeConstraintSetsResult& WithSizeConstraintSets(Aws::Vector<SizeConstraintSetSummary>&& value) { SetSizeConstraintSets(std::move(value)); return *this;}
    inline ListSizeConstraintSetsResult& AddSizeConstraintSets(const SizeConstraintSetSummary& value) { m_sizeConstraintSets.push_back(value); return *this; }
    inline ListSizeConstraintSetsResult& AddSizeConstraintSets(SizeConstraintSetSummary&& value) { m_sizeConstraintSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSizeConstraintSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSizeConstraintSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSizeConstraintSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<SizeConstraintSetSummary> m_sizeConstraintSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
