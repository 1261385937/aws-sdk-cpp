﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/model/DeploymentParameterInput.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MarketplaceDeployment
{
namespace Model
{

  /**
   */
  class PutDeploymentParameterRequest : public MarketplaceDeploymentRequest
  {
  public:
    AWS_MARKETPLACEDEPLOYMENT_API PutDeploymentParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeploymentParameter"; }

    AWS_MARKETPLACEDEPLOYMENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }
    inline PutDeploymentParameterRequest& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}
    inline PutDeploymentParameterRequest& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}
    inline PutDeploymentParameterRequest& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog related to the request. Fixed value: <code>AWS Marketplace</code>
     * </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline PutDeploymentParameterRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline PutDeploymentParameterRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline PutDeploymentParameterRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token for deployment parameters. A unique identifier for the
     * new version.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline PutDeploymentParameterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline PutDeploymentParameterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline PutDeploymentParameterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment parameter targeted to the acceptor of an agreement for which
     * to create the AWS Secret Manager resource.</p>
     */
    inline const DeploymentParameterInput& GetDeploymentParameter() const{ return m_deploymentParameter; }
    inline bool DeploymentParameterHasBeenSet() const { return m_deploymentParameterHasBeenSet; }
    inline void SetDeploymentParameter(const DeploymentParameterInput& value) { m_deploymentParameterHasBeenSet = true; m_deploymentParameter = value; }
    inline void SetDeploymentParameter(DeploymentParameterInput&& value) { m_deploymentParameterHasBeenSet = true; m_deploymentParameter = std::move(value); }
    inline PutDeploymentParameterRequest& WithDeploymentParameter(const DeploymentParameterInput& value) { SetDeploymentParameter(value); return *this;}
    inline PutDeploymentParameterRequest& WithDeploymentParameter(DeploymentParameterInput&& value) { SetDeploymentParameter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when deployment parameters expire and are scheduled for
     * deletion.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline PutDeploymentParameterRequest& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline PutDeploymentParameterRequest& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product for which AWS Marketplace will save secrets for the buyer’s
     * account.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline PutDeploymentParameterRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline PutDeploymentParameterRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline PutDeploymentParameterRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs, where each pair represents a tag saved to the
     * resource. Tags will only be applied for create operations, and they'll be
     * ignored if the resource already exists.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutDeploymentParameterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutDeploymentParameterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutDeploymentParameterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PutDeploymentParameterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutDeploymentParameterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutDeploymentParameterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutDeploymentParameterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutDeploymentParameterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutDeploymentParameterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DeploymentParameterInput m_deploymentParameter;
    bool m_deploymentParameterHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
