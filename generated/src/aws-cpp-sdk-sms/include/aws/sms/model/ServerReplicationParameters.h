﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>The replication parameters for replicating a server.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerReplicationParameters">AWS
   * API Reference</a></p>
   */
  class ServerReplicationParameters
  {
  public:
    AWS_SMS_API ServerReplicationParameters();
    AWS_SMS_API ServerReplicationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerReplicationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The seed time for creating a replication job for the server.</p>
     */
    inline const Aws::Utils::DateTime& GetSeedTime() const{ return m_seedTime; }
    inline bool SeedTimeHasBeenSet() const { return m_seedTimeHasBeenSet; }
    inline void SetSeedTime(const Aws::Utils::DateTime& value) { m_seedTimeHasBeenSet = true; m_seedTime = value; }
    inline void SetSeedTime(Aws::Utils::DateTime&& value) { m_seedTimeHasBeenSet = true; m_seedTime = std::move(value); }
    inline ServerReplicationParameters& WithSeedTime(const Aws::Utils::DateTime& value) { SetSeedTime(value); return *this;}
    inline ServerReplicationParameters& WithSeedTime(Aws::Utils::DateTime&& value) { SetSeedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of creating replication jobs for the server.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline ServerReplicationParameters& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline bool GetRunOnce() const{ return m_runOnce; }
    inline bool RunOnceHasBeenSet() const { return m_runOnceHasBeenSet; }
    inline void SetRunOnce(bool value) { m_runOnceHasBeenSet = true; m_runOnce = value; }
    inline ServerReplicationParameters& WithRunOnce(bool value) { SetRunOnce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type for creating a replication job for the server.</p>
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline ServerReplicationParameters& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}
    inline ServerReplicationParameters& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recent AMIs to keep when creating a replication job for this
     * server.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }
    inline ServerReplicationParameters& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the replication job produces encrypted AMIs.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ServerReplicationParameters& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p>If encrypted is
     * enabled but a KMS key ID is not specified, the customer's default KMS key for
     * Amazon EBS is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ServerReplicationParameters& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ServerReplicationParameters& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ServerReplicationParameters& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_seedTime;
    bool m_seedTimeHasBeenSet = false;

    int m_frequency;
    bool m_frequencyHasBeenSet = false;

    bool m_runOnce;
    bool m_runOnceHasBeenSet = false;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    int m_numberOfRecentAmisToKeep;
    bool m_numberOfRecentAmisToKeepHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
