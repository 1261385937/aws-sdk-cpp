﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>DeliverConfigSnapshot</a> action, in JSON
   * format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshotResponse">AWS
   * API Reference</a></p>
   */
  class DeliverConfigSnapshotResult
  {
  public:
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult();
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DeliverConfigSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the snapshot that is being created.</p>
     */
    inline const Aws::String& GetConfigSnapshotId() const{ return m_configSnapshotId; }
    inline void SetConfigSnapshotId(const Aws::String& value) { m_configSnapshotId = value; }
    inline void SetConfigSnapshotId(Aws::String&& value) { m_configSnapshotId = std::move(value); }
    inline void SetConfigSnapshotId(const char* value) { m_configSnapshotId.assign(value); }
    inline DeliverConfigSnapshotResult& WithConfigSnapshotId(const Aws::String& value) { SetConfigSnapshotId(value); return *this;}
    inline DeliverConfigSnapshotResult& WithConfigSnapshotId(Aws::String&& value) { SetConfigSnapshotId(std::move(value)); return *this;}
    inline DeliverConfigSnapshotResult& WithConfigSnapshotId(const char* value) { SetConfigSnapshotId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeliverConfigSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeliverConfigSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeliverConfigSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configSnapshotId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
