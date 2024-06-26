﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateEventTrackerResult
  {
  public:
    AWS_PERSONALIZE_API CreateEventTrackerResult();
    AWS_PERSONALIZE_API CreateEventTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateEventTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the event tracker.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const{ return m_eventTrackerArn; }
    inline void SetEventTrackerArn(const Aws::String& value) { m_eventTrackerArn = value; }
    inline void SetEventTrackerArn(Aws::String&& value) { m_eventTrackerArn = std::move(value); }
    inline void SetEventTrackerArn(const char* value) { m_eventTrackerArn.assign(value); }
    inline CreateEventTrackerResult& WithEventTrackerArn(const Aws::String& value) { SetEventTrackerArn(value); return *this;}
    inline CreateEventTrackerResult& WithEventTrackerArn(Aws::String&& value) { SetEventTrackerArn(std::move(value)); return *this;}
    inline CreateEventTrackerResult& WithEventTrackerArn(const char* value) { SetEventTrackerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the event tracker. Include this ID in requests to the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UBS_PutEvents.html">PutEvents</a>
     * API.</p>
     */
    inline const Aws::String& GetTrackingId() const{ return m_trackingId; }
    inline void SetTrackingId(const Aws::String& value) { m_trackingId = value; }
    inline void SetTrackingId(Aws::String&& value) { m_trackingId = std::move(value); }
    inline void SetTrackingId(const char* value) { m_trackingId.assign(value); }
    inline CreateEventTrackerResult& WithTrackingId(const Aws::String& value) { SetTrackingId(value); return *this;}
    inline CreateEventTrackerResult& WithTrackingId(Aws::String&& value) { SetTrackingId(std::move(value)); return *this;}
    inline CreateEventTrackerResult& WithTrackingId(const char* value) { SetTrackingId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEventTrackerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEventTrackerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEventTrackerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_eventTrackerArn;

    Aws::String m_trackingId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
