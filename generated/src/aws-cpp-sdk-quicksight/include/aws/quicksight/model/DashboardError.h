﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardErrorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Entity.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardError">AWS
   * API Reference</a></p>
   */
  class DashboardError
  {
  public:
    AWS_QUICKSIGHT_API DashboardError();
    AWS_QUICKSIGHT_API DashboardError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type.</p>
     */
    inline const DashboardErrorType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DashboardErrorType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DashboardErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DashboardError& WithType(const DashboardErrorType& value) { SetType(value); return *this;}
    inline DashboardError& WithType(DashboardErrorType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DashboardError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DashboardError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DashboardError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the violated entities that caused the dashboard error.</p>
     */
    inline const Aws::Vector<Entity>& GetViolatedEntities() const{ return m_violatedEntities; }
    inline bool ViolatedEntitiesHasBeenSet() const { return m_violatedEntitiesHasBeenSet; }
    inline void SetViolatedEntities(const Aws::Vector<Entity>& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities = value; }
    inline void SetViolatedEntities(Aws::Vector<Entity>&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities = std::move(value); }
    inline DashboardError& WithViolatedEntities(const Aws::Vector<Entity>& value) { SetViolatedEntities(value); return *this;}
    inline DashboardError& WithViolatedEntities(Aws::Vector<Entity>&& value) { SetViolatedEntities(std::move(value)); return *this;}
    inline DashboardError& AddViolatedEntities(const Entity& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities.push_back(value); return *this; }
    inline DashboardError& AddViolatedEntities(Entity&& value) { m_violatedEntitiesHasBeenSet = true; m_violatedEntities.push_back(std::move(value)); return *this; }
    ///@}
  private:

    DashboardErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Entity> m_violatedEntities;
    bool m_violatedEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
