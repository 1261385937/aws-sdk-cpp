﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ByoipCidr.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class WithdrawByoipCidrResponse
  {
  public:
    AWS_EC2_API WithdrawByoipCidrResponse();
    AWS_EC2_API WithdrawByoipCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API WithdrawByoipCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the address pool.</p>
     */
    inline const ByoipCidr& GetByoipCidr() const{ return m_byoipCidr; }
    inline void SetByoipCidr(const ByoipCidr& value) { m_byoipCidr = value; }
    inline void SetByoipCidr(ByoipCidr&& value) { m_byoipCidr = std::move(value); }
    inline WithdrawByoipCidrResponse& WithByoipCidr(const ByoipCidr& value) { SetByoipCidr(value); return *this;}
    inline WithdrawByoipCidrResponse& WithByoipCidr(ByoipCidr&& value) { SetByoipCidr(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline WithdrawByoipCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline WithdrawByoipCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    ByoipCidr m_byoipCidr;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
