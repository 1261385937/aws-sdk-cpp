﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/MonetaryAmount.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the metadata of an offering transaction.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/OfferingTransaction">AWS
   * API Reference</a></p>
   */
  class OfferingTransaction
  {
  public:
    AWS_DEVICEFARM_API OfferingTransaction();
    AWS_DEVICEFARM_API OfferingTransaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API OfferingTransaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an offering transaction.</p>
     */
    inline const OfferingStatus& GetOfferingStatus() const{ return m_offeringStatus; }
    inline bool OfferingStatusHasBeenSet() const { return m_offeringStatusHasBeenSet; }
    inline void SetOfferingStatus(const OfferingStatus& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = value; }
    inline void SetOfferingStatus(OfferingStatus&& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = std::move(value); }
    inline OfferingTransaction& WithOfferingStatus(const OfferingStatus& value) { SetOfferingStatus(value); return *this;}
    inline OfferingTransaction& WithOfferingStatus(OfferingStatus&& value) { SetOfferingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline OfferingTransaction& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline OfferingTransaction& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline OfferingTransaction& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline const Aws::String& GetOfferingPromotionId() const{ return m_offeringPromotionId; }
    inline bool OfferingPromotionIdHasBeenSet() const { return m_offeringPromotionIdHasBeenSet; }
    inline void SetOfferingPromotionId(const Aws::String& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = value; }
    inline void SetOfferingPromotionId(Aws::String&& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = std::move(value); }
    inline void SetOfferingPromotionId(const char* value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId.assign(value); }
    inline OfferingTransaction& WithOfferingPromotionId(const Aws::String& value) { SetOfferingPromotionId(value); return *this;}
    inline OfferingTransaction& WithOfferingPromotionId(Aws::String&& value) { SetOfferingPromotionId(std::move(value)); return *this;}
    inline OfferingTransaction& WithOfferingPromotionId(const char* value) { SetOfferingPromotionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }
    inline OfferingTransaction& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}
    inline OfferingTransaction& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline const MonetaryAmount& GetCost() const{ return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    inline void SetCost(const MonetaryAmount& value) { m_costHasBeenSet = true; m_cost = value; }
    inline void SetCost(MonetaryAmount&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }
    inline OfferingTransaction& WithCost(const MonetaryAmount& value) { SetCost(value); return *this;}
    inline OfferingTransaction& WithCost(MonetaryAmount&& value) { SetCost(std::move(value)); return *this;}
    ///@}
  private:

    OfferingStatus m_offeringStatus;
    bool m_offeringStatusHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::String m_offeringPromotionId;
    bool m_offeringPromotionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet = false;

    MonetaryAmount m_cost;
    bool m_costHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
