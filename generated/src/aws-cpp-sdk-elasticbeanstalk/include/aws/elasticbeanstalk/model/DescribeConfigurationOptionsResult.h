﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionDescription.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Describes the settings for a specified configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationOptionsDescription">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationOptionsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult();
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeConfigurationOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the solution stack these configuration options belong to.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackName.assign(value); }
    inline DescribeConfigurationOptionsResult& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline DescribeConfigurationOptionsResult& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline DescribeConfigurationOptionsResult& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArn.assign(value); }
    inline DescribeConfigurationOptionsResult& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline DescribeConfigurationOptionsResult& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline DescribeConfigurationOptionsResult& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of <a>ConfigurationOptionDescription</a>. </p>
     */
    inline const Aws::Vector<ConfigurationOptionDescription>& GetOptions() const{ return m_options; }
    inline void SetOptions(const Aws::Vector<ConfigurationOptionDescription>& value) { m_options = value; }
    inline void SetOptions(Aws::Vector<ConfigurationOptionDescription>&& value) { m_options = std::move(value); }
    inline DescribeConfigurationOptionsResult& WithOptions(const Aws::Vector<ConfigurationOptionDescription>& value) { SetOptions(value); return *this;}
    inline DescribeConfigurationOptionsResult& WithOptions(Aws::Vector<ConfigurationOptionDescription>&& value) { SetOptions(std::move(value)); return *this;}
    inline DescribeConfigurationOptionsResult& AddOptions(const ConfigurationOptionDescription& value) { m_options.push_back(value); return *this; }
    inline DescribeConfigurationOptionsResult& AddOptions(ConfigurationOptionDescription&& value) { m_options.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeConfigurationOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeConfigurationOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionStackName;

    Aws::String m_platformArn;

    Aws::Vector<ConfigurationOptionDescription> m_options;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
