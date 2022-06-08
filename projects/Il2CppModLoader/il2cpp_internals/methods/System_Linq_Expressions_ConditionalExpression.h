using namespace app;

namespace app::methods::System::Linq::Expressions::ConditionalExpression {
IL2CPP_REGISTER_METHOD(0x01FA2E70, void, __ctor, (ConditionalExpression * __this, Expression * test, Expression * ifTrue));
IL2CPP_REGISTER_METHOD(0x01FA2F20, ConditionalExpression *, Make, (Expression * test, Expression * ifTrue, Expression * ifFalse, Type * type));
IL2CPP_REGISTER_METHOD(0x0043D9A0, ExpressionType__Enum, get_NodeType, (ConditionalExpression * __this));
IL2CPP_REGISTER_METHOD(0x0182D9B0, Type *, get_Type, (ConditionalExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Test, (ConditionalExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_IfTrue, (ConditionalExpression * __this));
IL2CPP_REGISTER_METHOD(0x005D2E60, Expression *, get_IfFalse, (ConditionalExpression * __this));
IL2CPP_REGISTER_METHOD(0x01FA3340, Expression *, GetFalse, (ConditionalExpression * __this));
IL2CPP_REGISTER_METHOD(0x01FA33E0, Expression *, Accept, (ConditionalExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x01FA3410, ConditionalExpression *, Update, (ConditionalExpression * __this, Expression * test, Expression * ifTrue, Expression * ifFalse));
}
