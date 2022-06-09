#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression_BinaryExpressionProxy {
IL2CPP_REGISTER_METHOD(0x029D4790, void, __ctor, (app::Expression_BinaryExpressionProxy * this_ptr, app::BinaryExpression * node));
IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x017170C0, LambdaExpression *, get_Conversion, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7280, String *, get_DebugView, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x029D4830, bool, get_IsLifted, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x029D4850, bool, get_IsLiftedToNull, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x004173F0, Expression *, get_Left, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00442880, MethodInfo_1 *, get_Method, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A887A0, ExpressionType__Enum, get_NodeType, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052DF0, Expression *, get_Right, (app::Expression_BinaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::Expression_BinaryExpressionProxy * this_ptr));
}
