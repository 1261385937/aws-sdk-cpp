﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/CaptionFormat.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The captions to be created, if any.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Captions">AWS
   * API Reference</a></p>
   */
  class Captions
  {
  public:
    AWS_ELASTICTRANSCODER_API Captions();
    AWS_ELASTICTRANSCODER_API Captions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Captions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of file formats for the output captions. If you leave this value
     * blank, Elastic Transcoder returns an error.</p>
     */
    inline const Aws::Vector<CaptionFormat>& GetCaptionFormats() const{ return m_captionFormats; }
    inline bool CaptionFormatsHasBeenSet() const { return m_captionFormatsHasBeenSet; }
    inline void SetCaptionFormats(const Aws::Vector<CaptionFormat>& value) { m_captionFormatsHasBeenSet = true; m_captionFormats = value; }
    inline void SetCaptionFormats(Aws::Vector<CaptionFormat>&& value) { m_captionFormatsHasBeenSet = true; m_captionFormats = std::move(value); }
    inline Captions& WithCaptionFormats(const Aws::Vector<CaptionFormat>& value) { SetCaptionFormats(value); return *this;}
    inline Captions& WithCaptionFormats(Aws::Vector<CaptionFormat>&& value) { SetCaptionFormats(std::move(value)); return *this;}
    inline Captions& AddCaptionFormats(const CaptionFormat& value) { m_captionFormatsHasBeenSet = true; m_captionFormats.push_back(value); return *this; }
    inline Captions& AddCaptionFormats(CaptionFormat&& value) { m_captionFormatsHasBeenSet = true; m_captionFormats.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CaptionFormat> m_captionFormats;
    bool m_captionFormatsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
