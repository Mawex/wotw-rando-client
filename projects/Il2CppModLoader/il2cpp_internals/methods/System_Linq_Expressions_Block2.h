using namespace app;

namespace app::methods::System::Linq::Expressions::Block2 {
IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, __ctor, (Block2 * __this, Expression * arg0, Expression * arg1));
IL2CPP_REGISTER_METHOD(0x01F9E420, Expression *, GetExpression, (Block2 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047130E0, Block2_GetExpression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ExpressionCount, (Block2 * __this));
IL2CPP_REGISTER_METHOD(0x01F9E4F0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (Block2 * __this));
IL2CPP_REGISTER_METHOD(0x01F9E500, BlockExpression *, Rewrite, (Block2 * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression__Array * args));
}
