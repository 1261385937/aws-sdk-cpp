﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>This object contains information about this Live Tail session, including the
   * log groups included and the log stream filters, if any.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LiveTailSessionStart">AWS
   * API Reference</a></p>
   */
  class LiveTailSessionStart
  {
  public:
    AWS_CLOUDWATCHLOGS_API LiveTailSessionStart();
    AWS_CLOUDWATCHLOGS_API LiveTailSessionStart(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LiveTailSessionStart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID generated by CloudWatch Logs to identify this Live Tail session
     * request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline LiveTailSessionStart& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline LiveTailSessionStart& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline LiveTailSessionStart& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID generated by CloudWatch Logs to identify this Live Tail
     * session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline LiveTailSessionStart& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline LiveTailSessionStart& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline LiveTailSessionStart& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the names and ARNs of the log groups included in this Live Tail
     * session.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const{ return m_logGroupIdentifiers; }
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
    inline void SetLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = value; }
    inline void SetLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::move(value); }
    inline LiveTailSessionStart& WithLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetLogGroupIdentifiers(value); return *this;}
    inline LiveTailSessionStart& WithLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetLogGroupIdentifiers(std::move(value)); return *this;}
    inline LiveTailSessionStart& AddLogGroupIdentifiers(const Aws::String& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }
    inline LiveTailSessionStart& AddLogGroupIdentifiers(Aws::String&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(std::move(value)); return *this; }
    inline LiveTailSessionStart& AddLogGroupIdentifiers(const char* value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If your StartLiveTail operation request included a
     * <code>logStreamNames</code> parameter that filtered the session to only include
     * certain log streams, these streams are listed here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNames() const{ return m_logStreamNames; }
    inline bool LogStreamNamesHasBeenSet() const { return m_logStreamNamesHasBeenSet; }
    inline void SetLogStreamNames(const Aws::Vector<Aws::String>& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = value; }
    inline void SetLogStreamNames(Aws::Vector<Aws::String>&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = std::move(value); }
    inline LiveTailSessionStart& WithLogStreamNames(const Aws::Vector<Aws::String>& value) { SetLogStreamNames(value); return *this;}
    inline LiveTailSessionStart& WithLogStreamNames(Aws::Vector<Aws::String>&& value) { SetLogStreamNames(std::move(value)); return *this;}
    inline LiveTailSessionStart& AddLogStreamNames(const Aws::String& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }
    inline LiveTailSessionStart& AddLogStreamNames(Aws::String&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(std::move(value)); return *this; }
    inline LiveTailSessionStart& AddLogStreamNames(const char* value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If your StartLiveTail operation request included a
     * <code>logStreamNamePrefixes</code> parameter that filtered the session to only
     * include log streams that have names that start with certain prefixes, these
     * prefixes are listed here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNamePrefixes() const{ return m_logStreamNamePrefixes; }
    inline bool LogStreamNamePrefixesHasBeenSet() const { return m_logStreamNamePrefixesHasBeenSet; }
    inline void SetLogStreamNamePrefixes(const Aws::Vector<Aws::String>& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes = value; }
    inline void SetLogStreamNamePrefixes(Aws::Vector<Aws::String>&& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes = std::move(value); }
    inline LiveTailSessionStart& WithLogStreamNamePrefixes(const Aws::Vector<Aws::String>& value) { SetLogStreamNamePrefixes(value); return *this;}
    inline LiveTailSessionStart& WithLogStreamNamePrefixes(Aws::Vector<Aws::String>&& value) { SetLogStreamNamePrefixes(std::move(value)); return *this;}
    inline LiveTailSessionStart& AddLogStreamNamePrefixes(const Aws::String& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.push_back(value); return *this; }
    inline LiveTailSessionStart& AddLogStreamNamePrefixes(Aws::String&& value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.push_back(std::move(value)); return *this; }
    inline LiveTailSessionStart& AddLogStreamNamePrefixes(const char* value) { m_logStreamNamePrefixesHasBeenSet = true; m_logStreamNamePrefixes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pattern to filter the results to include only log events that
     * match the pattern. For example, a filter pattern of <code>error 404</code>
     * displays only log events that include both <code>error</code> and
     * <code>404</code>.</p> <p>For more information about filter pattern syntax, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p>
     */
    inline const Aws::String& GetLogEventFilterPattern() const{ return m_logEventFilterPattern; }
    inline bool LogEventFilterPatternHasBeenSet() const { return m_logEventFilterPatternHasBeenSet; }
    inline void SetLogEventFilterPattern(const Aws::String& value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern = value; }
    inline void SetLogEventFilterPattern(Aws::String&& value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern = std::move(value); }
    inline void SetLogEventFilterPattern(const char* value) { m_logEventFilterPatternHasBeenSet = true; m_logEventFilterPattern.assign(value); }
    inline LiveTailSessionStart& WithLogEventFilterPattern(const Aws::String& value) { SetLogEventFilterPattern(value); return *this;}
    inline LiveTailSessionStart& WithLogEventFilterPattern(Aws::String&& value) { SetLogEventFilterPattern(std::move(value)); return *this;}
    inline LiveTailSessionStart& WithLogEventFilterPattern(const char* value) { SetLogEventFilterPattern(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_logStreamNames;
    bool m_logStreamNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_logStreamNamePrefixes;
    bool m_logStreamNamePrefixesHasBeenSet = false;

    Aws::String m_logEventFilterPattern;
    bool m_logEventFilterPatternHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
