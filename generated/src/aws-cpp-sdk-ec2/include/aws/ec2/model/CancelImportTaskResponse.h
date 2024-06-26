﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CancelImportTaskResponse
  {
  public:
    AWS_EC2_API CancelImportTaskResponse();
    AWS_EC2_API CancelImportTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CancelImportTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskId = value; }
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskId = std::move(value); }
    inline void SetImportTaskId(const char* value) { m_importTaskId.assign(value); }
    inline CancelImportTaskResponse& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}
    inline CancelImportTaskResponse& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}
    inline CancelImportTaskResponse& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline const Aws::String& GetPreviousState() const{ return m_previousState; }
    inline void SetPreviousState(const Aws::String& value) { m_previousState = value; }
    inline void SetPreviousState(Aws::String&& value) { m_previousState = std::move(value); }
    inline void SetPreviousState(const char* value) { m_previousState.assign(value); }
    inline CancelImportTaskResponse& WithPreviousState(const Aws::String& value) { SetPreviousState(value); return *this;}
    inline CancelImportTaskResponse& WithPreviousState(Aws::String&& value) { SetPreviousState(std::move(value)); return *this;}
    inline CancelImportTaskResponse& WithPreviousState(const char* value) { SetPreviousState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline void SetState(const Aws::String& value) { m_state = value; }
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }
    inline void SetState(const char* value) { m_state.assign(value); }
    inline CancelImportTaskResponse& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline CancelImportTaskResponse& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline CancelImportTaskResponse& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CancelImportTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CancelImportTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_importTaskId;

    Aws::String m_previousState;

    Aws::String m_state;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
