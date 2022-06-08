using namespace app;

namespace app::methods::System::Linq::Expressions::LambdaExpression {
IL2CPP_REGISTER_METHOD(0x024172C0, void, __ctor, (LambdaExpression * __this, Expression * body));
IL2CPP_REGISTER_METHOD(0x0060EEC0, Type *, get_Type, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3D980, ExpressionType__Enum, get_NodeType, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417370, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, get_Parameters, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x0112C0A0, String *, get_Name, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, get_NameCore, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Body, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417390, Type *, get_ReturnType, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x021C4E70, bool, get_TailCall, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_TailCallCore, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x024173E0, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, GetOrMakeParameters, (LambdaExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C078, LambdaExpression_GetOrMakeParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02417420, ParameterExpression *, IParameterProvider_GetParameter, (LambdaExpression * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02417440, ParameterExpression *, GetParameter, (LambdaExpression * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04731158, LambdaExpression_GetParameter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E113B0, int32_t, IParameterProvider_get_ParameterCount, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417480, int32_t, get_ParameterCount, (LambdaExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x04730D80, LambdaExpression_get_ParameterCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024174C0, Delegate *, Compile, (LambdaExpression * __this));
IL2CPP_REGISTER_METHOD(0x024174D0, Delegate *, Compile, (LambdaExpression * __this, bool preferInterpretation));
IL2CPP_REGISTER_METHOD(0x024174C0, Delegate *, Compile, (LambdaExpression * __this, DebugInfoGenerator * debugInfoGenerator));
}
