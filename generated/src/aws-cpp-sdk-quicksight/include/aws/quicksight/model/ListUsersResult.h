﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/User.h>
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
  class ListUsersResult
  {
  public:
    AWS_QUICKSIGHT_API ListUsersResult();
    AWS_QUICKSIGHT_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of users.</p>
     */
    inline const Aws::Vector<User>& GetUserList() const{ return m_userList; }
    inline void SetUserList(const Aws::Vector<User>& value) { m_userList = value; }
    inline void SetUserList(Aws::Vector<User>&& value) { m_userList = std::move(value); }
    inline ListUsersResult& WithUserList(const Aws::Vector<User>& value) { SetUserList(value); return *this;}
    inline ListUsersResult& WithUserList(Aws::Vector<User>&& value) { SetUserList(std::move(value)); return *this;}
    inline ListUsersResult& AddUserList(const User& value) { m_userList.push_back(value); return *this; }
    inline ListUsersResult& AddUserList(User&& value) { m_userList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
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

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListUsersResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<User> m_userList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
