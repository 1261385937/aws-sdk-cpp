﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MultiRegionAccessPointReport.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetMultiRegionAccessPointResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A container element containing the details of the requested Multi-Region
     * Access Point.</p>
     */
    inline const MultiRegionAccessPointReport& GetAccessPoint() const{ return m_accessPoint; }
    inline void SetAccessPoint(const MultiRegionAccessPointReport& value) { m_accessPoint = value; }
    inline void SetAccessPoint(MultiRegionAccessPointReport&& value) { m_accessPoint = std::move(value); }
    inline GetMultiRegionAccessPointResult& WithAccessPoint(const MultiRegionAccessPointReport& value) { SetAccessPoint(value); return *this;}
    inline GetMultiRegionAccessPointResult& WithAccessPoint(MultiRegionAccessPointReport&& value) { SetAccessPoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMultiRegionAccessPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMultiRegionAccessPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MultiRegionAccessPointReport m_accessPoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
