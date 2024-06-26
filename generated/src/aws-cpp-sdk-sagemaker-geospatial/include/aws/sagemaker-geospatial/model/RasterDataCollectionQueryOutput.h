﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AreaOfInterest.h>
#include <aws/sagemaker-geospatial/model/PropertyFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/TimeRangeFilterOutput.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The output structure contains the Raster Data Collection Query input along
   * with some additional metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionQueryOutput">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionQueryOutput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryOutput();
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Area of Interest used in the search.</p>
     */
    inline const AreaOfInterest& GetAreaOfInterest() const{ return m_areaOfInterest; }
    inline bool AreaOfInterestHasBeenSet() const { return m_areaOfInterestHasBeenSet; }
    inline void SetAreaOfInterest(const AreaOfInterest& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = value; }
    inline void SetAreaOfInterest(AreaOfInterest&& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = std::move(value); }
    inline RasterDataCollectionQueryOutput& WithAreaOfInterest(const AreaOfInterest& value) { SetAreaOfInterest(value); return *this;}
    inline RasterDataCollectionQueryOutput& WithAreaOfInterest(AreaOfInterest&& value) { SetAreaOfInterest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Property filters used in the search.</p>
     */
    inline const PropertyFilters& GetPropertyFilters() const{ return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    inline void SetPropertyFilters(const PropertyFilters& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }
    inline void SetPropertyFilters(PropertyFilters&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }
    inline RasterDataCollectionQueryOutput& WithPropertyFilters(const PropertyFilters& value) { SetPropertyFilters(value); return *this;}
    inline RasterDataCollectionQueryOutput& WithPropertyFilters(PropertyFilters&& value) { SetPropertyFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Raster Data Collection against which the search is done.</p>
     */
    inline const Aws::String& GetRasterDataCollectionArn() const{ return m_rasterDataCollectionArn; }
    inline bool RasterDataCollectionArnHasBeenSet() const { return m_rasterDataCollectionArnHasBeenSet; }
    inline void SetRasterDataCollectionArn(const Aws::String& value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn = value; }
    inline void SetRasterDataCollectionArn(Aws::String&& value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn = std::move(value); }
    inline void SetRasterDataCollectionArn(const char* value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn.assign(value); }
    inline RasterDataCollectionQueryOutput& WithRasterDataCollectionArn(const Aws::String& value) { SetRasterDataCollectionArn(value); return *this;}
    inline RasterDataCollectionQueryOutput& WithRasterDataCollectionArn(Aws::String&& value) { SetRasterDataCollectionArn(std::move(value)); return *this;}
    inline RasterDataCollectionQueryOutput& WithRasterDataCollectionArn(const char* value) { SetRasterDataCollectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetRasterDataCollectionName() const{ return m_rasterDataCollectionName; }
    inline bool RasterDataCollectionNameHasBeenSet() const { return m_rasterDataCollectionNameHasBeenSet; }
    inline void SetRasterDataCollectionName(const Aws::String& value) { m_rasterDataCollectionNameHasBeenSet = true; m_rasterDataCollectionName = value; }
    inline void SetRasterDataCollectionName(Aws::String&& value) { m_rasterDataCollectionNameHasBeenSet = true; m_rasterDataCollectionName = std::move(value); }
    inline void SetRasterDataCollectionName(const char* value) { m_rasterDataCollectionNameHasBeenSet = true; m_rasterDataCollectionName.assign(value); }
    inline RasterDataCollectionQueryOutput& WithRasterDataCollectionName(const Aws::String& value) { SetRasterDataCollectionName(value); return *this;}
    inline RasterDataCollectionQueryOutput& WithRasterDataCollectionName(Aws::String&& value) { SetRasterDataCollectionName(std::move(value)); return *this;}
    inline RasterDataCollectionQueryOutput& WithRasterDataCollectionName(const char* value) { SetRasterDataCollectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TimeRange filter used in the search.</p>
     */
    inline const TimeRangeFilterOutput& GetTimeRangeFilter() const{ return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    inline void SetTimeRangeFilter(const TimeRangeFilterOutput& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }
    inline void SetTimeRangeFilter(TimeRangeFilterOutput&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }
    inline RasterDataCollectionQueryOutput& WithTimeRangeFilter(const TimeRangeFilterOutput& value) { SetTimeRangeFilter(value); return *this;}
    inline RasterDataCollectionQueryOutput& WithTimeRangeFilter(TimeRangeFilterOutput&& value) { SetTimeRangeFilter(std::move(value)); return *this;}
    ///@}
  private:

    AreaOfInterest m_areaOfInterest;
    bool m_areaOfInterestHasBeenSet = false;

    PropertyFilters m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    Aws::String m_rasterDataCollectionArn;
    bool m_rasterDataCollectionArnHasBeenSet = false;

    Aws::String m_rasterDataCollectionName;
    bool m_rasterDataCollectionNameHasBeenSet = false;

    TimeRangeFilterOutput m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
