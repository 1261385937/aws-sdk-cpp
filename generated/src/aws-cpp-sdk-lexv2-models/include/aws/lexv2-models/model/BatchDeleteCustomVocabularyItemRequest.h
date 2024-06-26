﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/CustomVocabularyEntryId.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class BatchDeleteCustomVocabularyItemRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API BatchDeleteCustomVocabularyItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteCustomVocabularyItem"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot associated with this custom vocabulary.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline BatchDeleteCustomVocabularyItemRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the version of the bot associated with this custom
     * vocabulary.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline BatchDeleteCustomVocabularyItemRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale where this custom vocabulary is
     * used. The string must match one of the supported locales. For more information,
     * see <a href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">
     * Supported Languages </a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline BatchDeleteCustomVocabularyItemRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom vocabulary items requested to be deleted. Each entry must
     * contain the unique custom vocabulary entry identifier.</p>
     */
    inline const Aws::Vector<CustomVocabularyEntryId>& GetCustomVocabularyItemList() const{ return m_customVocabularyItemList; }
    inline bool CustomVocabularyItemListHasBeenSet() const { return m_customVocabularyItemListHasBeenSet; }
    inline void SetCustomVocabularyItemList(const Aws::Vector<CustomVocabularyEntryId>& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = value; }
    inline void SetCustomVocabularyItemList(Aws::Vector<CustomVocabularyEntryId>&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList = std::move(value); }
    inline BatchDeleteCustomVocabularyItemRequest& WithCustomVocabularyItemList(const Aws::Vector<CustomVocabularyEntryId>& value) { SetCustomVocabularyItemList(value); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& WithCustomVocabularyItemList(Aws::Vector<CustomVocabularyEntryId>&& value) { SetCustomVocabularyItemList(std::move(value)); return *this;}
    inline BatchDeleteCustomVocabularyItemRequest& AddCustomVocabularyItemList(const CustomVocabularyEntryId& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.push_back(value); return *this; }
    inline BatchDeleteCustomVocabularyItemRequest& AddCustomVocabularyItemList(CustomVocabularyEntryId&& value) { m_customVocabularyItemListHasBeenSet = true; m_customVocabularyItemList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::Vector<CustomVocabularyEntryId> m_customVocabularyItemList;
    bool m_customVocabularyItemListHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
