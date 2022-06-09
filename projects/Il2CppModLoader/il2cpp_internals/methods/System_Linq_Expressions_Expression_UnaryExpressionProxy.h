#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression_UnaryExpressionProxy {
IL2CPP_REGISTER_METHOD(0x022C77C0, void, __ctor, (app::Expression_UnaryExpressionProxy * this_ptr, app::UnaryExpression * node));
IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7280, String *, get_DebugView, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7860, bool, get_IsLifted, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7880, bool, get_IsLiftedToNull, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A88520, MethodInfo_1 *, get_Method, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A887A0, ExpressionType__Enum, get_NodeType, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00571730, Expression *, get_Operand, (app::Expression_UnaryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::Expression_UnaryExpressionProxy * this_ptr));
}
