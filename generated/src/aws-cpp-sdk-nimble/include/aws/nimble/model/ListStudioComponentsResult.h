﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StudioComponent.h>
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
  class ListStudioComponentsResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStudioComponentsResult();
    AWS_NIMBLESTUDIO_API ListStudioComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStudioComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStudioComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStudioComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStudioComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of studio components.</p>
     */
    inline const Aws::Vector<StudioComponent>& GetStudioComponents() const{ return m_studioComponents; }
    inline void SetStudioComponents(const Aws::Vector<StudioComponent>& value) { m_studioComponents = value; }
    inline void SetStudioComponents(Aws::Vector<StudioComponent>&& value) { m_studioComponents = std::move(value); }
    inline ListStudioComponentsResult& WithStudioComponents(const Aws::Vector<StudioComponent>& value) { SetStudioComponents(value); return *this;}
    inline ListStudioComponentsResult& WithStudioComponents(Aws::Vector<StudioComponent>&& value) { SetStudioComponents(std::move(value)); return *this;}
    inline ListStudioComponentsResult& AddStudioComponents(const StudioComponent& value) { m_studioComponents.push_back(value); return *this; }
    inline ListStudioComponentsResult& AddStudioComponents(StudioComponent&& value) { m_studioComponents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStudioComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStudioComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStudioComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<StudioComponent> m_studioComponents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
