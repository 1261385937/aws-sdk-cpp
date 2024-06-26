﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class DeleteIAMPolicyAssignmentResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteIAMPolicyAssignmentResult();
    AWS_QUICKSIGHT_API DeleteIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteIAMPolicyAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the assignment. </p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentName = value; }
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentName = std::move(value); }
    inline void SetAssignmentName(const char* value) { m_assignmentName.assign(value); }
    inline DeleteIAMPolicyAssignmentResult& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}
    inline DeleteIAMPolicyAssignmentResult& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}
    inline DeleteIAMPolicyAssignmentResult& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteIAMPolicyAssignmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteIAMPolicyAssignmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteIAMPolicyAssignmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DeleteIAMPolicyAssignmentResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assignmentName;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
