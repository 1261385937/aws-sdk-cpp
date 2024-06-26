﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/OptionGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>List of option groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroups">AWS
   * API Reference</a></p>
   */
  class DescribeOptionGroupsResult
  {
  public:
    AWS_RDS_API DescribeOptionGroupsResult();
    AWS_RDS_API DescribeOptionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeOptionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of option groups.</p>
     */
    inline const Aws::Vector<OptionGroup>& GetOptionGroupsList() const{ return m_optionGroupsList; }
    inline void SetOptionGroupsList(const Aws::Vector<OptionGroup>& value) { m_optionGroupsList = value; }
    inline void SetOptionGroupsList(Aws::Vector<OptionGroup>&& value) { m_optionGroupsList = std::move(value); }
    inline DescribeOptionGroupsResult& WithOptionGroupsList(const Aws::Vector<OptionGroup>& value) { SetOptionGroupsList(value); return *this;}
    inline DescribeOptionGroupsResult& WithOptionGroupsList(Aws::Vector<OptionGroup>&& value) { SetOptionGroupsList(std::move(value)); return *this;}
    inline DescribeOptionGroupsResult& AddOptionGroupsList(const OptionGroup& value) { m_optionGroupsList.push_back(value); return *this; }
    inline DescribeOptionGroupsResult& AddOptionGroupsList(OptionGroup&& value) { m_optionGroupsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeOptionGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeOptionGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeOptionGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeOptionGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeOptionGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OptionGroup> m_optionGroupsList;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
