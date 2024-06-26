﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/model/ConsumerGroupReplicationUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/TopicReplicationUpdate.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * <p>Update information relating to replication between a given source and target
   * Kafka cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateReplicationInfoRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReplicationInfoRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API UpdateReplicationInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationInfo"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Updated consumer group replication information.</p>
     */
    inline const ConsumerGroupReplicationUpdate& GetConsumerGroupReplication() const{ return m_consumerGroupReplication; }
    inline bool ConsumerGroupReplicationHasBeenSet() const { return m_consumerGroupReplicationHasBeenSet; }
    inline void SetConsumerGroupReplication(const ConsumerGroupReplicationUpdate& value) { m_consumerGroupReplicationHasBeenSet = true; m_consumerGroupReplication = value; }
    inline void SetConsumerGroupReplication(ConsumerGroupReplicationUpdate&& value) { m_consumerGroupReplicationHasBeenSet = true; m_consumerGroupReplication = std::move(value); }
    inline UpdateReplicationInfoRequest& WithConsumerGroupReplication(const ConsumerGroupReplicationUpdate& value) { SetConsumerGroupReplication(value); return *this;}
    inline UpdateReplicationInfoRequest& WithConsumerGroupReplication(ConsumerGroupReplicationUpdate&& value) { SetConsumerGroupReplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current replicator version.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline UpdateReplicationInfoRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline UpdateReplicationInfoRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline UpdateReplicationInfoRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator to be updated.</p>
     */
    inline const Aws::String& GetReplicatorArn() const{ return m_replicatorArn; }
    inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
    inline void SetReplicatorArn(const Aws::String& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = value; }
    inline void SetReplicatorArn(Aws::String&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::move(value); }
    inline void SetReplicatorArn(const char* value) { m_replicatorArnHasBeenSet = true; m_replicatorArn.assign(value); }
    inline UpdateReplicationInfoRequest& WithReplicatorArn(const Aws::String& value) { SetReplicatorArn(value); return *this;}
    inline UpdateReplicationInfoRequest& WithReplicatorArn(Aws::String&& value) { SetReplicatorArn(std::move(value)); return *this;}
    inline UpdateReplicationInfoRequest& WithReplicatorArn(const char* value) { SetReplicatorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source Kafka cluster.</p>
     */
    inline const Aws::String& GetSourceKafkaClusterArn() const{ return m_sourceKafkaClusterArn; }
    inline bool SourceKafkaClusterArnHasBeenSet() const { return m_sourceKafkaClusterArnHasBeenSet; }
    inline void SetSourceKafkaClusterArn(const Aws::String& value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn = value; }
    inline void SetSourceKafkaClusterArn(Aws::String&& value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn = std::move(value); }
    inline void SetSourceKafkaClusterArn(const char* value) { m_sourceKafkaClusterArnHasBeenSet = true; m_sourceKafkaClusterArn.assign(value); }
    inline UpdateReplicationInfoRequest& WithSourceKafkaClusterArn(const Aws::String& value) { SetSourceKafkaClusterArn(value); return *this;}
    inline UpdateReplicationInfoRequest& WithSourceKafkaClusterArn(Aws::String&& value) { SetSourceKafkaClusterArn(std::move(value)); return *this;}
    inline UpdateReplicationInfoRequest& WithSourceKafkaClusterArn(const char* value) { SetSourceKafkaClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target Kafka cluster.</p>
     */
    inline const Aws::String& GetTargetKafkaClusterArn() const{ return m_targetKafkaClusterArn; }
    inline bool TargetKafkaClusterArnHasBeenSet() const { return m_targetKafkaClusterArnHasBeenSet; }
    inline void SetTargetKafkaClusterArn(const Aws::String& value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn = value; }
    inline void SetTargetKafkaClusterArn(Aws::String&& value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn = std::move(value); }
    inline void SetTargetKafkaClusterArn(const char* value) { m_targetKafkaClusterArnHasBeenSet = true; m_targetKafkaClusterArn.assign(value); }
    inline UpdateReplicationInfoRequest& WithTargetKafkaClusterArn(const Aws::String& value) { SetTargetKafkaClusterArn(value); return *this;}
    inline UpdateReplicationInfoRequest& WithTargetKafkaClusterArn(Aws::String&& value) { SetTargetKafkaClusterArn(std::move(value)); return *this;}
    inline UpdateReplicationInfoRequest& WithTargetKafkaClusterArn(const char* value) { SetTargetKafkaClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updated topic replication information.</p>
     */
    inline const TopicReplicationUpdate& GetTopicReplication() const{ return m_topicReplication; }
    inline bool TopicReplicationHasBeenSet() const { return m_topicReplicationHasBeenSet; }
    inline void SetTopicReplication(const TopicReplicationUpdate& value) { m_topicReplicationHasBeenSet = true; m_topicReplication = value; }
    inline void SetTopicReplication(TopicReplicationUpdate&& value) { m_topicReplicationHasBeenSet = true; m_topicReplication = std::move(value); }
    inline UpdateReplicationInfoRequest& WithTopicReplication(const TopicReplicationUpdate& value) { SetTopicReplication(value); return *this;}
    inline UpdateReplicationInfoRequest& WithTopicReplication(TopicReplicationUpdate&& value) { SetTopicReplication(std::move(value)); return *this;}
    ///@}
  private:

    ConsumerGroupReplicationUpdate m_consumerGroupReplication;
    bool m_consumerGroupReplicationHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;

    Aws::String m_sourceKafkaClusterArn;
    bool m_sourceKafkaClusterArnHasBeenSet = false;

    Aws::String m_targetKafkaClusterArn;
    bool m_targetKafkaClusterArnHasBeenSet = false;

    TopicReplicationUpdate m_topicReplication;
    bool m_topicReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
