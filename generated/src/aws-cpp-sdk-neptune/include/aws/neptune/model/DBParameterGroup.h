﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune DB parameter group.</p> <p>This
   * data type is used as a response element in the <a>DescribeDBParameterGroups</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBParameterGroup">AWS
   * API Reference</a></p>
   */
  class DBParameterGroup
  {
  public:
    AWS_NEPTUNE_API DBParameterGroup();
    AWS_NEPTUNE_API DBParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline DBParameterGroup& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline DBParameterGroup& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline DBParameterGroup& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }
    inline DBParameterGroup& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}
    inline DBParameterGroup& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}
    inline DBParameterGroup& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DBParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DBParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DBParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupArn() const{ return m_dBParameterGroupArn; }
    inline bool DBParameterGroupArnHasBeenSet() const { return m_dBParameterGroupArnHasBeenSet; }
    inline void SetDBParameterGroupArn(const Aws::String& value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn = value; }
    inline void SetDBParameterGroupArn(Aws::String&& value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn = std::move(value); }
    inline void SetDBParameterGroupArn(const char* value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn.assign(value); }
    inline DBParameterGroup& WithDBParameterGroupArn(const Aws::String& value) { SetDBParameterGroupArn(value); return *this;}
    inline DBParameterGroup& WithDBParameterGroupArn(Aws::String&& value) { SetDBParameterGroupArn(std::move(value)); return *this;}
    inline DBParameterGroup& WithDBParameterGroupArn(const char* value) { SetDBParameterGroupArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_dBParameterGroupArn;
    bool m_dBParameterGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
