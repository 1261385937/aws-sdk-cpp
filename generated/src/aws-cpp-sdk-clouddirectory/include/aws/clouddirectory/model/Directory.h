﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/DirectoryState.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Directory structure that includes the directory name and directory
   * ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/Directory">AWS
   * API Reference</a></p>
   */
  class Directory
  {
  public:
    AWS_CLOUDDIRECTORY_API Directory();
    AWS_CLOUDDIRECTORY_API Directory(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Directory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the directory.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Directory& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Directory& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Directory& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the directory. For
     * more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline Directory& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline Directory& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline Directory& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the directory. Can be either <code>Enabled</code>,
     * <code>Disabled</code>, or <code>Deleted</code>.</p>
     */
    inline const DirectoryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DirectoryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Directory& WithState(const DirectoryState& value) { SetState(value); return *this;}
    inline Directory& WithState(DirectoryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline Directory& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline Directory& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    DirectoryState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
