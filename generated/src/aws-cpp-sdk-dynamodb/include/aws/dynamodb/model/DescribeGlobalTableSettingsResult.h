﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaSettingsDescription.h>
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
  class DescribeGlobalTableSettingsResult
  {
  public:
    AWS_DYNAMODB_API DescribeGlobalTableSettingsResult();
    AWS_DYNAMODB_API DescribeGlobalTableSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeGlobalTableSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the global table.</p>
     */
    inline const Aws::String& GetGlobalTableName() const{ return m_globalTableName; }
    inline void SetGlobalTableName(const Aws::String& value) { m_globalTableName = value; }
    inline void SetGlobalTableName(Aws::String&& value) { m_globalTableName = std::move(value); }
    inline void SetGlobalTableName(const char* value) { m_globalTableName.assign(value); }
    inline DescribeGlobalTableSettingsResult& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}
    inline DescribeGlobalTableSettingsResult& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}
    inline DescribeGlobalTableSettingsResult& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline const Aws::Vector<ReplicaSettingsDescription>& GetReplicaSettings() const{ return m_replicaSettings; }
    inline void SetReplicaSettings(const Aws::Vector<ReplicaSettingsDescription>& value) { m_replicaSettings = value; }
    inline void SetReplicaSettings(Aws::Vector<ReplicaSettingsDescription>&& value) { m_replicaSettings = std::move(value); }
    inline DescribeGlobalTableSettingsResult& WithReplicaSettings(const Aws::Vector<ReplicaSettingsDescription>& value) { SetReplicaSettings(value); return *this;}
    inline DescribeGlobalTableSettingsResult& WithReplicaSettings(Aws::Vector<ReplicaSettingsDescription>&& value) { SetReplicaSettings(std::move(value)); return *this;}
    inline DescribeGlobalTableSettingsResult& AddReplicaSettings(const ReplicaSettingsDescription& value) { m_replicaSettings.push_back(value); return *this; }
    inline DescribeGlobalTableSettingsResult& AddReplicaSettings(ReplicaSettingsDescription&& value) { m_replicaSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGlobalTableSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGlobalTableSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGlobalTableSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_globalTableName;

    Aws::Vector<ReplicaSettingsDescription> m_replicaSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
