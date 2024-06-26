﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/KeyPhrase.h>
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
namespace Comprehend
{
namespace Model
{
  class DetectKeyPhrasesResult
  {
  public:
    AWS_COMPREHEND_API DetectKeyPhrasesResult();
    AWS_COMPREHEND_API DetectKeyPhrasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectKeyPhrasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of key phrases that Amazon Comprehend identified in the input
     * text. For each key phrase, the response provides the text of the key phrase,
     * where the key phrase begins and ends, and the level of confidence that Amazon
     * Comprehend has in the accuracy of the detection. </p>
     */
    inline const Aws::Vector<KeyPhrase>& GetKeyPhrases() const{ return m_keyPhrases; }
    inline void SetKeyPhrases(const Aws::Vector<KeyPhrase>& value) { m_keyPhrases = value; }
    inline void SetKeyPhrases(Aws::Vector<KeyPhrase>&& value) { m_keyPhrases = std::move(value); }
    inline DetectKeyPhrasesResult& WithKeyPhrases(const Aws::Vector<KeyPhrase>& value) { SetKeyPhrases(value); return *this;}
    inline DetectKeyPhrasesResult& WithKeyPhrases(Aws::Vector<KeyPhrase>&& value) { SetKeyPhrases(std::move(value)); return *this;}
    inline DetectKeyPhrasesResult& AddKeyPhrases(const KeyPhrase& value) { m_keyPhrases.push_back(value); return *this; }
    inline DetectKeyPhrasesResult& AddKeyPhrases(KeyPhrase&& value) { m_keyPhrases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DetectKeyPhrasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DetectKeyPhrasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DetectKeyPhrasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<KeyPhrase> m_keyPhrases;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
