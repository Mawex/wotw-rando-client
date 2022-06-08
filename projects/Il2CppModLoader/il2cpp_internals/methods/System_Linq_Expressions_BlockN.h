using namespace app;

namespace app::methods::System::Linq::Expressions::BlockN {
IL2CPP_REGISTER_METHOD(0x01F9FE80, void, __ctor, (BlockN * __this, IReadOnlyList_1_System_Linq_Expressions_Expression_ * expressions));
IL2CPP_REGISTER_METHOD(0x01F9FEB0, Expression *, GetExpression, (BlockN * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F9FF50, int32_t, get_ExpressionCount, (BlockN * __this));
IL2CPP_REGISTER_METHOD(0x01F9FFE0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (BlockN * __this));
IL2CPP_REGISTER_METHOD(0x01FA0060, BlockExpression *, Rewrite, (BlockN * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression__Array * args));
}
