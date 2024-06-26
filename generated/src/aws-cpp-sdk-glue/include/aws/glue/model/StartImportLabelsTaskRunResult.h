﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class StartImportLabelsTaskRunResult
  {
  public:
    AWS_GLUE_API StartImportLabelsTaskRunResult();
    AWS_GLUE_API StartImportLabelsTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartImportLabelsTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the task run.</p>
     */
    inline const Aws::String& GetTaskRunId() const{ return m_taskRunId; }
    inline void SetTaskRunId(const Aws::String& value) { m_taskRunId = value; }
    inline void SetTaskRunId(Aws::String&& value) { m_taskRunId = std::move(value); }
    inline void SetTaskRunId(const char* value) { m_taskRunId.assign(value); }
    inline StartImportLabelsTaskRunResult& WithTaskRunId(const Aws::String& value) { SetTaskRunId(value); return *this;}
    inline StartImportLabelsTaskRunResult& WithTaskRunId(Aws::String&& value) { SetTaskRunId(std::move(value)); return *this;}
    inline StartImportLabelsTaskRunResult& WithTaskRunId(const char* value) { SetTaskRunId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartImportLabelsTaskRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartImportLabelsTaskRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartImportLabelsTaskRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskRunId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
