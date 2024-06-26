﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/IPSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class UpdateIPSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API UpdateIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIPSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to update.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const{ return m_iPSetId; }
    inline bool IPSetIdHasBeenSet() const { return m_iPSetIdHasBeenSet; }
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = std::move(value); }
    inline void SetIPSetId(const char* value) { m_iPSetIdHasBeenSet = true; m_iPSetId.assign(value); }
    inline UpdateIPSetRequest& WithIPSetId(const Aws::String& value) { SetIPSetId(value); return *this;}
    inline UpdateIPSetRequest& WithIPSetId(Aws::String&& value) { SetIPSetId(std::move(value)); return *this;}
    inline UpdateIPSetRequest& WithIPSetId(const char* value) { SetIPSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }
    inline UpdateIPSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline UpdateIPSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline UpdateIPSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>IPSetUpdate</code> objects that you want to insert into or
     * delete from an <a>IPSet</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>IPSetUpdate</a>: Contains <code>Action</code> and
     * <code>IPSetDescriptor</code> </p> </li> <li> <p> <a>IPSetDescriptor</a>:
     * Contains <code>Type</code> and <code>Value</code> </p> </li> </ul> <p>You can
     * insert a maximum of 1000 addresses in a single request.</p>
     */
    inline const Aws::Vector<IPSetUpdate>& GetUpdates() const{ return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    inline void SetUpdates(const Aws::Vector<IPSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }
    inline void SetUpdates(Aws::Vector<IPSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }
    inline UpdateIPSetRequest& WithUpdates(const Aws::Vector<IPSetUpdate>& value) { SetUpdates(value); return *this;}
    inline UpdateIPSetRequest& WithUpdates(Aws::Vector<IPSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}
    inline UpdateIPSetRequest& AddUpdates(const IPSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }
    inline UpdateIPSetRequest& AddUpdates(IPSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<IPSetUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
