﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/MatchRange.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the method and value to match with the header value
   * sent in a request. Specify one match method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HeaderMatchMethod">AWS
   * API Reference</a></p>
   */
  class HeaderMatchMethod
  {
  public:
    AWS_APPMESH_API HeaderMatchMethod();
    AWS_APPMESH_API HeaderMatchMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HeaderMatchMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value sent by the client must match the specified value exactly.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }
    inline HeaderMatchMethod& WithExact(const Aws::String& value) { SetExact(value); return *this;}
    inline HeaderMatchMethod& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}
    inline HeaderMatchMethod& WithExact(const char* value) { SetExact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value sent by the client must begin with the specified characters.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline HeaderMatchMethod& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline HeaderMatchMethod& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline HeaderMatchMethod& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the range of values to match on.</p>
     */
    inline const MatchRange& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const MatchRange& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(MatchRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline HeaderMatchMethod& WithRange(const MatchRange& value) { SetRange(value); return *this;}
    inline HeaderMatchMethod& WithRange(MatchRange&& value) { SetRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value sent by the client must include the specified characters.</p>
     */
    inline const Aws::String& GetRegex() const{ return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    inline void SetRegex(const Aws::String& value) { m_regexHasBeenSet = true; m_regex = value; }
    inline void SetRegex(Aws::String&& value) { m_regexHasBeenSet = true; m_regex = std::move(value); }
    inline void SetRegex(const char* value) { m_regexHasBeenSet = true; m_regex.assign(value); }
    inline HeaderMatchMethod& WithRegex(const Aws::String& value) { SetRegex(value); return *this;}
    inline HeaderMatchMethod& WithRegex(Aws::String&& value) { SetRegex(std::move(value)); return *this;}
    inline HeaderMatchMethod& WithRegex(const char* value) { SetRegex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value sent by the client must end with the specified characters.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }
    inline HeaderMatchMethod& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}
    inline HeaderMatchMethod& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}
    inline HeaderMatchMethod& WithSuffix(const char* value) { SetSuffix(value); return *this;}
    ///@}
  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    MatchRange m_range;
    bool m_rangeHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
