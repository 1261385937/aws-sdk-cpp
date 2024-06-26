﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class DeleteHsmResult
  {
  public:
    AWS_CLOUDHSMV2_API DeleteHsmResult();
    AWS_CLOUDHSMV2_API DeleteHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API DeleteHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline const Aws::String& GetHsmId() const{ return m_hsmId; }
    inline void SetHsmId(const Aws::String& value) { m_hsmId = value; }
    inline void SetHsmId(Aws::String&& value) { m_hsmId = std::move(value); }
    inline void SetHsmId(const char* value) { m_hsmId.assign(value); }
    inline DeleteHsmResult& WithHsmId(const Aws::String& value) { SetHsmId(value); return *this;}
    inline DeleteHsmResult& WithHsmId(Aws::String&& value) { SetHsmId(std::move(value)); return *this;}
    inline DeleteHsmResult& WithHsmId(const char* value) { SetHsmId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteHsmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteHsmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteHsmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hsmId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
