﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ExecuteProvisionedProductServiceActionResult
  {
  public:
    AWS_SERVICECATALOG_API ExecuteProvisionedProductServiceActionResult();
    AWS_SERVICECATALOG_API ExecuteProvisionedProductServiceActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ExecuteProvisionedProductServiceActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing detailed information about the result of provisioning
     * the product.</p>
     */
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }
    inline ExecuteProvisionedProductServiceActionResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}
    inline ExecuteProvisionedProductServiceActionResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExecuteProvisionedProductServiceActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExecuteProvisionedProductServiceActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExecuteProvisionedProductServiceActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RecordDetail m_recordDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
