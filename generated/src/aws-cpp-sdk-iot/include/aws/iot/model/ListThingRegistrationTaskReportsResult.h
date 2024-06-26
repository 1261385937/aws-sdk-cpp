﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/ReportType.h>
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
namespace IoT
{
namespace Model
{
  class ListThingRegistrationTaskReportsResult
  {
  public:
    AWS_IOT_API ListThingRegistrationTaskReportsResult();
    AWS_IOT_API ListThingRegistrationTaskReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingRegistrationTaskReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Links to the task resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceLinks() const{ return m_resourceLinks; }
    inline void SetResourceLinks(const Aws::Vector<Aws::String>& value) { m_resourceLinks = value; }
    inline void SetResourceLinks(Aws::Vector<Aws::String>&& value) { m_resourceLinks = std::move(value); }
    inline ListThingRegistrationTaskReportsResult& WithResourceLinks(const Aws::Vector<Aws::String>& value) { SetResourceLinks(value); return *this;}
    inline ListThingRegistrationTaskReportsResult& WithResourceLinks(Aws::Vector<Aws::String>&& value) { SetResourceLinks(std::move(value)); return *this;}
    inline ListThingRegistrationTaskReportsResult& AddResourceLinks(const Aws::String& value) { m_resourceLinks.push_back(value); return *this; }
    inline ListThingRegistrationTaskReportsResult& AddResourceLinks(Aws::String&& value) { m_resourceLinks.push_back(std::move(value)); return *this; }
    inline ListThingRegistrationTaskReportsResult& AddResourceLinks(const char* value) { m_resourceLinks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of task report.</p>
     */
    inline const ReportType& GetReportType() const{ return m_reportType; }
    inline void SetReportType(const ReportType& value) { m_reportType = value; }
    inline void SetReportType(ReportType&& value) { m_reportType = std::move(value); }
    inline ListThingRegistrationTaskReportsResult& WithReportType(const ReportType& value) { SetReportType(value); return *this;}
    inline ListThingRegistrationTaskReportsResult& WithReportType(ReportType&& value) { SetReportType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListThingRegistrationTaskReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListThingRegistrationTaskReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListThingRegistrationTaskReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListThingRegistrationTaskReportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListThingRegistrationTaskReportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListThingRegistrationTaskReportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceLinks;

    ReportType m_reportType;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
