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
   * <p>ListVolumeInitiatorsOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumeInitiatorsOutput">AWS
   * API Reference</a></p>
   */
  class ListVolumeInitiatorsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult();
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListVolumeInitiatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The host names and port numbers of all iSCSI initiators that are connected to
     * the gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInitiators() const{ return m_initiators; }
    inline void SetInitiators(const Aws::Vector<Aws::String>& value) { m_initiators = value; }
    inline void SetInitiators(Aws::Vector<Aws::String>&& value) { m_initiators = std::move(value); }
    inline ListVolumeInitiatorsResult& WithInitiators(const Aws::Vector<Aws::String>& value) { SetInitiators(value); return *this;}
    inline ListVolumeInitiatorsResult& WithInitiators(Aws::Vector<Aws::String>&& value) { SetInitiators(std::move(value)); return *this;}
    inline ListVolumeInitiatorsResult& AddInitiators(const Aws::String& value) { m_initiators.push_back(value); return *this; }
    inline ListVolumeInitiatorsResult& AddInitiators(Aws::String&& value) { m_initiators.push_back(std::move(value)); return *this; }
    inline ListVolumeInitiatorsResult& AddInitiators(const char* value) { m_initiators.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVolumeInitiatorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVolumeInitiatorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVolumeInitiatorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_initiators;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
