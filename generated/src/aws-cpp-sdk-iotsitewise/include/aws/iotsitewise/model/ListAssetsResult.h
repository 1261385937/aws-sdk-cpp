﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetSummary.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetsResult();
    AWS_IOTSITEWISE_API ListAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline const Aws::Vector<AssetSummary>& GetAssetSummaries() const{ return m_assetSummaries; }
    inline void SetAssetSummaries(const Aws::Vector<AssetSummary>& value) { m_assetSummaries = value; }
    inline void SetAssetSummaries(Aws::Vector<AssetSummary>&& value) { m_assetSummaries = std::move(value); }
    inline ListAssetsResult& WithAssetSummaries(const Aws::Vector<AssetSummary>& value) { SetAssetSummaries(value); return *this;}
    inline ListAssetsResult& WithAssetSummaries(Aws::Vector<AssetSummary>&& value) { SetAssetSummaries(std::move(value)); return *this;}
    inline ListAssetsResult& AddAssetSummaries(const AssetSummary& value) { m_assetSummaries.push_back(value); return *this; }
    inline ListAssetsResult& AddAssetSummaries(AssetSummary&& value) { m_assetSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetSummary> m_assetSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
