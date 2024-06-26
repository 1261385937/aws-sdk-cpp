﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DeleteOptOutListResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteOptOutListResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteOptOutListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteOptOutListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList that was removed.</p>
     */
    inline const Aws::String& GetOptOutListArn() const{ return m_optOutListArn; }
    inline void SetOptOutListArn(const Aws::String& value) { m_optOutListArn = value; }
    inline void SetOptOutListArn(Aws::String&& value) { m_optOutListArn = std::move(value); }
    inline void SetOptOutListArn(const char* value) { m_optOutListArn.assign(value); }
    inline DeleteOptOutListResult& WithOptOutListArn(const Aws::String& value) { SetOptOutListArn(value); return *this;}
    inline DeleteOptOutListResult& WithOptOutListArn(Aws::String&& value) { SetOptOutListArn(std::move(value)); return *this;}
    inline DeleteOptOutListResult& WithOptOutListArn(const char* value) { SetOptOutListArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList that was removed.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }
    inline DeleteOptOutListResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline DeleteOptOutListResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline DeleteOptOutListResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the OptOutList was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline DeleteOptOutListResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline DeleteOptOutListResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteOptOutListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteOptOutListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteOptOutListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_optOutListArn;

    Aws::String m_optOutListName;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
