#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::LabelExpression {
IL2CPP_REGISTER_METHOD(0x02417070, void, __ctor, (app::LabelExpression * this_ptr, app::LabelTarget * label, app::Expression * default_value));
IL2CPP_REGISTER_METHOD(0x004173F0, Type *, get_Type, (app::LabelExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3F3E0, ExpressionType__Enum, get_NodeType, (app::LabelExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, LabelTarget *, get_Target, (app::LabelExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_DefaultValue, (app::LabelExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02417120, Expression *, Accept, (app::LabelExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02417150, LabelExpression *, Update, (app::LabelExpression * this_ptr, app::LabelTarget * target, app::Expression * default_value));
}
