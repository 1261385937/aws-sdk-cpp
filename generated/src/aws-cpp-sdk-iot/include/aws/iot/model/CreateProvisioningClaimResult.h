﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/KeyPair.h>
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
namespace IoT
{
namespace Model
{
  class CreateProvisioningClaimResult
  {
  public:
    AWS_IOT_API CreateProvisioningClaimResult();
    AWS_IOT_API CreateProvisioningClaimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateProvisioningClaimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }
    inline CreateProvisioningClaimResult& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline CreateProvisioningClaimResult& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline CreateProvisioningClaimResult& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning claim certificate.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePem = value; }
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePem = std::move(value); }
    inline void SetCertificatePem(const char* value) { m_certificatePem.assign(value); }
    inline CreateProvisioningClaimResult& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}
    inline CreateProvisioningClaimResult& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}
    inline CreateProvisioningClaimResult& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning claim key pair.</p>
     */
    inline const KeyPair& GetKeyPair() const{ return m_keyPair; }
    inline void SetKeyPair(const KeyPair& value) { m_keyPair = value; }
    inline void SetKeyPair(KeyPair&& value) { m_keyPair = std::move(value); }
    inline CreateProvisioningClaimResult& WithKeyPair(const KeyPair& value) { SetKeyPair(value); return *this;}
    inline CreateProvisioningClaimResult& WithKeyPair(KeyPair&& value) { SetKeyPair(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning claim expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }
    inline CreateProvisioningClaimResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}
    inline CreateProvisioningClaimResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateProvisioningClaimResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateProvisioningClaimResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateProvisioningClaimResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;

    Aws::String m_certificatePem;

    KeyPair m_keyPair;

    Aws::Utils::DateTime m_expiration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
