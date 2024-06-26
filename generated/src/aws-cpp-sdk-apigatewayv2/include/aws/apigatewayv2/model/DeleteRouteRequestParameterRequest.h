﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class DeleteRouteRequestParameterRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API DeleteRouteRequestParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRouteRequestParameter"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline DeleteRouteRequestParameterRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline DeleteRouteRequestParameterRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline DeleteRouteRequestParameterRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route request parameter key.</p>
     */
    inline const Aws::String& GetRequestParameterKey() const{ return m_requestParameterKey; }
    inline bool RequestParameterKeyHasBeenSet() const { return m_requestParameterKeyHasBeenSet; }
    inline void SetRequestParameterKey(const Aws::String& value) { m_requestParameterKeyHasBeenSet = true; m_requestParameterKey = value; }
    inline void SetRequestParameterKey(Aws::String&& value) { m_requestParameterKeyHasBeenSet = true; m_requestParameterKey = std::move(value); }
    inline void SetRequestParameterKey(const char* value) { m_requestParameterKeyHasBeenSet = true; m_requestParameterKey.assign(value); }
    inline DeleteRouteRequestParameterRequest& WithRequestParameterKey(const Aws::String& value) { SetRequestParameterKey(value); return *this;}
    inline DeleteRouteRequestParameterRequest& WithRequestParameterKey(Aws::String&& value) { SetRequestParameterKey(std::move(value)); return *this;}
    inline DeleteRouteRequestParameterRequest& WithRequestParameterKey(const char* value) { SetRequestParameterKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }
    inline DeleteRouteRequestParameterRequest& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}
    inline DeleteRouteRequestParameterRequest& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}
    inline DeleteRouteRequestParameterRequest& WithRouteId(const char* value) { SetRouteId(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_requestParameterKey;
    bool m_requestParameterKeyHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
