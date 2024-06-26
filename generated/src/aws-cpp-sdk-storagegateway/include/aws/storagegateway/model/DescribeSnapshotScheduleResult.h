﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
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
namespace StorageGateway
{
namespace Model
{
  class DescribeSnapshotScheduleResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult();
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume that was specified in the
     * request.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }
    inline DescribeSnapshotScheduleResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline DescribeSnapshotScheduleResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline DescribeSnapshotScheduleResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline int GetStartAt() const{ return m_startAt; }
    inline void SetStartAt(int value) { m_startAt = value; }
    inline DescribeSnapshotScheduleResult& WithStartAt(int value) { SetStartAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours between snapshots.</p>
     */
    inline int GetRecurrenceInHours() const{ return m_recurrenceInHours; }
    inline void SetRecurrenceInHours(int value) { m_recurrenceInHours = value; }
    inline DescribeSnapshotScheduleResult& WithRecurrenceInHours(int value) { SetRecurrenceInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeSnapshotScheduleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeSnapshotScheduleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeSnapshotScheduleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }
    inline DescribeSnapshotScheduleResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline DescribeSnapshotScheduleResult& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline DescribeSnapshotScheduleResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the snapshot schedule, sorted
     * alphabetically by key name. Each tag is a key-value pair. For a gateway with
     * more than 10 tags assigned, you can view all tags using the
     * <code>ListTagsForResource</code> API operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DescribeSnapshotScheduleResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribeSnapshotScheduleResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeSnapshotScheduleResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DescribeSnapshotScheduleResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSnapshotScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSnapshotScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSnapshotScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;

    int m_startAt;

    int m_recurrenceInHours;

    Aws::String m_description;

    Aws::String m_timezone;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
