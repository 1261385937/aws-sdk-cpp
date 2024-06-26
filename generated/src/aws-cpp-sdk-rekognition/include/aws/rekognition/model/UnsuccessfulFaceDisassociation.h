﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/UnsuccessfulFaceDisassociationReason.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains metadata like FaceId, UserID, and Reasons, for a face that was
   * unsuccessfully disassociated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UnsuccessfulFaceDisassociation">AWS
   * API Reference</a></p>
   */
  class UnsuccessfulFaceDisassociation
  {
  public:
    AWS_REKOGNITION_API UnsuccessfulFaceDisassociation();
    AWS_REKOGNITION_API UnsuccessfulFaceDisassociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API UnsuccessfulFaceDisassociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier assigned to the face. </p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }
    inline UnsuccessfulFaceDisassociation& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}
    inline UnsuccessfulFaceDisassociation& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}
    inline UnsuccessfulFaceDisassociation& WithFaceId(const char* value) { SetFaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A provided ID for the UserID. Unique within the collection. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UnsuccessfulFaceDisassociation& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UnsuccessfulFaceDisassociation& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UnsuccessfulFaceDisassociation& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the deletion was unsuccessful. </p>
     */
    inline const Aws::Vector<UnsuccessfulFaceDisassociationReason>& GetReasons() const{ return m_reasons; }
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
    inline void SetReasons(const Aws::Vector<UnsuccessfulFaceDisassociationReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }
    inline void SetReasons(Aws::Vector<UnsuccessfulFaceDisassociationReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }
    inline UnsuccessfulFaceDisassociation& WithReasons(const Aws::Vector<UnsuccessfulFaceDisassociationReason>& value) { SetReasons(value); return *this;}
    inline UnsuccessfulFaceDisassociation& WithReasons(Aws::Vector<UnsuccessfulFaceDisassociationReason>&& value) { SetReasons(std::move(value)); return *this;}
    inline UnsuccessfulFaceDisassociation& AddReasons(const UnsuccessfulFaceDisassociationReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }
    inline UnsuccessfulFaceDisassociation& AddReasons(UnsuccessfulFaceDisassociationReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<UnsuccessfulFaceDisassociationReason> m_reasons;
    bool m_reasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
