#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::GotoExpression {
IL2CPP_REGISTER_METHOD(0x022CFE50, void, __ctor, (app::GotoExpression * this_ptr, app::GotoExpressionKind__Enum kind, app::LabelTarget * target, app::Expression * value, app::Type * type));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (app::GotoExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E406F0, ExpressionType__Enum, get_NodeType, (app::GotoExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Value, (app::GotoExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, LabelTarget *, get_Target, (app::GotoExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB970, GotoExpressionKind__Enum, get_Kind, (app::GotoExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x022CFF20, Expression *, Accept, (app::GotoExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x022CFF50, GotoExpression *, Update, (app::GotoExpression * this_ptr, app::LabelTarget * target, app::Expression * value));
}
