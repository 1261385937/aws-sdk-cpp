﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a request to purchase Scheduled Instances.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseRequest
  {
  public:
    AWS_EC2_API PurchaseRequest();
    AWS_EC2_API PurchaseRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PurchaseRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of instances.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline PurchaseRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase token.</p>
     */
    inline const Aws::String& GetPurchaseToken() const{ return m_purchaseToken; }
    inline bool PurchaseTokenHasBeenSet() const { return m_purchaseTokenHasBeenSet; }
    inline void SetPurchaseToken(const Aws::String& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = value; }
    inline void SetPurchaseToken(Aws::String&& value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken = std::move(value); }
    inline void SetPurchaseToken(const char* value) { m_purchaseTokenHasBeenSet = true; m_purchaseToken.assign(value); }
    inline PurchaseRequest& WithPurchaseToken(const Aws::String& value) { SetPurchaseToken(value); return *this;}
    inline PurchaseRequest& WithPurchaseToken(Aws::String&& value) { SetPurchaseToken(std::move(value)); return *this;}
    inline PurchaseRequest& WithPurchaseToken(const char* value) { SetPurchaseToken(value); return *this;}
    ///@}
  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_purchaseToken;
    bool m_purchaseTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
