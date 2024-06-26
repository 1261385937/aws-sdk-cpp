﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/VoiceSettings.h>
#include <aws/lexv2-models/model/BotLocaleStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/GenerativeAISettings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class UpdateBotLocaleResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotLocaleResult();
    AWS_LEXMODELSV2_API UpdateBotLocaleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateBotLocaleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the bot that contains the updated locale.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline UpdateBotLocaleResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline UpdateBotLocaleResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the updated locale.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }
    inline UpdateBotLocaleResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline UpdateBotLocaleResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale of the updated bot locale.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }
    inline UpdateBotLocaleResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline UpdateBotLocaleResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated locale name for the locale.</p>
     */
    inline const Aws::String& GetLocaleName() const{ return m_localeName; }
    inline void SetLocaleName(const Aws::String& value) { m_localeName = value; }
    inline void SetLocaleName(Aws::String&& value) { m_localeName = std::move(value); }
    inline void SetLocaleName(const char* value) { m_localeName.assign(value); }
    inline UpdateBotLocaleResult& WithLocaleName(const Aws::String& value) { SetLocaleName(value); return *this;}
    inline UpdateBotLocaleResult& WithLocaleName(Aws::String&& value) { SetLocaleName(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& WithLocaleName(const char* value) { SetLocaleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the locale.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateBotLocaleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBotLocaleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated confidence threshold for inserting the
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * intents in the list of possible intents for an utterance.</p>
     */
    inline double GetNluIntentConfidenceThreshold() const{ return m_nluIntentConfidenceThreshold; }
    inline void SetNluIntentConfidenceThreshold(double value) { m_nluIntentConfidenceThreshold = value; }
    inline UpdateBotLocaleResult& WithNluIntentConfidenceThreshold(double value) { SetNluIntentConfidenceThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated Amazon Polly voice to use for voice interaction with the
     * user.</p>
     */
    inline const VoiceSettings& GetVoiceSettings() const{ return m_voiceSettings; }
    inline void SetVoiceSettings(const VoiceSettings& value) { m_voiceSettings = value; }
    inline void SetVoiceSettings(VoiceSettings&& value) { m_voiceSettings = std::move(value); }
    inline UpdateBotLocaleResult& WithVoiceSettings(const VoiceSettings& value) { SetVoiceSettings(value); return *this;}
    inline UpdateBotLocaleResult& WithVoiceSettings(VoiceSettings&& value) { SetVoiceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the locale. When the bot status is <code>Built</code>
     * the locale is ready for use.</p>
     */
    inline const BotLocaleStatus& GetBotLocaleStatus() const{ return m_botLocaleStatus; }
    inline void SetBotLocaleStatus(const BotLocaleStatus& value) { m_botLocaleStatus = value; }
    inline void SetBotLocaleStatus(BotLocaleStatus&& value) { m_botLocaleStatus = std::move(value); }
    inline UpdateBotLocaleResult& WithBotLocaleStatus(const BotLocaleStatus& value) { SetBotLocaleStatus(value); return *this;}
    inline UpdateBotLocaleResult& WithBotLocaleStatus(BotLocaleStatus&& value) { SetBotLocaleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>botLocaleStatus</code> is <code>Failed</code>, the
     * <code>failureReasons</code> field lists the errors that occurred while building
     * the bot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline UpdateBotLocaleResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline UpdateBotLocaleResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline UpdateBotLocaleResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline UpdateBotLocaleResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the locale was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline UpdateBotLocaleResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline UpdateBotLocaleResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the locale was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline UpdateBotLocaleResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline UpdateBotLocaleResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Recommended actions to take to resolve an error in the
     * <code>failureReasons</code> field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendedActions() const{ return m_recommendedActions; }
    inline void SetRecommendedActions(const Aws::Vector<Aws::String>& value) { m_recommendedActions = value; }
    inline void SetRecommendedActions(Aws::Vector<Aws::String>&& value) { m_recommendedActions = std::move(value); }
    inline UpdateBotLocaleResult& WithRecommendedActions(const Aws::Vector<Aws::String>& value) { SetRecommendedActions(value); return *this;}
    inline UpdateBotLocaleResult& WithRecommendedActions(Aws::Vector<Aws::String>&& value) { SetRecommendedActions(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& AddRecommendedActions(const Aws::String& value) { m_recommendedActions.push_back(value); return *this; }
    inline UpdateBotLocaleResult& AddRecommendedActions(Aws::String&& value) { m_recommendedActions.push_back(std::move(value)); return *this; }
    inline UpdateBotLocaleResult& AddRecommendedActions(const char* value) { m_recommendedActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains settings for generative AI features powered by Amazon Bedrock for
     * your bot locale.</p>
     */
    inline const GenerativeAISettings& GetGenerativeAISettings() const{ return m_generativeAISettings; }
    inline void SetGenerativeAISettings(const GenerativeAISettings& value) { m_generativeAISettings = value; }
    inline void SetGenerativeAISettings(GenerativeAISettings&& value) { m_generativeAISettings = std::move(value); }
    inline UpdateBotLocaleResult& WithGenerativeAISettings(const GenerativeAISettings& value) { SetGenerativeAISettings(value); return *this;}
    inline UpdateBotLocaleResult& WithGenerativeAISettings(GenerativeAISettings&& value) { SetGenerativeAISettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBotLocaleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBotLocaleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBotLocaleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_localeName;

    Aws::String m_description;

    double m_nluIntentConfidenceThreshold;

    VoiceSettings m_voiceSettings;

    BotLocaleStatus m_botLocaleStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::Vector<Aws::String> m_recommendedActions;

    GenerativeAISettings m_generativeAISettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
