﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a new documentation version of a given API.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationVersionRequest">AWS
   * API Reference</a></p>
   */
  class CreateDocumentationVersionRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateDocumentationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocumentationVersion"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline CreateDocumentationVersionRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline CreateDocumentationVersionRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline CreateDocumentationVersionRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier of the new snapshot.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::move(value); }
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }
    inline CreateDocumentationVersionRequest& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}
    inline CreateDocumentationVersionRequest& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}
    inline CreateDocumentationVersionRequest& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage name to be associated with the new documentation snapshot.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline CreateDocumentationVersionRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline CreateDocumentationVersionRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline CreateDocumentationVersionRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the new documentation snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDocumentationVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDocumentationVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDocumentationVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
