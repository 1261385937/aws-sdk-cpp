﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class ListReplicatorsRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API ListReplicatorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReplicators"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;

    AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in the response. If there are more
     * results, the response includes a NextToken parameter.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReplicatorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListReplicatorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReplicatorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReplicatorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns replicators starting with given name.</p>
     */
    inline const Aws::String& GetReplicatorNameFilter() const{ return m_replicatorNameFilter; }
    inline bool ReplicatorNameFilterHasBeenSet() const { return m_replicatorNameFilterHasBeenSet; }
    inline void SetReplicatorNameFilter(const Aws::String& value) { m_replicatorNameFilterHasBeenSet = true; m_replicatorNameFilter = value; }
    inline void SetReplicatorNameFilter(Aws::String&& value) { m_replicatorNameFilterHasBeenSet = true; m_replicatorNameFilter = std::move(value); }
    inline void SetReplicatorNameFilter(const char* value) { m_replicatorNameFilterHasBeenSet = true; m_replicatorNameFilter.assign(value); }
    inline ListReplicatorsRequest& WithReplicatorNameFilter(const Aws::String& value) { SetReplicatorNameFilter(value); return *this;}
    inline ListReplicatorsRequest& WithReplicatorNameFilter(Aws::String&& value) { SetReplicatorNameFilter(std::move(value)); return *this;}
    inline ListReplicatorsRequest& WithReplicatorNameFilter(const char* value) { SetReplicatorNameFilter(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_replicatorNameFilter;
    bool m_replicatorNameFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
