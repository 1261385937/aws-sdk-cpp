﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/AlarmStateInformation.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
namespace SSM
{
namespace Model
{
  class GetMaintenanceWindowExecutionTaskResult
  {
  public:
    AWS_SSM_API GetMaintenanceWindowExecutionTaskResult();
    AWS_SSM_API GetMaintenanceWindowExecutionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetMaintenanceWindowExecutionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the maintenance window execution that includes the task.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionId = value; }
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionId = std::move(value); }
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionId.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specific task execution in the maintenance window task that was
     * retrieved.</p>
     */
    inline const Aws::String& GetTaskExecutionId() const{ return m_taskExecutionId; }
    inline void SetTaskExecutionId(const Aws::String& value) { m_taskExecutionId = value; }
    inline void SetTaskExecutionId(Aws::String&& value) { m_taskExecutionId = std::move(value); }
    inline void SetTaskExecutionId(const char* value) { m_taskExecutionId.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(const Aws::String& value) { SetTaskExecutionId(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(Aws::String&& value) { SetTaskExecutionId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskExecutionId(const char* value) { SetTaskExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task that ran.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role that was assumed when running the task.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRole.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of task that was run.</p>
     */
    inline const MaintenanceWindowTaskType& GetType() const{ return m_type; }
    inline void SetType(const MaintenanceWindowTaskType& value) { m_type = value; }
    inline void SetType(MaintenanceWindowTaskType&& value) { m_type = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithType(const MaintenanceWindowTaskType& value) { SetType(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithType(MaintenanceWindowTaskType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters passed to the task when it was run.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p>  <p>The
     * map has the following format:</p> <ul> <li> <p> <code>Key</code>: string,
     * between 1 and 255 characters</p> </li> <li> <p> <code>Value</code>: an array of
     * strings, each between 1 and 255 characters</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& GetTaskParameters() const{ return m_taskParameters; }
    inline void SetTaskParameters(const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& value) { m_taskParameters = value; }
    inline void SetTaskParameters(Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>&& value) { m_taskParameters = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskParameters(const Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>& value) { SetTaskParameters(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithTaskParameters(Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>>&& value) { SetTaskParameters(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& AddTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParameters.push_back(value); return *this; }
    inline GetMaintenanceWindowExecutionTaskResult& AddTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The priority of the task.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline void SetPriority(int value) { m_priority = value; }
    inline GetMaintenanceWindowExecutionTaskResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The defined maximum number of task executions that could be run in
     * parallel.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrency = value; }
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrency = std::move(value); }
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrency.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The defined maximum number of task execution errors allowed before scheduling
     * of the task execution would have been stopped.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrors = value; }
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrors = std::move(value); }
    inline void SetMaxErrors(const char* value) { m_maxErrors.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the task.</p>
     */
    inline const MaintenanceWindowExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MaintenanceWindowExecutionStatus& value) { m_status = value; }
    inline void SetStatus(MaintenanceWindowExecutionStatus&& value) { m_status = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithStatus(const MaintenanceWindowExecutionStatus& value) { SetStatus(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithStatus(MaintenanceWindowExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details explaining the status. Not available for all status values.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetails = value; }
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetails = std::move(value); }
    inline void SetStatusDetails(const char* value) { m_statusDetails.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the task execution completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfiguration = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that were invoked by the maintenance window task.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarms = value; }
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarms = std::move(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarms.push_back(value); return *this; }
    inline GetMaintenanceWindowExecutionTaskResult& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMaintenanceWindowExecutionTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowExecutionId;

    Aws::String m_taskExecutionId;

    Aws::String m_taskArn;

    Aws::String m_serviceRole;

    MaintenanceWindowTaskType m_type;

    Aws::Vector<Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>> m_taskParameters;

    int m_priority;

    Aws::String m_maxConcurrency;

    Aws::String m_maxErrors;

    MaintenanceWindowExecutionStatus m_status;

    Aws::String m_statusDetails;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    AlarmConfiguration m_alarmConfiguration;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
