﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetModality.h>
#include <aws/lexv2-models/model/TestSetStatus.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelsV2
{
namespace Model
{
  class DescribeTestSetResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestSetResult();
    AWS_LEXMODELSV2_API DescribeTestSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeTestSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test set Id for the test set response.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }
    inline void SetTestSetId(const Aws::String& value) { m_testSetId = value; }
    inline void SetTestSetId(Aws::String&& value) { m_testSetId = std::move(value); }
    inline void SetTestSetId(const char* value) { m_testSetId.assign(value); }
    inline DescribeTestSetResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}
    inline DescribeTestSetResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}
    inline DescribeTestSetResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set name of the test set.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetName.assign(value); }
    inline DescribeTestSetResult& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline DescribeTestSetResult& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline DescribeTestSetResult& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeTestSetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeTestSetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeTestSetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the test set is audio or text data.</p>
     */
    inline const TestSetModality& GetModality() const{ return m_modality; }
    inline void SetModality(const TestSetModality& value) { m_modality = value; }
    inline void SetModality(TestSetModality&& value) { m_modality = std::move(value); }
    inline DescribeTestSetResult& WithModality(const TestSetModality& value) { SetModality(value); return *this;}
    inline DescribeTestSetResult& WithModality(TestSetModality&& value) { SetModality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test set.</p>
     */
    inline const TestSetStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TestSetStatus& value) { m_status = value; }
    inline void SetStatus(TestSetStatus&& value) { m_status = std::move(value); }
    inline DescribeTestSetResult& WithStatus(const TestSetStatus& value) { SetStatus(value); return *this;}
    inline DescribeTestSetResult& WithStatus(TestSetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeTestSetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeTestSetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeTestSetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of agent and user turn in the test set.</p>
     */
    inline int GetNumTurns() const{ return m_numTurns; }
    inline void SetNumTurns(int value) { m_numTurns = value; }
    inline DescribeTestSetResult& WithNumTurns(int value) { SetNumTurns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage location for the test set data.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocation = value; }
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocation = std::move(value); }
    inline DescribeTestSetResult& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}
    inline DescribeTestSetResult& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the test set data.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeTestSetResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeTestSetResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time for the last update of the test set data.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeTestSetResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeTestSetResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTestSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTestSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTestSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testSetId;

    Aws::String m_testSetName;

    Aws::String m_description;

    TestSetModality m_modality;

    TestSetStatus m_status;

    Aws::String m_roleArn;

    int m_numTurns;

    TestSetStorageLocation m_storageLocation;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
