﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuthInfo.h>
#include <aws/iot/model/Allowed.h>
#include <aws/iot/model/Denied.h>
#include <aws/iot/model/AuthDecision.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The authorizer result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuthResult">AWS API
   * Reference</a></p>
   */
  class AuthResult
  {
  public:
    AWS_IOT_API AuthResult();
    AWS_IOT_API AuthResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuthResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Authorization information.</p>
     */
    inline const AuthInfo& GetAuthInfo() const{ return m_authInfo; }
    inline bool AuthInfoHasBeenSet() const { return m_authInfoHasBeenSet; }
    inline void SetAuthInfo(const AuthInfo& value) { m_authInfoHasBeenSet = true; m_authInfo = value; }
    inline void SetAuthInfo(AuthInfo&& value) { m_authInfoHasBeenSet = true; m_authInfo = std::move(value); }
    inline AuthResult& WithAuthInfo(const AuthInfo& value) { SetAuthInfo(value); return *this;}
    inline AuthResult& WithAuthInfo(AuthInfo&& value) { SetAuthInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies and statements that allowed the specified action.</p>
     */
    inline const Allowed& GetAllowed() const{ return m_allowed; }
    inline bool AllowedHasBeenSet() const { return m_allowedHasBeenSet; }
    inline void SetAllowed(const Allowed& value) { m_allowedHasBeenSet = true; m_allowed = value; }
    inline void SetAllowed(Allowed&& value) { m_allowedHasBeenSet = true; m_allowed = std::move(value); }
    inline AuthResult& WithAllowed(const Allowed& value) { SetAllowed(value); return *this;}
    inline AuthResult& WithAllowed(Allowed&& value) { SetAllowed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies and statements that denied the specified action.</p>
     */
    inline const Denied& GetDenied() const{ return m_denied; }
    inline bool DeniedHasBeenSet() const { return m_deniedHasBeenSet; }
    inline void SetDenied(const Denied& value) { m_deniedHasBeenSet = true; m_denied = value; }
    inline void SetDenied(Denied&& value) { m_deniedHasBeenSet = true; m_denied = std::move(value); }
    inline AuthResult& WithDenied(const Denied& value) { SetDenied(value); return *this;}
    inline AuthResult& WithDenied(Denied&& value) { SetDenied(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The final authorization decision of this scenario. Multiple statements are
     * taken into account when determining the authorization decision. An explicit deny
     * statement can override multiple allow statements.</p>
     */
    inline const AuthDecision& GetAuthDecision() const{ return m_authDecision; }
    inline bool AuthDecisionHasBeenSet() const { return m_authDecisionHasBeenSet; }
    inline void SetAuthDecision(const AuthDecision& value) { m_authDecisionHasBeenSet = true; m_authDecision = value; }
    inline void SetAuthDecision(AuthDecision&& value) { m_authDecisionHasBeenSet = true; m_authDecision = std::move(value); }
    inline AuthResult& WithAuthDecision(const AuthDecision& value) { SetAuthDecision(value); return *this;}
    inline AuthResult& WithAuthDecision(AuthDecision&& value) { SetAuthDecision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains any missing context values found while evaluating policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingContextValues() const{ return m_missingContextValues; }
    inline bool MissingContextValuesHasBeenSet() const { return m_missingContextValuesHasBeenSet; }
    inline void SetMissingContextValues(const Aws::Vector<Aws::String>& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = value; }
    inline void SetMissingContextValues(Aws::Vector<Aws::String>&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues = std::move(value); }
    inline AuthResult& WithMissingContextValues(const Aws::Vector<Aws::String>& value) { SetMissingContextValues(value); return *this;}
    inline AuthResult& WithMissingContextValues(Aws::Vector<Aws::String>&& value) { SetMissingContextValues(std::move(value)); return *this;}
    inline AuthResult& AddMissingContextValues(const Aws::String& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }
    inline AuthResult& AddMissingContextValues(Aws::String&& value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(std::move(value)); return *this; }
    inline AuthResult& AddMissingContextValues(const char* value) { m_missingContextValuesHasBeenSet = true; m_missingContextValues.push_back(value); return *this; }
    ///@}
  private:

    AuthInfo m_authInfo;
    bool m_authInfoHasBeenSet = false;

    Allowed m_allowed;
    bool m_allowedHasBeenSet = false;

    Denied m_denied;
    bool m_deniedHasBeenSet = false;

    AuthDecision m_authDecision;
    bool m_authDecisionHasBeenSet = false;

    Aws::Vector<Aws::String> m_missingContextValues;
    bool m_missingContextValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
