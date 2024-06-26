﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/RestoreWindow.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBInstanceAutomatedBackupsReplication.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>An automated backup of a DB instance. It consists of system backups,
   * transaction logs, and the database instance properties that existed at the time
   * you deleted the source instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackup">AWS
   * API Reference</a></p>
   */
  class DBInstanceAutomatedBackup
  {
  public:
    AWS_RDS_API DBInstanceAutomatedBackup();
    AWS_RDS_API DBInstanceAutomatedBackup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBInstanceAutomatedBackup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the automated backups.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const{ return m_dBInstanceArn; }
    inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }
    inline void SetDBInstanceArn(const Aws::String& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }
    inline void SetDBInstanceArn(Aws::String&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = std::move(value); }
    inline void SetDBInstanceArn(const char* value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn.assign(value); }
    inline DBInstanceAutomatedBackup& WithDBInstanceArn(const Aws::String& value) { SetDBInstanceArn(value); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceArn(Aws::String&& value) { SetDBInstanceArn(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceArn(const char* value) { SetDBInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }
    inline DBInstanceAutomatedBackup& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}
    inline DBInstanceAutomatedBackup& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region associated with the automated backup.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline DBInstanceAutomatedBackup& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DBInstanceAutomatedBackup& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the source DB instance, which can't be changed and which
     * is unique to an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DBInstanceAutomatedBackup& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The earliest and latest time a DB instance can be restored to.</p>
     */
    inline const RestoreWindow& GetRestoreWindow() const{ return m_restoreWindow; }
    inline bool RestoreWindowHasBeenSet() const { return m_restoreWindowHasBeenSet; }
    inline void SetRestoreWindow(const RestoreWindow& value) { m_restoreWindowHasBeenSet = true; m_restoreWindow = value; }
    inline void SetRestoreWindow(RestoreWindow&& value) { m_restoreWindowHasBeenSet = true; m_restoreWindow = std::move(value); }
    inline DBInstanceAutomatedBackup& WithRestoreWindow(const RestoreWindow& value) { SetRestoreWindow(value); return *this;}
    inline DBInstanceAutomatedBackup& WithRestoreWindow(RestoreWindow&& value) { SetRestoreWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated storage size for the the automated backup in gibibytes
     * (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DBInstanceAutomatedBackup& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of status information for an automated backup:</p> <ul> <li> <p>
     * <code>active</code> - Automated backups for current instances.</p> </li> <li>
     * <p> <code>retained</code> - Automated backups for deleted instances.</p> </li>
     * <li> <p> <code>creating</code> - Automated backups that are waiting for the
     * first automated snapshot to be available.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBInstanceAutomatedBackup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBInstanceAutomatedBackup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number that the automated backup used for connections.</p>
     * <p>Default: Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DBInstanceAutomatedBackup& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone that the automated backup was created in. For
     * information on Amazon Web Services Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline DBInstanceAutomatedBackup& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline DBInstanceAutomatedBackup& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID associated with the DB instance.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline DBInstanceAutomatedBackup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DBInstanceAutomatedBackup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the DB instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }
    inline DBInstanceAutomatedBackup& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}
    inline DBInstanceAutomatedBackup& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name of an automated backup.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }
    inline DBInstanceAutomatedBackup& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}
    inline DBInstanceAutomatedBackup& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database engine for this automated backup.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DBInstanceAutomatedBackup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DBInstanceAutomatedBackup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine for the automated backup.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DBInstanceAutomatedBackup& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DBInstanceAutomatedBackup& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model information for the automated backup.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline DBInstanceAutomatedBackup& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline DBInstanceAutomatedBackup& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IOPS (I/O operations per second) value for the automated backup.</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline DBInstanceAutomatedBackup& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group the automated backup is associated with. If omitted, the
     * default option group for the engine specified is used.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline DBInstanceAutomatedBackup& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline DBInstanceAutomatedBackup& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which the automated backup is associated for
     * TDE encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }
    inline DBInstanceAutomatedBackup& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline DBInstanceAutomatedBackup& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the automated backup is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline DBInstanceAutomatedBackup& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type associated with the automated backup.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline DBInstanceAutomatedBackup& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline DBInstanceAutomatedBackup& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key ID for an automated backup.</p> <p>The Amazon
     * Web Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name
     * for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DBInstanceAutomatedBackup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DBInstanceAutomatedBackup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the automated backup. In most cases, the
     * <code>Timezone</code> element is empty. <code>Timezone</code> content appears
     * only for Microsoft SQL Server DB instances that were created with a time zone
     * specified.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline DBInstanceAutomatedBackup& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline DBInstanceAutomatedBackup& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled, and otherwise false.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }
    inline DBInstanceAutomatedBackup& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period for the automated backups.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline DBInstanceAutomatedBackup& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the replicated automated backups.</p>
     */
    inline const Aws::String& GetDBInstanceAutomatedBackupsArn() const{ return m_dBInstanceAutomatedBackupsArn; }
    inline bool DBInstanceAutomatedBackupsArnHasBeenSet() const { return m_dBInstanceAutomatedBackupsArnHasBeenSet; }
    inline void SetDBInstanceAutomatedBackupsArn(const Aws::String& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = value; }
    inline void SetDBInstanceAutomatedBackupsArn(Aws::String&& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = std::move(value); }
    inline void SetDBInstanceAutomatedBackupsArn(const char* value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn.assign(value); }
    inline DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsArn(const Aws::String& value) { SetDBInstanceAutomatedBackupsArn(value); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsArn(Aws::String&& value) { SetDBInstanceAutomatedBackupsArn(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsArn(const char* value) { SetDBInstanceAutomatedBackupsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of replications to different Amazon Web Services Regions associated
     * with the automated backup.</p>
     */
    inline const Aws::Vector<DBInstanceAutomatedBackupsReplication>& GetDBInstanceAutomatedBackupsReplications() const{ return m_dBInstanceAutomatedBackupsReplications; }
    inline bool DBInstanceAutomatedBackupsReplicationsHasBeenSet() const { return m_dBInstanceAutomatedBackupsReplicationsHasBeenSet; }
    inline void SetDBInstanceAutomatedBackupsReplications(const Aws::Vector<DBInstanceAutomatedBackupsReplication>& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications = value; }
    inline void SetDBInstanceAutomatedBackupsReplications(Aws::Vector<DBInstanceAutomatedBackupsReplication>&& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications = std::move(value); }
    inline DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsReplications(const Aws::Vector<DBInstanceAutomatedBackupsReplication>& value) { SetDBInstanceAutomatedBackupsReplications(value); return *this;}
    inline DBInstanceAutomatedBackup& WithDBInstanceAutomatedBackupsReplications(Aws::Vector<DBInstanceAutomatedBackupsReplication>&& value) { SetDBInstanceAutomatedBackupsReplications(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& AddDBInstanceAutomatedBackupsReplications(const DBInstanceAutomatedBackupsReplication& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications.push_back(value); return *this; }
    inline DBInstanceAutomatedBackup& AddDBInstanceAutomatedBackupsReplications(DBInstanceAutomatedBackupsReplication&& value) { m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true; m_dBInstanceAutomatedBackupsReplications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location where automated backups are stored: Amazon Web Services Outposts
     * or the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetBackupTarget() const{ return m_backupTarget; }
    inline bool BackupTargetHasBeenSet() const { return m_backupTargetHasBeenSet; }
    inline void SetBackupTarget(const Aws::String& value) { m_backupTargetHasBeenSet = true; m_backupTarget = value; }
    inline void SetBackupTarget(Aws::String&& value) { m_backupTargetHasBeenSet = true; m_backupTarget = std::move(value); }
    inline void SetBackupTarget(const char* value) { m_backupTargetHasBeenSet = true; m_backupTarget.assign(value); }
    inline DBInstanceAutomatedBackup& WithBackupTarget(const Aws::String& value) { SetBackupTarget(value); return *this;}
    inline DBInstanceAutomatedBackup& WithBackupTarget(Aws::String&& value) { SetBackupTarget(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithBackupTarget(const char* value) { SetBackupTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput for the automated backup.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline DBInstanceAutomatedBackup& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
     * Backup.</p>
     */
    inline const Aws::String& GetAwsBackupRecoveryPointArn() const{ return m_awsBackupRecoveryPointArn; }
    inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
    inline void SetAwsBackupRecoveryPointArn(const Aws::String& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = value; }
    inline void SetAwsBackupRecoveryPointArn(Aws::String&& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = std::move(value); }
    inline void SetAwsBackupRecoveryPointArn(const char* value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn.assign(value); }
    inline DBInstanceAutomatedBackup& WithAwsBackupRecoveryPointArn(const Aws::String& value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    inline DBInstanceAutomatedBackup& WithAwsBackupRecoveryPointArn(Aws::String&& value) { SetAwsBackupRecoveryPointArn(std::move(value)); return *this;}
    inline DBInstanceAutomatedBackup& WithAwsBackupRecoveryPointArn(const char* value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
     * enabled.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline DBInstanceAutomatedBackup& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the automatic backup is for a DB instance in the
     * multi-tenant configuration (TRUE) or the single-tenant configuration (FALSE).
     * </p>
     */
    inline bool GetMultiTenant() const{ return m_multiTenant; }
    inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
    inline void SetMultiTenant(bool value) { m_multiTenantHasBeenSet = true; m_multiTenant = value; }
    inline DBInstanceAutomatedBackup& WithMultiTenant(bool value) { SetMultiTenant(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    RestoreWindow m_restoreWindow;
    bool m_restoreWindowHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_dBInstanceAutomatedBackupsArn;
    bool m_dBInstanceAutomatedBackupsArnHasBeenSet = false;

    Aws::Vector<DBInstanceAutomatedBackupsReplication> m_dBInstanceAutomatedBackupsReplications;
    bool m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = false;

    Aws::String m_backupTarget;
    bool m_backupTargetHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    Aws::String m_awsBackupRecoveryPointArn;
    bool m_awsBackupRecoveryPointArnHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    bool m_multiTenant;
    bool m_multiTenantHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
