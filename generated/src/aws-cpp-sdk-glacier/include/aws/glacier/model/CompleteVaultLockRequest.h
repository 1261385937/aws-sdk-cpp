﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>The input values for <code>CompleteVaultLock</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CompleteVaultLockInput">AWS
   * API Reference</a></p>
   */
  class CompleteVaultLockRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API CompleteVaultLockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteVaultLock"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CompleteVaultLockRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CompleteVaultLockRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CompleteVaultLockRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }
    inline CompleteVaultLockRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}
    inline CompleteVaultLockRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}
    inline CompleteVaultLockRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>lockId</code> value is the lock ID obtained from a
     * <a>InitiateVaultLock</a> request.</p>
     */
    inline const Aws::String& GetLockId() const{ return m_lockId; }
    inline bool LockIdHasBeenSet() const { return m_lockIdHasBeenSet; }
    inline void SetLockId(const Aws::String& value) { m_lockIdHasBeenSet = true; m_lockId = value; }
    inline void SetLockId(Aws::String&& value) { m_lockIdHasBeenSet = true; m_lockId = std::move(value); }
    inline void SetLockId(const char* value) { m_lockIdHasBeenSet = true; m_lockId.assign(value); }
    inline CompleteVaultLockRequest& WithLockId(const Aws::String& value) { SetLockId(value); return *this;}
    inline CompleteVaultLockRequest& WithLockId(Aws::String&& value) { SetLockId(std::move(value)); return *this;}
    inline CompleteVaultLockRequest& WithLockId(const char* value) { SetLockId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_lockId;
    bool m_lockIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
