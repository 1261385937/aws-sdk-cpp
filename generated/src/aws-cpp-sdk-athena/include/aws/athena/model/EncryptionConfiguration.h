﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/EncryptionOption.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>If query and calculation results are encrypted in Amazon S3, indicates the
   * encryption option used (for example, <code>SSE_KMS</code> or
   * <code>CSE_KMS</code>) and key information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_ATHENA_API EncryptionConfiguration();
    AWS_ATHENA_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether Amazon S3 server-side encryption with Amazon S3-managed
     * keys (<code>SSE_S3</code>), server-side encryption with KMS-managed keys
     * (<code>SSE_KMS</code>), or client-side encryption with KMS-managed keys
     * (<code>CSE_KMS</code>) is used.</p> <p>If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the workgroup's setting for
     * encryption is used. It specifies whether query results must be encrypted, for
     * all queries that run in this workgroup. </p>
     */
    inline const EncryptionOption& GetEncryptionOption() const{ return m_encryptionOption; }
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }
    inline void SetEncryptionOption(const EncryptionOption& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }
    inline void SetEncryptionOption(EncryptionOption&& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = std::move(value); }
    inline EncryptionConfiguration& WithEncryptionOption(const EncryptionOption& value) { SetEncryptionOption(value); return *this;}
    inline EncryptionConfiguration& WithEncryptionOption(EncryptionOption&& value) { SetEncryptionOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key ARN or
     * ID.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline EncryptionConfiguration& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline EncryptionConfiguration& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline EncryptionConfiguration& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}
  private:

    EncryptionOption m_encryptionOption;
    bool m_encryptionOptionHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
