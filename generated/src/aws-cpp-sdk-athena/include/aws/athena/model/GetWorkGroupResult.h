﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/WorkGroup.h>
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
namespace Athena
{
namespace Model
{
  class GetWorkGroupResult
  {
  public:
    AWS_ATHENA_API GetWorkGroupResult();
    AWS_ATHENA_API GetWorkGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetWorkGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the workgroup.</p>
     */
    inline const WorkGroup& GetWorkGroup() const{ return m_workGroup; }
    inline void SetWorkGroup(const WorkGroup& value) { m_workGroup = value; }
    inline void SetWorkGroup(WorkGroup&& value) { m_workGroup = std::move(value); }
    inline GetWorkGroupResult& WithWorkGroup(const WorkGroup& value) { SetWorkGroup(value); return *this;}
    inline GetWorkGroupResult& WithWorkGroup(WorkGroup&& value) { SetWorkGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WorkGroup m_workGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
