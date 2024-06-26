﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ClaimedPhoneNumberSummary.h>
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
namespace Connect
{
namespace Model
{
  class DescribePhoneNumberResult
  {
  public:
    AWS_CONNECT_API DescribePhoneNumberResult();
    AWS_CONNECT_API DescribePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a phone number that's been claimed to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline const ClaimedPhoneNumberSummary& GetClaimedPhoneNumberSummary() const{ return m_claimedPhoneNumberSummary; }
    inline void SetClaimedPhoneNumberSummary(const ClaimedPhoneNumberSummary& value) { m_claimedPhoneNumberSummary = value; }
    inline void SetClaimedPhoneNumberSummary(ClaimedPhoneNumberSummary&& value) { m_claimedPhoneNumberSummary = std::move(value); }
    inline DescribePhoneNumberResult& WithClaimedPhoneNumberSummary(const ClaimedPhoneNumberSummary& value) { SetClaimedPhoneNumberSummary(value); return *this;}
    inline DescribePhoneNumberResult& WithClaimedPhoneNumberSummary(ClaimedPhoneNumberSummary&& value) { SetClaimedPhoneNumberSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ClaimedPhoneNumberSummary m_claimedPhoneNumberSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
