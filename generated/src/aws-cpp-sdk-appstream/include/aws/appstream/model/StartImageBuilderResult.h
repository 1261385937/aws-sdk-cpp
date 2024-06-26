﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageBuilder.h>
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
namespace AppStream
{
namespace Model
{
  class StartImageBuilderResult
  {
  public:
    AWS_APPSTREAM_API StartImageBuilderResult();
    AWS_APPSTREAM_API StartImageBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API StartImageBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the image builder.</p>
     */
    inline const ImageBuilder& GetImageBuilder() const{ return m_imageBuilder; }
    inline void SetImageBuilder(const ImageBuilder& value) { m_imageBuilder = value; }
    inline void SetImageBuilder(ImageBuilder&& value) { m_imageBuilder = std::move(value); }
    inline StartImageBuilderResult& WithImageBuilder(const ImageBuilder& value) { SetImageBuilder(value); return *this;}
    inline StartImageBuilderResult& WithImageBuilder(ImageBuilder&& value) { SetImageBuilder(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartImageBuilderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartImageBuilderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartImageBuilderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ImageBuilder m_imageBuilder;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
