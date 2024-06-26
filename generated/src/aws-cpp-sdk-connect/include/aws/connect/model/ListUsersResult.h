﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListUsersResult
  {
  public:
    AWS_CONNECT_API ListUsersResult();
    AWS_CONNECT_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the users.</p>
     */
    inline const Aws::Vector<UserSummary>& GetUserSummaryList() const{ return m_userSummaryList; }
    inline void SetUserSummaryList(const Aws::Vector<UserSummary>& value) { m_userSummaryList = value; }
    inline void SetUserSummaryList(Aws::Vector<UserSummary>&& value) { m_userSummaryList = std::move(value); }
    inline ListUsersResult& WithUserSummaryList(const Aws::Vector<UserSummary>& value) { SetUserSummaryList(value); return *this;}
    inline ListUsersResult& WithUserSummaryList(Aws::Vector<UserSummary>&& value) { SetUserSummaryList(std::move(value)); return *this;}
    inline ListUsersResult& AddUserSummaryList(const UserSummary& value) { m_userSummaryList.push_back(value); return *this; }
    inline ListUsersResult& AddUserSummaryList(UserSummary&& value) { m_userSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserSummary> m_userSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
