﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
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
  class UpdateTagOptionResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateTagOptionResult();
    AWS_SERVICECATALOG_API UpdateTagOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateTagOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the TagOption.</p>
     */
    inline const TagOptionDetail& GetTagOptionDetail() const{ return m_tagOptionDetail; }
    inline void SetTagOptionDetail(const TagOptionDetail& value) { m_tagOptionDetail = value; }
    inline void SetTagOptionDetail(TagOptionDetail&& value) { m_tagOptionDetail = std::move(value); }
    inline UpdateTagOptionResult& WithTagOptionDetail(const TagOptionDetail& value) { SetTagOptionDetail(value); return *this;}
    inline UpdateTagOptionResult& WithTagOptionDetail(TagOptionDetail&& value) { SetTagOptionDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTagOptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTagOptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTagOptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TagOptionDetail m_tagOptionDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
