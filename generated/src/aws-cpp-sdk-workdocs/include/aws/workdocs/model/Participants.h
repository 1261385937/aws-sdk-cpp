﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/UserMetadata.h>
#include <aws/workdocs/model/GroupMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the users or user groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Participants">AWS
   * API Reference</a></p>
   */
  class Participants
  {
  public:
    AWS_WORKDOCS_API Participants();
    AWS_WORKDOCS_API Participants(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Participants& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of users.</p>
     */
    inline const Aws::Vector<UserMetadata>& GetUsers() const{ return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    inline void SetUsers(const Aws::Vector<UserMetadata>& value) { m_usersHasBeenSet = true; m_users = value; }
    inline void SetUsers(Aws::Vector<UserMetadata>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }
    inline Participants& WithUsers(const Aws::Vector<UserMetadata>& value) { SetUsers(value); return *this;}
    inline Participants& WithUsers(Aws::Vector<UserMetadata>&& value) { SetUsers(std::move(value)); return *this;}
    inline Participants& AddUsers(const UserMetadata& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }
    inline Participants& AddUsers(UserMetadata&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of user groups.</p>
     */
    inline const Aws::Vector<GroupMetadata>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<GroupMetadata>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupMetadata>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline Participants& WithGroups(const Aws::Vector<GroupMetadata>& value) { SetGroups(value); return *this;}
    inline Participants& WithGroups(Aws::Vector<GroupMetadata>&& value) { SetGroups(std::move(value)); return *this;}
    inline Participants& AddGroups(const GroupMetadata& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline Participants& AddGroups(GroupMetadata&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UserMetadata> m_users;
    bool m_usersHasBeenSet = false;

    Aws::Vector<GroupMetadata> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
