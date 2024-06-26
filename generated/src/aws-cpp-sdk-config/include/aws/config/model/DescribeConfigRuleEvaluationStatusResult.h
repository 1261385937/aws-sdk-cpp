﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRuleEvaluationStatus.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRuleEvaluationStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult();
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline const Aws::Vector<ConfigRuleEvaluationStatus>& GetConfigRulesEvaluationStatus() const{ return m_configRulesEvaluationStatus; }
    inline void SetConfigRulesEvaluationStatus(const Aws::Vector<ConfigRuleEvaluationStatus>& value) { m_configRulesEvaluationStatus = value; }
    inline void SetConfigRulesEvaluationStatus(Aws::Vector<ConfigRuleEvaluationStatus>&& value) { m_configRulesEvaluationStatus = std::move(value); }
    inline DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(const Aws::Vector<ConfigRuleEvaluationStatus>& value) { SetConfigRulesEvaluationStatus(value); return *this;}
    inline DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(Aws::Vector<ConfigRuleEvaluationStatus>&& value) { SetConfigRulesEvaluationStatus(std::move(value)); return *this;}
    inline DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(const ConfigRuleEvaluationStatus& value) { m_configRulesEvaluationStatus.push_back(value); return *this; }
    inline DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(ConfigRuleEvaluationStatus&& value) { m_configRulesEvaluationStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeConfigRuleEvaluationStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConfigRuleEvaluationStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConfigRuleEvaluationStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConfigRuleEvaluationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConfigRuleEvaluationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConfigRuleEvaluationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigRuleEvaluationStatus> m_configRulesEvaluationStatus;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
