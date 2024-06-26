﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/appflow/model/ConnectionMode.h>
#include <aws/appflow/model/ConnectorProfileProperties.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/PrivateConnectionProvisioningState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> Describes an instance of a connector. This includes the provided name,
   * credentials ARN, connection-mode, and so on. To keep the API intuitive and
   * extensible, the fields that are common to all types of connector profiles are
   * explicitly specified at the top level. The rest of the connector-specific
   * properties are available via the <code>connectorProfileProperties</code> field.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorProfile">AWS
   * API Reference</a></p>
   */
  class ConnectorProfile
  {
  public:
    AWS_APPFLOW_API ConnectorProfile();
    AWS_APPFLOW_API ConnectorProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile. </p>
     */
    inline const Aws::String& GetConnectorProfileArn() const{ return m_connectorProfileArn; }
    inline bool ConnectorProfileArnHasBeenSet() const { return m_connectorProfileArnHasBeenSet; }
    inline void SetConnectorProfileArn(const Aws::String& value) { m_connectorProfileArnHasBeenSet = true; m_connectorProfileArn = value; }
    inline void SetConnectorProfileArn(Aws::String&& value) { m_connectorProfileArnHasBeenSet = true; m_connectorProfileArn = std::move(value); }
    inline void SetConnectorProfileArn(const char* value) { m_connectorProfileArnHasBeenSet = true; m_connectorProfileArn.assign(value); }
    inline ConnectorProfile& WithConnectorProfileArn(const Aws::String& value) { SetConnectorProfileArn(value); return *this;}
    inline ConnectorProfile& WithConnectorProfileArn(Aws::String&& value) { SetConnectorProfileArn(std::move(value)); return *this;}
    inline ConnectorProfile& WithConnectorProfileArn(const char* value) { SetConnectorProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }
    inline ConnectorProfile& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}
    inline ConnectorProfile& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}
    inline ConnectorProfile& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline ConnectorProfile& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline ConnectorProfile& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label for the connector profile being created.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }
    inline ConnectorProfile& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}
    inline ConnectorProfile& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}
    inline ConnectorProfile& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionModeHasBeenSet = true; m_connectionMode = std::move(value); }
    inline ConnectorProfile& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}
    inline ConnectorProfile& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the connector profile credentials. </p>
     */
    inline const Aws::String& GetCredentialsArn() const{ return m_credentialsArn; }
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = value; }
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::move(value); }
    inline void SetCredentialsArn(const char* value) { m_credentialsArnHasBeenSet = true; m_credentialsArn.assign(value); }
    inline ConnectorProfile& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}
    inline ConnectorProfile& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}
    inline ConnectorProfile& WithCredentialsArn(const char* value) { SetCredentialsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline const ConnectorProfileProperties& GetConnectorProfileProperties() const{ return m_connectorProfileProperties; }
    inline bool ConnectorProfilePropertiesHasBeenSet() const { return m_connectorProfilePropertiesHasBeenSet; }
    inline void SetConnectorProfileProperties(const ConnectorProfileProperties& value) { m_connectorProfilePropertiesHasBeenSet = true; m_connectorProfileProperties = value; }
    inline void SetConnectorProfileProperties(ConnectorProfileProperties&& value) { m_connectorProfilePropertiesHasBeenSet = true; m_connectorProfileProperties = std::move(value); }
    inline ConnectorProfile& WithConnectorProfileProperties(const ConnectorProfileProperties& value) { SetConnectorProfileProperties(value); return *this;}
    inline ConnectorProfile& WithConnectorProfileProperties(ConnectorProfileProperties&& value) { SetConnectorProfileProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the connector profile was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ConnectorProfile& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ConnectorProfile& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the connector profile was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ConnectorProfile& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ConnectorProfile& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the private connection provisioning state. </p>
     */
    inline const PrivateConnectionProvisioningState& GetPrivateConnectionProvisioningState() const{ return m_privateConnectionProvisioningState; }
    inline bool PrivateConnectionProvisioningStateHasBeenSet() const { return m_privateConnectionProvisioningStateHasBeenSet; }
    inline void SetPrivateConnectionProvisioningState(const PrivateConnectionProvisioningState& value) { m_privateConnectionProvisioningStateHasBeenSet = true; m_privateConnectionProvisioningState = value; }
    inline void SetPrivateConnectionProvisioningState(PrivateConnectionProvisioningState&& value) { m_privateConnectionProvisioningStateHasBeenSet = true; m_privateConnectionProvisioningState = std::move(value); }
    inline ConnectorProfile& WithPrivateConnectionProvisioningState(const PrivateConnectionProvisioningState& value) { SetPrivateConnectionProvisioningState(value); return *this;}
    inline ConnectorProfile& WithPrivateConnectionProvisioningState(PrivateConnectionProvisioningState&& value) { SetPrivateConnectionProvisioningState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileArn;
    bool m_connectorProfileArnHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    ConnectionMode m_connectionMode;
    bool m_connectionModeHasBeenSet = false;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet = false;

    ConnectorProfileProperties m_connectorProfileProperties;
    bool m_connectorProfilePropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    PrivateConnectionProvisioningState m_privateConnectionProvisioningState;
    bool m_privateConnectionProvisioningStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
