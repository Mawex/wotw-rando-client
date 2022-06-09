#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression_LoopExpressionProxy {
IL2CPP_REGISTER_METHOD(0x029D50E0, void, __ctor, (app::Expression_LoopExpressionProxy * this_ptr, app::LoopExpression * node));
IL2CPP_REGISTER_METHOD(0x01052DF0, Expression *, get_Body, (app::Expression_LoopExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x004173F0, LabelTarget *, get_BreakLabel, (app::Expression_LoopExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_LoopExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00571730, LabelTarget *, get_ContinueLabel, (app::Expression_LoopExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x022C7280, String *, get_DebugView, (app::Expression_LoopExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A887A0, ExpressionType__Enum, get_NodeType, (app::Expression_LoopExpressionProxy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::Expression_LoopExpressionProxy * this_ptr));
}
