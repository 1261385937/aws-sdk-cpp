﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NamespaceStatus.h>
#include <aws/quicksight/model/IdentityStore.h>
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
namespace QuickSight
{
namespace Model
{
  class CreateNamespaceResult
  {
  public:
    AWS_QUICKSIGHT_API CreateNamespaceResult();
    AWS_QUICKSIGHT_API CreateNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Amazon QuickSight namespace you created. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateNamespaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateNamespaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateNamespaceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new namespace that you created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateNamespaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNamespaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNamespaceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region; that you want to use for the free SPICE
     * capacity for the new namespace. This is set to the region that you run
     * CreateNamespace in. </p>
     */
    inline const Aws::String& GetCapacityRegion() const{ return m_capacityRegion; }
    inline void SetCapacityRegion(const Aws::String& value) { m_capacityRegion = value; }
    inline void SetCapacityRegion(Aws::String&& value) { m_capacityRegion = std::move(value); }
    inline void SetCapacityRegion(const char* value) { m_capacityRegion.assign(value); }
    inline CreateNamespaceResult& WithCapacityRegion(const Aws::String& value) { SetCapacityRegion(value); return *this;}
    inline CreateNamespaceResult& WithCapacityRegion(Aws::String&& value) { SetCapacityRegion(std::move(value)); return *this;}
    inline CreateNamespaceResult& WithCapacityRegion(const char* value) { SetCapacityRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the creation of the namespace. This is an asynchronous process.
     * A status of <code>CREATED</code> means that your namespace is ready to use. If
     * an error occurs, it indicates if the process is <code>retryable</code> or
     * <code>non-retryable</code>. In the case of a non-retryable error, refer to the
     * error message for follow-up tasks.</p>
     */
    inline const NamespaceStatus& GetCreationStatus() const{ return m_creationStatus; }
    inline void SetCreationStatus(const NamespaceStatus& value) { m_creationStatus = value; }
    inline void SetCreationStatus(NamespaceStatus&& value) { m_creationStatus = std::move(value); }
    inline CreateNamespaceResult& WithCreationStatus(const NamespaceStatus& value) { SetCreationStatus(value); return *this;}
    inline CreateNamespaceResult& WithCreationStatus(NamespaceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of your user identity directory. Currently, this supports
     * users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline const IdentityStore& GetIdentityStore() const{ return m_identityStore; }
    inline void SetIdentityStore(const IdentityStore& value) { m_identityStore = value; }
    inline void SetIdentityStore(IdentityStore&& value) { m_identityStore = std::move(value); }
    inline CreateNamespaceResult& WithIdentityStore(const IdentityStore& value) { SetIdentityStore(value); return *this;}
    inline CreateNamespaceResult& WithIdentityStore(IdentityStore&& value) { SetIdentityStore(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline CreateNamespaceResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_capacityRegion;

    NamespaceStatus m_creationStatus;

    IdentityStore m_identityStore;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
