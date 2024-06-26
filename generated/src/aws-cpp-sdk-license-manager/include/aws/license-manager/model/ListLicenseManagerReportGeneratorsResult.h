﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/ReportGenerator.h>
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
namespace LicenseManager
{
namespace Model
{
  class ListLicenseManagerReportGeneratorsResult
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseManagerReportGeneratorsResult();
    AWS_LICENSEMANAGER_API ListLicenseManagerReportGeneratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListLicenseManagerReportGeneratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline const Aws::Vector<ReportGenerator>& GetReportGenerators() const{ return m_reportGenerators; }
    inline void SetReportGenerators(const Aws::Vector<ReportGenerator>& value) { m_reportGenerators = value; }
    inline void SetReportGenerators(Aws::Vector<ReportGenerator>&& value) { m_reportGenerators = std::move(value); }
    inline ListLicenseManagerReportGeneratorsResult& WithReportGenerators(const Aws::Vector<ReportGenerator>& value) { SetReportGenerators(value); return *this;}
    inline ListLicenseManagerReportGeneratorsResult& WithReportGenerators(Aws::Vector<ReportGenerator>&& value) { SetReportGenerators(std::move(value)); return *this;}
    inline ListLicenseManagerReportGeneratorsResult& AddReportGenerators(const ReportGenerator& value) { m_reportGenerators.push_back(value); return *this; }
    inline ListLicenseManagerReportGeneratorsResult& AddReportGenerators(ReportGenerator&& value) { m_reportGenerators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLicenseManagerReportGeneratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLicenseManagerReportGeneratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLicenseManagerReportGeneratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLicenseManagerReportGeneratorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLicenseManagerReportGeneratorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLicenseManagerReportGeneratorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ReportGenerator> m_reportGenerators;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
