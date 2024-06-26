﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ContentData.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class CreateContentResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API CreateContentResult();
    AWS_CONNECTWISDOMSERVICE_API CreateContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API CreateContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The content.</p>
     */
    inline const ContentData& GetContent() const{ return m_content; }
    inline void SetContent(const ContentData& value) { m_content = value; }
    inline void SetContent(ContentData&& value) { m_content = std::move(value); }
    inline CreateContentResult& WithContent(const ContentData& value) { SetContent(value); return *this;}
    inline CreateContentResult& WithContent(ContentData&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContentData m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
