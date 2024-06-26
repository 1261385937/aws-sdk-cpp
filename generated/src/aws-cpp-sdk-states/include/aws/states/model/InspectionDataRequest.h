﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains additional details about the state's execution, including its input
   * and output data processing flow, and HTTP request information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/InspectionDataRequest">AWS
   * API Reference</a></p>
   */
  class InspectionDataRequest
  {
  public:
    AWS_SFN_API InspectionDataRequest();
    AWS_SFN_API InspectionDataRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API InspectionDataRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol used to make the HTTP request.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline InspectionDataRequest& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline InspectionDataRequest& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline InspectionDataRequest& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method used for the HTTP request.</p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }
    inline InspectionDataRequest& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}
    inline InspectionDataRequest& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}
    inline InspectionDataRequest& WithMethod(const char* value) { SetMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API endpoint used for the HTTP request.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline InspectionDataRequest& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline InspectionDataRequest& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline InspectionDataRequest& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request headers associated with the HTTP request.</p>
     */
    inline const Aws::String& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::String& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::String&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline void SetHeaders(const char* value) { m_headersHasBeenSet = true; m_headers.assign(value); }
    inline InspectionDataRequest& WithHeaders(const Aws::String& value) { SetHeaders(value); return *this;}
    inline InspectionDataRequest& WithHeaders(Aws::String&& value) { SetHeaders(std::move(value)); return *this;}
    inline InspectionDataRequest& WithHeaders(const char* value) { SetHeaders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request body for the HTTP request.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline InspectionDataRequest& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline InspectionDataRequest& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline InspectionDataRequest& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}
  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_headers;
    bool m_headersHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
