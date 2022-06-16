#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::LabelExpression {
    IL2CPP_REGISTER_METHOD(0x02417070, void, ctor, (app::LabelExpression * this_ptr, app::LabelTarget * label, app::Expression * default_value))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Type *, get_Type, (app::LabelExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F3E0, app::ExpressionType__Enum, get_NodeType, (app::LabelExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::LabelTarget *, get_Target, (app::LabelExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression *, get_DefaultValue, (app::LabelExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417120, app::Expression *, Accept, (app::LabelExpression * this_ptr, app::ExpressionVisitor * visitor))
    IL2CPP_REGISTER_METHOD(0x02417150, app::LabelExpression *, Update, (app::LabelExpression * this_ptr, app::LabelTarget * target, app::Expression * default_value))
}
