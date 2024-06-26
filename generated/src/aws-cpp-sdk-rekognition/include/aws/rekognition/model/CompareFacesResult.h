﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ComparedSourceImageFace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CompareFacesMatch.h>
#include <aws/rekognition/model/ComparedFace.h>
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
namespace Rekognition
{
namespace Model
{
  class CompareFacesResult
  {
  public:
    AWS_REKOGNITION_API CompareFacesResult();
    AWS_REKOGNITION_API CompareFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CompareFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline const ComparedSourceImageFace& GetSourceImageFace() const{ return m_sourceImageFace; }
    inline void SetSourceImageFace(const ComparedSourceImageFace& value) { m_sourceImageFace = value; }
    inline void SetSourceImageFace(ComparedSourceImageFace&& value) { m_sourceImageFace = std::move(value); }
    inline CompareFacesResult& WithSourceImageFace(const ComparedSourceImageFace& value) { SetSourceImageFace(value); return *this;}
    inline CompareFacesResult& WithSourceImageFace(ComparedSourceImageFace&& value) { SetSourceImageFace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline const Aws::Vector<CompareFacesMatch>& GetFaceMatches() const{ return m_faceMatches; }
    inline void SetFaceMatches(const Aws::Vector<CompareFacesMatch>& value) { m_faceMatches = value; }
    inline void SetFaceMatches(Aws::Vector<CompareFacesMatch>&& value) { m_faceMatches = std::move(value); }
    inline CompareFacesResult& WithFaceMatches(const Aws::Vector<CompareFacesMatch>& value) { SetFaceMatches(value); return *this;}
    inline CompareFacesResult& WithFaceMatches(Aws::Vector<CompareFacesMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}
    inline CompareFacesResult& AddFaceMatches(const CompareFacesMatch& value) { m_faceMatches.push_back(value); return *this; }
    inline CompareFacesResult& AddFaceMatches(CompareFacesMatch&& value) { m_faceMatches.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline const Aws::Vector<ComparedFace>& GetUnmatchedFaces() const{ return m_unmatchedFaces; }
    inline void SetUnmatchedFaces(const Aws::Vector<ComparedFace>& value) { m_unmatchedFaces = value; }
    inline void SetUnmatchedFaces(Aws::Vector<ComparedFace>&& value) { m_unmatchedFaces = std::move(value); }
    inline CompareFacesResult& WithUnmatchedFaces(const Aws::Vector<ComparedFace>& value) { SetUnmatchedFaces(value); return *this;}
    inline CompareFacesResult& WithUnmatchedFaces(Aws::Vector<ComparedFace>&& value) { SetUnmatchedFaces(std::move(value)); return *this;}
    inline CompareFacesResult& AddUnmatchedFaces(const ComparedFace& value) { m_unmatchedFaces.push_back(value); return *this; }
    inline CompareFacesResult& AddUnmatchedFaces(ComparedFace&& value) { m_unmatchedFaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of <code>SourceImageOrientationCorrection</code> is always
     * null.</p> <p>If the input image is in .jpeg format, it might contain
     * exchangeable image file format (Exif) metadata that includes the image's
     * orientation. Amazon Rekognition uses this orientation information to perform
     * image correction. The bounding box coordinates are translated to represent
     * object locations after the orientation information in the Exif metadata is used
     * to correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> <p>Amazon Rekognition doesn’t perform image correction for images
     * in .png format and .jpeg images without orientation information in the image
     * Exif metadata. The bounding box coordinates aren't translated and represent the
     * object locations before the image is rotated. </p>
     */
    inline const OrientationCorrection& GetSourceImageOrientationCorrection() const{ return m_sourceImageOrientationCorrection; }
    inline void SetSourceImageOrientationCorrection(const OrientationCorrection& value) { m_sourceImageOrientationCorrection = value; }
    inline void SetSourceImageOrientationCorrection(OrientationCorrection&& value) { m_sourceImageOrientationCorrection = std::move(value); }
    inline CompareFacesResult& WithSourceImageOrientationCorrection(const OrientationCorrection& value) { SetSourceImageOrientationCorrection(value); return *this;}
    inline CompareFacesResult& WithSourceImageOrientationCorrection(OrientationCorrection&& value) { SetSourceImageOrientationCorrection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>TargetImageOrientationCorrection</code> is always
     * null.</p> <p>If the input image is in .jpeg format, it might contain
     * exchangeable image file format (Exif) metadata that includes the image's
     * orientation. Amazon Rekognition uses this orientation information to perform
     * image correction. The bounding box coordinates are translated to represent
     * object locations after the orientation information in the Exif metadata is used
     * to correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> <p>Amazon Rekognition doesn’t perform image correction for images
     * in .png format and .jpeg images without orientation information in the image
     * Exif metadata. The bounding box coordinates aren't translated and represent the
     * object locations before the image is rotated. </p>
     */
    inline const OrientationCorrection& GetTargetImageOrientationCorrection() const{ return m_targetImageOrientationCorrection; }
    inline void SetTargetImageOrientationCorrection(const OrientationCorrection& value) { m_targetImageOrientationCorrection = value; }
    inline void SetTargetImageOrientationCorrection(OrientationCorrection&& value) { m_targetImageOrientationCorrection = std::move(value); }
    inline CompareFacesResult& WithTargetImageOrientationCorrection(const OrientationCorrection& value) { SetTargetImageOrientationCorrection(value); return *this;}
    inline CompareFacesResult& WithTargetImageOrientationCorrection(OrientationCorrection&& value) { SetTargetImageOrientationCorrection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CompareFacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CompareFacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CompareFacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ComparedSourceImageFace m_sourceImageFace;

    Aws::Vector<CompareFacesMatch> m_faceMatches;

    Aws::Vector<ComparedFace> m_unmatchedFaces;

    OrientationCorrection m_sourceImageOrientationCorrection;

    OrientationCorrection m_targetImageOrientationCorrection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
