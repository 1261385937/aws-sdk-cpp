﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  /**
   * <p>This data type represents the information you need to connect to an Amazon
   * Neptune DB cluster. This data type is used as a response element in the
   * following actions:</p> <ul> <li> <p> <code>CreateDBClusterEndpoint</code> </p>
   * </li> <li> <p> <code>DescribeDBClusterEndpoints</code> </p> </li> <li> <p>
   * <code>ModifyDBClusterEndpoint</code> </p> </li> <li> <p>
   * <code>DeleteDBClusterEndpoint</code> </p> </li> </ul> <p>For the data structure
   * that represents Amazon RDS DB instance endpoints, see
   * <code>Endpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterEndpointOutput">AWS
   * API Reference</a></p>
   */
  class ModifyDBClusterEndpointResult
  {
  public:
    AWS_NEPTUNE_API ModifyDBClusterEndpointResult();
    AWS_NEPTUNE_API ModifyDBClusterEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API ModifyDBClusterEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The identifier associated with the endpoint. This parameter is stored as a
     * lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const{ return m_dBClusterEndpointIdentifier; }
    inline void SetDBClusterEndpointIdentifier(const Aws::String& value) { m_dBClusterEndpointIdentifier = value; }
    inline void SetDBClusterEndpointIdentifier(Aws::String&& value) { m_dBClusterEndpointIdentifier = std::move(value); }
    inline void SetDBClusterEndpointIdentifier(const char* value) { m_dBClusterEndpointIdentifier.assign(value); }
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointIdentifier(const Aws::String& value) { SetDBClusterEndpointIdentifier(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointIdentifier(Aws::String&& value) { SetDBClusterEndpointIdentifier(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointIdentifier(const char* value) { SetDBClusterEndpointIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster identifier of the DB cluster associated with the endpoint.
     * This parameter is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifier.assign(value); }
    inline ModifyDBClusterEndpointResult& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique system-generated identifier for an endpoint. It remains the same for
     * the whole life of the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointResourceIdentifier() const{ return m_dBClusterEndpointResourceIdentifier; }
    inline void SetDBClusterEndpointResourceIdentifier(const Aws::String& value) { m_dBClusterEndpointResourceIdentifier = value; }
    inline void SetDBClusterEndpointResourceIdentifier(Aws::String&& value) { m_dBClusterEndpointResourceIdentifier = std::move(value); }
    inline void SetDBClusterEndpointResourceIdentifier(const char* value) { m_dBClusterEndpointResourceIdentifier.assign(value); }
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(const Aws::String& value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(Aws::String&& value) { SetDBClusterEndpointResourceIdentifier(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointResourceIdentifier(const char* value) { SetDBClusterEndpointResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS address of the endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline void SetEndpoint(const Aws::String& value) { m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpoint.assign(value); }
    inline ModifyDBClusterEndpointResult& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint. One of: <code>creating</code>,
     * <code>available</code>, <code>deleting</code>, <code>inactive</code>,
     * <code>modifying</code>. The <code>inactive</code> state applies to an endpoint
     * that cannot be used for a certain kind of cluster, such as a <code>writer</code>
     * endpoint for a read-only secondary cluster in a global database.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline ModifyDBClusterEndpointResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the endpoint. One of: <code>READER</code>, <code>WRITER</code>,
     * <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }
    inline void SetEndpointType(const Aws::String& value) { m_endpointType = value; }
    inline void SetEndpointType(Aws::String&& value) { m_endpointType = std::move(value); }
    inline void SetEndpointType(const char* value) { m_endpointType.assign(value); }
    inline ModifyDBClusterEndpointResult& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type associated with a custom endpoint. One of: <code>READER</code>,
     * <code>WRITER</code>, <code>ANY</code>.</p>
     */
    inline const Aws::String& GetCustomEndpointType() const{ return m_customEndpointType; }
    inline void SetCustomEndpointType(const Aws::String& value) { m_customEndpointType = value; }
    inline void SetCustomEndpointType(Aws::String&& value) { m_customEndpointType = std::move(value); }
    inline void SetCustomEndpointType(const char* value) { m_customEndpointType.assign(value); }
    inline ModifyDBClusterEndpointResult& WithCustomEndpointType(const Aws::String& value) { SetCustomEndpointType(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithCustomEndpointType(Aws::String&& value) { SetCustomEndpointType(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithCustomEndpointType(const char* value) { SetCustomEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that are part of the custom endpoint
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticMembers() const{ return m_staticMembers; }
    inline void SetStaticMembers(const Aws::Vector<Aws::String>& value) { m_staticMembers = value; }
    inline void SetStaticMembers(Aws::Vector<Aws::String>&& value) { m_staticMembers = std::move(value); }
    inline ModifyDBClusterEndpointResult& WithStaticMembers(const Aws::Vector<Aws::String>& value) { SetStaticMembers(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithStaticMembers(Aws::Vector<Aws::String>&& value) { SetStaticMembers(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& AddStaticMembers(const Aws::String& value) { m_staticMembers.push_back(value); return *this; }
    inline ModifyDBClusterEndpointResult& AddStaticMembers(Aws::String&& value) { m_staticMembers.push_back(std::move(value)); return *this; }
    inline ModifyDBClusterEndpointResult& AddStaticMembers(const char* value) { m_staticMembers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of DB instance identifiers that aren't part of the custom endpoint
     * group. All other eligible instances are reachable through the custom endpoint.
     * Only relevant if the list of static members is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedMembers() const{ return m_excludedMembers; }
    inline void SetExcludedMembers(const Aws::Vector<Aws::String>& value) { m_excludedMembers = value; }
    inline void SetExcludedMembers(Aws::Vector<Aws::String>&& value) { m_excludedMembers = std::move(value); }
    inline ModifyDBClusterEndpointResult& WithExcludedMembers(const Aws::Vector<Aws::String>& value) { SetExcludedMembers(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithExcludedMembers(Aws::Vector<Aws::String>&& value) { SetExcludedMembers(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& AddExcludedMembers(const Aws::String& value) { m_excludedMembers.push_back(value); return *this; }
    inline ModifyDBClusterEndpointResult& AddExcludedMembers(Aws::String&& value) { m_excludedMembers.push_back(std::move(value)); return *this; }
    inline ModifyDBClusterEndpointResult& AddExcludedMembers(const char* value) { m_excludedMembers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the endpoint.</p>
     */
    inline const Aws::String& GetDBClusterEndpointArn() const{ return m_dBClusterEndpointArn; }
    inline void SetDBClusterEndpointArn(const Aws::String& value) { m_dBClusterEndpointArn = value; }
    inline void SetDBClusterEndpointArn(Aws::String&& value) { m_dBClusterEndpointArn = std::move(value); }
    inline void SetDBClusterEndpointArn(const char* value) { m_dBClusterEndpointArn.assign(value); }
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointArn(const Aws::String& value) { SetDBClusterEndpointArn(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointArn(Aws::String&& value) { SetDBClusterEndpointArn(std::move(value)); return *this;}
    inline ModifyDBClusterEndpointResult& WithDBClusterEndpointArn(const char* value) { SetDBClusterEndpointArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyDBClusterEndpointResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyDBClusterEndpointResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterEndpointIdentifier;

    Aws::String m_dBClusterIdentifier;

    Aws::String m_dBClusterEndpointResourceIdentifier;

    Aws::String m_endpoint;

    Aws::String m_status;

    Aws::String m_endpointType;

    Aws::String m_customEndpointType;

    Aws::Vector<Aws::String> m_staticMembers;

    Aws::Vector<Aws::String> m_excludedMembers;

    Aws::String m_dBClusterEndpointArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
