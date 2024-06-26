﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the encryption used to store the job results in
   * Amazon S3. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/Encryption">AWS
   * API Reference</a></p>
   */
  class Encryption
  {
  public:
    AWS_GLACIER_API Encryption();
    AWS_GLACIER_API Encryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline Encryption& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline Encryption& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }
    inline Encryption& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}
    inline Encryption& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}
    inline Encryption& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline const Aws::String& GetKMSContext() const{ return m_kMSContext; }
    inline bool KMSContextHasBeenSet() const { return m_kMSContextHasBeenSet; }
    inline void SetKMSContext(const Aws::String& value) { m_kMSContextHasBeenSet = true; m_kMSContext = value; }
    inline void SetKMSContext(Aws::String&& value) { m_kMSContextHasBeenSet = true; m_kMSContext = std::move(value); }
    inline void SetKMSContext(const char* value) { m_kMSContextHasBeenSet = true; m_kMSContext.assign(value); }
    inline Encryption& WithKMSContext(const Aws::String& value) { SetKMSContext(value); return *this;}
    inline Encryption& WithKMSContext(Aws::String&& value) { SetKMSContext(std::move(value)); return *this;}
    inline Encryption& WithKMSContext(const char* value) { SetKMSContext(value); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    Aws::String m_kMSContext;
    bool m_kMSContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
