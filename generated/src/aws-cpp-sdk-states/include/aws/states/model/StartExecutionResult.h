﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{
  class StartExecutionResult
  {
  public:
    AWS_SFN_API StartExecutionResult();
    AWS_SFN_API StartExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API StartExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }
    inline void SetExecutionArn(const Aws::String& value) { m_executionArn = value; }
    inline void SetExecutionArn(Aws::String&& value) { m_executionArn = std::move(value); }
    inline void SetExecutionArn(const char* value) { m_executionArn.assign(value); }
    inline StartExecutionResult& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}
    inline StartExecutionResult& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}
    inline StartExecutionResult& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }
    inline StartExecutionResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline StartExecutionResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;

    Aws::Utils::DateTime m_startDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
