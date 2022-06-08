#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::RuntimeVariablesExpression {
IL2CPP_REGISTER_METHOD(0x02FBEDB0, void, __ctor, (RuntimeVariablesExpression * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables));
IL2CPP_REGISTER_METHOD(0x02FBEE60, Type *, get_Type, (RuntimeVariablesExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3F140, ExpressionType__Enum, get_NodeType, (RuntimeVariablesExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, get_Variables, (RuntimeVariablesExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBEF00, Expression *, Accept, (RuntimeVariablesExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FBEF30, RuntimeVariablesExpression *, Update, (RuntimeVariablesExpression * __this, IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * variables));
}
