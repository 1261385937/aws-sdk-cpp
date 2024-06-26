﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StateValue.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/monitoring/model/EvaluationState.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/MetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>The details about a metric alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricAlarm">AWS
   * API Reference</a></p>
   */
  class MetricAlarm
  {
  public:
    AWS_CLOUDWATCH_API MetricAlarm();
    AWS_CLOUDWATCH_API MetricAlarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricAlarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }
    inline MetricAlarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}
    inline MetricAlarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}
    inline MetricAlarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const{ return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::move(value); }
    inline void SetAlarmArn(const char* value) { m_alarmArnHasBeenSet = true; m_alarmArn.assign(value); }
    inline MetricAlarm& WithAlarmArn(const Aws::String& value) { SetAlarmArn(value); return *this;}
    inline MetricAlarm& WithAlarmArn(Aws::String&& value) { SetAlarmArn(std::move(value)); return *this;}
    inline MetricAlarm& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const{ return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    inline void SetAlarmDescription(const Aws::String& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }
    inline void SetAlarmDescription(Aws::String&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::move(value); }
    inline void SetAlarmDescription(const char* value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription.assign(value); }
    inline MetricAlarm& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}
    inline MetricAlarm& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(std::move(value)); return *this;}
    inline MetricAlarm& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const{ return m_alarmConfigurationUpdatedTimestamp; }
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }
    inline void SetAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = value; }
    inline void SetAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::move(value); }
    inline MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}
    inline MetricAlarm& WithAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetAlarmConfigurationUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }
    inline MetricAlarm& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const{ return m_oKActions; }
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
    inline void SetOKActions(const Aws::Vector<Aws::String>& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }
    inline void SetOKActions(Aws::Vector<Aws::String>&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::move(value); }
    inline MetricAlarm& WithOKActions(const Aws::Vector<Aws::String>& value) { SetOKActions(value); return *this;}
    inline MetricAlarm& WithOKActions(Aws::Vector<Aws::String>&& value) { SetOKActions(std::move(value)); return *this;}
    inline MetricAlarm& AddOKActions(const Aws::String& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }
    inline MetricAlarm& AddOKActions(Aws::String&& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(std::move(value)); return *this; }
    inline MetricAlarm& AddOKActions(const char* value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::move(value); }
    inline MetricAlarm& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}
    inline MetricAlarm& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(std::move(value)); return *this;}
    inline MetricAlarm& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }
    inline MetricAlarm& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(std::move(value)); return *this; }
    inline MetricAlarm& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::move(value); }
    inline MetricAlarm& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}
    inline MetricAlarm& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(std::move(value)); return *this;}
    inline MetricAlarm& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }
    inline MetricAlarm& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(std::move(value)); return *this; }
    inline MetricAlarm& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state value for the alarm.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }
    inline MetricAlarm& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}
    inline MetricAlarm& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline MetricAlarm& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline MetricAlarm& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline MetricAlarm& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline const Aws::String& GetStateReasonData() const{ return m_stateReasonData; }
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }
    inline void SetStateReasonData(const Aws::String& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }
    inline void SetStateReasonData(Aws::String&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::move(value); }
    inline void SetStateReasonData(const char* value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData.assign(value); }
    inline MetricAlarm& WithStateReasonData(const Aws::String& value) { SetStateReasonData(value); return *this;}
    inline MetricAlarm& WithStateReasonData(Aws::String&& value) { SetStateReasonData(std::move(value)); return *this;}
    inline MetricAlarm& WithStateReasonData(const char* value) { SetStateReasonData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the value of either the
     * <code>StateValue</code> or <code>EvaluationState</code> parameters.</p>
     */
    inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const{ return m_stateUpdatedTimestamp; }
    inline bool StateUpdatedTimestampHasBeenSet() const { return m_stateUpdatedTimestampHasBeenSet; }
    inline void SetStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = value; }
    inline void SetStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = std::move(value); }
    inline MetricAlarm& WithStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetStateUpdatedTimestamp(value); return *this;}
    inline MetricAlarm& WithStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetStateUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric associated with the alarm, if this is an alarm based
     * on a single metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline MetricAlarm& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline MetricAlarm& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline MetricAlarm& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the metric associated with the alarm.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline MetricAlarm& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline MetricAlarm& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline MetricAlarm& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric associated with the alarm, other than
     * percentile. For percentile statistics, use <code>ExtendedStatistic</code>.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }
    inline MetricAlarm& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}
    inline MetricAlarm& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the metric associated with the alarm. Specify a
     * value between p0.0 and p100.</p>
     */
    inline const Aws::String& GetExtendedStatistic() const{ return m_extendedStatistic; }
    inline bool ExtendedStatisticHasBeenSet() const { return m_extendedStatisticHasBeenSet; }
    inline void SetExtendedStatistic(const Aws::String& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = value; }
    inline void SetExtendedStatistic(Aws::String&& value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic = std::move(value); }
    inline void SetExtendedStatistic(const char* value) { m_extendedStatisticHasBeenSet = true; m_extendedStatistic.assign(value); }
    inline MetricAlarm& WithExtendedStatistic(const Aws::String& value) { SetExtendedStatistic(value); return *this;}
    inline MetricAlarm& WithExtendedStatistic(Aws::String&& value) { SetExtendedStatistic(std::move(value)); return *this;}
    inline MetricAlarm& WithExtendedStatistic(const char* value) { SetExtendedStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions for the metric associated with the alarm.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline MetricAlarm& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline MetricAlarm& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline MetricAlarm& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline MetricAlarm& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, over which the statistic is applied.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricAlarm& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric associated with the alarm.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline MetricAlarm& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}
    inline MetricAlarm& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of periods over which data is compared to the specified
     * threshold.</p>
     */
    inline int GetEvaluationPeriods() const{ return m_evaluationPeriods; }
    inline bool EvaluationPeriodsHasBeenSet() const { return m_evaluationPeriodsHasBeenSet; }
    inline void SetEvaluationPeriods(int value) { m_evaluationPeriodsHasBeenSet = true; m_evaluationPeriods = value; }
    inline MetricAlarm& WithEvaluationPeriods(int value) { SetEvaluationPeriods(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data points that must be breaching to trigger the alarm.</p>
     */
    inline int GetDatapointsToAlarm() const{ return m_datapointsToAlarm; }
    inline bool DatapointsToAlarmHasBeenSet() const { return m_datapointsToAlarmHasBeenSet; }
    inline void SetDatapointsToAlarm(int value) { m_datapointsToAlarmHasBeenSet = true; m_datapointsToAlarm = value; }
    inline MetricAlarm& WithDatapointsToAlarm(int value) { SetDatapointsToAlarm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to compare with the specified statistic.</p>
     */
    inline double GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline MetricAlarm& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arithmetic operation to use when comparing the specified statistic and
     * threshold. The specified statistic value is used as the first operand.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }
    inline MetricAlarm& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}
    inline MetricAlarm& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets how this alarm is to handle missing data points. The valid values are
     * <code>breaching</code>, <code>notBreaching</code>, <code>ignore</code>, and
     * <code>missing</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/AlarmThatSendsEmail.html#alarms-and-missing-data">Configuring
     * how CloudWatch alarms treat missing data</a>.</p> <p>If this parameter is
     * omitted, the default behavior of <code>missing</code> is used.</p>
     */
    inline const Aws::String& GetTreatMissingData() const{ return m_treatMissingData; }
    inline bool TreatMissingDataHasBeenSet() const { return m_treatMissingDataHasBeenSet; }
    inline void SetTreatMissingData(const Aws::String& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = value; }
    inline void SetTreatMissingData(Aws::String&& value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData = std::move(value); }
    inline void SetTreatMissingData(const char* value) { m_treatMissingDataHasBeenSet = true; m_treatMissingData.assign(value); }
    inline MetricAlarm& WithTreatMissingData(const Aws::String& value) { SetTreatMissingData(value); return *this;}
    inline MetricAlarm& WithTreatMissingData(Aws::String&& value) { SetTreatMissingData(std::move(value)); return *this;}
    inline MetricAlarm& WithTreatMissingData(const char* value) { SetTreatMissingData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only for alarms based on percentiles. If <code>ignore</code>, the alarm
     * state does not change during periods with too few data points to be
     * statistically significant. If <code>evaluate</code> or this parameter is not
     * used, the alarm is always evaluated and possibly changes state no matter how
     * many data points are available.</p>
     */
    inline const Aws::String& GetEvaluateLowSampleCountPercentile() const{ return m_evaluateLowSampleCountPercentile; }
    inline bool EvaluateLowSampleCountPercentileHasBeenSet() const { return m_evaluateLowSampleCountPercentileHasBeenSet; }
    inline void SetEvaluateLowSampleCountPercentile(const Aws::String& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = value; }
    inline void SetEvaluateLowSampleCountPercentile(Aws::String&& value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile = std::move(value); }
    inline void SetEvaluateLowSampleCountPercentile(const char* value) { m_evaluateLowSampleCountPercentileHasBeenSet = true; m_evaluateLowSampleCountPercentile.assign(value); }
    inline MetricAlarm& WithEvaluateLowSampleCountPercentile(const Aws::String& value) { SetEvaluateLowSampleCountPercentile(value); return *this;}
    inline MetricAlarm& WithEvaluateLowSampleCountPercentile(Aws::String&& value) { SetEvaluateLowSampleCountPercentile(std::move(value)); return *this;}
    inline MetricAlarm& WithEvaluateLowSampleCountPercentile(const char* value) { SetEvaluateLowSampleCountPercentile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of MetricDataQuery structures, used in an alarm based on a metric
     * math expression. Each structure either retrieves a metric or performs a math
     * expression. One item in the Metrics array is the math expression that the alarm
     * watches. This expression by designated by having <code>ReturnData</code> set to
     * true.</p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<MetricDataQuery>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<MetricDataQuery>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline MetricAlarm& WithMetrics(const Aws::Vector<MetricDataQuery>& value) { SetMetrics(value); return *this;}
    inline MetricAlarm& WithMetrics(Aws::Vector<MetricDataQuery>&& value) { SetMetrics(std::move(value)); return *this;}
    inline MetricAlarm& AddMetrics(const MetricDataQuery& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline MetricAlarm& AddMetrics(MetricDataQuery&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In an alarm based on an anomaly detection model, this is the ID of the
     * <code>ANOMALY_DETECTION_BAND</code> function used as the threshold for the
     * alarm.</p>
     */
    inline const Aws::String& GetThresholdMetricId() const{ return m_thresholdMetricId; }
    inline bool ThresholdMetricIdHasBeenSet() const { return m_thresholdMetricIdHasBeenSet; }
    inline void SetThresholdMetricId(const Aws::String& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = value; }
    inline void SetThresholdMetricId(Aws::String&& value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId = std::move(value); }
    inline void SetThresholdMetricId(const char* value) { m_thresholdMetricIdHasBeenSet = true; m_thresholdMetricId.assign(value); }
    inline MetricAlarm& WithThresholdMetricId(const Aws::String& value) { SetThresholdMetricId(value); return *this;}
    inline MetricAlarm& WithThresholdMetricId(Aws::String&& value) { SetThresholdMetricId(std::move(value)); return *this;}
    inline MetricAlarm& WithThresholdMetricId(const char* value) { SetThresholdMetricId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of this field is <code>PARTIAL_DATA</code>, the alarm is being
     * evaluated based on only partial data. This happens if the query used for the
     * alarm returns more than 10,000 metrics. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Create_Metrics_Insights_Alarm.html">Create
     * alarms on Metrics Insights queries</a>.</p>
     */
    inline const EvaluationState& GetEvaluationState() const{ return m_evaluationState; }
    inline bool EvaluationStateHasBeenSet() const { return m_evaluationStateHasBeenSet; }
    inline void SetEvaluationState(const EvaluationState& value) { m_evaluationStateHasBeenSet = true; m_evaluationState = value; }
    inline void SetEvaluationState(EvaluationState&& value) { m_evaluationStateHasBeenSet = true; m_evaluationState = std::move(value); }
    inline MetricAlarm& WithEvaluationState(const EvaluationState& value) { SetEvaluationState(value); return *this;}
    inline MetricAlarm& WithEvaluationState(EvaluationState&& value) { SetEvaluationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the alarm's <code>StateValue</code> most recently
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionedTimestamp() const{ return m_stateTransitionedTimestamp; }
    inline bool StateTransitionedTimestampHasBeenSet() const { return m_stateTransitionedTimestampHasBeenSet; }
    inline void SetStateTransitionedTimestamp(const Aws::Utils::DateTime& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = value; }
    inline void SetStateTransitionedTimestamp(Aws::Utils::DateTime&& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = std::move(value); }
    inline MetricAlarm& WithStateTransitionedTimestamp(const Aws::Utils::DateTime& value) { SetStateTransitionedTimestamp(value); return *this;}
    inline MetricAlarm& WithStateTransitionedTimestamp(Aws::Utils::DateTime&& value) { SetStateTransitionedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_alarmConfigurationUpdatedTimestamp;
    bool m_alarmConfigurationUpdatedTimestampHasBeenSet = false;

    bool m_actionsEnabled;
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet = false;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet = false;

    Aws::Utils::DateTime m_stateUpdatedTimestamp;
    bool m_stateUpdatedTimestampHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Statistic m_statistic;
    bool m_statisticHasBeenSet = false;

    Aws::String m_extendedStatistic;
    bool m_extendedStatisticHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    StandardUnit m_unit;
    bool m_unitHasBeenSet = false;

    int m_evaluationPeriods;
    bool m_evaluationPeriodsHasBeenSet = false;

    int m_datapointsToAlarm;
    bool m_datapointsToAlarmHasBeenSet = false;

    double m_threshold;
    bool m_thresholdHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::String m_treatMissingData;
    bool m_treatMissingDataHasBeenSet = false;

    Aws::String m_evaluateLowSampleCountPercentile;
    bool m_evaluateLowSampleCountPercentileHasBeenSet = false;

    Aws::Vector<MetricDataQuery> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_thresholdMetricId;
    bool m_thresholdMetricIdHasBeenSet = false;

    EvaluationState m_evaluationState;
    bool m_evaluationStateHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionedTimestamp;
    bool m_stateTransitionedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
