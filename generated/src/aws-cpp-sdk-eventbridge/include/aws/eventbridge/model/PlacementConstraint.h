﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/PlacementConstraintType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>An object representing a constraint on task placement. To learn more, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html">Task
   * Placement Constraints</a> in the Amazon Elastic Container Service Developer
   * Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/PlacementConstraint">AWS
   * API Reference</a></p>
   */
  class PlacementConstraint
  {
  public:
    AWS_EVENTBRIDGE_API PlacementConstraint();
    AWS_EVENTBRIDGE_API PlacementConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API PlacementConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of constraint. Use distinctInstance to ensure that each task in a
     * particular group is running on a different container instance. Use memberOf to
     * restrict the selection to a group of valid candidates. </p>
     */
    inline const PlacementConstraintType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PlacementConstraintType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PlacementConstraintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PlacementConstraint& WithType(const PlacementConstraintType& value) { SetType(value); return *this;}
    inline PlacementConstraint& WithType(PlacementConstraintType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the Amazon Elastic Container Service Developer Guide. </p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline PlacementConstraint& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline PlacementConstraint& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline PlacementConstraint& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}
  private:

    PlacementConstraintType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
