﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/CertificateAuthorityStatus.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class UpdateCertificateAuthorityRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API UpdateCertificateAuthorityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateAuthority"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the private CA that issued the certificate to
     * be revoked. This must be of the form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }
    inline UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}
    inline UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}
    inline UpdateCertificateAuthorityRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information to enable Online Certificate Status Protocol (OCSP)
     * support, to enable a certificate revocation list (CRL), to enable both, or to
     * enable neither. If this parameter is not supplied, existing capibilites remain
     * unchanged. For more information, see the <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_OcspConfiguration.html">OcspConfiguration</a>
     * and <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CrlConfiguration.html">CrlConfiguration</a>
     * types.</p>  <p>The following requirements apply to revocation
     * configurations.</p> <ul> <li> <p>A configuration disabling CRLs or OCSP must
     * contain only the <code>Enabled=False</code> parameter, and will fail if other
     * parameters such as <code>CustomCname</code> or <code>ExpirationInDays</code> are
     * included.</p> </li> <li> <p>In a CRL configuration, the
     * <code>S3BucketName</code> parameter must conform to <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Amazon
     * S3 bucket naming rules</a>.</p> </li> <li> <p>A configuration containing a
     * custom Canonical Name (CNAME) parameter for CRLs or OCSP must conform to <a
     * href="https://www.ietf.org/rfc/rfc2396.txt">RFC2396</a> restrictions on the use
     * of special characters in a CNAME. </p> </li> <li> <p>In a CRL or OCSP
     * configuration, the value of a CNAME parameter must not include a protocol prefix
     * such as "http://" or "https://".</p> </li> </ul> 
     */
    inline const RevocationConfiguration& GetRevocationConfiguration() const{ return m_revocationConfiguration; }
    inline bool RevocationConfigurationHasBeenSet() const { return m_revocationConfigurationHasBeenSet; }
    inline void SetRevocationConfiguration(const RevocationConfiguration& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = value; }
    inline void SetRevocationConfiguration(RevocationConfiguration&& value) { m_revocationConfigurationHasBeenSet = true; m_revocationConfiguration = std::move(value); }
    inline UpdateCertificateAuthorityRequest& WithRevocationConfiguration(const RevocationConfiguration& value) { SetRevocationConfiguration(value); return *this;}
    inline UpdateCertificateAuthorityRequest& WithRevocationConfiguration(RevocationConfiguration&& value) { SetRevocationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of your private CA.</p>
     */
    inline const CertificateAuthorityStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateAuthorityStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateAuthorityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateCertificateAuthorityRequest& WithStatus(const CertificateAuthorityStatus& value) { SetStatus(value); return *this;}
    inline UpdateCertificateAuthorityRequest& WithStatus(CertificateAuthorityStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    RevocationConfiguration m_revocationConfiguration;
    bool m_revocationConfigurationHasBeenSet = false;

    CertificateAuthorityStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
