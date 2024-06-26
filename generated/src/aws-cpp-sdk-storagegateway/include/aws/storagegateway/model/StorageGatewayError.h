﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Provides additional information about an error that was returned by the
   * service. See the <code>errorCode</code> and <code>errorDetails</code> members
   * for more information about the error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/StorageGatewayError">AWS
   * API Reference</a></p>
   */
  class StorageGatewayError
  {
  public:
    AWS_STORAGEGATEWAY_API StorageGatewayError();
    AWS_STORAGEGATEWAY_API StorageGatewayError(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API StorageGatewayError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional information about the error.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline StorageGatewayError& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}
    inline StorageGatewayError& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline StorageGatewayError& WithErrorDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetErrorDetails(value); return *this;}
    inline StorageGatewayError& WithErrorDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetErrorDetails(std::move(value)); return *this;}
    inline StorageGatewayError& AddErrorDetails(const Aws::String& key, const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(key, value); return *this; }
    inline StorageGatewayError& AddErrorDetails(Aws::String&& key, const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(std::move(key), value); return *this; }
    inline StorageGatewayError& AddErrorDetails(const Aws::String& key, Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(key, std::move(value)); return *this; }
    inline StorageGatewayError& AddErrorDetails(Aws::String&& key, Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(std::move(key), std::move(value)); return *this; }
    inline StorageGatewayError& AddErrorDetails(const char* key, Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(key, std::move(value)); return *this; }
    inline StorageGatewayError& AddErrorDetails(Aws::String&& key, const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(std::move(key), value); return *this; }
    inline StorageGatewayError& AddErrorDetails(const char* key, const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace(key, value); return *this; }
    ///@}
  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
