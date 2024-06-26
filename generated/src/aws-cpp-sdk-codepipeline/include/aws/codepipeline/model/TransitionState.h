﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the state of transitions between one stage and
   * another stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/TransitionState">AWS
   * API Reference</a></p>
   */
  class TransitionState
  {
  public:
    AWS_CODEPIPELINE_API TransitionState();
    AWS_CODEPIPELINE_API TransitionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API TransitionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the transition between stages is enabled (true) or disabled
     * (false).</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline TransitionState& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who last changed the transition state.</p>
     */
    inline const Aws::String& GetLastChangedBy() const{ return m_lastChangedBy; }
    inline bool LastChangedByHasBeenSet() const { return m_lastChangedByHasBeenSet; }
    inline void SetLastChangedBy(const Aws::String& value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy = value; }
    inline void SetLastChangedBy(Aws::String&& value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy = std::move(value); }
    inline void SetLastChangedBy(const char* value) { m_lastChangedByHasBeenSet = true; m_lastChangedBy.assign(value); }
    inline TransitionState& WithLastChangedBy(const Aws::String& value) { SetLastChangedBy(value); return *this;}
    inline TransitionState& WithLastChangedBy(Aws::String&& value) { SetLastChangedBy(std::move(value)); return *this;}
    inline TransitionState& WithLastChangedBy(const char* value) { SetLastChangedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the transition state was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastChangedAt() const{ return m_lastChangedAt; }
    inline bool LastChangedAtHasBeenSet() const { return m_lastChangedAtHasBeenSet; }
    inline void SetLastChangedAt(const Aws::Utils::DateTime& value) { m_lastChangedAtHasBeenSet = true; m_lastChangedAt = value; }
    inline void SetLastChangedAt(Aws::Utils::DateTime&& value) { m_lastChangedAtHasBeenSet = true; m_lastChangedAt = std::move(value); }
    inline TransitionState& WithLastChangedAt(const Aws::Utils::DateTime& value) { SetLastChangedAt(value); return *this;}
    inline TransitionState& WithLastChangedAt(Aws::Utils::DateTime&& value) { SetLastChangedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified reason why the transition between two stages of a pipeline
     * was disabled.</p>
     */
    inline const Aws::String& GetDisabledReason() const{ return m_disabledReason; }
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }
    inline void SetDisabledReason(const Aws::String& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }
    inline void SetDisabledReason(Aws::String&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::move(value); }
    inline void SetDisabledReason(const char* value) { m_disabledReasonHasBeenSet = true; m_disabledReason.assign(value); }
    inline TransitionState& WithDisabledReason(const Aws::String& value) { SetDisabledReason(value); return *this;}
    inline TransitionState& WithDisabledReason(Aws::String&& value) { SetDisabledReason(std::move(value)); return *this;}
    inline TransitionState& WithDisabledReason(const char* value) { SetDisabledReason(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_lastChangedBy;
    bool m_lastChangedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastChangedAt;
    bool m_lastChangedAtHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
