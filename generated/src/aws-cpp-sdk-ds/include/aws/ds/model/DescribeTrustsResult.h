﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/Trust.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>The result of a DescribeTrust request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrustsResult">AWS
   * API Reference</a></p>
   */
  class DescribeTrustsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeTrustsResult();
    AWS_DIRECTORYSERVICE_API DescribeTrustsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeTrustsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline const Aws::Vector<Trust>& GetTrusts() const{ return m_trusts; }
    inline void SetTrusts(const Aws::Vector<Trust>& value) { m_trusts = value; }
    inline void SetTrusts(Aws::Vector<Trust>&& value) { m_trusts = std::move(value); }
    inline DescribeTrustsResult& WithTrusts(const Aws::Vector<Trust>& value) { SetTrusts(value); return *this;}
    inline DescribeTrustsResult& WithTrusts(Aws::Vector<Trust>&& value) { SetTrusts(std::move(value)); return *this;}
    inline DescribeTrustsResult& AddTrusts(const Trust& value) { m_trusts.push_back(value); return *this; }
    inline DescribeTrustsResult& AddTrusts(Trust&& value) { m_trusts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeTrustsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTrustsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTrustsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrustsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrustsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrustsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Trust> m_trusts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
