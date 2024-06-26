﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentTemplateSummary.h>
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
namespace FIS
{
namespace Model
{
  class ListExperimentTemplatesResult
  {
  public:
    AWS_FIS_API ListExperimentTemplatesResult();
    AWS_FIS_API ListExperimentTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListExperimentTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The experiment templates.</p>
     */
    inline const Aws::Vector<ExperimentTemplateSummary>& GetExperimentTemplates() const{ return m_experimentTemplates; }
    inline void SetExperimentTemplates(const Aws::Vector<ExperimentTemplateSummary>& value) { m_experimentTemplates = value; }
    inline void SetExperimentTemplates(Aws::Vector<ExperimentTemplateSummary>&& value) { m_experimentTemplates = std::move(value); }
    inline ListExperimentTemplatesResult& WithExperimentTemplates(const Aws::Vector<ExperimentTemplateSummary>& value) { SetExperimentTemplates(value); return *this;}
    inline ListExperimentTemplatesResult& WithExperimentTemplates(Aws::Vector<ExperimentTemplateSummary>&& value) { SetExperimentTemplates(std::move(value)); return *this;}
    inline ListExperimentTemplatesResult& AddExperimentTemplates(const ExperimentTemplateSummary& value) { m_experimentTemplates.push_back(value); return *this; }
    inline ListExperimentTemplatesResult& AddExperimentTemplates(ExperimentTemplateSummary&& value) { m_experimentTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListExperimentTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExperimentTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExperimentTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListExperimentTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListExperimentTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListExperimentTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExperimentTemplateSummary> m_experimentTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
