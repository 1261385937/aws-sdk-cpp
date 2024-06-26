﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/ReplacementTypeEnum.h>
#include <aws/core/utils/Array.h>
#include <aws/codecommit/model/FileModeTypeEnum.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a replacement content entry in the conflict of a merge or
   * pull request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ReplaceContentEntry">AWS
   * API Reference</a></p>
   */
  class ReplaceContentEntry
  {
  public:
    AWS_CODECOMMIT_API ReplaceContentEntry();
    AWS_CODECOMMIT_API ReplaceContentEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ReplaceContentEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path of the conflicting file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline ReplaceContentEntry& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline ReplaceContentEntry& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline ReplaceContentEntry& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replacement type to use when determining how to resolve the conflict.</p>
     */
    inline const ReplacementTypeEnum& GetReplacementType() const{ return m_replacementType; }
    inline bool ReplacementTypeHasBeenSet() const { return m_replacementTypeHasBeenSet; }
    inline void SetReplacementType(const ReplacementTypeEnum& value) { m_replacementTypeHasBeenSet = true; m_replacementType = value; }
    inline void SetReplacementType(ReplacementTypeEnum&& value) { m_replacementTypeHasBeenSet = true; m_replacementType = std::move(value); }
    inline ReplaceContentEntry& WithReplacementType(const ReplacementTypeEnum& value) { SetReplacementType(value); return *this;}
    inline ReplaceContentEntry& WithReplacementType(ReplacementTypeEnum&& value) { SetReplacementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base-64 encoded content to use when the replacement type is
     * USE_NEW_CONTENT.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Utils::ByteBuffer& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline ReplaceContentEntry& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}
    inline ReplaceContentEntry& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode to apply during conflict resoltion.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }
    inline ReplaceContentEntry& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}
    inline ReplaceContentEntry& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    ReplacementTypeEnum m_replacementType;
    bool m_replacementTypeHasBeenSet = false;

    Aws::Utils::ByteBuffer m_content;
    bool m_contentHasBeenSet = false;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
