﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AddressType.h>
#include <aws/outposts/model/Address.h>
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
namespace Outposts
{
namespace Model
{
  class GetSiteAddressResult
  {
  public:
    AWS_OUTPOSTS_API GetSiteAddressResult();
    AWS_OUTPOSTS_API GetSiteAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetSiteAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetSiteId() const{ return m_siteId; }
    inline void SetSiteId(const Aws::String& value) { m_siteId = value; }
    inline void SetSiteId(Aws::String&& value) { m_siteId = std::move(value); }
    inline void SetSiteId(const char* value) { m_siteId.assign(value); }
    inline GetSiteAddressResult& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}
    inline GetSiteAddressResult& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}
    inline GetSiteAddressResult& WithSiteId(const char* value) { SetSiteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the address you receive. </p>
     */
    inline const AddressType& GetAddressType() const{ return m_addressType; }
    inline void SetAddressType(const AddressType& value) { m_addressType = value; }
    inline void SetAddressType(AddressType&& value) { m_addressType = std::move(value); }
    inline GetSiteAddressResult& WithAddressType(const AddressType& value) { SetAddressType(value); return *this;}
    inline GetSiteAddressResult& WithAddressType(AddressType&& value) { SetAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the address. </p>
     */
    inline const Address& GetAddress() const{ return m_address; }
    inline void SetAddress(const Address& value) { m_address = value; }
    inline void SetAddress(Address&& value) { m_address = std::move(value); }
    inline GetSiteAddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}
    inline GetSiteAddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSiteAddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSiteAddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSiteAddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_siteId;

    AddressType m_addressType;

    Address m_address;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
