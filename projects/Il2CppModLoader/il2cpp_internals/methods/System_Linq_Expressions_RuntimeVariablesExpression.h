#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::RuntimeVariablesExpression {
IL2CPP_REGISTER_METHOD(0x02FBEDB0, void, __ctor, (app::RuntimeVariablesExpression * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables));
IL2CPP_REGISTER_METHOD(0x02FBEE60, Type *, get_Type, (app::RuntimeVariablesExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3F140, ExpressionType__Enum, get_NodeType, (app::RuntimeVariablesExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, get_Variables, (app::RuntimeVariablesExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FBEF00, Expression *, Accept, (app::RuntimeVariablesExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FBEF30, RuntimeVariablesExpression *, Update, (app::RuntimeVariablesExpression * this_ptr, app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * variables));
}
