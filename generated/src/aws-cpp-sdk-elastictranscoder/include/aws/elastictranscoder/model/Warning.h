﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
   * are not in the same region as the pipeline.</p> <p>Using resources in the same
   * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
   * KMS key, reduces processing time and prevents cross-regional
   * charges.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Warning">AWS
   * API Reference</a></p>
   */
  class Warning
  {
  public:
    AWS_ELASTICTRANSCODER_API Warning();
    AWS_ELASTICTRANSCODER_API Warning(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Warning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code of the cross-regional warning.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline Warning& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline Warning& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline Warning& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message explaining what resources are in a different region from the
     * pipeline.</p>  <p>AWS KMS keys must be in the same region as the
     * pipeline.</p> 
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Warning& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Warning& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Warning& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
