﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/EnvironmentTemplateSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListEnvironmentTemplatesResult
  {
  public:
    AWS_PROTON_API ListEnvironmentTemplatesResult();
    AWS_PROTON_API ListEnvironmentTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next environment template in the
     * array of environment templates, after the current requested list of environment
     * templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEnvironmentTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEnvironmentTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEnvironmentTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of environment templates with detail data.</p>
     */
    inline const Aws::Vector<EnvironmentTemplateSummary>& GetTemplates() const{ return m_templates; }
    inline void SetTemplates(const Aws::Vector<EnvironmentTemplateSummary>& value) { m_templates = value; }
    inline void SetTemplates(Aws::Vector<EnvironmentTemplateSummary>&& value) { m_templates = std::move(value); }
    inline ListEnvironmentTemplatesResult& WithTemplates(const Aws::Vector<EnvironmentTemplateSummary>& value) { SetTemplates(value); return *this;}
    inline ListEnvironmentTemplatesResult& WithTemplates(Aws::Vector<EnvironmentTemplateSummary>&& value) { SetTemplates(std::move(value)); return *this;}
    inline ListEnvironmentTemplatesResult& AddTemplates(const EnvironmentTemplateSummary& value) { m_templates.push_back(value); return *this; }
    inline ListEnvironmentTemplatesResult& AddTemplates(EnvironmentTemplateSummary&& value) { m_templates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEnvironmentTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEnvironmentTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEnvironmentTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<EnvironmentTemplateSummary> m_templates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
