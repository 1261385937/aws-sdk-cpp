﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetErrorDetails.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class BatchDisassociateProjectAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API BatchDisassociateProjectAssetsResult();
    AWS_IOTSITEWISE_API BatchDisassociateProjectAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API BatchDisassociateProjectAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of associated error information, if any.</p>
     */
    inline const Aws::Vector<AssetErrorDetails>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<AssetErrorDetails>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<AssetErrorDetails>&& value) { m_errors = std::move(value); }
    inline BatchDisassociateProjectAssetsResult& WithErrors(const Aws::Vector<AssetErrorDetails>& value) { SetErrors(value); return *this;}
    inline BatchDisassociateProjectAssetsResult& WithErrors(Aws::Vector<AssetErrorDetails>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDisassociateProjectAssetsResult& AddErrors(const AssetErrorDetails& value) { m_errors.push_back(value); return *this; }
    inline BatchDisassociateProjectAssetsResult& AddErrors(AssetErrorDetails&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDisassociateProjectAssetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDisassociateProjectAssetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDisassociateProjectAssetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetErrorDetails> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
