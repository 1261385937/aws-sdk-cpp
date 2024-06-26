﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/CustomVerificationEmailTemplate.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>A paginated list of custom verification email templates.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListCustomVerificationEmailTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListCustomVerificationEmailTemplatesResult
  {
  public:
    AWS_SES_API ListCustomVerificationEmailTemplatesResult();
    AWS_SES_API ListCustomVerificationEmailTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListCustomVerificationEmailTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline const Aws::Vector<CustomVerificationEmailTemplate>& GetCustomVerificationEmailTemplates() const{ return m_customVerificationEmailTemplates; }
    inline void SetCustomVerificationEmailTemplates(const Aws::Vector<CustomVerificationEmailTemplate>& value) { m_customVerificationEmailTemplates = value; }
    inline void SetCustomVerificationEmailTemplates(Aws::Vector<CustomVerificationEmailTemplate>&& value) { m_customVerificationEmailTemplates = std::move(value); }
    inline ListCustomVerificationEmailTemplatesResult& WithCustomVerificationEmailTemplates(const Aws::Vector<CustomVerificationEmailTemplate>& value) { SetCustomVerificationEmailTemplates(value); return *this;}
    inline ListCustomVerificationEmailTemplatesResult& WithCustomVerificationEmailTemplates(Aws::Vector<CustomVerificationEmailTemplate>&& value) { SetCustomVerificationEmailTemplates(std::move(value)); return *this;}
    inline ListCustomVerificationEmailTemplatesResult& AddCustomVerificationEmailTemplates(const CustomVerificationEmailTemplate& value) { m_customVerificationEmailTemplates.push_back(value); return *this; }
    inline ListCustomVerificationEmailTemplatesResult& AddCustomVerificationEmailTemplates(CustomVerificationEmailTemplate&& value) { m_customVerificationEmailTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListTemplates</code> to retrieve the next 50 custom verification email
     * templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomVerificationEmailTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomVerificationEmailTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomVerificationEmailTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListCustomVerificationEmailTemplatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListCustomVerificationEmailTemplatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomVerificationEmailTemplate> m_customVerificationEmailTemplates;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
