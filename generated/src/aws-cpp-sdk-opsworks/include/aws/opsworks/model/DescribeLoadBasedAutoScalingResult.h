﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/LoadBasedAutoScalingConfiguration.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeLoadBasedAutoScaling</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLoadBasedAutoScalingResult">AWS
   * API Reference</a></p>
   */
  class DescribeLoadBasedAutoScalingResult
  {
  public:
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult();
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>LoadBasedAutoScalingConfiguration</code> objects that
     * describe each layer's configuration.</p>
     */
    inline const Aws::Vector<LoadBasedAutoScalingConfiguration>& GetLoadBasedAutoScalingConfigurations() const{ return m_loadBasedAutoScalingConfigurations; }
    inline void SetLoadBasedAutoScalingConfigurations(const Aws::Vector<LoadBasedAutoScalingConfiguration>& value) { m_loadBasedAutoScalingConfigurations = value; }
    inline void SetLoadBasedAutoScalingConfigurations(Aws::Vector<LoadBasedAutoScalingConfiguration>&& value) { m_loadBasedAutoScalingConfigurations = std::move(value); }
    inline DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(const Aws::Vector<LoadBasedAutoScalingConfiguration>& value) { SetLoadBasedAutoScalingConfigurations(value); return *this;}
    inline DescribeLoadBasedAutoScalingResult& WithLoadBasedAutoScalingConfigurations(Aws::Vector<LoadBasedAutoScalingConfiguration>&& value) { SetLoadBasedAutoScalingConfigurations(std::move(value)); return *this;}
    inline DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(const LoadBasedAutoScalingConfiguration& value) { m_loadBasedAutoScalingConfigurations.push_back(value); return *this; }
    inline DescribeLoadBasedAutoScalingResult& AddLoadBasedAutoScalingConfigurations(LoadBasedAutoScalingConfiguration&& value) { m_loadBasedAutoScalingConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLoadBasedAutoScalingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLoadBasedAutoScalingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLoadBasedAutoScalingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LoadBasedAutoScalingConfiguration> m_loadBasedAutoScalingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
