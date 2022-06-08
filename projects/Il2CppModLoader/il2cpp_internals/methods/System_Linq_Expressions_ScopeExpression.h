#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::ScopeExpression {
IL2CPP_REGISTER_METHOD(0x01F9FE80, void, __ctor, (ScopeExpression * __this, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables));
IL2CPP_REGISTER_METHOD(0x02FBF380, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, GetOrMakeVariables, (ScopeExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ *, get_VariablesList, (ScopeExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBF400, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ *, ReuseOrValidateVariables, (ScopeExpression * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables));
}
