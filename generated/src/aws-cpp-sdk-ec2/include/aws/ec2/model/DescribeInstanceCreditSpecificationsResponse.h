﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceCreditSpecification.h>
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
  class DescribeInstanceCreditSpecificationsResponse
  {
  public:
    AWS_EC2_API DescribeInstanceCreditSpecificationsResponse();
    AWS_EC2_API DescribeInstanceCreditSpecificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceCreditSpecificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the credit option for CPU usage of an instance.</p>
     */
    inline const Aws::Vector<InstanceCreditSpecification>& GetInstanceCreditSpecifications() const{ return m_instanceCreditSpecifications; }
    inline void SetInstanceCreditSpecifications(const Aws::Vector<InstanceCreditSpecification>& value) { m_instanceCreditSpecifications = value; }
    inline void SetInstanceCreditSpecifications(Aws::Vector<InstanceCreditSpecification>&& value) { m_instanceCreditSpecifications = std::move(value); }
    inline DescribeInstanceCreditSpecificationsResponse& WithInstanceCreditSpecifications(const Aws::Vector<InstanceCreditSpecification>& value) { SetInstanceCreditSpecifications(value); return *this;}
    inline DescribeInstanceCreditSpecificationsResponse& WithInstanceCreditSpecifications(Aws::Vector<InstanceCreditSpecification>&& value) { SetInstanceCreditSpecifications(std::move(value)); return *this;}
    inline DescribeInstanceCreditSpecificationsResponse& AddInstanceCreditSpecifications(const InstanceCreditSpecification& value) { m_instanceCreditSpecifications.push_back(value); return *this; }
    inline DescribeInstanceCreditSpecificationsResponse& AddInstanceCreditSpecifications(InstanceCreditSpecification&& value) { m_instanceCreditSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeInstanceCreditSpecificationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstanceCreditSpecificationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstanceCreditSpecificationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeInstanceCreditSpecificationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeInstanceCreditSpecificationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceCreditSpecification> m_instanceCreditSpecifications;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
