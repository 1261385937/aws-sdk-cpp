﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/LogPattern.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class UpdateLogPatternResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateLogPatternResult();
    AWS_APPLICATIONINSIGHTS_API UpdateLogPatternResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API UpdateLogPatternResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupName.assign(value); }
    inline UpdateLogPatternResult& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline UpdateLogPatternResult& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline UpdateLogPatternResult& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The successfully created log pattern.</p>
     */
    inline const LogPattern& GetLogPattern() const{ return m_logPattern; }
    inline void SetLogPattern(const LogPattern& value) { m_logPattern = value; }
    inline void SetLogPattern(LogPattern&& value) { m_logPattern = std::move(value); }
    inline UpdateLogPatternResult& WithLogPattern(const LogPattern& value) { SetLogPattern(value); return *this;}
    inline UpdateLogPatternResult& WithLogPattern(LogPattern&& value) { SetLogPattern(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateLogPatternResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateLogPatternResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateLogPatternResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;

    LogPattern m_logPattern;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
