﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ProductCode.h>
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
namespace EC2
{
namespace Model
{
  class DescribeVolumeAttributeResponse
  {
  public:
    AWS_EC2_API DescribeVolumeAttributeResponse();
    AWS_EC2_API DescribeVolumeAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVolumeAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The state of <code>autoEnableIO</code> attribute.</p>
     */
    inline const AttributeBooleanValue& GetAutoEnableIO() const{ return m_autoEnableIO; }
    inline void SetAutoEnableIO(const AttributeBooleanValue& value) { m_autoEnableIO = value; }
    inline void SetAutoEnableIO(AttributeBooleanValue&& value) { m_autoEnableIO = std::move(value); }
    inline DescribeVolumeAttributeResponse& WithAutoEnableIO(const AttributeBooleanValue& value) { SetAutoEnableIO(value); return *this;}
    inline DescribeVolumeAttributeResponse& WithAutoEnableIO(AttributeBooleanValue&& value) { SetAutoEnableIO(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodes = std::move(value); }
    inline DescribeVolumeAttributeResponse& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline DescribeVolumeAttributeResponse& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline DescribeVolumeAttributeResponse& AddProductCodes(const ProductCode& value) { m_productCodes.push_back(value); return *this; }
    inline DescribeVolumeAttributeResponse& AddProductCodes(ProductCode&& value) { m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeId.assign(value); }
    inline DescribeVolumeAttributeResponse& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline DescribeVolumeAttributeResponse& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline DescribeVolumeAttributeResponse& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVolumeAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVolumeAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    AttributeBooleanValue m_autoEnableIO;

    Aws::Vector<ProductCode> m_productCodes;

    Aws::String m_volumeId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
