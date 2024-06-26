﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/DetectorModelVersionSummary.h>
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
namespace IoTEvents
{
namespace Model
{
  class ListDetectorModelVersionsResult
  {
  public:
    AWS_IOTEVENTS_API ListDetectorModelVersionsResult();
    AWS_IOTEVENTS_API ListDetectorModelVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API ListDetectorModelVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the detector model versions.</p>
     */
    inline const Aws::Vector<DetectorModelVersionSummary>& GetDetectorModelVersionSummaries() const{ return m_detectorModelVersionSummaries; }
    inline void SetDetectorModelVersionSummaries(const Aws::Vector<DetectorModelVersionSummary>& value) { m_detectorModelVersionSummaries = value; }
    inline void SetDetectorModelVersionSummaries(Aws::Vector<DetectorModelVersionSummary>&& value) { m_detectorModelVersionSummaries = std::move(value); }
    inline ListDetectorModelVersionsResult& WithDetectorModelVersionSummaries(const Aws::Vector<DetectorModelVersionSummary>& value) { SetDetectorModelVersionSummaries(value); return *this;}
    inline ListDetectorModelVersionsResult& WithDetectorModelVersionSummaries(Aws::Vector<DetectorModelVersionSummary>&& value) { SetDetectorModelVersionSummaries(std::move(value)); return *this;}
    inline ListDetectorModelVersionsResult& AddDetectorModelVersionSummaries(const DetectorModelVersionSummary& value) { m_detectorModelVersionSummaries.push_back(value); return *this; }
    inline ListDetectorModelVersionsResult& AddDetectorModelVersionSummaries(DetectorModelVersionSummary&& value) { m_detectorModelVersionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results, or
     * <code>null</code> if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDetectorModelVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDetectorModelVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDetectorModelVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDetectorModelVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDetectorModelVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDetectorModelVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DetectorModelVersionSummary> m_detectorModelVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
