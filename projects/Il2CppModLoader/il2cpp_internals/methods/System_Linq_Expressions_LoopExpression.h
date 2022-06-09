#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::LoopExpression {
IL2CPP_REGISTER_METHOD(0x02417930, void, __ctor, (app::LoopExpression * this_ptr, app::Expression * body, app::LabelTarget * break_1, app::LabelTarget * continue_1));
IL2CPP_REGISTER_METHOD(0x024179F0, Type *, get_Type, (app::LoopExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3F290, ExpressionType__Enum, get_NodeType, (app::LoopExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Body, (app::LoopExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, LabelTarget *, get_BreakLabel, (app::LoopExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, LabelTarget *, get_ContinueLabel, (app::LoopExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02417AB0, Expression *, Accept, (app::LoopExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02417AE0, LoopExpression *, Update, (app::LoopExpression * this_ptr, app::LabelTarget * break_label, app::LabelTarget * continue_label, app::Expression * body));
}
