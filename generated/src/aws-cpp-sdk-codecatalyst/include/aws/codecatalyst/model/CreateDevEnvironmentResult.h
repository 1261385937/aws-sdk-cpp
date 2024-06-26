﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class CreateDevEnvironmentResult
  {
  public:
    AWS_CODECATALYST_API CreateDevEnvironmentResult();
    AWS_CODECATALYST_API CreateDevEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API CreateDevEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline CreateDevEnvironmentResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateDevEnvironmentResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateDevEnvironmentResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline CreateDevEnvironmentResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateDevEnvironmentResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateDevEnvironmentResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateDevEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateDevEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateDevEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection used to connect to Amazon VPC used when the Dev
     * Environment was created, if any.</p>
     */
    inline const Aws::String& GetVpcConnectionName() const{ return m_vpcConnectionName; }
    inline void SetVpcConnectionName(const Aws::String& value) { m_vpcConnectionName = value; }
    inline void SetVpcConnectionName(Aws::String&& value) { m_vpcConnectionName = std::move(value); }
    inline void SetVpcConnectionName(const char* value) { m_vpcConnectionName.assign(value); }
    inline CreateDevEnvironmentResult& WithVpcConnectionName(const Aws::String& value) { SetVpcConnectionName(value); return *this;}
    inline CreateDevEnvironmentResult& WithVpcConnectionName(Aws::String&& value) { SetVpcConnectionName(std::move(value)); return *this;}
    inline CreateDevEnvironmentResult& WithVpcConnectionName(const char* value) { SetVpcConnectionName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDevEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDevEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDevEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;

    Aws::String m_vpcConnectionName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
