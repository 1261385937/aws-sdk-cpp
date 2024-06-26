﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DevicePoolCompatibilityResult.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of describe device pool compatibility
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibilityResult">AWS
   * API Reference</a></p>
   */
  class GetDevicePoolCompatibilityResult
  {
  public:
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult();
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetDevicePoolCompatibilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about compatible devices.</p>
     */
    inline const Aws::Vector<DevicePoolCompatibilityResult>& GetCompatibleDevices() const{ return m_compatibleDevices; }
    inline void SetCompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { m_compatibleDevices = value; }
    inline void SetCompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { m_compatibleDevices = std::move(value); }
    inline GetDevicePoolCompatibilityResult& WithCompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { SetCompatibleDevices(value); return *this;}
    inline GetDevicePoolCompatibilityResult& WithCompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { SetCompatibleDevices(std::move(value)); return *this;}
    inline GetDevicePoolCompatibilityResult& AddCompatibleDevices(const DevicePoolCompatibilityResult& value) { m_compatibleDevices.push_back(value); return *this; }
    inline GetDevicePoolCompatibilityResult& AddCompatibleDevices(DevicePoolCompatibilityResult&& value) { m_compatibleDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about incompatible devices.</p>
     */
    inline const Aws::Vector<DevicePoolCompatibilityResult>& GetIncompatibleDevices() const{ return m_incompatibleDevices; }
    inline void SetIncompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { m_incompatibleDevices = value; }
    inline void SetIncompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { m_incompatibleDevices = std::move(value); }
    inline GetDevicePoolCompatibilityResult& WithIncompatibleDevices(const Aws::Vector<DevicePoolCompatibilityResult>& value) { SetIncompatibleDevices(value); return *this;}
    inline GetDevicePoolCompatibilityResult& WithIncompatibleDevices(Aws::Vector<DevicePoolCompatibilityResult>&& value) { SetIncompatibleDevices(std::move(value)); return *this;}
    inline GetDevicePoolCompatibilityResult& AddIncompatibleDevices(const DevicePoolCompatibilityResult& value) { m_incompatibleDevices.push_back(value); return *this; }
    inline GetDevicePoolCompatibilityResult& AddIncompatibleDevices(DevicePoolCompatibilityResult&& value) { m_incompatibleDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDevicePoolCompatibilityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDevicePoolCompatibilityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDevicePoolCompatibilityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DevicePoolCompatibilityResult> m_compatibleDevices;

    Aws::Vector<DevicePoolCompatibilityResult> m_incompatibleDevices;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
