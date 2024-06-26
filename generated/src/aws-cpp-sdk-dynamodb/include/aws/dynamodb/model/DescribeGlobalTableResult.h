﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/GlobalTableDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class DescribeGlobalTableResult
  {
  public:
    AWS_DYNAMODB_API DescribeGlobalTableResult();
    AWS_DYNAMODB_API DescribeGlobalTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeGlobalTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the details of the global table.</p>
     */
    inline const GlobalTableDescription& GetGlobalTableDescription() const{ return m_globalTableDescription; }
    inline void SetGlobalTableDescription(const GlobalTableDescription& value) { m_globalTableDescription = value; }
    inline void SetGlobalTableDescription(GlobalTableDescription&& value) { m_globalTableDescription = std::move(value); }
    inline DescribeGlobalTableResult& WithGlobalTableDescription(const GlobalTableDescription& value) { SetGlobalTableDescription(value); return *this;}
    inline DescribeGlobalTableResult& WithGlobalTableDescription(GlobalTableDescription&& value) { SetGlobalTableDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGlobalTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGlobalTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGlobalTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GlobalTableDescription m_globalTableDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
