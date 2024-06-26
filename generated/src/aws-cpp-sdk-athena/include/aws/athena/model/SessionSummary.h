﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EngineVersion.h>
#include <aws/athena/model/SessionStatus.h>
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
   * <p>Contains summary information about a session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/SessionSummary">AWS
   * API Reference</a></p>
   */
  class SessionSummary
  {
  public:
    AWS_ATHENA_API SessionSummary();
    AWS_ATHENA_API SessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API SessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline SessionSummary& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline SessionSummary& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline SessionSummary& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SessionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SessionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SessionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version used by the session (for example, <code>PySpark engine
     * version 3</code>).</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline SessionSummary& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}
    inline SessionSummary& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notebook version.</p>
     */
    inline const Aws::String& GetNotebookVersion() const{ return m_notebookVersion; }
    inline bool NotebookVersionHasBeenSet() const { return m_notebookVersionHasBeenSet; }
    inline void SetNotebookVersion(const Aws::String& value) { m_notebookVersionHasBeenSet = true; m_notebookVersion = value; }
    inline void SetNotebookVersion(Aws::String&& value) { m_notebookVersionHasBeenSet = true; m_notebookVersion = std::move(value); }
    inline void SetNotebookVersion(const char* value) { m_notebookVersionHasBeenSet = true; m_notebookVersion.assign(value); }
    inline SessionSummary& WithNotebookVersion(const Aws::String& value) { SetNotebookVersion(value); return *this;}
    inline SessionSummary& WithNotebookVersion(Aws::String&& value) { SetNotebookVersion(std::move(value)); return *this;}
    inline SessionSummary& WithNotebookVersion(const char* value) { SetNotebookVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the session status.</p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SessionSummary& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}
    inline SessionSummary& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_notebookVersion;
    bool m_notebookVersionHasBeenSet = false;

    SessionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
