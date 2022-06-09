#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::ConditionalExpression {
IL2CPP_REGISTER_METHOD(0x01FA2E70, void, __ctor, (app::ConditionalExpression * this_ptr, app::Expression * test, app::Expression * if_true));
IL2CPP_REGISTER_METHOD(0x01FA2F20, ConditionalExpression *, Make, (app::Expression * test, app::Expression * if_true, app::Expression * if_false, app::Type * type));
IL2CPP_REGISTER_METHOD(0x0043D9A0, ExpressionType__Enum, get_NodeType, (app::ConditionalExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x0182D9B0, Type *, get_Type, (app::ConditionalExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Test, (app::ConditionalExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_IfTrue, (app::ConditionalExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x005D2E60, Expression *, get_IfFalse, (app::ConditionalExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA3340, Expression *, GetFalse, (app::ConditionalExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA33E0, Expression *, Accept, (app::ConditionalExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x01FA3410, ConditionalExpression *, Update, (app::ConditionalExpression * this_ptr, app::Expression * test, app::Expression * if_true, app::Expression * if_false));
}
