﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/GdgDetailAttributes.h>
#include <aws/m2/model/PoDetailAttributes.h>
#include <aws/m2/model/PsDetailAttributes.h>
#include <aws/m2/model/VsamDetailAttributes.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Additional details about the data set. Different attributes correspond to
   * different data set organizations. The values are populated based on datasetOrg,
   * storageType and backend (Blu Age or Micro Focus).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DatasetDetailOrgAttributes">AWS
   * API Reference</a></p>
   */
  class DatasetDetailOrgAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DatasetDetailOrgAttributes();
    AWS_MAINFRAMEMODERNIZATION_API DatasetDetailOrgAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DatasetDetailOrgAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The generation data group of the data set.</p>
     */
    inline const GdgDetailAttributes& GetGdg() const{ return m_gdg; }
    inline bool GdgHasBeenSet() const { return m_gdgHasBeenSet; }
    inline void SetGdg(const GdgDetailAttributes& value) { m_gdgHasBeenSet = true; m_gdg = value; }
    inline void SetGdg(GdgDetailAttributes&& value) { m_gdgHasBeenSet = true; m_gdg = std::move(value); }
    inline DatasetDetailOrgAttributes& WithGdg(const GdgDetailAttributes& value) { SetGdg(value); return *this;}
    inline DatasetDetailOrgAttributes& WithGdg(GdgDetailAttributes&& value) { SetGdg(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a PO type data set.</p>
     */
    inline const PoDetailAttributes& GetPo() const{ return m_po; }
    inline bool PoHasBeenSet() const { return m_poHasBeenSet; }
    inline void SetPo(const PoDetailAttributes& value) { m_poHasBeenSet = true; m_po = value; }
    inline void SetPo(PoDetailAttributes&& value) { m_poHasBeenSet = true; m_po = std::move(value); }
    inline DatasetDetailOrgAttributes& WithPo(const PoDetailAttributes& value) { SetPo(value); return *this;}
    inline DatasetDetailOrgAttributes& WithPo(PoDetailAttributes&& value) { SetPo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a PS type data set.</p>
     */
    inline const PsDetailAttributes& GetPs() const{ return m_ps; }
    inline bool PsHasBeenSet() const { return m_psHasBeenSet; }
    inline void SetPs(const PsDetailAttributes& value) { m_psHasBeenSet = true; m_ps = value; }
    inline void SetPs(PsDetailAttributes&& value) { m_psHasBeenSet = true; m_ps = std::move(value); }
    inline DatasetDetailOrgAttributes& WithPs(const PsDetailAttributes& value) { SetPs(value); return *this;}
    inline DatasetDetailOrgAttributes& WithPs(PsDetailAttributes&& value) { SetPs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline const VsamDetailAttributes& GetVsam() const{ return m_vsam; }
    inline bool VsamHasBeenSet() const { return m_vsamHasBeenSet; }
    inline void SetVsam(const VsamDetailAttributes& value) { m_vsamHasBeenSet = true; m_vsam = value; }
    inline void SetVsam(VsamDetailAttributes&& value) { m_vsamHasBeenSet = true; m_vsam = std::move(value); }
    inline DatasetDetailOrgAttributes& WithVsam(const VsamDetailAttributes& value) { SetVsam(value); return *this;}
    inline DatasetDetailOrgAttributes& WithVsam(VsamDetailAttributes&& value) { SetVsam(std::move(value)); return *this;}
    ///@}
  private:

    GdgDetailAttributes m_gdg;
    bool m_gdgHasBeenSet = false;

    PoDetailAttributes m_po;
    bool m_poHasBeenSet = false;

    PsDetailAttributes m_ps;
    bool m_psHasBeenSet = false;

    VsamDetailAttributes m_vsam;
    bool m_vsamHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
