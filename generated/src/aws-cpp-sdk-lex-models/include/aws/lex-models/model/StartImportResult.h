﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/ResourceType.h>
#include <aws/lex-models/model/MergeStrategy.h>
#include <aws/lex-models/model/ImportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/Tag.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class StartImportResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API StartImportResult();
    AWS_LEXMODELBUILDINGSERVICE_API StartImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API StartImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name given to the import job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline StartImportResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartImportResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartImportResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource to import.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }
    inline StartImportResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline StartImportResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when there is a merge conflict.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategy = value; }
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategy = std::move(value); }
    inline StartImportResult& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}
    inline StartImportResult& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the specific import job.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline void SetImportId(const Aws::String& value) { m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importId.assign(value); }
    inline StartImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline StartImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline StartImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job. If the status is <code>FAILED</code>, you can
     * get the reason for the failure using the <code>GetImport</code> operation.</p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }
    inline StartImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}
    inline StartImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags added to the imported bot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline StartImportResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartImportResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartImportResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline StartImportResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp for the date and time that the import job was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline StartImportResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline StartImportResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    ResourceType m_resourceType;

    MergeStrategy m_mergeStrategy;

    Aws::String m_importId;

    ImportStatus m_importStatus;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
