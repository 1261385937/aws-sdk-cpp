﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class CreateScriptResult
  {
  public:
    AWS_GLUE_API CreateScriptResult();
    AWS_GLUE_API CreateScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Python script generated from the DAG.</p>
     */
    inline const Aws::String& GetPythonScript() const{ return m_pythonScript; }
    inline void SetPythonScript(const Aws::String& value) { m_pythonScript = value; }
    inline void SetPythonScript(Aws::String&& value) { m_pythonScript = std::move(value); }
    inline void SetPythonScript(const char* value) { m_pythonScript.assign(value); }
    inline CreateScriptResult& WithPythonScript(const Aws::String& value) { SetPythonScript(value); return *this;}
    inline CreateScriptResult& WithPythonScript(Aws::String&& value) { SetPythonScript(std::move(value)); return *this;}
    inline CreateScriptResult& WithPythonScript(const char* value) { SetPythonScript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Scala code generated from the DAG.</p>
     */
    inline const Aws::String& GetScalaCode() const{ return m_scalaCode; }
    inline void SetScalaCode(const Aws::String& value) { m_scalaCode = value; }
    inline void SetScalaCode(Aws::String&& value) { m_scalaCode = std::move(value); }
    inline void SetScalaCode(const char* value) { m_scalaCode.assign(value); }
    inline CreateScriptResult& WithScalaCode(const Aws::String& value) { SetScalaCode(value); return *this;}
    inline CreateScriptResult& WithScalaCode(Aws::String&& value) { SetScalaCode(std::move(value)); return *this;}
    inline CreateScriptResult& WithScalaCode(const char* value) { SetScalaCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateScriptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateScriptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateScriptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pythonScript;

    Aws::String m_scalaCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
