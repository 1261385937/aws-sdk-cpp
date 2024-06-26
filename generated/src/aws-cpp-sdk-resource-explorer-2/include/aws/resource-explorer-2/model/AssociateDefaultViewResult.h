﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceExplorer2
{
namespace Model
{
  class AssociateDefaultViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult();
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }
    inline void SetViewArn(const Aws::String& value) { m_viewArn = value; }
    inline void SetViewArn(Aws::String&& value) { m_viewArn = std::move(value); }
    inline void SetViewArn(const char* value) { m_viewArn.assign(value); }
    inline AssociateDefaultViewResult& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}
    inline AssociateDefaultViewResult& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}
    inline AssociateDefaultViewResult& WithViewArn(const char* value) { SetViewArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateDefaultViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateDefaultViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateDefaultViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_viewArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
