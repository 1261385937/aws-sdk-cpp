﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the results of a query that retrieved the data for a standard
   * execution metric that applies to a journey activity for a particular journey
   * run, and provides information about that query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyRunExecutionActivityMetricsResponse">AWS
   * API Reference</a></p>
   */
  class JourneyRunExecutionActivityMetricsResponse
  {
  public:
    AWS_PINPOINT_API JourneyRunExecutionActivityMetricsResponse();
    AWS_PINPOINT_API JourneyRunExecutionActivityMetricsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyRunExecutionActivityMetricsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of activity that the metric applies to. Possible values are:</p>
     * <ul><li><p>CONDITIONAL_SPLIT – For a yes/no split activity, which is an activity
     * that sends participants down one of two paths in a journey.</p></li>
     * <li><p>HOLDOUT – For a holdout activity, which is an activity that stops a
     * journey for a specified percentage of participants.</p></li> <li><p>MESSAGE –
     * For an email activity, which is an activity that sends an email message to
     * participants.</p></li> <li><p>MULTI_CONDITIONAL_SPLIT – For a multivariate split
     * activity, which is an activity that sends participants down one of as many as
     * five paths in a journey.</p></li> <li><p>RANDOM_SPLIT – For a random split
     * activity, which is an activity that sends specified percentages of participants
     * down one of as many as five paths in a journey.</p></li> <li><p>WAIT – For a
     * wait activity, which is an activity that waits for a certain amount of time or
     * until a specific date and time before moving participants to the next activity
     * in a journey.</p></li></ul>
     */
    inline const Aws::String& GetActivityType() const{ return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    inline void SetActivityType(const Aws::String& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }
    inline void SetActivityType(Aws::String&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }
    inline void SetActivityType(const char* value) { m_activityTypeHasBeenSet = true; m_activityType.assign(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithActivityType(const Aws::String& value) { SetActivityType(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithActivityType(Aws::String&& value) { SetActivityType(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithActivityType(const char* value) { SetActivityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity that the metric applies to.</p>
     */
    inline const Aws::String& GetJourneyActivityId() const{ return m_journeyActivityId; }
    inline bool JourneyActivityIdHasBeenSet() const { return m_journeyActivityIdHasBeenSet; }
    inline void SetJourneyActivityId(const Aws::String& value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId = value; }
    inline void SetJourneyActivityId(Aws::String&& value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId = std::move(value); }
    inline void SetJourneyActivityId(const char* value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId.assign(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithJourneyActivityId(const Aws::String& value) { SetJourneyActivityId(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithJourneyActivityId(Aws::String&& value) { SetJourneyActivityId(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithJourneyActivityId(const char* value) { SetJourneyActivityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey that the metric applies to.</p>
     */
    inline const Aws::String& GetJourneyId() const{ return m_journeyId; }
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }
    inline void SetJourneyId(const Aws::String& value) { m_journeyIdHasBeenSet = true; m_journeyId = value; }
    inline void SetJourneyId(Aws::String&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::move(value); }
    inline void SetJourneyId(const char* value) { m_journeyIdHasBeenSet = true; m_journeyId.assign(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithJourneyId(const Aws::String& value) { SetJourneyId(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithJourneyId(Aws::String&& value) { SetJourneyId(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithJourneyId(const char* value) { SetJourneyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when Amazon Pinpoint last evaluated
     * the execution status of the activity for this journey run and updated the data
     * for the metric.</p>
     */
    inline const Aws::String& GetLastEvaluatedTime() const{ return m_lastEvaluatedTime; }
    inline bool LastEvaluatedTimeHasBeenSet() const { return m_lastEvaluatedTimeHasBeenSet; }
    inline void SetLastEvaluatedTime(const Aws::String& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = value; }
    inline void SetLastEvaluatedTime(Aws::String&& value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime = std::move(value); }
    inline void SetLastEvaluatedTime(const char* value) { m_lastEvaluatedTimeHasBeenSet = true; m_lastEvaluatedTime.assign(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithLastEvaluatedTime(const Aws::String& value) { SetLastEvaluatedTime(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithLastEvaluatedTime(Aws::String&& value) { SetLastEvaluatedTime(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithLastEvaluatedTime(const char* value) { SetLastEvaluatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains the results of the query. For information about
     * the structure and contents of the results, see see <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Standard
     * Amazon Pinpoint analytics metrics</a> in the <i>Amazon Pinpoint Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Map<Aws::String, Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Map<Aws::String, Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithMetrics(const Aws::Map<Aws::String, Aws::String>& value) { SetMetrics(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithMetrics(Aws::Map<Aws::String, Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(const Aws::String& key, const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(Aws::String&& key, const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(const Aws::String& key, Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(Aws::String&& key, Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(const char* key, Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(Aws::String&& key, const char* value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline JourneyRunExecutionActivityMetricsResponse& AddMetrics(const char* key, const char* value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey run that the metric applies to.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline JourneyRunExecutionActivityMetricsResponse& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline JourneyRunExecutionActivityMetricsResponse& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}
  private:

    Aws::String m_activityType;
    bool m_activityTypeHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_journeyActivityId;
    bool m_journeyActivityIdHasBeenSet = false;

    Aws::String m_journeyId;
    bool m_journeyIdHasBeenSet = false;

    Aws::String m_lastEvaluatedTime;
    bool m_lastEvaluatedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
