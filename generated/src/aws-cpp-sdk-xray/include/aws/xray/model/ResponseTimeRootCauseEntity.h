﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A collection of segments and corresponding subsegments associated to a
   * response time warning.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ResponseTimeRootCauseEntity">AWS
   * API Reference</a></p>
   */
  class ResponseTimeRootCauseEntity
  {
  public:
    AWS_XRAY_API ResponseTimeRootCauseEntity();
    AWS_XRAY_API ResponseTimeRootCauseEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ResponseTimeRootCauseEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResponseTimeRootCauseEntity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResponseTimeRootCauseEntity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResponseTimeRootCauseEntity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and messages of the exceptions.</p>
     */
    inline double GetCoverage() const{ return m_coverage; }
    inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }
    inline void SetCoverage(double value) { m_coverageHasBeenSet = true; m_coverage = value; }
    inline ResponseTimeRootCauseEntity& WithCoverage(double value) { SetCoverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that denotes a remote subsegment.</p>
     */
    inline bool GetRemote() const{ return m_remote; }
    inline bool RemoteHasBeenSet() const { return m_remoteHasBeenSet; }
    inline void SetRemote(bool value) { m_remoteHasBeenSet = true; m_remote = value; }
    inline ResponseTimeRootCauseEntity& WithRemote(bool value) { SetRemote(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_coverage;
    bool m_coverageHasBeenSet = false;

    bool m_remote;
    bool m_remoteHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
