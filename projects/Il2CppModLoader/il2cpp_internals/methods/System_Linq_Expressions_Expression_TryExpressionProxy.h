#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression_TryExpressionProxy {
IL2CPP_REGISTER_METHOD(0x022C7680, void, __ctor, (app::Expression_TryExpressionProxy * this_ptr, app::TryExpression * node));
IL2CPP_REGISTER_METHOD(0x004173F0, Expression *, get_Body, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7280, String *, get_DebugView, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417880, Expression *, get_Fault, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A88520, Expression *, get_Finally, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00571730, ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ *, get_Handlers, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A887A0, ExpressionType__Enum, get_NodeType, (app::Expression_TryExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::Expression_TryExpressionProxy * this_ptr));
}
