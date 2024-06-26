﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/ListCustomLineItemFlatChargeDetails.h>
#include <aws/billingconductor/model/ListCustomLineItemPercentageChargeDetails.h>
#include <aws/billingconductor/model/CustomLineItemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/LineItemFilter.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> A representation of the charge details of a custom line item. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemChargeDetails">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemChargeDetails
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemChargeDetails();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemChargeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemChargeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A <code>ListCustomLineItemFlatChargeDetails</code> that describes the charge
     * details of a flat custom line item. </p>
     */
    inline const ListCustomLineItemFlatChargeDetails& GetFlat() const{ return m_flat; }
    inline bool FlatHasBeenSet() const { return m_flatHasBeenSet; }
    inline void SetFlat(const ListCustomLineItemFlatChargeDetails& value) { m_flatHasBeenSet = true; m_flat = value; }
    inline void SetFlat(ListCustomLineItemFlatChargeDetails&& value) { m_flatHasBeenSet = true; m_flat = std::move(value); }
    inline ListCustomLineItemChargeDetails& WithFlat(const ListCustomLineItemFlatChargeDetails& value) { SetFlat(value); return *this;}
    inline ListCustomLineItemChargeDetails& WithFlat(ListCustomLineItemFlatChargeDetails&& value) { SetFlat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ListCustomLineItemPercentageChargeDetails</code> that describes the
     * charge details of a percentage custom line item. </p>
     */
    inline const ListCustomLineItemPercentageChargeDetails& GetPercentage() const{ return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(const ListCustomLineItemPercentageChargeDetails& value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline void SetPercentage(ListCustomLineItemPercentageChargeDetails&& value) { m_percentageHasBeenSet = true; m_percentage = std::move(value); }
    inline ListCustomLineItemChargeDetails& WithPercentage(const ListCustomLineItemPercentageChargeDetails& value) { SetPercentage(value); return *this;}
    inline ListCustomLineItemChargeDetails& WithPercentage(ListCustomLineItemPercentageChargeDetails&& value) { SetPercentage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the custom line item that indicates whether the charge is a
     * <code>fee</code> or <code>credit</code>. </p>
     */
    inline const CustomLineItemType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CustomLineItemType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CustomLineItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListCustomLineItemChargeDetails& WithType(const CustomLineItemType& value) { SetType(value); return *this;}
    inline ListCustomLineItemChargeDetails& WithType(CustomLineItemType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A representation of the line item filter.</p>
     */
    inline const Aws::Vector<LineItemFilter>& GetLineItemFilters() const{ return m_lineItemFilters; }
    inline bool LineItemFiltersHasBeenSet() const { return m_lineItemFiltersHasBeenSet; }
    inline void SetLineItemFilters(const Aws::Vector<LineItemFilter>& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters = value; }
    inline void SetLineItemFilters(Aws::Vector<LineItemFilter>&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters = std::move(value); }
    inline ListCustomLineItemChargeDetails& WithLineItemFilters(const Aws::Vector<LineItemFilter>& value) { SetLineItemFilters(value); return *this;}
    inline ListCustomLineItemChargeDetails& WithLineItemFilters(Aws::Vector<LineItemFilter>&& value) { SetLineItemFilters(std::move(value)); return *this;}
    inline ListCustomLineItemChargeDetails& AddLineItemFilters(const LineItemFilter& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.push_back(value); return *this; }
    inline ListCustomLineItemChargeDetails& AddLineItemFilters(LineItemFilter&& value) { m_lineItemFiltersHasBeenSet = true; m_lineItemFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ListCustomLineItemFlatChargeDetails m_flat;
    bool m_flatHasBeenSet = false;

    ListCustomLineItemPercentageChargeDetails m_percentage;
    bool m_percentageHasBeenSet = false;

    CustomLineItemType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<LineItemFilter> m_lineItemFilters;
    bool m_lineItemFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
