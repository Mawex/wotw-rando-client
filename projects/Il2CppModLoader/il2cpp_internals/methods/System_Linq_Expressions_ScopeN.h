#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::ScopeN {
IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, __ctor, (ScopeN * __this, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables, IReadOnlyList_1_System_Linq_Expressions_Expression_ * body));
IL2CPP_REGISTER_METHOD(0x002FB930, IReadOnlyList_1_System_Linq_Expressions_Expression_ *, get_Body, (ScopeN * __this));
IL2CPP_REGISTER_METHOD(0x02FBF4D0, Expression *, GetExpression, (ScopeN * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02FBF570, int32_t, get_ExpressionCount, (ScopeN * __this));
IL2CPP_REGISTER_METHOD(0x02FBF600, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (ScopeN * __this));
IL2CPP_REGISTER_METHOD(0x02FBF680, BlockExpression *, Rewrite, (ScopeN * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression__Array * args));
}
