﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/Code.h>
#include <aws/dataexchange/model/Details.h>
#include <aws/dataexchange/model/JobErrorLimitName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/JobErrorResourceTypes.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>An error that occurred with the job request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/JobError">AWS
   * API Reference</a></p>
   */
  class JobError
  {
  public:
    AWS_DATAEXCHANGE_API JobError();
    AWS_DATAEXCHANGE_API JobError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API JobError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the job error.</p>
     */
    inline const Code& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Code& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Code&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline JobError& WithCode(const Code& value) { SetCode(value); return *this;}
    inline JobError& WithCode(Code&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the job error.</p>
     */
    inline const Details& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Details& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Details&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline JobError& WithDetails(const Details& value) { SetDetails(value); return *this;}
    inline JobError& WithDetails(Details&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline const JobErrorLimitName& GetLimitName() const{ return m_limitName; }
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }
    inline void SetLimitName(const JobErrorLimitName& value) { m_limitNameHasBeenSet = true; m_limitName = value; }
    inline void SetLimitName(JobErrorLimitName&& value) { m_limitNameHasBeenSet = true; m_limitName = std::move(value); }
    inline JobError& WithLimitName(const JobErrorLimitName& value) { SetLimitName(value); return *this;}
    inline JobError& WithLimitName(JobErrorLimitName&& value) { SetLimitName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the exceeded limit.</p>
     */
    inline double GetLimitValue() const{ return m_limitValue; }
    inline bool LimitValueHasBeenSet() const { return m_limitValueHasBeenSet; }
    inline void SetLimitValue(double value) { m_limitValueHasBeenSet = true; m_limitValue = value; }
    inline JobError& WithLimitValue(double value) { SetLimitValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message related to the job error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline JobError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline JobError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline JobError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the resource related to the error.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline JobError& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline JobError& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline JobError& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource related to the error.</p>
     */
    inline const JobErrorResourceTypes& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const JobErrorResourceTypes& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(JobErrorResourceTypes&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline JobError& WithResourceType(const JobErrorResourceTypes& value) { SetResourceType(value); return *this;}
    inline JobError& WithResourceType(JobErrorResourceTypes&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Code m_code;
    bool m_codeHasBeenSet = false;

    Details m_details;
    bool m_detailsHasBeenSet = false;

    JobErrorLimitName m_limitName;
    bool m_limitNameHasBeenSet = false;

    double m_limitValue;
    bool m_limitValueHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    JobErrorResourceTypes m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
