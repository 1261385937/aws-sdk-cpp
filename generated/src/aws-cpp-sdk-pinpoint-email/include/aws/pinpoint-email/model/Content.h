﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that represents the content of the email, and optionally a
   * character set specification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Content">AWS
   * API Reference</a></p>
   */
  class Content
  {
  public:
    AWS_PINPOINTEMAIL_API Content();
    AWS_PINPOINTEMAIL_API Content(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Content& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the message itself.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }
    inline Content& WithData(const Aws::String& value) { SetData(value); return *this;}
    inline Content& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}
    inline Content& WithData(const char* value) { SetData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set for the content. Because of the constraints of the SMTP
     * protocol, Amazon Pinpoint uses 7-bit ASCII by default. If the text includes
     * characters outside of the ASCII range, you have to specify a character set. For
     * example, you could specify <code>UTF-8</code>, <code>ISO-8859-1</code>, or
     * <code>Shift_JIS</code>.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }
    inline Content& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}
    inline Content& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}
    inline Content& WithCharset(const char* value) { SetCharset(value); return *this;}
    ///@}
  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
