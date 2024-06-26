﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UserRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace UserRoleMapper
      {

        static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");
        static const int AUTHOR_HASH = HashingUtils::HashString("AUTHOR");
        static const int READER_HASH = HashingUtils::HashString("READER");
        static const int RESTRICTED_AUTHOR_HASH = HashingUtils::HashString("RESTRICTED_AUTHOR");
        static const int RESTRICTED_READER_HASH = HashingUtils::HashString("RESTRICTED_READER");
        static const int ADMIN_PRO_HASH = HashingUtils::HashString("ADMIN_PRO");
        static const int AUTHOR_PRO_HASH = HashingUtils::HashString("AUTHOR_PRO");
        static const int READER_PRO_HASH = HashingUtils::HashString("READER_PRO");


        UserRole GetUserRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADMIN_HASH)
          {
            return UserRole::ADMIN;
          }
          else if (hashCode == AUTHOR_HASH)
          {
            return UserRole::AUTHOR;
          }
          else if (hashCode == READER_HASH)
          {
            return UserRole::READER;
          }
          else if (hashCode == RESTRICTED_AUTHOR_HASH)
          {
            return UserRole::RESTRICTED_AUTHOR;
          }
          else if (hashCode == RESTRICTED_READER_HASH)
          {
            return UserRole::RESTRICTED_READER;
          }
          else if (hashCode == ADMIN_PRO_HASH)
          {
            return UserRole::ADMIN_PRO;
          }
          else if (hashCode == AUTHOR_PRO_HASH)
          {
            return UserRole::AUTHOR_PRO;
          }
          else if (hashCode == READER_PRO_HASH)
          {
            return UserRole::READER_PRO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserRole>(hashCode);
          }

          return UserRole::NOT_SET;
        }

        Aws::String GetNameForUserRole(UserRole enumValue)
        {
          switch(enumValue)
          {
          case UserRole::NOT_SET:
            return {};
          case UserRole::ADMIN:
            return "ADMIN";
          case UserRole::AUTHOR:
            return "AUTHOR";
          case UserRole::READER:
            return "READER";
          case UserRole::RESTRICTED_AUTHOR:
            return "RESTRICTED_AUTHOR";
          case UserRole::RESTRICTED_READER:
            return "RESTRICTED_READER";
          case UserRole::ADMIN_PRO:
            return "ADMIN_PRO";
          case UserRole::AUTHOR_PRO:
            return "AUTHOR_PRO";
          case UserRole::READER_PRO:
            return "READER_PRO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
