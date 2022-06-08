#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::TypeBinaryExpression {
IL2CPP_REGISTER_METHOD(0x02FC5520, void, __ctor, (TypeBinaryExpression * __this, Expression * expression, Type * typeOperand, ExpressionType__Enum nodeType));
IL2CPP_REGISTER_METHOD(0x02FC55E0, Type *, get_Type, (TypeBinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, ExpressionType__Enum, get_NodeType, (TypeBinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Expression, (TypeBinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_TypeOperand, (TypeBinaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC5680, Expression *, Accept, (TypeBinaryExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC56B0, TypeBinaryExpression *, Update, (TypeBinaryExpression * __this, Expression * expression));
}
