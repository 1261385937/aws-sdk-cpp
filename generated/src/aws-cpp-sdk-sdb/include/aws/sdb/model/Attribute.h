﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SimpleDB
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/Attribute">AWS API
   * Reference</a></p>
   */
  class Attribute
  {
  public:
    AWS_SIMPLEDB_API Attribute();
    AWS_SIMPLEDB_API Attribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API Attribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * The name of the attribute.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Attribute& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Attribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Attribute& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateNameEncoding() const{ return m_alternateNameEncoding; }
    inline bool AlternateNameEncodingHasBeenSet() const { return m_alternateNameEncodingHasBeenSet; }
    inline void SetAlternateNameEncoding(const Aws::String& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = value; }
    inline void SetAlternateNameEncoding(Aws::String&& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = std::move(value); }
    inline void SetAlternateNameEncoding(const char* value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding.assign(value); }
    inline Attribute& WithAlternateNameEncoding(const Aws::String& value) { SetAlternateNameEncoding(value); return *this;}
    inline Attribute& WithAlternateNameEncoding(Aws::String&& value) { SetAlternateNameEncoding(std::move(value)); return *this;}
    inline Attribute& WithAlternateNameEncoding(const char* value) { SetAlternateNameEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * The value of the attribute.
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Attribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Attribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateValueEncoding() const{ return m_alternateValueEncoding; }
    inline bool AlternateValueEncodingHasBeenSet() const { return m_alternateValueEncodingHasBeenSet; }
    inline void SetAlternateValueEncoding(const Aws::String& value) { m_alternateValueEncodingHasBeenSet = true; m_alternateValueEncoding = value; }
    inline void SetAlternateValueEncoding(Aws::String&& value) { m_alternateValueEncodingHasBeenSet = true; m_alternateValueEncoding = std::move(value); }
    inline void SetAlternateValueEncoding(const char* value) { m_alternateValueEncodingHasBeenSet = true; m_alternateValueEncoding.assign(value); }
    inline Attribute& WithAlternateValueEncoding(const Aws::String& value) { SetAlternateValueEncoding(value); return *this;}
    inline Attribute& WithAlternateValueEncoding(Aws::String&& value) { SetAlternateValueEncoding(std::move(value)); return *this;}
    inline Attribute& WithAlternateValueEncoding(const char* value) { SetAlternateValueEncoding(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_alternateNameEncoding;
    bool m_alternateNameEncodingHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_alternateValueEncoding;
    bool m_alternateValueEncodingHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
