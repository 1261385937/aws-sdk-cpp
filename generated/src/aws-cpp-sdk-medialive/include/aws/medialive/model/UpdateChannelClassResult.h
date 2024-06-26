﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Channel.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for UpdateChannelClassResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClassResponse">AWS
   * API Reference</a></p>
   */
  class UpdateChannelClassResult
  {
  public:
    AWS_MEDIALIVE_API UpdateChannelClassResult();
    AWS_MEDIALIVE_API UpdateChannelClassResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateChannelClassResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Channel& GetChannel() const{ return m_channel; }
    inline void SetChannel(const Channel& value) { m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }
    inline UpdateChannelClassResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline UpdateChannelClassResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateChannelClassResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateChannelClassResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateChannelClassResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Channel m_channel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
