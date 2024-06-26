﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActionTarget.h>
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
namespace SecurityHub
{
namespace Model
{
  class DescribeActionTargetsResult
  {
  public:
    AWS_SECURITYHUB_API DescribeActionTargetsResult();
    AWS_SECURITYHUB_API DescribeActionTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeActionTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ActionTarget</code> objects. Each object includes the
     * <code>ActionTargetArn</code>, <code>Description</code>, and <code>Name</code> of
     * a custom action target available in Security Hub.</p>
     */
    inline const Aws::Vector<ActionTarget>& GetActionTargets() const{ return m_actionTargets; }
    inline void SetActionTargets(const Aws::Vector<ActionTarget>& value) { m_actionTargets = value; }
    inline void SetActionTargets(Aws::Vector<ActionTarget>&& value) { m_actionTargets = std::move(value); }
    inline DescribeActionTargetsResult& WithActionTargets(const Aws::Vector<ActionTarget>& value) { SetActionTargets(value); return *this;}
    inline DescribeActionTargetsResult& WithActionTargets(Aws::Vector<ActionTarget>&& value) { SetActionTargets(std::move(value)); return *this;}
    inline DescribeActionTargetsResult& AddActionTargets(const ActionTarget& value) { m_actionTargets.push_back(value); return *this; }
    inline DescribeActionTargetsResult& AddActionTargets(ActionTarget&& value) { m_actionTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeActionTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeActionTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeActionTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeActionTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeActionTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeActionTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActionTarget> m_actionTargets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
