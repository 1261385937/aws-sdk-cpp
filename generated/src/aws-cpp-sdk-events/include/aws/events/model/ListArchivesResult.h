﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/Archive.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class ListArchivesResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListArchivesResult();
    AWS_CLOUDWATCHEVENTS_API ListArchivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListArchivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Archive</code> objects that include details about an
     * archive.</p>
     */
    inline const Aws::Vector<Archive>& GetArchives() const{ return m_archives; }
    inline void SetArchives(const Aws::Vector<Archive>& value) { m_archives = value; }
    inline void SetArchives(Aws::Vector<Archive>&& value) { m_archives = std::move(value); }
    inline ListArchivesResult& WithArchives(const Aws::Vector<Archive>& value) { SetArchives(value); return *this;}
    inline ListArchivesResult& WithArchives(Aws::Vector<Archive>&& value) { SetArchives(std::move(value)); return *this;}
    inline ListArchivesResult& AddArchives(const Archive& value) { m_archives.push_back(value); return *this; }
    inline ListArchivesResult& AddArchives(Archive&& value) { m_archives.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListArchivesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListArchivesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListArchivesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListArchivesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListArchivesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListArchivesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Archive> m_archives;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
