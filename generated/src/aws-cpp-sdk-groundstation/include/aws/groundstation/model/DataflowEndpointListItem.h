﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Item in a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpointListItem">AWS
   * API Reference</a></p>
   */
  class DataflowEndpointListItem
  {
  public:
    AWS_GROUNDSTATION_API DataflowEndpointListItem();
    AWS_GROUNDSTATION_API DataflowEndpointListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DataflowEndpointListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupArn() const{ return m_dataflowEndpointGroupArn; }
    inline bool DataflowEndpointGroupArnHasBeenSet() const { return m_dataflowEndpointGroupArnHasBeenSet; }
    inline void SetDataflowEndpointGroupArn(const Aws::String& value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn = value; }
    inline void SetDataflowEndpointGroupArn(Aws::String&& value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn = std::move(value); }
    inline void SetDataflowEndpointGroupArn(const char* value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn.assign(value); }
    inline DataflowEndpointListItem& WithDataflowEndpointGroupArn(const Aws::String& value) { SetDataflowEndpointGroupArn(value); return *this;}
    inline DataflowEndpointListItem& WithDataflowEndpointGroupArn(Aws::String&& value) { SetDataflowEndpointGroupArn(std::move(value)); return *this;}
    inline DataflowEndpointListItem& WithDataflowEndpointGroupArn(const char* value) { SetDataflowEndpointGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const{ return m_dataflowEndpointGroupId; }
    inline bool DataflowEndpointGroupIdHasBeenSet() const { return m_dataflowEndpointGroupIdHasBeenSet; }
    inline void SetDataflowEndpointGroupId(const Aws::String& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = value; }
    inline void SetDataflowEndpointGroupId(Aws::String&& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = std::move(value); }
    inline void SetDataflowEndpointGroupId(const char* value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId.assign(value); }
    inline DataflowEndpointListItem& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}
    inline DataflowEndpointListItem& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}
    inline DataflowEndpointListItem& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataflowEndpointGroupArn;
    bool m_dataflowEndpointGroupArnHasBeenSet = false;

    Aws::String m_dataflowEndpointGroupId;
    bool m_dataflowEndpointGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
