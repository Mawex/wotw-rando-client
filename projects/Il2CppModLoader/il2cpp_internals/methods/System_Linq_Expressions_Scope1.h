using namespace app;

namespace app::methods::System::Linq::Expressions::Scope1 {
IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, __ctor, (Scope1 * __this, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression * body));
IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, __ctor, (Scope1 * __this, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables, Object * body));
IL2CPP_REGISTER_METHOD(0x02FBF010, Expression *, GetExpression, (Scope1 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04702EE0, Scope1_GetExpression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ExpressionCount, (Scope1 * __this));
IL2CPP_REGISTER_METHOD(0x02FBF0C0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (Scope1 * __this));
IL2CPP_REGISTER_METHOD(0x02FBF0D0, BlockExpression *, Rewrite, (Scope1 * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression__Array * args));
}
