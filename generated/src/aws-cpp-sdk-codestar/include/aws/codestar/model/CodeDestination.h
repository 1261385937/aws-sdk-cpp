﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/model/CodeCommitCodeDestination.h>
#include <aws/codestar/model/GitHubCodeDestination.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
   * or GitHub. After AWS CodeStar provisions the new repository, the source code
   * files provided with the project request are placed in the
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CodeDestination">AWS
   * API Reference</a></p>
   */
  class CodeDestination
  {
  public:
    AWS_CODESTAR_API CodeDestination();
    AWS_CODESTAR_API CodeDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API CodeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the AWS CodeCommit repository to be created in AWS
     * CodeStar. This is where the source code files provided with the project request
     * will be uploaded after project creation.</p>
     */
    inline const CodeCommitCodeDestination& GetCodeCommit() const{ return m_codeCommit; }
    inline bool CodeCommitHasBeenSet() const { return m_codeCommitHasBeenSet; }
    inline void SetCodeCommit(const CodeCommitCodeDestination& value) { m_codeCommitHasBeenSet = true; m_codeCommit = value; }
    inline void SetCodeCommit(CodeCommitCodeDestination&& value) { m_codeCommitHasBeenSet = true; m_codeCommit = std::move(value); }
    inline CodeDestination& WithCodeCommit(const CodeCommitCodeDestination& value) { SetCodeCommit(value); return *this;}
    inline CodeDestination& WithCodeCommit(CodeCommitCodeDestination&& value) { SetCodeCommit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the GitHub repository to be created in AWS CodeStar. This
     * is where the source code files provided with the project request will be
     * uploaded after project creation.</p>
     */
    inline const GitHubCodeDestination& GetGitHub() const{ return m_gitHub; }
    inline bool GitHubHasBeenSet() const { return m_gitHubHasBeenSet; }
    inline void SetGitHub(const GitHubCodeDestination& value) { m_gitHubHasBeenSet = true; m_gitHub = value; }
    inline void SetGitHub(GitHubCodeDestination&& value) { m_gitHubHasBeenSet = true; m_gitHub = std::move(value); }
    inline CodeDestination& WithGitHub(const GitHubCodeDestination& value) { SetGitHub(value); return *this;}
    inline CodeDestination& WithGitHub(GitHubCodeDestination&& value) { SetGitHub(std::move(value)); return *this;}
    ///@}
  private:

    CodeCommitCodeDestination m_codeCommit;
    bool m_codeCommitHasBeenSet = false;

    GitHubCodeDestination m_gitHub;
    bool m_gitHubHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
