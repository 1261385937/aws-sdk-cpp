﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/LogTargetConfiguration.h>
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
  class ListV2LoggingLevelsResult
  {
  public:
    AWS_IOT_API ListV2LoggingLevelsResult();
    AWS_IOT_API ListV2LoggingLevelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListV2LoggingLevelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The logging configuration for a target.</p>
     */
    inline const Aws::Vector<LogTargetConfiguration>& GetLogTargetConfigurations() const{ return m_logTargetConfigurations; }
    inline void SetLogTargetConfigurations(const Aws::Vector<LogTargetConfiguration>& value) { m_logTargetConfigurations = value; }
    inline void SetLogTargetConfigurations(Aws::Vector<LogTargetConfiguration>&& value) { m_logTargetConfigurations = std::move(value); }
    inline ListV2LoggingLevelsResult& WithLogTargetConfigurations(const Aws::Vector<LogTargetConfiguration>& value) { SetLogTargetConfigurations(value); return *this;}
    inline ListV2LoggingLevelsResult& WithLogTargetConfigurations(Aws::Vector<LogTargetConfiguration>&& value) { SetLogTargetConfigurations(std::move(value)); return *this;}
    inline ListV2LoggingLevelsResult& AddLogTargetConfigurations(const LogTargetConfiguration& value) { m_logTargetConfigurations.push_back(value); return *this; }
    inline ListV2LoggingLevelsResult& AddLogTargetConfigurations(LogTargetConfiguration&& value) { m_logTargetConfigurations.push_back(std::move(value)); return *this; }
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
    inline ListV2LoggingLevelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListV2LoggingLevelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListV2LoggingLevelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListV2LoggingLevelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListV2LoggingLevelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListV2LoggingLevelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LogTargetConfiguration> m_logTargetConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
