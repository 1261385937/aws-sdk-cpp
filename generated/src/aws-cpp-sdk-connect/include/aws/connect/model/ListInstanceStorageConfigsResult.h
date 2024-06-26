﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceStorageConfig.h>
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
namespace Connect
{
namespace Model
{
  class ListInstanceStorageConfigsResult
  {
  public:
    AWS_CONNECT_API ListInstanceStorageConfigsResult();
    AWS_CONNECT_API ListInstanceStorageConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstanceStorageConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A valid storage type.</p>
     */
    inline const Aws::Vector<InstanceStorageConfig>& GetStorageConfigs() const{ return m_storageConfigs; }
    inline void SetStorageConfigs(const Aws::Vector<InstanceStorageConfig>& value) { m_storageConfigs = value; }
    inline void SetStorageConfigs(Aws::Vector<InstanceStorageConfig>&& value) { m_storageConfigs = std::move(value); }
    inline ListInstanceStorageConfigsResult& WithStorageConfigs(const Aws::Vector<InstanceStorageConfig>& value) { SetStorageConfigs(value); return *this;}
    inline ListInstanceStorageConfigsResult& WithStorageConfigs(Aws::Vector<InstanceStorageConfig>&& value) { SetStorageConfigs(std::move(value)); return *this;}
    inline ListInstanceStorageConfigsResult& AddStorageConfigs(const InstanceStorageConfig& value) { m_storageConfigs.push_back(value); return *this; }
    inline ListInstanceStorageConfigsResult& AddStorageConfigs(InstanceStorageConfig&& value) { m_storageConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstanceStorageConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstanceStorageConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstanceStorageConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstanceStorageConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstanceStorageConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstanceStorageConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStorageConfig> m_storageConfigs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
