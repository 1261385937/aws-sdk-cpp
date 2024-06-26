﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>An ARN of the AWS cloud resource target receiving the migration (e.g., AMI,
   * EC2 instance, RDS instance, etc.).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/CreatedArtifact">AWS
   * API Reference</a></p>
   */
  class CreatedArtifact
  {
  public:
    AWS_MIGRATIONHUB_API CreatedArtifact();
    AWS_MIGRATIONHUB_API CreatedArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API CreatedArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ARN that uniquely identifies the result of a migration task.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatedArtifact& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatedArtifact& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatedArtifact& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that can be free-form text to record additional detail about
     * the artifact for clarity or for later reference.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatedArtifact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatedArtifact& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatedArtifact& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
