﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Suite.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a get suite request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuiteResult">AWS
   * API Reference</a></p>
   */
  class GetSuiteResult
  {
  public:
    AWS_DEVICEFARM_API GetSuiteResult();
    AWS_DEVICEFARM_API GetSuiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetSuiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of one or more tests.</p>
     */
    inline const Suite& GetSuite() const{ return m_suite; }
    inline void SetSuite(const Suite& value) { m_suite = value; }
    inline void SetSuite(Suite&& value) { m_suite = std::move(value); }
    inline GetSuiteResult& WithSuite(const Suite& value) { SetSuite(value); return *this;}
    inline GetSuiteResult& WithSuite(Suite&& value) { SetSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSuiteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSuiteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSuiteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Suite m_suite;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
