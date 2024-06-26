﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class CreateIntegrationAssociationResult
  {
  public:
    AWS_CONNECT_API CreateIntegrationAssociationResult();
    AWS_CONNECT_API CreateIntegrationAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateIntegrationAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const{ return m_integrationAssociationId; }
    inline void SetIntegrationAssociationId(const Aws::String& value) { m_integrationAssociationId = value; }
    inline void SetIntegrationAssociationId(Aws::String&& value) { m_integrationAssociationId = std::move(value); }
    inline void SetIntegrationAssociationId(const char* value) { m_integrationAssociationId.assign(value); }
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationId(const Aws::String& value) { SetIntegrationAssociationId(value); return *this;}
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationId(Aws::String&& value) { SetIntegrationAssociationId(std::move(value)); return *this;}
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationId(const char* value) { SetIntegrationAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationArn() const{ return m_integrationAssociationArn; }
    inline void SetIntegrationAssociationArn(const Aws::String& value) { m_integrationAssociationArn = value; }
    inline void SetIntegrationAssociationArn(Aws::String&& value) { m_integrationAssociationArn = std::move(value); }
    inline void SetIntegrationAssociationArn(const char* value) { m_integrationAssociationArn.assign(value); }
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationArn(const Aws::String& value) { SetIntegrationAssociationArn(value); return *this;}
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationArn(Aws::String&& value) { SetIntegrationAssociationArn(std::move(value)); return *this;}
    inline CreateIntegrationAssociationResult& WithIntegrationAssociationArn(const char* value) { SetIntegrationAssociationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIntegrationAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIntegrationAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIntegrationAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_integrationAssociationId;

    Aws::String m_integrationAssociationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
