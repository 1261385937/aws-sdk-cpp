﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class TrackingServerSize
  {
    NOT_SET,
    Small,
    Medium,
    Large
  };

namespace TrackingServerSizeMapper
{
AWS_SAGEMAKER_API TrackingServerSize GetTrackingServerSizeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrackingServerSize(TrackingServerSize value);
} // namespace TrackingServerSizeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
