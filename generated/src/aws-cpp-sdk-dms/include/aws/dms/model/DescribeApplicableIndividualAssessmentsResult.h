﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeApplicableIndividualAssessmentsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeApplicableIndividualAssessmentsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of names for the individual assessments supported by the premigration
     * assessment run that you start based on the specified request parameters. For
     * more information on the available individual assessments, including
     * compatibility with different migration task configurations, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.AssessmentReport.html">Working
     * with premigration assessment runs</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetIndividualAssessmentNames() const{ return m_individualAssessmentNames; }
    inline void SetIndividualAssessmentNames(const Aws::Vector<Aws::String>& value) { m_individualAssessmentNames = value; }
    inline void SetIndividualAssessmentNames(Aws::Vector<Aws::String>&& value) { m_individualAssessmentNames = std::move(value); }
    inline DescribeApplicableIndividualAssessmentsResult& WithIndividualAssessmentNames(const Aws::Vector<Aws::String>& value) { SetIndividualAssessmentNames(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsResult& WithIndividualAssessmentNames(Aws::Vector<Aws::String>&& value) { SetIndividualAssessmentNames(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsResult& AddIndividualAssessmentNames(const Aws::String& value) { m_individualAssessmentNames.push_back(value); return *this; }
    inline DescribeApplicableIndividualAssessmentsResult& AddIndividualAssessmentNames(Aws::String&& value) { m_individualAssessmentNames.push_back(std::move(value)); return *this; }
    inline DescribeApplicableIndividualAssessmentsResult& AddIndividualAssessmentNames(const char* value) { m_individualAssessmentNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeApplicableIndividualAssessmentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeApplicableIndividualAssessmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_individualAssessmentNames;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
