using namespace app;

namespace app::methods::System::Linq::Expressions::MethodCallExpression {
IL2CPP_REGISTER_METHOD(0x02FBBF50, void, __ctor, (MethodCallExpression * __this, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x00420EE0, Expression *, GetInstance, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHOD(0x005D89A0, ExpressionType__Enum, get_NodeType, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHOD(0x016FBBA0, Type *, get_Type, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, MethodInfo_1 *, get_Method, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHOD(0x0060EEC0, Expression *, get_Object, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHOD(0x01DEBEA0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBC000, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D420, MethodCallExpression_GetOrMakeArguments__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FBC040, Expression *, Accept, (MethodCallExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FBC070, MethodCallExpression *, Rewrite, (MethodCallExpression * __this, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
IL2CPP_REGISTER_METHODINFO(0x04770228, MethodCallExpression_Rewrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FBC0B0, Expression *, GetArgument, (MethodCallExpression * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474CF78, MethodCallExpression_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FBC0F0, int32_t, get_ArgumentCount, (MethodCallExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x04717008, MethodCallExpression_get_ArgumentCount__MethodInfo);
}
