﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/ReservationPurchaseRecommendationMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/ReservationPurchaseRecommendation.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetReservationPurchaseRecommendationResult
  {
  public:
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult();
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetReservationPurchaseRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about this specific recommendation call, such as the time stamp
     * for when Cost Explorer generated this recommendation.</p>
     */
    inline const ReservationPurchaseRecommendationMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const ReservationPurchaseRecommendationMetadata& value) { m_metadata = value; }
    inline void SetMetadata(ReservationPurchaseRecommendationMetadata&& value) { m_metadata = std::move(value); }
    inline GetReservationPurchaseRecommendationResult& WithMetadata(const ReservationPurchaseRecommendationMetadata& value) { SetMetadata(value); return *this;}
    inline GetReservationPurchaseRecommendationResult& WithMetadata(ReservationPurchaseRecommendationMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recommendations for reservations to purchase.</p>
     */
    inline const Aws::Vector<ReservationPurchaseRecommendation>& GetRecommendations() const{ return m_recommendations; }
    inline void SetRecommendations(const Aws::Vector<ReservationPurchaseRecommendation>& value) { m_recommendations = value; }
    inline void SetRecommendations(Aws::Vector<ReservationPurchaseRecommendation>&& value) { m_recommendations = std::move(value); }
    inline GetReservationPurchaseRecommendationResult& WithRecommendations(const Aws::Vector<ReservationPurchaseRecommendation>& value) { SetRecommendations(value); return *this;}
    inline GetReservationPurchaseRecommendationResult& WithRecommendations(Aws::Vector<ReservationPurchaseRecommendation>&& value) { SetRecommendations(std::move(value)); return *this;}
    inline GetReservationPurchaseRecommendationResult& AddRecommendations(const ReservationPurchaseRecommendation& value) { m_recommendations.push_back(value); return *this; }
    inline GetReservationPurchaseRecommendationResult& AddRecommendations(ReservationPurchaseRecommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the next set of retrievable results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetReservationPurchaseRecommendationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetReservationPurchaseRecommendationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetReservationPurchaseRecommendationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReservationPurchaseRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReservationPurchaseRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReservationPurchaseRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReservationPurchaseRecommendationMetadata m_metadata;

    Aws::Vector<ReservationPurchaseRecommendation> m_recommendations;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
