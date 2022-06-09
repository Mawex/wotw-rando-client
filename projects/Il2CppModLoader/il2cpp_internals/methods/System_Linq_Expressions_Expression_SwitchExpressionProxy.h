#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression_SwitchExpressionProxy {
IL2CPP_REGISTER_METHOD(0x022C75E0, void, __ctor, (app::Expression_SwitchExpressionProxy * this_ptr, app::SwitchExpression * node));
IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00571730, ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ *, get_Cases, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417880, MethodInfo_1 *, get_Comparison, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7280, String *, get_DebugView, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A88520, Expression *, get_DefaultBody, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A887A0, ExpressionType__Enum, get_NodeType, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x004173F0, Expression *, get_SwitchValue, (app::Expression_SwitchExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::Expression_SwitchExpressionProxy * this_ptr));
}
