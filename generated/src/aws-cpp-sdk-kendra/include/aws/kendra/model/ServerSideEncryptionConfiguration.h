﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the identifier of the KMS key used to encrypt data indexed by Amazon
   * Kendra. Amazon Kendra doesn't support asymmetric keys.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ServerSideEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerSideEncryptionConfiguration
  {
  public:
    AWS_KENDRA_API ServerSideEncryptionConfiguration();
    AWS_KENDRA_API ServerSideEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ServerSideEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the KMS key. Amazon Kendra doesn't support asymmetric
     * keys.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
