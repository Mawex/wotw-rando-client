#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression_ConditionalExpressionProxy {
IL2CPP_REGISTER_METHOD(0x029D4A30, void, __ctor, (app::Expression_ConditionalExpressionProxy * this_ptr, app::ConditionalExpression * node));
IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_ConditionalExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7280, String *, get_DebugView, (app::Expression_ConditionalExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00442880, Expression *, get_IfFalse, (app::Expression_ConditionalExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x004173F0, Expression *, get_IfTrue, (app::Expression_ConditionalExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A887A0, ExpressionType__Enum, get_NodeType, (app::Expression_ConditionalExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052DF0, Expression *, get_Test, (app::Expression_ConditionalExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::Expression_ConditionalExpressionProxy * this_ptr));
}
