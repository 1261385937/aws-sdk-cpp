﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VocabularyLanguageCode.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateDefaultVocabularyRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateDefaultVocabularyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDefaultVocabulary"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AssociateDefaultVocabularyRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AssociateDefaultVocabularyRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AssociateDefaultVocabularyRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline const VocabularyLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const VocabularyLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(VocabularyLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline AssociateDefaultVocabularyRequest& WithLanguageCode(const VocabularyLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline AssociateDefaultVocabularyRequest& WithLanguageCode(VocabularyLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the custom vocabulary. If this is empty, the default is set
     * to none.</p>
     */
    inline const Aws::String& GetVocabularyId() const{ return m_vocabularyId; }
    inline bool VocabularyIdHasBeenSet() const { return m_vocabularyIdHasBeenSet; }
    inline void SetVocabularyId(const Aws::String& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = value; }
    inline void SetVocabularyId(Aws::String&& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = std::move(value); }
    inline void SetVocabularyId(const char* value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId.assign(value); }
    inline AssociateDefaultVocabularyRequest& WithVocabularyId(const Aws::String& value) { SetVocabularyId(value); return *this;}
    inline AssociateDefaultVocabularyRequest& WithVocabularyId(Aws::String&& value) { SetVocabularyId(std::move(value)); return *this;}
    inline AssociateDefaultVocabularyRequest& WithVocabularyId(const char* value) { SetVocabularyId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    VocabularyLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyId;
    bool m_vocabularyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
