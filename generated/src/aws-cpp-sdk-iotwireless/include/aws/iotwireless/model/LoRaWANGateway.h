﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Beaconing.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>LoRaWANGateway object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANGateway">AWS
   * API Reference</a></p>
   */
  class LoRaWANGateway
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANGateway();
    AWS_IOTWIRELESS_API LoRaWANGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The gateway's EUI value.</p>
     */
    inline const Aws::String& GetGatewayEui() const{ return m_gatewayEui; }
    inline bool GatewayEuiHasBeenSet() const { return m_gatewayEuiHasBeenSet; }
    inline void SetGatewayEui(const Aws::String& value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui = value; }
    inline void SetGatewayEui(Aws::String&& value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui = std::move(value); }
    inline void SetGatewayEui(const char* value) { m_gatewayEuiHasBeenSet = true; m_gatewayEui.assign(value); }
    inline LoRaWANGateway& WithGatewayEui(const Aws::String& value) { SetGatewayEui(value); return *this;}
    inline LoRaWANGateway& WithGatewayEui(Aws::String&& value) { SetGatewayEui(std::move(value)); return *this;}
    inline LoRaWANGateway& WithGatewayEui(const char* value) { SetGatewayEui(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency band (RFRegion) value.</p>
     */
    inline const Aws::String& GetRfRegion() const{ return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    inline void SetRfRegion(const Aws::String& value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }
    inline void SetRfRegion(Aws::String&& value) { m_rfRegionHasBeenSet = true; m_rfRegion = std::move(value); }
    inline void SetRfRegion(const char* value) { m_rfRegionHasBeenSet = true; m_rfRegion.assign(value); }
    inline LoRaWANGateway& WithRfRegion(const Aws::String& value) { SetRfRegion(value); return *this;}
    inline LoRaWANGateway& WithRfRegion(Aws::String&& value) { SetRfRegion(std::move(value)); return *this;}
    inline LoRaWANGateway& WithRfRegion(const char* value) { SetRfRegion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetJoinEuiFilters() const{ return m_joinEuiFilters; }
    inline bool JoinEuiFiltersHasBeenSet() const { return m_joinEuiFiltersHasBeenSet; }
    inline void SetJoinEuiFilters(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters = value; }
    inline void SetJoinEuiFilters(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters = std::move(value); }
    inline LoRaWANGateway& WithJoinEuiFilters(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetJoinEuiFilters(value); return *this;}
    inline LoRaWANGateway& WithJoinEuiFilters(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetJoinEuiFilters(std::move(value)); return *this;}
    inline LoRaWANGateway& AddJoinEuiFilters(const Aws::Vector<Aws::String>& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters.push_back(value); return *this; }
    inline LoRaWANGateway& AddJoinEuiFilters(Aws::Vector<Aws::String>&& value) { m_joinEuiFiltersHasBeenSet = true; m_joinEuiFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetNetIdFilters() const{ return m_netIdFilters; }
    inline bool NetIdFiltersHasBeenSet() const { return m_netIdFiltersHasBeenSet; }
    inline void SetNetIdFilters(const Aws::Vector<Aws::String>& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters = value; }
    inline void SetNetIdFilters(Aws::Vector<Aws::String>&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters = std::move(value); }
    inline LoRaWANGateway& WithNetIdFilters(const Aws::Vector<Aws::String>& value) { SetNetIdFilters(value); return *this;}
    inline LoRaWANGateway& WithNetIdFilters(Aws::Vector<Aws::String>&& value) { SetNetIdFilters(std::move(value)); return *this;}
    inline LoRaWANGateway& AddNetIdFilters(const Aws::String& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.push_back(value); return *this; }
    inline LoRaWANGateway& AddNetIdFilters(Aws::String&& value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.push_back(std::move(value)); return *this; }
    inline LoRaWANGateway& AddNetIdFilters(const char* value) { m_netIdFiltersHasBeenSet = true; m_netIdFilters.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetSubBands() const{ return m_subBands; }
    inline bool SubBandsHasBeenSet() const { return m_subBandsHasBeenSet; }
    inline void SetSubBands(const Aws::Vector<int>& value) { m_subBandsHasBeenSet = true; m_subBands = value; }
    inline void SetSubBands(Aws::Vector<int>&& value) { m_subBandsHasBeenSet = true; m_subBands = std::move(value); }
    inline LoRaWANGateway& WithSubBands(const Aws::Vector<int>& value) { SetSubBands(value); return *this;}
    inline LoRaWANGateway& WithSubBands(Aws::Vector<int>&& value) { SetSubBands(std::move(value)); return *this;}
    inline LoRaWANGateway& AddSubBands(int value) { m_subBandsHasBeenSet = true; m_subBands.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Beaconing object information, which consists of the data rate and frequency
     * parameters.</p>
     */
    inline const Beaconing& GetBeaconing() const{ return m_beaconing; }
    inline bool BeaconingHasBeenSet() const { return m_beaconingHasBeenSet; }
    inline void SetBeaconing(const Beaconing& value) { m_beaconingHasBeenSet = true; m_beaconing = value; }
    inline void SetBeaconing(Beaconing&& value) { m_beaconingHasBeenSet = true; m_beaconing = std::move(value); }
    inline LoRaWANGateway& WithBeaconing(const Beaconing& value) { SetBeaconing(value); return *this;}
    inline LoRaWANGateway& WithBeaconing(Beaconing&& value) { SetBeaconing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MaxEIRP value.</p>
     */
    inline double GetMaxEirp() const{ return m_maxEirp; }
    inline bool MaxEirpHasBeenSet() const { return m_maxEirpHasBeenSet; }
    inline void SetMaxEirp(double value) { m_maxEirpHasBeenSet = true; m_maxEirp = value; }
    inline LoRaWANGateway& WithMaxEirp(double value) { SetMaxEirp(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayEui;
    bool m_gatewayEuiHasBeenSet = false;

    Aws::String m_rfRegion;
    bool m_rfRegionHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_joinEuiFilters;
    bool m_joinEuiFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_netIdFilters;
    bool m_netIdFiltersHasBeenSet = false;

    Aws::Vector<int> m_subBands;
    bool m_subBandsHasBeenSet = false;

    Beaconing m_beaconing;
    bool m_beaconingHasBeenSet = false;

    double m_maxEirp;
    bool m_maxEirpHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
