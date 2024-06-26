﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DeleteIndexField</a></code>
   * operation. Specifies the name of the domain you want to update and the name of
   * the index field you want to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteIndexFieldRequest">AWS
   * API Reference</a></p>
   */
  class DeleteIndexFieldRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DeleteIndexFieldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIndexField"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DeleteIndexFieldRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DeleteIndexFieldRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DeleteIndexFieldRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index field your want to remove from the domain's indexing
     * options.</p>
     */
    inline const Aws::String& GetIndexFieldName() const{ return m_indexFieldName; }
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }
    inline void SetIndexFieldName(const Aws::String& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }
    inline void SetIndexFieldName(Aws::String&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::move(value); }
    inline void SetIndexFieldName(const char* value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName.assign(value); }
    inline DeleteIndexFieldRequest& WithIndexFieldName(const Aws::String& value) { SetIndexFieldName(value); return *this;}
    inline DeleteIndexFieldRequest& WithIndexFieldName(Aws::String&& value) { SetIndexFieldName(std::move(value)); return *this;}
    inline DeleteIndexFieldRequest& WithIndexFieldName(const char* value) { SetIndexFieldName(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
