﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/CompatibleVersionsMap.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code>
   * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetCompatibleElasticsearchVersionsResponse">AWS
   * API Reference</a></p>
   */
  class GetCompatibleElasticsearchVersionsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult();
    AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetCompatibleElasticsearchVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A map of compatible Elasticsearch versions returned as part of the <code>
     * <a>GetCompatibleElasticsearchVersions</a> </code> operation. </p>
     */
    inline const Aws::Vector<CompatibleVersionsMap>& GetCompatibleElasticsearchVersions() const{ return m_compatibleElasticsearchVersions; }
    inline void SetCompatibleElasticsearchVersions(const Aws::Vector<CompatibleVersionsMap>& value) { m_compatibleElasticsearchVersions = value; }
    inline void SetCompatibleElasticsearchVersions(Aws::Vector<CompatibleVersionsMap>&& value) { m_compatibleElasticsearchVersions = std::move(value); }
    inline GetCompatibleElasticsearchVersionsResult& WithCompatibleElasticsearchVersions(const Aws::Vector<CompatibleVersionsMap>& value) { SetCompatibleElasticsearchVersions(value); return *this;}
    inline GetCompatibleElasticsearchVersionsResult& WithCompatibleElasticsearchVersions(Aws::Vector<CompatibleVersionsMap>&& value) { SetCompatibleElasticsearchVersions(std::move(value)); return *this;}
    inline GetCompatibleElasticsearchVersionsResult& AddCompatibleElasticsearchVersions(const CompatibleVersionsMap& value) { m_compatibleElasticsearchVersions.push_back(value); return *this; }
    inline GetCompatibleElasticsearchVersionsResult& AddCompatibleElasticsearchVersions(CompatibleVersionsMap&& value) { m_compatibleElasticsearchVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCompatibleElasticsearchVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCompatibleElasticsearchVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCompatibleElasticsearchVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleVersionsMap> m_compatibleElasticsearchVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
