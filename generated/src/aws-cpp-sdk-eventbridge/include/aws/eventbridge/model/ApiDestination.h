﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ApiDestinationState.h>
#include <aws/eventbridge/model/ApiDestinationHttpMethod.h>
#include <aws/core/utils/DateTime.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains details about an API destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ApiDestination">AWS
   * API Reference</a></p>
   */
  class ApiDestination
  {
  public:
    AWS_EVENTBRIDGE_API ApiDestination();
    AWS_EVENTBRIDGE_API ApiDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ApiDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the API destination.</p>
     */
    inline const Aws::String& GetApiDestinationArn() const{ return m_apiDestinationArn; }
    inline bool ApiDestinationArnHasBeenSet() const { return m_apiDestinationArnHasBeenSet; }
    inline void SetApiDestinationArn(const Aws::String& value) { m_apiDestinationArnHasBeenSet = true; m_apiDestinationArn = value; }
    inline void SetApiDestinationArn(Aws::String&& value) { m_apiDestinationArnHasBeenSet = true; m_apiDestinationArn = std::move(value); }
    inline void SetApiDestinationArn(const char* value) { m_apiDestinationArnHasBeenSet = true; m_apiDestinationArn.assign(value); }
    inline ApiDestination& WithApiDestinationArn(const Aws::String& value) { SetApiDestinationArn(value); return *this;}
    inline ApiDestination& WithApiDestinationArn(Aws::String&& value) { SetApiDestinationArn(std::move(value)); return *this;}
    inline ApiDestination& WithApiDestinationArn(const char* value) { SetApiDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ApiDestination& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ApiDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ApiDestination& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the API destination.</p>
     */
    inline const ApiDestinationState& GetApiDestinationState() const{ return m_apiDestinationState; }
    inline bool ApiDestinationStateHasBeenSet() const { return m_apiDestinationStateHasBeenSet; }
    inline void SetApiDestinationState(const ApiDestinationState& value) { m_apiDestinationStateHasBeenSet = true; m_apiDestinationState = value; }
    inline void SetApiDestinationState(ApiDestinationState&& value) { m_apiDestinationStateHasBeenSet = true; m_apiDestinationState = std::move(value); }
    inline ApiDestination& WithApiDestinationState(const ApiDestinationState& value) { SetApiDestinationState(value); return *this;}
    inline ApiDestination& WithApiDestinationState(ApiDestinationState&& value) { SetApiDestinationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the connection specified for the API destination.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }
    inline ApiDestination& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline ApiDestination& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline ApiDestination& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the endpoint for the API destination.</p>
     */
    inline const Aws::String& GetInvocationEndpoint() const{ return m_invocationEndpoint; }
    inline bool InvocationEndpointHasBeenSet() const { return m_invocationEndpointHasBeenSet; }
    inline void SetInvocationEndpoint(const Aws::String& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = value; }
    inline void SetInvocationEndpoint(Aws::String&& value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint = std::move(value); }
    inline void SetInvocationEndpoint(const char* value) { m_invocationEndpointHasBeenSet = true; m_invocationEndpoint.assign(value); }
    inline ApiDestination& WithInvocationEndpoint(const Aws::String& value) { SetInvocationEndpoint(value); return *this;}
    inline ApiDestination& WithInvocationEndpoint(Aws::String&& value) { SetInvocationEndpoint(std::move(value)); return *this;}
    inline ApiDestination& WithInvocationEndpoint(const char* value) { SetInvocationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use to connect to the HTTP endpoint.</p>
     */
    inline const ApiDestinationHttpMethod& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const ApiDestinationHttpMethod& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(ApiDestinationHttpMethod&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline ApiDestination& WithHttpMethod(const ApiDestinationHttpMethod& value) { SetHttpMethod(value); return *this;}
    inline ApiDestination& WithHttpMethod(ApiDestinationHttpMethod&& value) { SetHttpMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of invocations per second to send to the HTTP
     * endpoint.</p>
     */
    inline int GetInvocationRateLimitPerSecond() const{ return m_invocationRateLimitPerSecond; }
    inline bool InvocationRateLimitPerSecondHasBeenSet() const { return m_invocationRateLimitPerSecondHasBeenSet; }
    inline void SetInvocationRateLimitPerSecond(int value) { m_invocationRateLimitPerSecondHasBeenSet = true; m_invocationRateLimitPerSecond = value; }
    inline ApiDestination& WithInvocationRateLimitPerSecond(int value) { SetInvocationRateLimitPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the API destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ApiDestination& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ApiDestination& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp for the time that the API destination was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ApiDestination& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ApiDestination& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiDestinationArn;
    bool m_apiDestinationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ApiDestinationState m_apiDestinationState;
    bool m_apiDestinationStateHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_invocationEndpoint;
    bool m_invocationEndpointHasBeenSet = false;

    ApiDestinationHttpMethod m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    int m_invocationRateLimitPerSecond;
    bool m_invocationRateLimitPerSecondHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
