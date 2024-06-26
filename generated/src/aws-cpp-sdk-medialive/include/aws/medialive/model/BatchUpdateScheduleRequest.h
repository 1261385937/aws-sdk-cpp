﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BatchScheduleActionCreateRequest.h>
#include <aws/medialive/model/BatchScheduleActionDeleteRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * List of actions to create and list of actions to delete.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateScheduleRequest">AWS
   * API Reference</a></p>
   */
  class BatchUpdateScheduleRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API BatchUpdateScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateSchedule"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Id of the channel whose schedule is being updated.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline BatchUpdateScheduleRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline BatchUpdateScheduleRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline BatchUpdateScheduleRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * Schedule actions to create in the schedule.
     */
    inline const BatchScheduleActionCreateRequest& GetCreates() const{ return m_creates; }
    inline bool CreatesHasBeenSet() const { return m_createsHasBeenSet; }
    inline void SetCreates(const BatchScheduleActionCreateRequest& value) { m_createsHasBeenSet = true; m_creates = value; }
    inline void SetCreates(BatchScheduleActionCreateRequest&& value) { m_createsHasBeenSet = true; m_creates = std::move(value); }
    inline BatchUpdateScheduleRequest& WithCreates(const BatchScheduleActionCreateRequest& value) { SetCreates(value); return *this;}
    inline BatchUpdateScheduleRequest& WithCreates(BatchScheduleActionCreateRequest&& value) { SetCreates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Schedule actions to delete from the schedule.
     */
    inline const BatchScheduleActionDeleteRequest& GetDeletes() const{ return m_deletes; }
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }
    inline void SetDeletes(const BatchScheduleActionDeleteRequest& value) { m_deletesHasBeenSet = true; m_deletes = value; }
    inline void SetDeletes(BatchScheduleActionDeleteRequest&& value) { m_deletesHasBeenSet = true; m_deletes = std::move(value); }
    inline BatchUpdateScheduleRequest& WithDeletes(const BatchScheduleActionDeleteRequest& value) { SetDeletes(value); return *this;}
    inline BatchUpdateScheduleRequest& WithDeletes(BatchScheduleActionDeleteRequest&& value) { SetDeletes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    BatchScheduleActionCreateRequest m_creates;
    bool m_createsHasBeenSet = false;

    BatchScheduleActionDeleteRequest m_deletes;
    bool m_deletesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
