﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/InstanceProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListInstanceProfilesResult
  {
  public:
    AWS_DEVICEFARM_API ListInstanceProfilesResult();
    AWS_DEVICEFARM_API ListInstanceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListInstanceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about your instance profiles.</p>
     */
    inline const Aws::Vector<InstanceProfile>& GetInstanceProfiles() const{ return m_instanceProfiles; }
    inline void SetInstanceProfiles(const Aws::Vector<InstanceProfile>& value) { m_instanceProfiles = value; }
    inline void SetInstanceProfiles(Aws::Vector<InstanceProfile>&& value) { m_instanceProfiles = std::move(value); }
    inline ListInstanceProfilesResult& WithInstanceProfiles(const Aws::Vector<InstanceProfile>& value) { SetInstanceProfiles(value); return *this;}
    inline ListInstanceProfilesResult& WithInstanceProfiles(Aws::Vector<InstanceProfile>&& value) { SetInstanceProfiles(std::move(value)); return *this;}
    inline ListInstanceProfilesResult& AddInstanceProfiles(const InstanceProfile& value) { m_instanceProfiles.push_back(value); return *this; }
    inline ListInstanceProfilesResult& AddInstanceProfiles(InstanceProfile&& value) { m_instanceProfiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstanceProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstanceProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstanceProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstanceProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstanceProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstanceProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceProfile> m_instanceProfiles;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
