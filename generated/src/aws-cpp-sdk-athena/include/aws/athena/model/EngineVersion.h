﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
   * <p>The Athena engine version for running queries, or the PySpark engine version
   * for running sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/EngineVersion">AWS
   * API Reference</a></p>
   */
  class EngineVersion
  {
  public:
    AWS_ATHENA_API EngineVersion();
    AWS_ATHENA_API EngineVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API EngineVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The engine version requested by the user. Possible values are determined by
     * the output of <code>ListEngineVersions</code>, including AUTO. The default is
     * AUTO.</p>
     */
    inline const Aws::String& GetSelectedEngineVersion() const{ return m_selectedEngineVersion; }
    inline bool SelectedEngineVersionHasBeenSet() const { return m_selectedEngineVersionHasBeenSet; }
    inline void SetSelectedEngineVersion(const Aws::String& value) { m_selectedEngineVersionHasBeenSet = true; m_selectedEngineVersion = value; }
    inline void SetSelectedEngineVersion(Aws::String&& value) { m_selectedEngineVersionHasBeenSet = true; m_selectedEngineVersion = std::move(value); }
    inline void SetSelectedEngineVersion(const char* value) { m_selectedEngineVersionHasBeenSet = true; m_selectedEngineVersion.assign(value); }
    inline EngineVersion& WithSelectedEngineVersion(const Aws::String& value) { SetSelectedEngineVersion(value); return *this;}
    inline EngineVersion& WithSelectedEngineVersion(Aws::String&& value) { SetSelectedEngineVersion(std::move(value)); return *this;}
    inline EngineVersion& WithSelectedEngineVersion(const char* value) { SetSelectedEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read only. The engine version on which the query runs. If the user requests a
     * valid engine version other than Auto, the effective engine version is the same
     * as the engine version that the user requested. If the user requests Auto, the
     * effective engine version is chosen by Athena. When a request to update the
     * engine version is made by a <code>CreateWorkGroup</code> or
     * <code>UpdateWorkGroup</code> operation, the <code>EffectiveEngineVersion</code>
     * field is ignored.</p>
     */
    inline const Aws::String& GetEffectiveEngineVersion() const{ return m_effectiveEngineVersion; }
    inline bool EffectiveEngineVersionHasBeenSet() const { return m_effectiveEngineVersionHasBeenSet; }
    inline void SetEffectiveEngineVersion(const Aws::String& value) { m_effectiveEngineVersionHasBeenSet = true; m_effectiveEngineVersion = value; }
    inline void SetEffectiveEngineVersion(Aws::String&& value) { m_effectiveEngineVersionHasBeenSet = true; m_effectiveEngineVersion = std::move(value); }
    inline void SetEffectiveEngineVersion(const char* value) { m_effectiveEngineVersionHasBeenSet = true; m_effectiveEngineVersion.assign(value); }
    inline EngineVersion& WithEffectiveEngineVersion(const Aws::String& value) { SetEffectiveEngineVersion(value); return *this;}
    inline EngineVersion& WithEffectiveEngineVersion(Aws::String&& value) { SetEffectiveEngineVersion(std::move(value)); return *this;}
    inline EngineVersion& WithEffectiveEngineVersion(const char* value) { SetEffectiveEngineVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_selectedEngineVersion;
    bool m_selectedEngineVersionHasBeenSet = false;

    Aws::String m_effectiveEngineVersion;
    bool m_effectiveEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
