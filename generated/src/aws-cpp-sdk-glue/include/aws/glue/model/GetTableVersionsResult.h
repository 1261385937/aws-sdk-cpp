﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableVersion.h>
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
  class GetTableVersionsResult
  {
  public:
    AWS_GLUE_API GetTableVersionsResult();
    AWS_GLUE_API GetTableVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTableVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline const Aws::Vector<TableVersion>& GetTableVersions() const{ return m_tableVersions; }
    inline void SetTableVersions(const Aws::Vector<TableVersion>& value) { m_tableVersions = value; }
    inline void SetTableVersions(Aws::Vector<TableVersion>&& value) { m_tableVersions = std::move(value); }
    inline GetTableVersionsResult& WithTableVersions(const Aws::Vector<TableVersion>& value) { SetTableVersions(value); return *this;}
    inline GetTableVersionsResult& WithTableVersions(Aws::Vector<TableVersion>&& value) { SetTableVersions(std::move(value)); return *this;}
    inline GetTableVersionsResult& AddTableVersions(const TableVersion& value) { m_tableVersions.push_back(value); return *this; }
    inline GetTableVersionsResult& AddTableVersions(TableVersion&& value) { m_tableVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetTableVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTableVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTableVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TableVersion> m_tableVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
