#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::DefaultExpression {
IL2CPP_REGISTER_METHOD(0x01FA9BD0, void, __ctor, (app::DefaultExpression * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (app::DefaultExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3CE50, ExpressionType__Enum, get_NodeType, (app::DefaultExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA9C80, Expression *, Accept, (app::DefaultExpression * this_ptr, app::ExpressionVisitor * visitor));
}
