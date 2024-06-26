﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The input structure for Map Matching operation type.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/MapMatchingConfig">AWS
   * API Reference</a></p>
   */
  class MapMatchingConfig
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig();
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API MapMatchingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name for the data that describes the identifier representing a
     * collection of GPS points belonging to an individual trace.</p>
     */
    inline const Aws::String& GetIdAttributeName() const{ return m_idAttributeName; }
    inline bool IdAttributeNameHasBeenSet() const { return m_idAttributeNameHasBeenSet; }
    inline void SetIdAttributeName(const Aws::String& value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName = value; }
    inline void SetIdAttributeName(Aws::String&& value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName = std::move(value); }
    inline void SetIdAttributeName(const char* value) { m_idAttributeNameHasBeenSet = true; m_idAttributeName.assign(value); }
    inline MapMatchingConfig& WithIdAttributeName(const Aws::String& value) { SetIdAttributeName(value); return *this;}
    inline MapMatchingConfig& WithIdAttributeName(Aws::String&& value) { SetIdAttributeName(std::move(value)); return *this;}
    inline MapMatchingConfig& WithIdAttributeName(const char* value) { SetIdAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the timestamp attribute.</p>
     */
    inline const Aws::String& GetTimestampAttributeName() const{ return m_timestampAttributeName; }
    inline bool TimestampAttributeNameHasBeenSet() const { return m_timestampAttributeNameHasBeenSet; }
    inline void SetTimestampAttributeName(const Aws::String& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = value; }
    inline void SetTimestampAttributeName(Aws::String&& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = std::move(value); }
    inline void SetTimestampAttributeName(const char* value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName.assign(value); }
    inline MapMatchingConfig& WithTimestampAttributeName(const Aws::String& value) { SetTimestampAttributeName(value); return *this;}
    inline MapMatchingConfig& WithTimestampAttributeName(Aws::String&& value) { SetTimestampAttributeName(std::move(value)); return *this;}
    inline MapMatchingConfig& WithTimestampAttributeName(const char* value) { SetTimestampAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the X-attribute</p>
     */
    inline const Aws::String& GetXAttributeName() const{ return m_xAttributeName; }
    inline bool XAttributeNameHasBeenSet() const { return m_xAttributeNameHasBeenSet; }
    inline void SetXAttributeName(const Aws::String& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = value; }
    inline void SetXAttributeName(Aws::String&& value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName = std::move(value); }
    inline void SetXAttributeName(const char* value) { m_xAttributeNameHasBeenSet = true; m_xAttributeName.assign(value); }
    inline MapMatchingConfig& WithXAttributeName(const Aws::String& value) { SetXAttributeName(value); return *this;}
    inline MapMatchingConfig& WithXAttributeName(Aws::String&& value) { SetXAttributeName(std::move(value)); return *this;}
    inline MapMatchingConfig& WithXAttributeName(const char* value) { SetXAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Y-attribute</p>
     */
    inline const Aws::String& GetYAttributeName() const{ return m_yAttributeName; }
    inline bool YAttributeNameHasBeenSet() const { return m_yAttributeNameHasBeenSet; }
    inline void SetYAttributeName(const Aws::String& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = value; }
    inline void SetYAttributeName(Aws::String&& value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName = std::move(value); }
    inline void SetYAttributeName(const char* value) { m_yAttributeNameHasBeenSet = true; m_yAttributeName.assign(value); }
    inline MapMatchingConfig& WithYAttributeName(const Aws::String& value) { SetYAttributeName(value); return *this;}
    inline MapMatchingConfig& WithYAttributeName(Aws::String&& value) { SetYAttributeName(std::move(value)); return *this;}
    inline MapMatchingConfig& WithYAttributeName(const char* value) { SetYAttributeName(value); return *this;}
    ///@}
  private:

    Aws::String m_idAttributeName;
    bool m_idAttributeNameHasBeenSet = false;

    Aws::String m_timestampAttributeName;
    bool m_timestampAttributeNameHasBeenSet = false;

    Aws::String m_xAttributeName;
    bool m_xAttributeNameHasBeenSet = false;

    Aws::String m_yAttributeName;
    bool m_yAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
