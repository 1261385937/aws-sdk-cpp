﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
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
namespace EFS
{
namespace Model
{
  /**
   * <p>Provides a description of a mount target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/MountTargetDescription">AWS
   * API Reference</a></p>
   */
  class CreateMountTargetResult
  {
  public:
    AWS_EFS_API CreateMountTargetResult();
    AWS_EFS_API CreateMountTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API CreateMountTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }
    inline CreateMountTargetResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline CreateMountTargetResult& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>System-assigned mount target ID.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetId = value; }
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetId = std::move(value); }
    inline void SetMountTargetId(const char* value) { m_mountTargetId.assign(value); }
    inline CreateMountTargetResult& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}
    inline CreateMountTargetResult& WithMountTargetId(Aws::String&& value) { SetMountTargetId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the file system for which the mount target is intended.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }
    inline CreateMountTargetResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline CreateMountTargetResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the mount target's subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }
    inline CreateMountTargetResult& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline CreateMountTargetResult& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle state of the mount target.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleState = value; }
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleState = std::move(value); }
    inline CreateMountTargetResult& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}
    inline CreateMountTargetResult& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Address at which the file system can be mounted by using the mount
     * target.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddress.assign(value); }
    inline CreateMountTargetResult& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline CreateMountTargetResult& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface that Amazon EFS created when it created the
     * mount target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }
    inline CreateMountTargetResult& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline CreateMountTargetResult& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique and consistent identifier of the Availability Zone that the mount
     * target resides in. For example, <code>use1-az1</code> is an AZ ID for the
     * us-east-1 Region and it has the same location in every Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }
    inline CreateMountTargetResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CreateMountTargetResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the mount target is located.
     * Availability Zones are independently mapped to names for each Amazon Web
     * Services account. For example, the Availability Zone <code>us-east-1a</code> for
     * your Amazon Web Services account might not be the same location as
     * <code>us-east-1a</code> for another Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneName = value; }
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneName = std::move(value); }
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneName.assign(value); }
    inline CreateMountTargetResult& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}
    inline CreateMountTargetResult& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual private cloud (VPC) ID that the mount target is configured
     * in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline CreateMountTargetResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateMountTargetResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMountTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMountTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMountTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;

    Aws::String m_mountTargetId;

    Aws::String m_fileSystemId;

    Aws::String m_subnetId;

    LifeCycleState m_lifeCycleState;

    Aws::String m_ipAddress;

    Aws::String m_networkInterfaceId;

    Aws::String m_availabilityZoneId;

    Aws::String m_availabilityZoneName;

    Aws::String m_vpcId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
