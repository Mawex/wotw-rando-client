using namespace app;

namespace app::methods::System::Linq::Expressions::ParameterExpression {
IL2CPP_REGISTER_METHOD(0x02FBDAA0, void, __ctor, (ParameterExpression * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02FBDB50, ParameterExpression *, Make, (Type * type, String * name, bool isByRef));
IL2CPP_REGISTER_METHOD(0x02FBECB0, Type *, get_Type, (ParameterExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3F7C0, ExpressionType__Enum, get_NodeType, (ParameterExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (ParameterExpression * __this));
IL2CPP_REGISTER_METHOD(0x005D2E60, bool, get_IsByRef, (ParameterExpression * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetIsByRef, (ParameterExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBED50, Expression *, Accept, (ParameterExpression * __this, ExpressionVisitor * visitor));
}
