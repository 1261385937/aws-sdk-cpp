﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ApplicationHealthStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ApplicationProgressStatus.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Application aggregated status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ApplicationAggregatedStatus">AWS
   * API Reference</a></p>
   */
  class ApplicationAggregatedStatus
  {
  public:
    AWS_MGN_API ApplicationAggregatedStatus();
    AWS_MGN_API ApplicationAggregatedStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ApplicationAggregatedStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Application aggregated status health status.</p>
     */
    inline const ApplicationHealthStatus& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const ApplicationHealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(ApplicationHealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline ApplicationAggregatedStatus& WithHealthStatus(const ApplicationHealthStatus& value) { SetHealthStatus(value); return *this;}
    inline ApplicationAggregatedStatus& WithHealthStatus(ApplicationHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application aggregated status last update dateTime.</p>
     */
    inline const Aws::String& GetLastUpdateDateTime() const{ return m_lastUpdateDateTime; }
    inline bool LastUpdateDateTimeHasBeenSet() const { return m_lastUpdateDateTimeHasBeenSet; }
    inline void SetLastUpdateDateTime(const Aws::String& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = value; }
    inline void SetLastUpdateDateTime(Aws::String&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::move(value); }
    inline void SetLastUpdateDateTime(const char* value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime.assign(value); }
    inline ApplicationAggregatedStatus& WithLastUpdateDateTime(const Aws::String& value) { SetLastUpdateDateTime(value); return *this;}
    inline ApplicationAggregatedStatus& WithLastUpdateDateTime(Aws::String&& value) { SetLastUpdateDateTime(std::move(value)); return *this;}
    inline ApplicationAggregatedStatus& WithLastUpdateDateTime(const char* value) { SetLastUpdateDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application aggregated status progress status.</p>
     */
    inline const ApplicationProgressStatus& GetProgressStatus() const{ return m_progressStatus; }
    inline bool ProgressStatusHasBeenSet() const { return m_progressStatusHasBeenSet; }
    inline void SetProgressStatus(const ApplicationProgressStatus& value) { m_progressStatusHasBeenSet = true; m_progressStatus = value; }
    inline void SetProgressStatus(ApplicationProgressStatus&& value) { m_progressStatusHasBeenSet = true; m_progressStatus = std::move(value); }
    inline ApplicationAggregatedStatus& WithProgressStatus(const ApplicationProgressStatus& value) { SetProgressStatus(value); return *this;}
    inline ApplicationAggregatedStatus& WithProgressStatus(ApplicationProgressStatus&& value) { SetProgressStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application aggregated status total source servers amount.</p>
     */
    inline long long GetTotalSourceServers() const{ return m_totalSourceServers; }
    inline bool TotalSourceServersHasBeenSet() const { return m_totalSourceServersHasBeenSet; }
    inline void SetTotalSourceServers(long long value) { m_totalSourceServersHasBeenSet = true; m_totalSourceServers = value; }
    inline ApplicationAggregatedStatus& WithTotalSourceServers(long long value) { SetTotalSourceServers(value); return *this;}
    ///@}
  private:

    ApplicationHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_lastUpdateDateTime;
    bool m_lastUpdateDateTimeHasBeenSet = false;

    ApplicationProgressStatus m_progressStatus;
    bool m_progressStatusHasBeenSet = false;

    long long m_totalSourceServers;
    bool m_totalSourceServersHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
