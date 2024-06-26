﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
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
namespace QLDB
{
namespace Model
{
  class ExportJournalToS3Result
  {
  public:
    AWS_QLDB_API ExportJournalToS3Result();
    AWS_QLDB_API ExportJournalToS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ExportJournalToS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The UUID (represented in Base62-encoded text) that QLDB assigns to each
     * journal export job.</p> <p>To describe your export request and check the status
     * of the job, you can use <code>ExportId</code> to call
     * <code>DescribeJournalS3Export</code>.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportId.assign(value); }
    inline ExportJournalToS3Result& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline ExportJournalToS3Result& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline ExportJournalToS3Result& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportJournalToS3Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportJournalToS3Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportJournalToS3Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
