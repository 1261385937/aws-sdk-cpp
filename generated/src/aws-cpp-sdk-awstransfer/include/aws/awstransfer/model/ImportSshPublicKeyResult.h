﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  /**
   * <p>Identifies the user, the server they belong to, and the identifier of the SSH
   * public key associated with that user. A user can have more than one key on each
   * server that they are associated with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportSshPublicKeyResponse">AWS
   * API Reference</a></p>
   */
  class ImportSshPublicKeyResult
  {
  public:
    AWS_TRANSFER_API ImportSshPublicKeyResult();
    AWS_TRANSFER_API ImportSshPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ImportSshPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A system-assigned unique identifier for a server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverId.assign(value); }
    inline ImportSshPublicKeyResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline ImportSshPublicKeyResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline ImportSshPublicKeyResult& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name given to a public key by the system that was imported.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const{ return m_sshPublicKeyId; }
    inline void SetSshPublicKeyId(const Aws::String& value) { m_sshPublicKeyId = value; }
    inline void SetSshPublicKeyId(Aws::String&& value) { m_sshPublicKeyId = std::move(value); }
    inline void SetSshPublicKeyId(const char* value) { m_sshPublicKeyId.assign(value); }
    inline ImportSshPublicKeyResult& WithSshPublicKeyId(const Aws::String& value) { SetSshPublicKeyId(value); return *this;}
    inline ImportSshPublicKeyResult& WithSshPublicKeyId(Aws::String&& value) { SetSshPublicKeyId(std::move(value)); return *this;}
    inline ImportSshPublicKeyResult& WithSshPublicKeyId(const char* value) { SetSshPublicKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline void SetUserName(const Aws::String& value) { m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userName.assign(value); }
    inline ImportSshPublicKeyResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline ImportSshPublicKeyResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline ImportSshPublicKeyResult& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportSshPublicKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportSshPublicKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportSshPublicKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_serverId;

    Aws::String m_sshPublicKeyId;

    Aws::String m_userName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
