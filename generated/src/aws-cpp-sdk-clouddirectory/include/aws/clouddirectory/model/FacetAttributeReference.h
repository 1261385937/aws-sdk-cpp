﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>The facet attribute reference that specifies the attribute definition that
   * contains the attribute facet name and attribute name.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/FacetAttributeReference">AWS
   * API Reference</a></p>
   */
  class FacetAttributeReference
  {
  public:
    AWS_CLOUDDIRECTORY_API FacetAttributeReference();
    AWS_CLOUDDIRECTORY_API FacetAttributeReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API FacetAttributeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target facet name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetFacetName() const{ return m_targetFacetName; }
    inline bool TargetFacetNameHasBeenSet() const { return m_targetFacetNameHasBeenSet; }
    inline void SetTargetFacetName(const Aws::String& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = value; }
    inline void SetTargetFacetName(Aws::String&& value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName = std::move(value); }
    inline void SetTargetFacetName(const char* value) { m_targetFacetNameHasBeenSet = true; m_targetFacetName.assign(value); }
    inline FacetAttributeReference& WithTargetFacetName(const Aws::String& value) { SetTargetFacetName(value); return *this;}
    inline FacetAttributeReference& WithTargetFacetName(Aws::String&& value) { SetTargetFacetName(std::move(value)); return *this;}
    inline FacetAttributeReference& WithTargetFacetName(const char* value) { SetTargetFacetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target attribute name that is associated with the facet reference. See <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/schemas_attributereferences.html">Attribute
     * References</a> for more information.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::move(value); }
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }
    inline FacetAttributeReference& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}
    inline FacetAttributeReference& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(std::move(value)); return *this;}
    inline FacetAttributeReference& WithTargetAttributeName(const char* value) { SetTargetAttributeName(value); return *this;}
    ///@}
  private:

    Aws::String m_targetFacetName;
    bool m_targetFacetNameHasBeenSet = false;

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
