﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sdb/model/ResponseMetadata.h>
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
namespace SimpleDB
{
namespace Model
{
  class ListDomainsResult
  {
  public:
    AWS_SIMPLEDB_API ListDomainsResult();
    AWS_SIMPLEDB_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SIMPLEDB_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * A list of domain names that match the expression.
     */
    inline const Aws::Vector<Aws::String>& GetDomainNames() const{ return m_domainNames; }
    inline void SetDomainNames(const Aws::Vector<Aws::String>& value) { m_domainNames = value; }
    inline void SetDomainNames(Aws::Vector<Aws::String>&& value) { m_domainNames = std::move(value); }
    inline ListDomainsResult& WithDomainNames(const Aws::Vector<Aws::String>& value) { SetDomainNames(value); return *this;}
    inline ListDomainsResult& WithDomainNames(Aws::Vector<Aws::String>&& value) { SetDomainNames(std::move(value)); return *this;}
    inline ListDomainsResult& AddDomainNames(const Aws::String& value) { m_domainNames.push_back(value); return *this; }
    inline ListDomainsResult& AddDomainNames(Aws::String&& value) { m_domainNames.push_back(std::move(value)); return *this; }
    inline ListDomainsResult& AddDomainNames(const char* value) { m_domainNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * An opaque token indicating that there are more domains than the specified
     * <code>MaxNumberOfDomains</code> still available.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListDomainsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListDomainsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_domainNames;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
