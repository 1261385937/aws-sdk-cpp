﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/CustomPluginState.h>
#include <aws/kafkaconnect/model/CustomPluginRevisionSummary.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>A summary of the custom plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPluginSummary">AWS
   * API Reference</a></p>
   */
  class CustomPluginSummary
  {
  public:
    AWS_KAFKACONNECT_API CustomPluginSummary();
    AWS_KAFKACONNECT_API CustomPluginSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time that the custom plugin was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline CustomPluginSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CustomPluginSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }
    inline bool CustomPluginArnHasBeenSet() const { return m_customPluginArnHasBeenSet; }
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = value; }
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = std::move(value); }
    inline void SetCustomPluginArn(const char* value) { m_customPluginArnHasBeenSet = true; m_customPluginArn.assign(value); }
    inline CustomPluginSummary& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}
    inline CustomPluginSummary& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}
    inline CustomPluginSummary& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the custom plugin.</p>
     */
    inline const CustomPluginState& GetCustomPluginState() const{ return m_customPluginState; }
    inline bool CustomPluginStateHasBeenSet() const { return m_customPluginStateHasBeenSet; }
    inline void SetCustomPluginState(const CustomPluginState& value) { m_customPluginStateHasBeenSet = true; m_customPluginState = value; }
    inline void SetCustomPluginState(CustomPluginState&& value) { m_customPluginStateHasBeenSet = true; m_customPluginState = std::move(value); }
    inline CustomPluginSummary& WithCustomPluginState(const CustomPluginState& value) { SetCustomPluginState(value); return *this;}
    inline CustomPluginSummary& WithCustomPluginState(CustomPluginState&& value) { SetCustomPluginState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the custom plugin.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CustomPluginSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CustomPluginSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CustomPluginSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest revision of the custom plugin.</p>
     */
    inline const CustomPluginRevisionSummary& GetLatestRevision() const{ return m_latestRevision; }
    inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }
    inline void SetLatestRevision(const CustomPluginRevisionSummary& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = value; }
    inline void SetLatestRevision(CustomPluginRevisionSummary&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::move(value); }
    inline CustomPluginSummary& WithLatestRevision(const CustomPluginRevisionSummary& value) { SetLatestRevision(value); return *this;}
    inline CustomPluginSummary& WithLatestRevision(CustomPluginRevisionSummary&& value) { SetLatestRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom plugin.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomPluginSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomPluginSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomPluginSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_customPluginArn;
    bool m_customPluginArnHasBeenSet = false;

    CustomPluginState m_customPluginState;
    bool m_customPluginStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CustomPluginRevisionSummary m_latestRevision;
    bool m_latestRevisionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
