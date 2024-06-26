﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ReplicationRuleFilter.h>
#include <aws/s3control/model/ReplicationRuleStatus.h>
#include <aws/s3control/model/SourceSelectionCriteria.h>
#include <aws/s3control/model/ExistingObjectReplication.h>
#include <aws/s3control/model/Destination.h>
#include <aws/s3control/model/DeleteMarkerReplication.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Specifies which S3 on Outposts objects to replicate and where to store the
   * replicas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ReplicationRule">AWS
   * API Reference</a></p>
   */
  class ReplicationRule
  {
  public:
    AWS_S3CONTROL_API ReplicationRule();
    AWS_S3CONTROL_API ReplicationRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ReplicationRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique identifier for the rule. The maximum value is 255 characters.</p>
     */
    inline const Aws::String& GetID() const{ return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }
    inline void SetID(Aws::String&& value) { m_iDHasBeenSet = true; m_iD = std::move(value); }
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }
    inline ReplicationRule& WithID(const Aws::String& value) { SetID(value); return *this;}
    inline ReplicationRule& WithID(Aws::String&& value) { SetID(std::move(value)); return *this;}
    inline ReplicationRule& WithID(const char* value) { SetID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority indicates which rule has precedence whenever two or more
     * replication rules conflict. S3 on Outposts attempts to replicate objects
     * according to all replication rules. However, if there are two or more rules with
     * the same destination Outposts bucket, then objects will be replicated according
     * to the rule with the highest priority. The higher the number, the higher the
     * priority. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/replication-between-outposts.html">Creating
     * replication rules on Outposts</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline ReplicationRule& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that identifies the subset of objects to which the replication rule
     * applies. A <code>Filter</code> element must specify exactly one
     * <code>Prefix</code>, <code>Tag</code>, or <code>And</code> child element.</p>
     */
    inline const ReplicationRuleFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ReplicationRuleFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ReplicationRuleFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ReplicationRule& WithFilter(const ReplicationRuleFilter& value) { SetFilter(value); return *this;}
    inline ReplicationRule& WithFilter(ReplicationRuleFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is enabled.</p>
     */
    inline const ReplicationRuleStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReplicationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReplicationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReplicationRule& WithStatus(const ReplicationRuleStatus& value) { SetStatus(value); return *this;}
    inline ReplicationRule& WithStatus(ReplicationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container that describes additional filters for identifying the source
     * Outposts objects that you want to replicate. You can choose to enable or disable
     * the replication of these objects.</p>
     */
    inline const SourceSelectionCriteria& GetSourceSelectionCriteria() const{ return m_sourceSelectionCriteria; }
    inline bool SourceSelectionCriteriaHasBeenSet() const { return m_sourceSelectionCriteriaHasBeenSet; }
    inline void SetSourceSelectionCriteria(const SourceSelectionCriteria& value) { m_sourceSelectionCriteriaHasBeenSet = true; m_sourceSelectionCriteria = value; }
    inline void SetSourceSelectionCriteria(SourceSelectionCriteria&& value) { m_sourceSelectionCriteriaHasBeenSet = true; m_sourceSelectionCriteria = std::move(value); }
    inline ReplicationRule& WithSourceSelectionCriteria(const SourceSelectionCriteria& value) { SetSourceSelectionCriteria(value); return *this;}
    inline ReplicationRule& WithSourceSelectionCriteria(SourceSelectionCriteria&& value) { SetSourceSelectionCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional configuration to replicate existing source bucket objects. </p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const ExistingObjectReplication& GetExistingObjectReplication() const{ return m_existingObjectReplication; }
    inline bool ExistingObjectReplicationHasBeenSet() const { return m_existingObjectReplicationHasBeenSet; }
    inline void SetExistingObjectReplication(const ExistingObjectReplication& value) { m_existingObjectReplicationHasBeenSet = true; m_existingObjectReplication = value; }
    inline void SetExistingObjectReplication(ExistingObjectReplication&& value) { m_existingObjectReplicationHasBeenSet = true; m_existingObjectReplication = std::move(value); }
    inline ReplicationRule& WithExistingObjectReplication(const ExistingObjectReplication& value) { SetExistingObjectReplication(value); return *this;}
    inline ReplicationRule& WithExistingObjectReplication(ExistingObjectReplication&& value) { SetExistingObjectReplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for information about the replication destination and its
     * configurations.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline ReplicationRule& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline ReplicationRule& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether S3 on Outposts replicates delete markers. If you specify a
     * <code>Filter</code> element in your replication configuration, you must also
     * include a <code>DeleteMarkerReplication</code> element. If your
     * <code>Filter</code> includes a <code>Tag</code> element, the
     * <code>DeleteMarkerReplication</code> element's <code>Status</code> child element
     * must be set to <code>Disabled</code>, because S3 on Outposts doesn't support
     * replicating delete markers for tag-based rules.</p> <p>For more information
     * about delete marker replication, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3OutpostsReplication.html#outposts-replication-what-is-replicated">How
     * delete operations affect replication</a> in the <i>Amazon S3 User Guide</i>.
     * </p>
     */
    inline const DeleteMarkerReplication& GetDeleteMarkerReplication() const{ return m_deleteMarkerReplication; }
    inline bool DeleteMarkerReplicationHasBeenSet() const { return m_deleteMarkerReplicationHasBeenSet; }
    inline void SetDeleteMarkerReplication(const DeleteMarkerReplication& value) { m_deleteMarkerReplicationHasBeenSet = true; m_deleteMarkerReplication = value; }
    inline void SetDeleteMarkerReplication(DeleteMarkerReplication&& value) { m_deleteMarkerReplicationHasBeenSet = true; m_deleteMarkerReplication = std::move(value); }
    inline ReplicationRule& WithDeleteMarkerReplication(const DeleteMarkerReplication& value) { SetDeleteMarkerReplication(value); return *this;}
    inline ReplicationRule& WithDeleteMarkerReplication(DeleteMarkerReplication&& value) { SetDeleteMarkerReplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the source Outposts
     * bucket that you want S3 on Outposts to replicate the objects from.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline ReplicationRule& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline ReplicationRule& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline ReplicationRule& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}
  private:

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    ReplicationRuleFilter m_filter;
    bool m_filterHasBeenSet = false;

    ReplicationRuleStatus m_status;
    bool m_statusHasBeenSet = false;

    SourceSelectionCriteria m_sourceSelectionCriteria;
    bool m_sourceSelectionCriteriaHasBeenSet = false;

    ExistingObjectReplication m_existingObjectReplication;
    bool m_existingObjectReplicationHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    DeleteMarkerReplication m_deleteMarkerReplication;
    bool m_deleteMarkerReplicationHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
