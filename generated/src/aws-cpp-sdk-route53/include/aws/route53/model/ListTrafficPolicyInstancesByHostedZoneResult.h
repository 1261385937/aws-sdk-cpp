﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/TrafficPolicyInstance.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesByHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class ListTrafficPolicyInstancesByHostedZoneResult
  {
  public:
    AWS_ROUTE53_API ListTrafficPolicyInstancesByHostedZoneResult();
    AWS_ROUTE53_API ListTrafficPolicyInstancesByHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTrafficPolicyInstancesByHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request. </p>
     */
    inline const Aws::Vector<TrafficPolicyInstance>& GetTrafficPolicyInstances() const{ return m_trafficPolicyInstances; }
    inline void SetTrafficPolicyInstances(const Aws::Vector<TrafficPolicyInstance>& value) { m_trafficPolicyInstances = value; }
    inline void SetTrafficPolicyInstances(Aws::Vector<TrafficPolicyInstance>&& value) { m_trafficPolicyInstances = std::move(value); }
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstances(const Aws::Vector<TrafficPolicyInstance>& value) { SetTrafficPolicyInstances(value); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstances(Aws::Vector<TrafficPolicyInstance>&& value) { SetTrafficPolicyInstances(std::move(value)); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& AddTrafficPolicyInstances(const TrafficPolicyInstance& value) { m_trafficPolicyInstances.push_back(value); return *this; }
    inline ListTrafficPolicyInstancesByHostedZoneResult& AddTrafficPolicyInstances(TrafficPolicyInstance&& value) { m_trafficPolicyInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of traffic policy instances.</p>
     */
    inline const Aws::String& GetTrafficPolicyInstanceNameMarker() const{ return m_trafficPolicyInstanceNameMarker; }
    inline void SetTrafficPolicyInstanceNameMarker(const Aws::String& value) { m_trafficPolicyInstanceNameMarker = value; }
    inline void SetTrafficPolicyInstanceNameMarker(Aws::String&& value) { m_trafficPolicyInstanceNameMarker = std::move(value); }
    inline void SetTrafficPolicyInstanceNameMarker(const char* value) { m_trafficPolicyInstanceNameMarker.assign(value); }
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceNameMarker(const Aws::String& value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceNameMarker(Aws::String&& value) { SetTrafficPolicyInstanceNameMarker(std::move(value)); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceNameMarker(const char* value) { SetTrafficPolicyInstanceNameMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is true,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of traffic policy instances.</p>
     */
    inline const RRType& GetTrafficPolicyInstanceTypeMarker() const{ return m_trafficPolicyInstanceTypeMarker; }
    inline void SetTrafficPolicyInstanceTypeMarker(const RRType& value) { m_trafficPolicyInstanceTypeMarker = value; }
    inline void SetTrafficPolicyInstanceTypeMarker(RRType&& value) { m_trafficPolicyInstanceTypeMarker = std::move(value); }
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceTypeMarker(const RRType& value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithTrafficPolicyInstanceTypeMarker(RRType&& value) { SetTrafficPolicyInstanceTypeMarker(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more traffic policy instances to be
     * listed. If the response was truncated, you can get the next group of traffic
     * policy instances by submitting another
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request and specifying the
     * values of <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> in the corresponding request
     * parameters.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicyInstancesByHostedZone</code> request that produced the
     * current response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrafficPolicyInstancesByHostedZoneResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficPolicyInstance> m_trafficPolicyInstances;

    Aws::String m_trafficPolicyInstanceNameMarker;

    RRType m_trafficPolicyInstanceTypeMarker;

    bool m_isTruncated;

    Aws::String m_maxItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
