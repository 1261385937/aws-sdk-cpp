﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/OptionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Status of the Elasticsearch version options for the specified Elasticsearch
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ElasticsearchVersionStatus">AWS
   * API Reference</a></p>
   */
  class ElasticsearchVersionStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchVersionStatus();
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchVersionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchVersionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the Elasticsearch version for the specified Elasticsearch
     * domain.</p>
     */
    inline const Aws::String& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }
    inline ElasticsearchVersionStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}
    inline ElasticsearchVersionStatus& WithOptions(Aws::String&& value) { SetOptions(std::move(value)); return *this;}
    inline ElasticsearchVersionStatus& WithOptions(const char* value) { SetOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the status of the Elasticsearch version options for the specified
     * Elasticsearch domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ElasticsearchVersionStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline ElasticsearchVersionStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
