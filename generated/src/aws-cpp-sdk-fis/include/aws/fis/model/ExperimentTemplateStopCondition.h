﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes a stop condition for an experiment template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateStopCondition">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateStopCondition
  {
  public:
    AWS_FIS_API ExperimentTemplateStopCondition();
    AWS_FIS_API ExperimentTemplateStopCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateStopCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source for the stop condition.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ExperimentTemplateStopCondition& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ExperimentTemplateStopCondition& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ExperimentTemplateStopCondition& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudWatch alarm, if applicable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ExperimentTemplateStopCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ExperimentTemplateStopCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ExperimentTemplateStopCondition& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
