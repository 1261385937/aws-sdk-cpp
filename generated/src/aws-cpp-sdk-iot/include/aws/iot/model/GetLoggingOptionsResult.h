﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/LogLevel.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the GetLoggingOptions operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetLoggingOptionsResponse">AWS
   * API Reference</a></p>
   */
  class GetLoggingOptionsResult
  {
  public:
    AWS_IOT_API GetLoggingOptionsResult();
    AWS_IOT_API GetLoggingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetLoggingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetLoggingOptionsResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetLoggingOptionsResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetLoggingOptionsResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging level.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevel = std::move(value); }
    inline GetLoggingOptionsResult& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline GetLoggingOptionsResult& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLoggingOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLoggingOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLoggingOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;

    LogLevel m_logLevel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
