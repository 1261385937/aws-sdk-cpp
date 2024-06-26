﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotLocaleFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotLocaleFilterOperator.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Filters responses returned by the <code>ListBotLocales</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleFilter">AWS
   * API Reference</a></p>
   */
  class BotLocaleFilter
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleFilter();
    AWS_LEXMODELSV2_API BotLocaleFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field to filter the list of bots.</p>
     */
    inline const BotLocaleFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const BotLocaleFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(BotLocaleFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline BotLocaleFilter& WithName(const BotLocaleFilterName& value) { SetName(value); return *this;}
    inline BotLocaleFilter& WithName(BotLocaleFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to use for filtering the list of bots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline BotLocaleFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline BotLocaleFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline BotLocaleFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline BotLocaleFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline BotLocaleFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for the filter. Specify <code>EQ</code> when the
     * <code>ListBotLocales</code> operation should return only aliases that equal the
     * specified value. Specify <code>CO</code> when the <code>ListBotLocales</code>
     * operation should return aliases that contain the specified value.</p>
     */
    inline const BotLocaleFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const BotLocaleFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(BotLocaleFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline BotLocaleFilter& WithOperator(const BotLocaleFilterOperator& value) { SetOperator(value); return *this;}
    inline BotLocaleFilter& WithOperator(BotLocaleFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    BotLocaleFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    BotLocaleFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
