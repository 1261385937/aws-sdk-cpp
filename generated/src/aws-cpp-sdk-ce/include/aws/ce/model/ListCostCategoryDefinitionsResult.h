﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostCategoryReference.h>
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
namespace CostExplorer
{
namespace Model
{
  class ListCostCategoryDefinitionsResult
  {
  public:
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult();
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline const Aws::Vector<CostCategoryReference>& GetCostCategoryReferences() const{ return m_costCategoryReferences; }
    inline void SetCostCategoryReferences(const Aws::Vector<CostCategoryReference>& value) { m_costCategoryReferences = value; }
    inline void SetCostCategoryReferences(Aws::Vector<CostCategoryReference>&& value) { m_costCategoryReferences = std::move(value); }
    inline ListCostCategoryDefinitionsResult& WithCostCategoryReferences(const Aws::Vector<CostCategoryReference>& value) { SetCostCategoryReferences(value); return *this;}
    inline ListCostCategoryDefinitionsResult& WithCostCategoryReferences(Aws::Vector<CostCategoryReference>&& value) { SetCostCategoryReferences(std::move(value)); return *this;}
    inline ListCostCategoryDefinitionsResult& AddCostCategoryReferences(const CostCategoryReference& value) { m_costCategoryReferences.push_back(value); return *this; }
    inline ListCostCategoryDefinitionsResult& AddCostCategoryReferences(CostCategoryReference&& value) { m_costCategoryReferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCostCategoryDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCostCategoryDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCostCategoryDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCostCategoryDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCostCategoryDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCostCategoryDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CostCategoryReference> m_costCategoryReferences;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
