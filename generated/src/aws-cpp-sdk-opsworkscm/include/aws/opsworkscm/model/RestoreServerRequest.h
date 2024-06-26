﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class RestoreServerRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API RestoreServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreServer"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the backup that you want to use to restore a server. </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }
    inline RestoreServerRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}
    inline RestoreServerRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}
    inline RestoreServerRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the server that you want to restore. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline RestoreServerRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline RestoreServerRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline RestoreServerRequest& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of instance to restore. Valid values must be specified in the
     * following format: <code>^([cm][34]|t2).*</code> For example,
     * <code>m5.large</code>. Valid values are <code>m5.large</code>,
     * <code>r5.xlarge</code>, and <code>r5.2xlarge</code>. If you do not specify this
     * parameter, RestoreServer uses the instance type from the specified backup. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline RestoreServerRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline RestoreServerRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline RestoreServerRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the key pair to set on the new EC2 instance. This can be helpful
     * if the administrator no longer has the SSH key. </p>
     */
    inline const Aws::String& GetKeyPair() const{ return m_keyPair; }
    inline bool KeyPairHasBeenSet() const { return m_keyPairHasBeenSet; }
    inline void SetKeyPair(const Aws::String& value) { m_keyPairHasBeenSet = true; m_keyPair = value; }
    inline void SetKeyPair(Aws::String&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::move(value); }
    inline void SetKeyPair(const char* value) { m_keyPairHasBeenSet = true; m_keyPair.assign(value); }
    inline RestoreServerRequest& WithKeyPair(const Aws::String& value) { SetKeyPair(value); return *this;}
    inline RestoreServerRequest& WithKeyPair(Aws::String&& value) { SetKeyPair(std::move(value)); return *this;}
    inline RestoreServerRequest& WithKeyPair(const char* value) { SetKeyPair(value); return *this;}
    ///@}
  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_keyPair;
    bool m_keyPairHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
