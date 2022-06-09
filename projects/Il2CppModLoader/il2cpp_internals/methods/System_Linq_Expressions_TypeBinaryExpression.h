#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::TypeBinaryExpression {
IL2CPP_REGISTER_METHOD(0x02FC5520, void, __ctor, (app::TypeBinaryExpression * this_ptr, app::Expression * expression, app::Type * type_operand, app::ExpressionType__Enum node_type));
IL2CPP_REGISTER_METHOD(0x02FC55E0, Type *, get_Type, (app::TypeBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6D0, ExpressionType__Enum, get_NodeType, (app::TypeBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Expression, (app::TypeBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_TypeOperand, (app::TypeBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC5680, Expression *, Accept, (app::TypeBinaryExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC56B0, TypeBinaryExpression *, Update, (app::TypeBinaryExpression * this_ptr, app::Expression * expression));
}
