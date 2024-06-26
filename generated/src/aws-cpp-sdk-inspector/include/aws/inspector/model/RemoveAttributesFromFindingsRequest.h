﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class RemoveAttributesFromFindingsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API RemoveAttributesFromFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAttributesFromFindings"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARNs that specify the findings that you want to remove attributes
     * from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const{ return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    inline void SetFindingArns(const Aws::Vector<Aws::String>& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }
    inline void SetFindingArns(Aws::Vector<Aws::String>&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::move(value); }
    inline RemoveAttributesFromFindingsRequest& WithFindingArns(const Aws::Vector<Aws::String>& value) { SetFindingArns(value); return *this;}
    inline RemoveAttributesFromFindingsRequest& WithFindingArns(Aws::Vector<Aws::String>&& value) { SetFindingArns(std::move(value)); return *this;}
    inline RemoveAttributesFromFindingsRequest& AddFindingArns(const Aws::String& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }
    inline RemoveAttributesFromFindingsRequest& AddFindingArns(Aws::String&& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(std::move(value)); return *this; }
    inline RemoveAttributesFromFindingsRequest& AddFindingArns(const char* value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of attribute keys that you want to remove from specified
     * findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeKeys() const{ return m_attributeKeys; }
    inline bool AttributeKeysHasBeenSet() const { return m_attributeKeysHasBeenSet; }
    inline void SetAttributeKeys(const Aws::Vector<Aws::String>& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys = value; }
    inline void SetAttributeKeys(Aws::Vector<Aws::String>&& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys = std::move(value); }
    inline RemoveAttributesFromFindingsRequest& WithAttributeKeys(const Aws::Vector<Aws::String>& value) { SetAttributeKeys(value); return *this;}
    inline RemoveAttributesFromFindingsRequest& WithAttributeKeys(Aws::Vector<Aws::String>&& value) { SetAttributeKeys(std::move(value)); return *this;}
    inline RemoveAttributesFromFindingsRequest& AddAttributeKeys(const Aws::String& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.push_back(value); return *this; }
    inline RemoveAttributesFromFindingsRequest& AddAttributeKeys(Aws::String&& value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.push_back(std::move(value)); return *this; }
    inline RemoveAttributesFromFindingsRequest& AddAttributeKeys(const char* value) { m_attributeKeysHasBeenSet = true; m_attributeKeys.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeKeys;
    bool m_attributeKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
