﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/RelationshipStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details on a member account in your organization.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_INSPECTOR2_API Member();
    AWS_INSPECTOR2_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Member& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator for this member account.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const{ return m_delegatedAdminAccountId; }
    inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }
    inline void SetDelegatedAdminAccountId(const Aws::String& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = value; }
    inline void SetDelegatedAdminAccountId(Aws::String&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::move(value); }
    inline void SetDelegatedAdminAccountId(const char* value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId.assign(value); }
    inline Member& WithDelegatedAdminAccountId(const Aws::String& value) { SetDelegatedAdminAccountId(value); return *this;}
    inline Member& WithDelegatedAdminAccountId(Aws::String&& value) { SetDelegatedAdminAccountId(std::move(value)); return *this;}
    inline Member& WithDelegatedAdminAccountId(const char* value) { SetDelegatedAdminAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the member account.</p>
     */
    inline const RelationshipStatus& GetRelationshipStatus() const{ return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(const RelationshipStatus& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline void SetRelationshipStatus(RelationshipStatus&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }
    inline Member& WithRelationshipStatus(const RelationshipStatus& value) { SetRelationshipStatus(value); return *this;}
    inline Member& WithRelationshipStatus(RelationshipStatus&& value) { SetRelationshipStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp showing when the status of this member was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Member& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Member& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;

    RelationshipStatus m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
