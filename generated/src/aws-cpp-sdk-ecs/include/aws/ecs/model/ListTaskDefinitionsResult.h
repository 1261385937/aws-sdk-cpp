﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{
  class ListTaskDefinitionsResult
  {
  public:
    AWS_ECS_API ListTaskDefinitionsResult();
    AWS_ECS_API ListTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of task definition Amazon Resource Name (ARN) entries for the
     * <code>ListTaskDefinitions</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskDefinitionArns() const{ return m_taskDefinitionArns; }
    inline void SetTaskDefinitionArns(const Aws::Vector<Aws::String>& value) { m_taskDefinitionArns = value; }
    inline void SetTaskDefinitionArns(Aws::Vector<Aws::String>&& value) { m_taskDefinitionArns = std::move(value); }
    inline ListTaskDefinitionsResult& WithTaskDefinitionArns(const Aws::Vector<Aws::String>& value) { SetTaskDefinitionArns(value); return *this;}
    inline ListTaskDefinitionsResult& WithTaskDefinitionArns(Aws::Vector<Aws::String>&& value) { SetTaskDefinitionArns(std::move(value)); return *this;}
    inline ListTaskDefinitionsResult& AddTaskDefinitionArns(const Aws::String& value) { m_taskDefinitionArns.push_back(value); return *this; }
    inline ListTaskDefinitionsResult& AddTaskDefinitionArns(Aws::String&& value) { m_taskDefinitionArns.push_back(std::move(value)); return *this; }
    inline ListTaskDefinitionsResult& AddTaskDefinitionArns(const char* value) { m_taskDefinitionArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTaskDefinitions</code> request. When the results of a
     * <code>ListTaskDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTaskDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTaskDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTaskDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTaskDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTaskDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTaskDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_taskDefinitionArns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
