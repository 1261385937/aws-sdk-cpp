﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The Amazon EC2 launch template that can be used by an EC2 Fleet to configure
   * Amazon EC2 instances. You must specify either the ID or name of the launch
   * template in the request, but not both.</p> <p>For information about launch
   * templates, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">Launch
   * an instance from a launch template</a> in the <i>Amazon EC2 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class FleetLaunchTemplateSpecificationRequest
  {
  public:
    AWS_EC2_API FleetLaunchTemplateSpecificationRequest();
    AWS_EC2_API FleetLaunchTemplateSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetLaunchTemplateSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline FleetLaunchTemplateSpecificationRequest& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline FleetLaunchTemplateSpecificationRequest& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline FleetLaunchTemplateSpecificationRequest& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }
    inline FleetLaunchTemplateSpecificationRequest& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline FleetLaunchTemplateSpecificationRequest& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline FleetLaunchTemplateSpecificationRequest& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline FleetLaunchTemplateSpecificationRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline FleetLaunchTemplateSpecificationRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline FleetLaunchTemplateSpecificationRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
