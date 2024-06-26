﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This object contains the information for one log event returned in a Live
   * Tail stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LiveTailSessionLogEvent">AWS
   * API Reference</a></p>
   */
  class LiveTailSessionLogEvent
  {
  public:
    AWS_CLOUDWATCHLOGS_API LiveTailSessionLogEvent();
    AWS_CLOUDWATCHLOGS_API LiveTailSessionLogEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LiveTailSessionLogEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log stream that ingested this log event.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }
    inline LiveTailSessionLogEvent& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}
    inline LiveTailSessionLogEvent& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}
    inline LiveTailSessionLogEvent& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the log group that ingested this log event.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }
    inline LiveTailSessionLogEvent& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}
    inline LiveTailSessionLogEvent& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}
    inline LiveTailSessionLogEvent& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log event message text.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline LiveTailSessionLogEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline LiveTailSessionLogEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline LiveTailSessionLogEvent& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp specifying when this log event was created.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline LiveTailSessionLogEvent& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp specifying when this log event was ingested into the log
     * group.</p>
     */
    inline long long GetIngestionTime() const{ return m_ingestionTime; }
    inline bool IngestionTimeHasBeenSet() const { return m_ingestionTimeHasBeenSet; }
    inline void SetIngestionTime(long long value) { m_ingestionTimeHasBeenSet = true; m_ingestionTime = value; }
    inline LiveTailSessionLogEvent& WithIngestionTime(long long value) { SetIngestionTime(value); return *this;}
    ///@}
  private:

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    long long m_ingestionTime;
    bool m_ingestionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
