﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/AnnotationValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ServiceId.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about a segment annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ValueWithServiceIds">AWS
   * API Reference</a></p>
   */
  class ValueWithServiceIds
  {
  public:
    AWS_XRAY_API ValueWithServiceIds();
    AWS_XRAY_API ValueWithServiceIds(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ValueWithServiceIds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Values of the annotation.</p>
     */
    inline const AnnotationValue& GetAnnotationValue() const{ return m_annotationValue; }
    inline bool AnnotationValueHasBeenSet() const { return m_annotationValueHasBeenSet; }
    inline void SetAnnotationValue(const AnnotationValue& value) { m_annotationValueHasBeenSet = true; m_annotationValue = value; }
    inline void SetAnnotationValue(AnnotationValue&& value) { m_annotationValueHasBeenSet = true; m_annotationValue = std::move(value); }
    inline ValueWithServiceIds& WithAnnotationValue(const AnnotationValue& value) { SetAnnotationValue(value); return *this;}
    inline ValueWithServiceIds& WithAnnotationValue(AnnotationValue&& value) { SetAnnotationValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Services to which the annotation applies.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const{ return m_serviceIds; }
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }
    inline void SetServiceIds(const Aws::Vector<ServiceId>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }
    inline void SetServiceIds(Aws::Vector<ServiceId>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }
    inline ValueWithServiceIds& WithServiceIds(const Aws::Vector<ServiceId>& value) { SetServiceIds(value); return *this;}
    inline ValueWithServiceIds& WithServiceIds(Aws::Vector<ServiceId>&& value) { SetServiceIds(std::move(value)); return *this;}
    inline ValueWithServiceIds& AddServiceIds(const ServiceId& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }
    inline ValueWithServiceIds& AddServiceIds(ServiceId&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AnnotationValue m_annotationValue;
    bool m_annotationValueHasBeenSet = false;

    Aws::Vector<ServiceId> m_serviceIds;
    bool m_serviceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
