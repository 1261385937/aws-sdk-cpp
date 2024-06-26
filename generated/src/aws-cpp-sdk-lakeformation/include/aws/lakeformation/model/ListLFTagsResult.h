﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagPair.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API ListLFTagsResult();
    AWS_LAKEFORMATION_API ListLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of LF-tags that the requested has permission to view.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const{ return m_lFTags; }
    inline void SetLFTags(const Aws::Vector<LFTagPair>& value) { m_lFTags = value; }
    inline void SetLFTags(Aws::Vector<LFTagPair>&& value) { m_lFTags = std::move(value); }
    inline ListLFTagsResult& WithLFTags(const Aws::Vector<LFTagPair>& value) { SetLFTags(value); return *this;}
    inline ListLFTagsResult& WithLFTags(Aws::Vector<LFTagPair>&& value) { SetLFTags(std::move(value)); return *this;}
    inline ListLFTagsResult& AddLFTags(const LFTagPair& value) { m_lFTags.push_back(value); return *this; }
    inline ListLFTagsResult& AddLFTags(LFTagPair&& value) { m_lFTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLFTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLFTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLFTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLFTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLFTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLFTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LFTagPair> m_lFTags;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
