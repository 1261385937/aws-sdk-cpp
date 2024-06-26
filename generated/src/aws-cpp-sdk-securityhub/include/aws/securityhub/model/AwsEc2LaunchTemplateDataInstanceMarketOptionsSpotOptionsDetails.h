﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about the market (purchasing) options for Spot Instances.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Deprecated. </p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The behavior when a Spot Instance is interrupted. </p>
     */
    inline const Aws::String& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(const Aws::String& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline void SetInstanceInterruptionBehavior(Aws::String&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }
    inline void SetInstanceInterruptionBehavior(const char* value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior.assign(value); }
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithInstanceInterruptionBehavior(const Aws::String& value) { SetInstanceInterruptionBehavior(value); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithInstanceInterruptionBehavior(Aws::String&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithInstanceInterruptionBehavior(const char* value) { SetInstanceInterruptionBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum hourly price you're willing to pay for the Spot Instances. </p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Spot Instance request type. </p>
     */
    inline const Aws::String& GetSpotInstanceType() const{ return m_spotInstanceType; }
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }
    inline void SetSpotInstanceType(const Aws::String& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }
    inline void SetSpotInstanceType(Aws::String&& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = std::move(value); }
    inline void SetSpotInstanceType(const char* value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType.assign(value); }
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithSpotInstanceType(const Aws::String& value) { SetSpotInstanceType(value); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithSpotInstanceType(Aws::String&& value) { SetSpotInstanceType(std::move(value)); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithSpotInstanceType(const char* value) { SetSpotInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end date of the request, in UTC format (YYYY-MM-DDTHH:MM:SSZ), for
     * persistent requests. </p>
     */
    inline const Aws::String& GetValidUntil() const{ return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    inline void SetValidUntil(const Aws::String& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }
    inline void SetValidUntil(Aws::String&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }
    inline void SetValidUntil(const char* value) { m_validUntilHasBeenSet = true; m_validUntil.assign(value); }
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithValidUntil(const Aws::String& value) { SetValidUntil(value); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithValidUntil(Aws::String&& value) { SetValidUntil(std::move(value)); return *this;}
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithValidUntil(const char* value) { SetValidUntil(value); return *this;}
    ///@}
  private:

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::String m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    Aws::String m_spotInstanceType;
    bool m_spotInstanceTypeHasBeenSet = false;

    Aws::String m_validUntil;
    bool m_validUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
