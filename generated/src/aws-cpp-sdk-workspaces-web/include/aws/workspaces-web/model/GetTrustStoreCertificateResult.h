﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/Certificate.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetTrustStoreCertificateResult
  {
  public:
    AWS_WORKSPACESWEB_API GetTrustStoreCertificateResult();
    AWS_WORKSPACESWEB_API GetTrustStoreCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetTrustStoreCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The certificate of the trust store certificate.</p>
     */
    inline const Certificate& GetCertificate() const{ return m_certificate; }
    inline void SetCertificate(const Certificate& value) { m_certificate = value; }
    inline void SetCertificate(Certificate&& value) { m_certificate = std::move(value); }
    inline GetTrustStoreCertificateResult& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}
    inline GetTrustStoreCertificateResult& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArn.assign(value); }
    inline GetTrustStoreCertificateResult& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline GetTrustStoreCertificateResult& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline GetTrustStoreCertificateResult& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTrustStoreCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTrustStoreCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTrustStoreCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Certificate m_certificate;

    Aws::String m_trustStoreArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
