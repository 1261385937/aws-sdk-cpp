﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Details identifying the users with permissions to use the action
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypePermissions">AWS
   * API Reference</a></p>
   */
  class ActionTypePermissions
  {
  public:
    AWS_CODEPIPELINE_API ActionTypePermissions();
    AWS_CODEPIPELINE_API ActionTypePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Amazon Web Services account IDs with access to use the action type
     * in their pipelines.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAccounts() const{ return m_allowedAccounts; }
    inline bool AllowedAccountsHasBeenSet() const { return m_allowedAccountsHasBeenSet; }
    inline void SetAllowedAccounts(const Aws::Vector<Aws::String>& value) { m_allowedAccountsHasBeenSet = true; m_allowedAccounts = value; }
    inline void SetAllowedAccounts(Aws::Vector<Aws::String>&& value) { m_allowedAccountsHasBeenSet = true; m_allowedAccounts = std::move(value); }
    inline ActionTypePermissions& WithAllowedAccounts(const Aws::Vector<Aws::String>& value) { SetAllowedAccounts(value); return *this;}
    inline ActionTypePermissions& WithAllowedAccounts(Aws::Vector<Aws::String>&& value) { SetAllowedAccounts(std::move(value)); return *this;}
    inline ActionTypePermissions& AddAllowedAccounts(const Aws::String& value) { m_allowedAccountsHasBeenSet = true; m_allowedAccounts.push_back(value); return *this; }
    inline ActionTypePermissions& AddAllowedAccounts(Aws::String&& value) { m_allowedAccountsHasBeenSet = true; m_allowedAccounts.push_back(std::move(value)); return *this; }
    inline ActionTypePermissions& AddAllowedAccounts(const char* value) { m_allowedAccountsHasBeenSet = true; m_allowedAccounts.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedAccounts;
    bool m_allowedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
