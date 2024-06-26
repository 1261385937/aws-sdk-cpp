﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
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
namespace Cloud9
{
namespace Model
{

  /**
   * <p>Metadata that is associated with Amazon Web Services resources. In
   * particular, a name-value pair that can be associated with an Cloud9 development
   * environment. There are two types of tags: <i>user tags</i> and <i>system
   * tags</i>. A user tag is created by the user. A system tag is automatically
   * created by Amazon Web Services services. A system tag is prefixed with
   * <code>"aws:"</code> and cannot be modified by the user.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_CLOUD9_API Tag();
    AWS_CLOUD9_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <b>name</b> part of a tag.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <b>value</b> part of a tag.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
