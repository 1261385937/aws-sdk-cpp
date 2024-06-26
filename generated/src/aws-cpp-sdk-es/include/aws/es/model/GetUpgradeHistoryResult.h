﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/UpgradeHistory.h>
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
   * <p> Container for response returned by <code> <a>GetUpgradeHistory</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetUpgradeHistoryResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult();
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline const Aws::Vector<UpgradeHistory>& GetUpgradeHistories() const{ return m_upgradeHistories; }
    inline void SetUpgradeHistories(const Aws::Vector<UpgradeHistory>& value) { m_upgradeHistories = value; }
    inline void SetUpgradeHistories(Aws::Vector<UpgradeHistory>&& value) { m_upgradeHistories = std::move(value); }
    inline GetUpgradeHistoryResult& WithUpgradeHistories(const Aws::Vector<UpgradeHistory>& value) { SetUpgradeHistories(value); return *this;}
    inline GetUpgradeHistoryResult& WithUpgradeHistories(Aws::Vector<UpgradeHistory>&& value) { SetUpgradeHistories(std::move(value)); return *this;}
    inline GetUpgradeHistoryResult& AddUpgradeHistories(const UpgradeHistory& value) { m_upgradeHistories.push_back(value); return *this; }
    inline GetUpgradeHistoryResult& AddUpgradeHistories(UpgradeHistory&& value) { m_upgradeHistories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetUpgradeHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetUpgradeHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetUpgradeHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUpgradeHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUpgradeHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUpgradeHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UpgradeHistory> m_upgradeHistories;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
