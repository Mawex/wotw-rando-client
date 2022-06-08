#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::LabelExpression {
IL2CPP_REGISTER_METHOD(0x02417070, void, __ctor, (LabelExpression * __this, LabelTarget * label, Expression * defaultValue));
IL2CPP_REGISTER_METHOD(0x004173F0, Type *, get_Type, (LabelExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3F3E0, ExpressionType__Enum, get_NodeType, (LabelExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, LabelTarget *, get_Target, (LabelExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_DefaultValue, (LabelExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417120, Expression *, Accept, (LabelExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02417150, LabelExpression *, Update, (LabelExpression * __this, LabelTarget * target, Expression * defaultValue));
}
