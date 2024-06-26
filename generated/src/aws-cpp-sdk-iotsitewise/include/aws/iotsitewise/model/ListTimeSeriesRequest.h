﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ListTimeSeriesType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListTimeSeriesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListTimeSeriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTimeSeries"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTimeSeriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTimeSeriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTimeSeriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTimeSeriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset in which the asset property was created. This can be
     * either the actual ID in UUID format, or else <code>externalId:</code> followed
     * by the external ID, if it has one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline ListTimeSeriesRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline ListTimeSeriesRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline ListTimeSeriesRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias prefix of the time series.</p>
     */
    inline const Aws::String& GetAliasPrefix() const{ return m_aliasPrefix; }
    inline bool AliasPrefixHasBeenSet() const { return m_aliasPrefixHasBeenSet; }
    inline void SetAliasPrefix(const Aws::String& value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix = value; }
    inline void SetAliasPrefix(Aws::String&& value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix = std::move(value); }
    inline void SetAliasPrefix(const char* value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix.assign(value); }
    inline ListTimeSeriesRequest& WithAliasPrefix(const Aws::String& value) { SetAliasPrefix(value); return *this;}
    inline ListTimeSeriesRequest& WithAliasPrefix(Aws::String&& value) { SetAliasPrefix(std::move(value)); return *this;}
    inline ListTimeSeriesRequest& WithAliasPrefix(const char* value) { SetAliasPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the time series. The time series type can be one of the following
     * values:</p> <ul> <li> <p> <code>ASSOCIATED</code> – The time series is
     * associated with an asset property.</p> </li> <li> <p> <code>DISASSOCIATED</code>
     * – The time series isn't associated with any asset property.</p> </li> </ul>
     */
    inline const ListTimeSeriesType& GetTimeSeriesType() const{ return m_timeSeriesType; }
    inline bool TimeSeriesTypeHasBeenSet() const { return m_timeSeriesTypeHasBeenSet; }
    inline void SetTimeSeriesType(const ListTimeSeriesType& value) { m_timeSeriesTypeHasBeenSet = true; m_timeSeriesType = value; }
    inline void SetTimeSeriesType(ListTimeSeriesType&& value) { m_timeSeriesTypeHasBeenSet = true; m_timeSeriesType = std::move(value); }
    inline ListTimeSeriesRequest& WithTimeSeriesType(const ListTimeSeriesType& value) { SetTimeSeriesType(value); return *this;}
    inline ListTimeSeriesRequest& WithTimeSeriesType(ListTimeSeriesType&& value) { SetTimeSeriesType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_aliasPrefix;
    bool m_aliasPrefixHasBeenSet = false;

    ListTimeSeriesType m_timeSeriesType;
    bool m_timeSeriesTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
