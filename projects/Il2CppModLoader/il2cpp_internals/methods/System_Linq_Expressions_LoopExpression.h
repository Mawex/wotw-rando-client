#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::LoopExpression {
IL2CPP_REGISTER_METHOD(0x02417930, void, __ctor, (LoopExpression * __this, Expression * body, LabelTarget * break_1, LabelTarget * continue_1));
IL2CPP_REGISTER_METHOD(0x024179F0, Type *, get_Type, (LoopExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3F290, ExpressionType__Enum, get_NodeType, (LoopExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Body, (LoopExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, LabelTarget *, get_BreakLabel, (LoopExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, LabelTarget *, get_ContinueLabel, (LoopExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417AB0, Expression *, Accept, (LoopExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02417AE0, LoopExpression *, Update, (LoopExpression * __this, LabelTarget * breakLabel, LabelTarget * continueLabel, Expression * body));
}
