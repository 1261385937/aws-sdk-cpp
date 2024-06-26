﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class CreateLabelResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateLabelResult();
    AWS_LOOKOUTEQUIPMENT_API CreateLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API CreateLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the label that you have created. </p>
     */
    inline const Aws::String& GetLabelId() const{ return m_labelId; }
    inline void SetLabelId(const Aws::String& value) { m_labelId = value; }
    inline void SetLabelId(Aws::String&& value) { m_labelId = std::move(value); }
    inline void SetLabelId(const char* value) { m_labelId.assign(value); }
    inline CreateLabelResult& WithLabelId(const Aws::String& value) { SetLabelId(value); return *this;}
    inline CreateLabelResult& WithLabelId(Aws::String&& value) { SetLabelId(std::move(value)); return *this;}
    inline CreateLabelResult& WithLabelId(const char* value) { SetLabelId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLabelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLabelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLabelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_labelId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
