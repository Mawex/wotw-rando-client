#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::DefaultExpression {
IL2CPP_REGISTER_METHOD(0x01FA9BD0, void, __ctor, (DefaultExpression * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (DefaultExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3CE50, ExpressionType__Enum, get_NodeType, (DefaultExpression * __this));
IL2CPP_REGISTER_METHOD(0x01FA9C80, Expression *, Accept, (DefaultExpression * __this, ExpressionVisitor * visitor));
}
