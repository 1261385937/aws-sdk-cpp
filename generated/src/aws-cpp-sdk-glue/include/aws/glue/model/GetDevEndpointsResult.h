﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DevEndpoint.h>
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
namespace Glue
{
namespace Model
{
  class GetDevEndpointsResult
  {
  public:
    AWS_GLUE_API GetDevEndpointsResult();
    AWS_GLUE_API GetDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DevEndpoint</code> definitions.</p>
     */
    inline const Aws::Vector<DevEndpoint>& GetDevEndpoints() const{ return m_devEndpoints; }
    inline void SetDevEndpoints(const Aws::Vector<DevEndpoint>& value) { m_devEndpoints = value; }
    inline void SetDevEndpoints(Aws::Vector<DevEndpoint>&& value) { m_devEndpoints = std::move(value); }
    inline GetDevEndpointsResult& WithDevEndpoints(const Aws::Vector<DevEndpoint>& value) { SetDevEndpoints(value); return *this;}
    inline GetDevEndpointsResult& WithDevEndpoints(Aws::Vector<DevEndpoint>&& value) { SetDevEndpoints(std::move(value)); return *this;}
    inline GetDevEndpointsResult& AddDevEndpoints(const DevEndpoint& value) { m_devEndpoints.push_back(value); return *this; }
    inline GetDevEndpointsResult& AddDevEndpoints(DevEndpoint&& value) { m_devEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all <code>DevEndpoint</code> definitions have
     * yet been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetDevEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetDevEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetDevEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDevEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDevEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDevEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DevEndpoint> m_devEndpoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
