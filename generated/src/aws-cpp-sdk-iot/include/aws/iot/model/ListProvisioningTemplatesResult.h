﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ProvisioningTemplateSummary.h>
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
  class ListProvisioningTemplatesResult
  {
  public:
    AWS_IOT_API ListProvisioningTemplatesResult();
    AWS_IOT_API ListProvisioningTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListProvisioningTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of provisioning templates</p>
     */
    inline const Aws::Vector<ProvisioningTemplateSummary>& GetTemplates() const{ return m_templates; }
    inline void SetTemplates(const Aws::Vector<ProvisioningTemplateSummary>& value) { m_templates = value; }
    inline void SetTemplates(Aws::Vector<ProvisioningTemplateSummary>&& value) { m_templates = std::move(value); }
    inline ListProvisioningTemplatesResult& WithTemplates(const Aws::Vector<ProvisioningTemplateSummary>& value) { SetTemplates(value); return *this;}
    inline ListProvisioningTemplatesResult& WithTemplates(Aws::Vector<ProvisioningTemplateSummary>&& value) { SetTemplates(std::move(value)); return *this;}
    inline ListProvisioningTemplatesResult& AddTemplates(const ProvisioningTemplateSummary& value) { m_templates.push_back(value); return *this; }
    inline ListProvisioningTemplatesResult& AddTemplates(ProvisioningTemplateSummary&& value) { m_templates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProvisioningTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProvisioningTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProvisioningTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProvisioningTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProvisioningTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProvisioningTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisioningTemplateSummary> m_templates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
