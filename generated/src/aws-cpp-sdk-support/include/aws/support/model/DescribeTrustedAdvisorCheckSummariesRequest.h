﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeTrustedAdvisorCheckSummariesRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustedAdvisorCheckSummaries"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCheckIds() const{ return m_checkIds; }
    inline bool CheckIdsHasBeenSet() const { return m_checkIdsHasBeenSet; }
    inline void SetCheckIds(const Aws::Vector<Aws::String>& value) { m_checkIdsHasBeenSet = true; m_checkIds = value; }
    inline void SetCheckIds(Aws::Vector<Aws::String>&& value) { m_checkIdsHasBeenSet = true; m_checkIds = std::move(value); }
    inline DescribeTrustedAdvisorCheckSummariesRequest& WithCheckIds(const Aws::Vector<Aws::String>& value) { SetCheckIds(value); return *this;}
    inline DescribeTrustedAdvisorCheckSummariesRequest& WithCheckIds(Aws::Vector<Aws::String>&& value) { SetCheckIds(std::move(value)); return *this;}
    inline DescribeTrustedAdvisorCheckSummariesRequest& AddCheckIds(const Aws::String& value) { m_checkIdsHasBeenSet = true; m_checkIds.push_back(value); return *this; }
    inline DescribeTrustedAdvisorCheckSummariesRequest& AddCheckIds(Aws::String&& value) { m_checkIdsHasBeenSet = true; m_checkIds.push_back(std::move(value)); return *this; }
    inline DescribeTrustedAdvisorCheckSummariesRequest& AddCheckIds(const char* value) { m_checkIdsHasBeenSet = true; m_checkIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_checkIds;
    bool m_checkIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
