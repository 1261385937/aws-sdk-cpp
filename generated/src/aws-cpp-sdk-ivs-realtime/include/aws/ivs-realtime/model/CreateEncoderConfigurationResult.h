﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/EncoderConfiguration.h>
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
namespace ivsrealtime
{
namespace Model
{
  class CreateEncoderConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API CreateEncoderConfigurationResult();
    AWS_IVSREALTIME_API CreateEncoderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateEncoderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The EncoderConfiguration that was created.</p>
     */
    inline const EncoderConfiguration& GetEncoderConfiguration() const{ return m_encoderConfiguration; }
    inline void SetEncoderConfiguration(const EncoderConfiguration& value) { m_encoderConfiguration = value; }
    inline void SetEncoderConfiguration(EncoderConfiguration&& value) { m_encoderConfiguration = std::move(value); }
    inline CreateEncoderConfigurationResult& WithEncoderConfiguration(const EncoderConfiguration& value) { SetEncoderConfiguration(value); return *this;}
    inline CreateEncoderConfigurationResult& WithEncoderConfiguration(EncoderConfiguration&& value) { SetEncoderConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEncoderConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEncoderConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEncoderConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EncoderConfiguration m_encoderConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
