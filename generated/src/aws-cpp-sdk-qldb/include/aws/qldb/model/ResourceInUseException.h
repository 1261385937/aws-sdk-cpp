﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>The specified resource can't be modified at this time.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/ResourceInUseException">AWS
   * API Reference</a></p>
   */
  class ResourceInUseException
  {
  public:
    AWS_QLDB_API ResourceInUseException();
    AWS_QLDB_API ResourceInUseException(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API ResourceInUseException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ResourceInUseException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ResourceInUseException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ResourceInUseException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ResourceInUseException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ResourceInUseException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ResourceInUseException& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline ResourceInUseException& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline ResourceInUseException& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline ResourceInUseException& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
