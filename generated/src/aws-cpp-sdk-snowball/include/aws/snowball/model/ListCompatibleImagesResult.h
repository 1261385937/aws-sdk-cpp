﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/CompatibleImage.h>
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
namespace Snowball
{
namespace Model
{
  class ListCompatibleImagesResult
  {
  public:
    AWS_SNOWBALL_API ListCompatibleImagesResult();
    AWS_SNOWBALL_API ListCompatibleImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListCompatibleImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON-formatted object that describes a compatible AMI, including the ID and
     * name for a Snow device AMI.</p>
     */
    inline const Aws::Vector<CompatibleImage>& GetCompatibleImages() const{ return m_compatibleImages; }
    inline void SetCompatibleImages(const Aws::Vector<CompatibleImage>& value) { m_compatibleImages = value; }
    inline void SetCompatibleImages(Aws::Vector<CompatibleImage>&& value) { m_compatibleImages = std::move(value); }
    inline ListCompatibleImagesResult& WithCompatibleImages(const Aws::Vector<CompatibleImage>& value) { SetCompatibleImages(value); return *this;}
    inline ListCompatibleImagesResult& WithCompatibleImages(Aws::Vector<CompatibleImage>&& value) { SetCompatibleImages(std::move(value)); return *this;}
    inline ListCompatibleImagesResult& AddCompatibleImages(const CompatibleImage& value) { m_compatibleImages.push_back(value); return *this; }
    inline ListCompatibleImagesResult& AddCompatibleImages(CompatibleImage&& value) { m_compatibleImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCompatibleImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCompatibleImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCompatibleImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCompatibleImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCompatibleImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCompatibleImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleImage> m_compatibleImages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
