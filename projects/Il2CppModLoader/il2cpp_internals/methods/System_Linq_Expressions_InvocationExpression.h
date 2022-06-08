using namespace app;

namespace app::methods::System::Linq::Expressions::InvocationExpression {
IL2CPP_REGISTER_METHOD(0x02415D40, void, __ctor, (InvocationExpression * __this, Expression * expression, Type * returnType));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (InvocationExpression * __this));
IL2CPP_REGISTER_METHOD(0x007EC3F0, ExpressionType__Enum, get_NodeType, (InvocationExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Expression, (InvocationExpression * __this));
IL2CPP_REGISTER_METHOD(0x0060EEC0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (InvocationExpression * __this));
IL2CPP_REGISTER_METHOD(0x02415DF0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EAE0, InvocationExpression_GetOrMakeArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02415E30, Expression *, GetArgument, (InvocationExpression * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04701CA8, InvocationExpression_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02415E70, int32_t, get_ArgumentCount, (InvocationExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x04791BA8, InvocationExpression_get_ArgumentCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02415EB0, Expression *, Accept, (InvocationExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02415EE0, InvocationExpression *, Rewrite, (InvocationExpression * __this, Expression * lambda, Expression__Array * arguments));
IL2CPP_REGISTER_METHODINFO(0x04786758, InvocationExpression_Rewrite__MethodInfo);
}
