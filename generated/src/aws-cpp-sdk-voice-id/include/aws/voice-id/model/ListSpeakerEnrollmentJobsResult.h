﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/SpeakerEnrollmentJobSummary.h>
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
namespace VoiceID
{
namespace Model
{
  class ListSpeakerEnrollmentJobsResult
  {
  public:
    AWS_VOICEID_API ListSpeakerEnrollmentJobsResult();
    AWS_VOICEID_API ListSpeakerEnrollmentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListSpeakerEnrollmentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing details about each specified speaker enrollment job.</p>
     */
    inline const Aws::Vector<SpeakerEnrollmentJobSummary>& GetJobSummaries() const{ return m_jobSummaries; }
    inline void SetJobSummaries(const Aws::Vector<SpeakerEnrollmentJobSummary>& value) { m_jobSummaries = value; }
    inline void SetJobSummaries(Aws::Vector<SpeakerEnrollmentJobSummary>&& value) { m_jobSummaries = std::move(value); }
    inline ListSpeakerEnrollmentJobsResult& WithJobSummaries(const Aws::Vector<SpeakerEnrollmentJobSummary>& value) { SetJobSummaries(value); return *this;}
    inline ListSpeakerEnrollmentJobsResult& WithJobSummaries(Aws::Vector<SpeakerEnrollmentJobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}
    inline ListSpeakerEnrollmentJobsResult& AddJobSummaries(const SpeakerEnrollmentJobSummary& value) { m_jobSummaries.push_back(value); return *this; }
    inline ListSpeakerEnrollmentJobsResult& AddJobSummaries(SpeakerEnrollmentJobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSpeakerEnrollmentJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSpeakerEnrollmentJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSpeakerEnrollmentJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSpeakerEnrollmentJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSpeakerEnrollmentJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSpeakerEnrollmentJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SpeakerEnrollmentJobSummary> m_jobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
