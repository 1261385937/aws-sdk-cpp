﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/model/ValueHolder.h>
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
  class GetRevisionResult
  {
  public:
    AWS_QLDB_API GetRevisionResult();
    AWS_QLDB_API GetRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API GetRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The proof object in Amazon Ion format returned by a <code>GetRevision</code>
     * request. A proof contains the list of hash values that are required to
     * recalculate the specified digest using a Merkle tree, starting with the
     * specified document revision.</p>
     */
    inline const ValueHolder& GetProof() const{ return m_proof; }
    inline void SetProof(const ValueHolder& value) { m_proof = value; }
    inline void SetProof(ValueHolder&& value) { m_proof = std::move(value); }
    inline GetRevisionResult& WithProof(const ValueHolder& value) { SetProof(value); return *this;}
    inline GetRevisionResult& WithProof(ValueHolder&& value) { SetProof(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document revision data object in Amazon Ion format.</p>
     */
    inline const ValueHolder& GetRevision() const{ return m_revision; }
    inline void SetRevision(const ValueHolder& value) { m_revision = value; }
    inline void SetRevision(ValueHolder&& value) { m_revision = std::move(value); }
    inline GetRevisionResult& WithRevision(const ValueHolder& value) { SetRevision(value); return *this;}
    inline GetRevisionResult& WithRevision(ValueHolder&& value) { SetRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ValueHolder m_proof;

    ValueHolder m_revision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
