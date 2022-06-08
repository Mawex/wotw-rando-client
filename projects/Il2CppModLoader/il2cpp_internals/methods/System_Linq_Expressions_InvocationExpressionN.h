using namespace app;

namespace app::methods::System::Linq::Expressions::InvocationExpressionN {
IL2CPP_REGISTER_METHOD(0x02416DD0, void, __ctor, (InvocationExpressionN * __this, Expression * lambda, IReadOnlyList_1_System_Linq_Expressions_Expression_ * arguments, Type * returnType));
IL2CPP_REGISTER_METHOD(0x02416E00, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpressionN * __this));
IL2CPP_REGISTER_METHOD(0x02416E80, Expression *, GetArgument, (InvocationExpressionN * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02416F20, int32_t, get_ArgumentCount, (InvocationExpressionN * __this));
IL2CPP_REGISTER_METHOD(0x02416FB0, InvocationExpression *, Rewrite, (InvocationExpressionN * __this, Expression * lambda, Expression__Array * arguments));
}
