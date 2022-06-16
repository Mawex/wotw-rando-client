#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_LoopExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D50E0, void, ctor, (app::Expression_LoopExpressionProxy * this_ptr, app::LoopExpression * node))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::Expression *, get_Body, (app::Expression_LoopExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::LabelTarget *, get_BreakLabel, (app::Expression_LoopExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_LoopExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::LabelTarget *, get_ContinueLabel, (app::Expression_LoopExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_LoopExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_LoopExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_LoopExpressionProxy * this_ptr))
}
