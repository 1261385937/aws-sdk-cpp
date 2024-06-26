﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfile.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StreamingImage.h>
#include <aws/nimble/model/StudioComponentSummary.h>
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
namespace NimbleStudio
{
namespace Model
{
  class GetLaunchProfileDetailsResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetLaunchProfileDetailsResult();
    AWS_NIMBLESTUDIO_API GetLaunchProfileDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetLaunchProfileDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The launch profile.</p>
     */
    inline const LaunchProfile& GetLaunchProfile() const{ return m_launchProfile; }
    inline void SetLaunchProfile(const LaunchProfile& value) { m_launchProfile = value; }
    inline void SetLaunchProfile(LaunchProfile&& value) { m_launchProfile = std::move(value); }
    inline GetLaunchProfileDetailsResult& WithLaunchProfile(const LaunchProfile& value) { SetLaunchProfile(value); return *this;}
    inline GetLaunchProfileDetailsResult& WithLaunchProfile(LaunchProfile&& value) { SetLaunchProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of streaming images.</p>
     */
    inline const Aws::Vector<StreamingImage>& GetStreamingImages() const{ return m_streamingImages; }
    inline void SetStreamingImages(const Aws::Vector<StreamingImage>& value) { m_streamingImages = value; }
    inline void SetStreamingImages(Aws::Vector<StreamingImage>&& value) { m_streamingImages = std::move(value); }
    inline GetLaunchProfileDetailsResult& WithStreamingImages(const Aws::Vector<StreamingImage>& value) { SetStreamingImages(value); return *this;}
    inline GetLaunchProfileDetailsResult& WithStreamingImages(Aws::Vector<StreamingImage>&& value) { SetStreamingImages(std::move(value)); return *this;}
    inline GetLaunchProfileDetailsResult& AddStreamingImages(const StreamingImage& value) { m_streamingImages.push_back(value); return *this; }
    inline GetLaunchProfileDetailsResult& AddStreamingImages(StreamingImage&& value) { m_streamingImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of studio component summaries.</p>
     */
    inline const Aws::Vector<StudioComponentSummary>& GetStudioComponentSummaries() const{ return m_studioComponentSummaries; }
    inline void SetStudioComponentSummaries(const Aws::Vector<StudioComponentSummary>& value) { m_studioComponentSummaries = value; }
    inline void SetStudioComponentSummaries(Aws::Vector<StudioComponentSummary>&& value) { m_studioComponentSummaries = std::move(value); }
    inline GetLaunchProfileDetailsResult& WithStudioComponentSummaries(const Aws::Vector<StudioComponentSummary>& value) { SetStudioComponentSummaries(value); return *this;}
    inline GetLaunchProfileDetailsResult& WithStudioComponentSummaries(Aws::Vector<StudioComponentSummary>&& value) { SetStudioComponentSummaries(std::move(value)); return *this;}
    inline GetLaunchProfileDetailsResult& AddStudioComponentSummaries(const StudioComponentSummary& value) { m_studioComponentSummaries.push_back(value); return *this; }
    inline GetLaunchProfileDetailsResult& AddStudioComponentSummaries(StudioComponentSummary&& value) { m_studioComponentSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLaunchProfileDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLaunchProfileDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLaunchProfileDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LaunchProfile m_launchProfile;

    Aws::Vector<StreamingImage> m_streamingImages;

    Aws::Vector<StudioComponentSummary> m_studioComponentSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
