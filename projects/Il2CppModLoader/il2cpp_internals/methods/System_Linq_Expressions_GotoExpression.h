using namespace app;

namespace app::methods::System::Linq::Expressions::GotoExpression {
IL2CPP_REGISTER_METHOD(0x022CFE50, void, __ctor, (GotoExpression * __this, GotoExpressionKind__Enum kind, LabelTarget * target, Expression * value, Type * type));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (GotoExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E406F0, ExpressionType__Enum, get_NodeType, (GotoExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Value, (GotoExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, LabelTarget *, get_Target, (GotoExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, GotoExpressionKind__Enum, get_Kind, (GotoExpression * __this));
IL2CPP_REGISTER_METHOD(0x022CFF20, Expression *, Accept, (GotoExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x022CFF50, GotoExpression *, Update, (GotoExpression * __this, LabelTarget * target, Expression * value));
}
