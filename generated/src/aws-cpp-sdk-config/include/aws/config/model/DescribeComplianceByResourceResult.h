﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceByResource.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResourceResponse">AWS
   * API Reference</a></p>
   */
  class DescribeComplianceByResourceResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult();
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the specified Amazon Web Services resource complies with
     * all of the Config rules that evaluate it.</p>
     */
    inline const Aws::Vector<ComplianceByResource>& GetComplianceByResources() const{ return m_complianceByResources; }
    inline void SetComplianceByResources(const Aws::Vector<ComplianceByResource>& value) { m_complianceByResources = value; }
    inline void SetComplianceByResources(Aws::Vector<ComplianceByResource>&& value) { m_complianceByResources = std::move(value); }
    inline DescribeComplianceByResourceResult& WithComplianceByResources(const Aws::Vector<ComplianceByResource>& value) { SetComplianceByResources(value); return *this;}
    inline DescribeComplianceByResourceResult& WithComplianceByResources(Aws::Vector<ComplianceByResource>&& value) { SetComplianceByResources(std::move(value)); return *this;}
    inline DescribeComplianceByResourceResult& AddComplianceByResources(const ComplianceByResource& value) { m_complianceByResources.push_back(value); return *this; }
    inline DescribeComplianceByResourceResult& AddComplianceByResources(ComplianceByResource&& value) { m_complianceByResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeComplianceByResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeComplianceByResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeComplianceByResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeComplianceByResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeComplianceByResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeComplianceByResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceByResource> m_complianceByResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
