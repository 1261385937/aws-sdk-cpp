﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>CreateTapeOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapesOutput">AWS
   * API Reference</a></p>
   */
  class CreateTapesResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapesResult();
    AWS_STORAGEGATEWAY_API CreateTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of unique Amazon Resource Names (ARNs) that represents the virtual
     * tapes that were created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTapeARNs() const{ return m_tapeARNs; }
    inline void SetTapeARNs(const Aws::Vector<Aws::String>& value) { m_tapeARNs = value; }
    inline void SetTapeARNs(Aws::Vector<Aws::String>&& value) { m_tapeARNs = std::move(value); }
    inline CreateTapesResult& WithTapeARNs(const Aws::Vector<Aws::String>& value) { SetTapeARNs(value); return *this;}
    inline CreateTapesResult& WithTapeARNs(Aws::Vector<Aws::String>&& value) { SetTapeARNs(std::move(value)); return *this;}
    inline CreateTapesResult& AddTapeARNs(const Aws::String& value) { m_tapeARNs.push_back(value); return *this; }
    inline CreateTapesResult& AddTapeARNs(Aws::String&& value) { m_tapeARNs.push_back(std::move(value)); return *this; }
    inline CreateTapesResult& AddTapeARNs(const char* value) { m_tapeARNs.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateTapesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateTapesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateTapesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_tapeARNs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
