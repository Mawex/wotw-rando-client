#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::ConstantExpression {
IL2CPP_REGISTER_METHOD(0x01FA3760, void, __ctor, (app::ConstantExpression * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01FA3810, Type *, get_Type, (app::ConstantExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AB4D20, ExpressionType__Enum, get_NodeType, (app::ConstantExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_Value, (app::ConstantExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA38D0, Expression *, Accept, (app::ConstantExpression * this_ptr, app::ExpressionVisitor * visitor));
}
