﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualServiceRef.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServicesOutput">AWS
   * API Reference</a></p>
   */
  class ListVirtualServicesResult
  {
  public:
    AWS_APPMESH_API ListVirtualServicesResult();
    AWS_APPMESH_API ListVirtualServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListVirtualServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVirtualServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVirtualServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVirtualServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualServiceRef>& GetVirtualServices() const{ return m_virtualServices; }
    inline void SetVirtualServices(const Aws::Vector<VirtualServiceRef>& value) { m_virtualServices = value; }
    inline void SetVirtualServices(Aws::Vector<VirtualServiceRef>&& value) { m_virtualServices = std::move(value); }
    inline ListVirtualServicesResult& WithVirtualServices(const Aws::Vector<VirtualServiceRef>& value) { SetVirtualServices(value); return *this;}
    inline ListVirtualServicesResult& WithVirtualServices(Aws::Vector<VirtualServiceRef>&& value) { SetVirtualServices(std::move(value)); return *this;}
    inline ListVirtualServicesResult& AddVirtualServices(const VirtualServiceRef& value) { m_virtualServices.push_back(value); return *this; }
    inline ListVirtualServicesResult& AddVirtualServices(VirtualServiceRef&& value) { m_virtualServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVirtualServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVirtualServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVirtualServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<VirtualServiceRef> m_virtualServices;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
