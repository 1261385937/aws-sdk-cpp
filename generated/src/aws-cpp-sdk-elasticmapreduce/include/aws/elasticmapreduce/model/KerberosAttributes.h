﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
   * using a security configuration. For more information see <a
   * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
   * Kerberos Authentication</a> in the <i>Amazon EMR Management
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/KerberosAttributes">AWS
   * API Reference</a></p>
   */
  class KerberosAttributes
  {
  public:
    AWS_EMR_API KerberosAttributes();
    AWS_EMR_API KerberosAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API KerberosAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Kerberos realm to which all nodes in a cluster belong. For
     * example, <code>EC2.INTERNAL</code>. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }
    inline KerberosAttributes& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline KerberosAttributes& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline KerberosAttributes& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used within the cluster for the kadmin service on the
     * cluster-dedicated KDC, which maintains Kerberos principals, password policies,
     * and keytabs for the cluster.</p>
     */
    inline const Aws::String& GetKdcAdminPassword() const{ return m_kdcAdminPassword; }
    inline bool KdcAdminPasswordHasBeenSet() const { return m_kdcAdminPasswordHasBeenSet; }
    inline void SetKdcAdminPassword(const Aws::String& value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword = value; }
    inline void SetKdcAdminPassword(Aws::String&& value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword = std::move(value); }
    inline void SetKdcAdminPassword(const char* value) { m_kdcAdminPasswordHasBeenSet = true; m_kdcAdminPassword.assign(value); }
    inline KerberosAttributes& WithKdcAdminPassword(const Aws::String& value) { SetKdcAdminPassword(value); return *this;}
    inline KerberosAttributes& WithKdcAdminPassword(Aws::String&& value) { SetKdcAdminPassword(std::move(value)); return *this;}
    inline KerberosAttributes& WithKdcAdminPassword(const char* value) { SetKdcAdminPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required only when establishing a cross-realm trust with a KDC in a different
     * realm. The cross-realm principal password, which must be identical across
     * realms.</p>
     */
    inline const Aws::String& GetCrossRealmTrustPrincipalPassword() const{ return m_crossRealmTrustPrincipalPassword; }
    inline bool CrossRealmTrustPrincipalPasswordHasBeenSet() const { return m_crossRealmTrustPrincipalPasswordHasBeenSet; }
    inline void SetCrossRealmTrustPrincipalPassword(const Aws::String& value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword = value; }
    inline void SetCrossRealmTrustPrincipalPassword(Aws::String&& value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword = std::move(value); }
    inline void SetCrossRealmTrustPrincipalPassword(const char* value) { m_crossRealmTrustPrincipalPasswordHasBeenSet = true; m_crossRealmTrustPrincipalPassword.assign(value); }
    inline KerberosAttributes& WithCrossRealmTrustPrincipalPassword(const Aws::String& value) { SetCrossRealmTrustPrincipalPassword(value); return *this;}
    inline KerberosAttributes& WithCrossRealmTrustPrincipalPassword(Aws::String&& value) { SetCrossRealmTrustPrincipalPassword(std::move(value)); return *this;}
    inline KerberosAttributes& WithCrossRealmTrustPrincipalPassword(const char* value) { SetCrossRealmTrustPrincipalPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required only when establishing a cross-realm trust with an Active Directory
     * domain. A user with sufficient privileges to join resources to the domain.</p>
     */
    inline const Aws::String& GetADDomainJoinUser() const{ return m_aDDomainJoinUser; }
    inline bool ADDomainJoinUserHasBeenSet() const { return m_aDDomainJoinUserHasBeenSet; }
    inline void SetADDomainJoinUser(const Aws::String& value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser = value; }
    inline void SetADDomainJoinUser(Aws::String&& value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser = std::move(value); }
    inline void SetADDomainJoinUser(const char* value) { m_aDDomainJoinUserHasBeenSet = true; m_aDDomainJoinUser.assign(value); }
    inline KerberosAttributes& WithADDomainJoinUser(const Aws::String& value) { SetADDomainJoinUser(value); return *this;}
    inline KerberosAttributes& WithADDomainJoinUser(Aws::String&& value) { SetADDomainJoinUser(std::move(value)); return *this;}
    inline KerberosAttributes& WithADDomainJoinUser(const char* value) { SetADDomainJoinUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory password for <code>ADDomainJoinUser</code>.</p>
     */
    inline const Aws::String& GetADDomainJoinPassword() const{ return m_aDDomainJoinPassword; }
    inline bool ADDomainJoinPasswordHasBeenSet() const { return m_aDDomainJoinPasswordHasBeenSet; }
    inline void SetADDomainJoinPassword(const Aws::String& value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword = value; }
    inline void SetADDomainJoinPassword(Aws::String&& value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword = std::move(value); }
    inline void SetADDomainJoinPassword(const char* value) { m_aDDomainJoinPasswordHasBeenSet = true; m_aDDomainJoinPassword.assign(value); }
    inline KerberosAttributes& WithADDomainJoinPassword(const Aws::String& value) { SetADDomainJoinPassword(value); return *this;}
    inline KerberosAttributes& WithADDomainJoinPassword(Aws::String&& value) { SetADDomainJoinPassword(std::move(value)); return *this;}
    inline KerberosAttributes& WithADDomainJoinPassword(const char* value) { SetADDomainJoinPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::String m_kdcAdminPassword;
    bool m_kdcAdminPasswordHasBeenSet = false;

    Aws::String m_crossRealmTrustPrincipalPassword;
    bool m_crossRealmTrustPrincipalPasswordHasBeenSet = false;

    Aws::String m_aDDomainJoinUser;
    bool m_aDDomainJoinUserHasBeenSet = false;

    Aws::String m_aDDomainJoinPassword;
    bool m_aDDomainJoinPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
