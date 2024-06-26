﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/NetworkFrameworkConfiguration.h>
#include <aws/managedblockchain/model/VotingPolicy.h>
#include <aws/managedblockchain/model/MemberConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class CreateNetworkRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetwork"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an Amazon Web
     * Services SDK or the Amazon Web Services CLI. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateNetworkRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateNetworkRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateNetworkRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNetworkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNetworkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNetworkRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateNetworkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateNetworkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateNetworkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }
    inline CreateNetworkRequest& WithFramework(const Framework& value) { SetFramework(value); return *this;}
    inline CreateNetworkRequest& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }
    inline CreateNetworkRequest& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}
    inline CreateNetworkRequest& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}
    inline CreateNetworkRequest& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration properties of the blockchain framework relevant to the network
     * configuration. </p>
     */
    inline const NetworkFrameworkConfiguration& GetFrameworkConfiguration() const{ return m_frameworkConfiguration; }
    inline bool FrameworkConfigurationHasBeenSet() const { return m_frameworkConfigurationHasBeenSet; }
    inline void SetFrameworkConfiguration(const NetworkFrameworkConfiguration& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = value; }
    inline void SetFrameworkConfiguration(NetworkFrameworkConfiguration&& value) { m_frameworkConfigurationHasBeenSet = true; m_frameworkConfiguration = std::move(value); }
    inline CreateNetworkRequest& WithFrameworkConfiguration(const NetworkFrameworkConfiguration& value) { SetFrameworkConfiguration(value); return *this;}
    inline CreateNetworkRequest& WithFrameworkConfiguration(NetworkFrameworkConfiguration&& value) { SetFrameworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The voting rules used by the network to determine if a proposal is approved.
     * </p>
     */
    inline const VotingPolicy& GetVotingPolicy() const{ return m_votingPolicy; }
    inline bool VotingPolicyHasBeenSet() const { return m_votingPolicyHasBeenSet; }
    inline void SetVotingPolicy(const VotingPolicy& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = value; }
    inline void SetVotingPolicy(VotingPolicy&& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = std::move(value); }
    inline CreateNetworkRequest& WithVotingPolicy(const VotingPolicy& value) { SetVotingPolicy(value); return *this;}
    inline CreateNetworkRequest& WithVotingPolicy(VotingPolicy&& value) { SetVotingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration properties for the first member within the network.</p>
     */
    inline const MemberConfiguration& GetMemberConfiguration() const{ return m_memberConfiguration; }
    inline bool MemberConfigurationHasBeenSet() const { return m_memberConfigurationHasBeenSet; }
    inline void SetMemberConfiguration(const MemberConfiguration& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = value; }
    inline void SetMemberConfiguration(MemberConfiguration&& value) { m_memberConfigurationHasBeenSet = true; m_memberConfiguration = std::move(value); }
    inline CreateNetworkRequest& WithMemberConfiguration(const MemberConfiguration& value) { SetMemberConfiguration(value); return *this;}
    inline CreateNetworkRequest& WithMemberConfiguration(MemberConfiguration&& value) { SetMemberConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the network.</p> <p> Each tag consists of a key and an
     * optional value. You can specify multiple key-value pairs in a single request
     * with an overall maximum of 50 tags allowed per resource.</p> <p>For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ethereum-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Ethereum Developer Guide</i>,
     * or <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/hyperledger-fabric-dev/tagging-resources.html">Tagging
     * Resources</a> in the <i>Amazon Managed Blockchain Hyperledger Fabric Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNetworkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateNetworkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNetworkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateNetworkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNetworkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNetworkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNetworkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNetworkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNetworkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Framework m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    NetworkFrameworkConfiguration m_frameworkConfiguration;
    bool m_frameworkConfigurationHasBeenSet = false;

    VotingPolicy m_votingPolicy;
    bool m_votingPolicyHasBeenSet = false;

    MemberConfiguration m_memberConfiguration;
    bool m_memberConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
