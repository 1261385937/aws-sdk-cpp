﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListFleetsForVehicleResult
  {
  public:
    AWS_IOTFLEETWISE_API ListFleetsForVehicleResult();
    AWS_IOTFLEETWISE_API ListFleetsForVehicleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListFleetsForVehicleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of fleet IDs that the vehicle is associated with. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFleets() const{ return m_fleets; }
    inline void SetFleets(const Aws::Vector<Aws::String>& value) { m_fleets = value; }
    inline void SetFleets(Aws::Vector<Aws::String>&& value) { m_fleets = std::move(value); }
    inline ListFleetsForVehicleResult& WithFleets(const Aws::Vector<Aws::String>& value) { SetFleets(value); return *this;}
    inline ListFleetsForVehicleResult& WithFleets(Aws::Vector<Aws::String>&& value) { SetFleets(std::move(value)); return *this;}
    inline ListFleetsForVehicleResult& AddFleets(const Aws::String& value) { m_fleets.push_back(value); return *this; }
    inline ListFleetsForVehicleResult& AddFleets(Aws::String&& value) { m_fleets.push_back(std::move(value)); return *this; }
    inline ListFleetsForVehicleResult& AddFleets(const char* value) { m_fleets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFleetsForVehicleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFleetsForVehicleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFleetsForVehicleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFleetsForVehicleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFleetsForVehicleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFleetsForVehicleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fleets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
