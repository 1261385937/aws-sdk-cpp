﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/AcceptAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace AcceptActionMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        AcceptAction GetAcceptActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AcceptAction::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return AcceptAction::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptAction>(hashCode);
          }

          return AcceptAction::NOT_SET;
        }

        Aws::String GetNameForAcceptAction(AcceptAction enumValue)
        {
          switch(enumValue)
          {
          case AcceptAction::NOT_SET:
            return {};
          case AcceptAction::ALLOW:
            return "ALLOW";
          case AcceptAction::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptActionMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
