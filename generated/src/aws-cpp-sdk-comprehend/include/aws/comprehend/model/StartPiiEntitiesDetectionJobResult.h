﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
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
namespace Comprehend
{
namespace Model
{
  class StartPiiEntitiesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API StartPiiEntitiesDetectionJobResult();
    AWS_COMPREHEND_API StartPiiEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StartPiiEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier generated for the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartPiiEntitiesDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the PII entity detection job. It is a
     * unique, fully qualified identifier for the job. It includes the Amazon Web
     * Services account, Amazon Web Services Region, and the job ID. The format of the
     * ARN is as follows:</p> <p>
     * <code>arn:&lt;partition&gt;:comprehend:&lt;region&gt;:&lt;account-id&gt;:pii-entities-detection-job/&lt;job-id&gt;</code>
     * </p> <p>The following is an example job ARN:</p> <p>
     * <code>arn:aws:comprehend:us-west-2:111122223333:pii-entities-detection-job/1234abcd12ab34cd56ef1234567890ab</code>
     * </p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline StartPiiEntitiesDetectionJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline StartPiiEntitiesDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartPiiEntitiesDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartPiiEntitiesDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_jobArn;

    JobStatus m_jobStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
