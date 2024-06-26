﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/RelationalDatabase.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the specified database.</p>
     */
    inline const RelationalDatabase& GetRelationalDatabase() const{ return m_relationalDatabase; }
    inline void SetRelationalDatabase(const RelationalDatabase& value) { m_relationalDatabase = value; }
    inline void SetRelationalDatabase(RelationalDatabase&& value) { m_relationalDatabase = std::move(value); }
    inline GetRelationalDatabaseResult& WithRelationalDatabase(const RelationalDatabase& value) { SetRelationalDatabase(value); return *this;}
    inline GetRelationalDatabaseResult& WithRelationalDatabase(RelationalDatabase&& value) { SetRelationalDatabase(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRelationalDatabaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRelationalDatabaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRelationalDatabaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RelationalDatabase m_relationalDatabase;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
