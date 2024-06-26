﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/TagFilter.h>
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
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents an application source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ApplicationSource">AWS
   * API Reference</a></p>
   */
  class ApplicationSource
  {
  public:
    AWS_AUTOSCALINGPLANS_API ApplicationSource();
    AWS_AUTOSCALINGPLANS_API ApplicationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ApplicationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a AWS CloudFormation stack.</p>
     */
    inline const Aws::String& GetCloudFormationStackARN() const{ return m_cloudFormationStackARN; }
    inline bool CloudFormationStackARNHasBeenSet() const { return m_cloudFormationStackARNHasBeenSet; }
    inline void SetCloudFormationStackARN(const Aws::String& value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN = value; }
    inline void SetCloudFormationStackARN(Aws::String&& value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN = std::move(value); }
    inline void SetCloudFormationStackARN(const char* value) { m_cloudFormationStackARNHasBeenSet = true; m_cloudFormationStackARN.assign(value); }
    inline ApplicationSource& WithCloudFormationStackARN(const Aws::String& value) { SetCloudFormationStackARN(value); return *this;}
    inline ApplicationSource& WithCloudFormationStackARN(Aws::String&& value) { SetCloudFormationStackARN(std::move(value)); return *this;}
    inline ApplicationSource& WithCloudFormationStackARN(const char* value) { SetCloudFormationStackARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags (up to 50).</p>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const{ return m_tagFilters; }
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
    inline void SetTagFilters(const Aws::Vector<TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }
    inline void SetTagFilters(Aws::Vector<TagFilter>&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::move(value); }
    inline ApplicationSource& WithTagFilters(const Aws::Vector<TagFilter>& value) { SetTagFilters(value); return *this;}
    inline ApplicationSource& WithTagFilters(Aws::Vector<TagFilter>&& value) { SetTagFilters(std::move(value)); return *this;}
    inline ApplicationSource& AddTagFilters(const TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }
    inline ApplicationSource& AddTagFilters(TagFilter&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cloudFormationStackARN;
    bool m_cloudFormationStackARNHasBeenSet = false;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
