﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datapipeline/model/Field.h>
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
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains information about a pipeline object. This can be a logical,
   * physical, or physical attempt pipeline object. The complete set of components of
   * a pipeline defines the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PipelineObject">AWS
   * API Reference</a></p>
   */
  class PipelineObject
  {
  public:
    AWS_DATAPIPELINE_API PipelineObject();
    AWS_DATAPIPELINE_API PipelineObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API PipelineObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the object.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PipelineObject& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PipelineObject& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PipelineObject& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PipelineObject& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PipelineObject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PipelineObject& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that define the properties of the object.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<Field>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<Field>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline PipelineObject& WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}
    inline PipelineObject& WithFields(Aws::Vector<Field>&& value) { SetFields(std::move(value)); return *this;}
    inline PipelineObject& AddFields(const Field& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline PipelineObject& AddFields(Field&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Field> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
