﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SpotDatafeedSubscription.h>
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
  /**
   * <p>Contains the output of DescribeSpotDatafeedSubscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSpotDatafeedSubscriptionResult">AWS
   * API Reference</a></p>
   */
  class DescribeSpotDatafeedSubscriptionResponse
  {
  public:
    AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse();
    AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSpotDatafeedSubscriptionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Spot Instance data feed subscription.</p>
     */
    inline const SpotDatafeedSubscription& GetSpotDatafeedSubscription() const{ return m_spotDatafeedSubscription; }
    inline void SetSpotDatafeedSubscription(const SpotDatafeedSubscription& value) { m_spotDatafeedSubscription = value; }
    inline void SetSpotDatafeedSubscription(SpotDatafeedSubscription&& value) { m_spotDatafeedSubscription = std::move(value); }
    inline DescribeSpotDatafeedSubscriptionResponse& WithSpotDatafeedSubscription(const SpotDatafeedSubscription& value) { SetSpotDatafeedSubscription(value); return *this;}
    inline DescribeSpotDatafeedSubscriptionResponse& WithSpotDatafeedSubscription(SpotDatafeedSubscription&& value) { SetSpotDatafeedSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeSpotDatafeedSubscriptionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeSpotDatafeedSubscriptionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    SpotDatafeedSubscription m_spotDatafeedSubscription;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
