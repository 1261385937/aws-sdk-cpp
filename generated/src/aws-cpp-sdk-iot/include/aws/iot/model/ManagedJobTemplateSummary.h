﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that contains information about the managed template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ManagedJobTemplateSummary">AWS
   * API Reference</a></p>
   */
  class ManagedJobTemplateSummary
  {
  public:
    AWS_IOT_API ManagedJobTemplateSummary();
    AWS_IOT_API ManagedJobTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ManagedJobTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a managed template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline ManagedJobTemplateSummary& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline ManagedJobTemplateSummary& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline ManagedJobTemplateSummary& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Name for a managed template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ManagedJobTemplateSummary& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ManagedJobTemplateSummary& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ManagedJobTemplateSummary& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for a managed template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ManagedJobTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ManagedJobTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ManagedJobTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironments() const{ return m_environments; }
    inline bool EnvironmentsHasBeenSet() const { return m_environmentsHasBeenSet; }
    inline void SetEnvironments(const Aws::Vector<Aws::String>& value) { m_environmentsHasBeenSet = true; m_environments = value; }
    inline void SetEnvironments(Aws::Vector<Aws::String>&& value) { m_environmentsHasBeenSet = true; m_environments = std::move(value); }
    inline ManagedJobTemplateSummary& WithEnvironments(const Aws::Vector<Aws::String>& value) { SetEnvironments(value); return *this;}
    inline ManagedJobTemplateSummary& WithEnvironments(Aws::Vector<Aws::String>&& value) { SetEnvironments(std::move(value)); return *this;}
    inline ManagedJobTemplateSummary& AddEnvironments(const Aws::String& value) { m_environmentsHasBeenSet = true; m_environments.push_back(value); return *this; }
    inline ManagedJobTemplateSummary& AddEnvironments(Aws::String&& value) { m_environmentsHasBeenSet = true; m_environments.push_back(std::move(value)); return *this; }
    inline ManagedJobTemplateSummary& AddEnvironments(const char* value) { m_environmentsHasBeenSet = true; m_environments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version for a managed template.</p>
     */
    inline const Aws::String& GetTemplateVersion() const{ return m_templateVersion; }
    inline bool TemplateVersionHasBeenSet() const { return m_templateVersionHasBeenSet; }
    inline void SetTemplateVersion(const Aws::String& value) { m_templateVersionHasBeenSet = true; m_templateVersion = value; }
    inline void SetTemplateVersion(Aws::String&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::move(value); }
    inline void SetTemplateVersion(const char* value) { m_templateVersionHasBeenSet = true; m_templateVersion.assign(value); }
    inline ManagedJobTemplateSummary& WithTemplateVersion(const Aws::String& value) { SetTemplateVersion(value); return *this;}
    inline ManagedJobTemplateSummary& WithTemplateVersion(Aws::String&& value) { SetTemplateVersion(std::move(value)); return *this;}
    inline ManagedJobTemplateSummary& WithTemplateVersion(const char* value) { SetTemplateVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_environments;
    bool m_environmentsHasBeenSet = false;

    Aws::String m_templateVersion;
    bool m_templateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
