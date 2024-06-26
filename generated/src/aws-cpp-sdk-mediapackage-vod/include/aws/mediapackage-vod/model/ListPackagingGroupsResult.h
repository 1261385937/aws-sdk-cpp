﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/PackagingGroup.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class ListPackagingGroupsResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ListPackagingGroupsResult();
    AWS_MEDIAPACKAGEVOD_API ListPackagingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API ListPackagingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPackagingGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPackagingGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPackagingGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaPackage VOD PackagingGroup resources.
     */
    inline const Aws::Vector<PackagingGroup>& GetPackagingGroups() const{ return m_packagingGroups; }
    inline void SetPackagingGroups(const Aws::Vector<PackagingGroup>& value) { m_packagingGroups = value; }
    inline void SetPackagingGroups(Aws::Vector<PackagingGroup>&& value) { m_packagingGroups = std::move(value); }
    inline ListPackagingGroupsResult& WithPackagingGroups(const Aws::Vector<PackagingGroup>& value) { SetPackagingGroups(value); return *this;}
    inline ListPackagingGroupsResult& WithPackagingGroups(Aws::Vector<PackagingGroup>&& value) { SetPackagingGroups(std::move(value)); return *this;}
    inline ListPackagingGroupsResult& AddPackagingGroups(const PackagingGroup& value) { m_packagingGroups.push_back(value); return *this; }
    inline ListPackagingGroupsResult& AddPackagingGroups(PackagingGroup&& value) { m_packagingGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPackagingGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPackagingGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPackagingGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PackagingGroup> m_packagingGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
