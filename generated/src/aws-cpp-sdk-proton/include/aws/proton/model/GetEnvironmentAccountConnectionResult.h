﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentAccountConnection.h>
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
namespace Proton
{
namespace Model
{
  class GetEnvironmentAccountConnectionResult
  {
  public:
    AWS_PROTON_API GetEnvironmentAccountConnectionResult();
    AWS_PROTON_API GetEnvironmentAccountConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetEnvironmentAccountConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detailed data of the requested environment account connection.</p>
     */
    inline const EnvironmentAccountConnection& GetEnvironmentAccountConnection() const{ return m_environmentAccountConnection; }
    inline void SetEnvironmentAccountConnection(const EnvironmentAccountConnection& value) { m_environmentAccountConnection = value; }
    inline void SetEnvironmentAccountConnection(EnvironmentAccountConnection&& value) { m_environmentAccountConnection = std::move(value); }
    inline GetEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(const EnvironmentAccountConnection& value) { SetEnvironmentAccountConnection(value); return *this;}
    inline GetEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(EnvironmentAccountConnection&& value) { SetEnvironmentAccountConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEnvironmentAccountConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEnvironmentAccountConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEnvironmentAccountConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EnvironmentAccountConnection m_environmentAccountConnection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
