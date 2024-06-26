﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetLaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/LaunchTemplateOverrides.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a launch template and overrides.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateConfig">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateConfig
  {
  public:
    AWS_EC2_API LaunchTemplateConfig();
    AWS_EC2_API LaunchTemplateConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The launch template to use. Make sure that the launch template does not
     * contain the <code>NetworkInterfaceId</code> parameter because you can't specify
     * a network interface ID in a Spot Fleet.</p>
     */
    inline const FleetLaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }
    inline void SetLaunchTemplateSpecification(const FleetLaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }
    inline void SetLaunchTemplateSpecification(FleetLaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }
    inline LaunchTemplateConfig& WithLaunchTemplateSpecification(const FleetLaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}
    inline LaunchTemplateConfig& WithLaunchTemplateSpecification(FleetLaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline const Aws::Vector<LaunchTemplateOverrides>& GetOverrides() const{ return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    inline void SetOverrides(const Aws::Vector<LaunchTemplateOverrides>& value) { m_overridesHasBeenSet = true; m_overrides = value; }
    inline void SetOverrides(Aws::Vector<LaunchTemplateOverrides>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }
    inline LaunchTemplateConfig& WithOverrides(const Aws::Vector<LaunchTemplateOverrides>& value) { SetOverrides(value); return *this;}
    inline LaunchTemplateConfig& WithOverrides(Aws::Vector<LaunchTemplateOverrides>&& value) { SetOverrides(std::move(value)); return *this;}
    inline LaunchTemplateConfig& AddOverrides(const LaunchTemplateOverrides& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }
    inline LaunchTemplateConfig& AddOverrides(LaunchTemplateOverrides&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }
    ///@}
  private:

    FleetLaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<LaunchTemplateOverrides> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
