﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/HIT.h>
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
namespace MTurk
{
namespace Model
{
  class CreateHITWithHITTypeResult
  {
  public:
    AWS_MTURK_API CreateHITWithHITTypeResult();
    AWS_MTURK_API CreateHITWithHITTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API CreateHITWithHITTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Contains the newly created HIT data. For a description of the HIT data
     * structure as it appears in responses, see the HIT Data Structure documentation.
     * </p>
     */
    inline const HIT& GetHIT() const{ return m_hIT; }
    inline void SetHIT(const HIT& value) { m_hIT = value; }
    inline void SetHIT(HIT&& value) { m_hIT = std::move(value); }
    inline CreateHITWithHITTypeResult& WithHIT(const HIT& value) { SetHIT(value); return *this;}
    inline CreateHITWithHITTypeResult& WithHIT(HIT&& value) { SetHIT(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHITWithHITTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHITWithHITTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHITWithHITTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HIT m_hIT;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
