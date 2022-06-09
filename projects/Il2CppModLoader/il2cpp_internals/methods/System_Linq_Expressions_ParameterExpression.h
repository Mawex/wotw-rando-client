#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::ParameterExpression {
IL2CPP_REGISTER_METHOD(0x02FBDAA0, void, __ctor, (app::ParameterExpression * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x02FBDB50, ParameterExpression *, Make, (app::Type * type, app::String * name, bool is_by_ref));
IL2CPP_REGISTER_METHOD(0x02FBECB0, Type *, get_Type, (app::ParameterExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3F7C0, ExpressionType__Enum, get_NodeType, (app::ParameterExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (app::ParameterExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x005D2E60, bool, get_IsByRef, (app::ParameterExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetIsByRef, (app::ParameterExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FBED50, Expression *, Accept, (app::ParameterExpression * this_ptr, app::ExpressionVisitor * visitor));
}
