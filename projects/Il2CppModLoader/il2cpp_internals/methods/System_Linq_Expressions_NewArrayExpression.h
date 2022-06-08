using namespace app;

namespace app::methods::System::Linq::Expressions::NewArrayExpression {
IL2CPP_REGISTER_METHOD(0x02FBD210, void, __ctor, (NewArrayExpression * __this, Type * type, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * expressions));
IL2CPP_REGISTER_METHOD(0x02FBD2C0, NewArrayExpression *, Make, (ExpressionType__Enum nodeType, Type * type, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * expressions));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (NewArrayExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Expressions, (NewArrayExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBD4C0, Expression *, Accept, (NewArrayExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FBD4F0, NewArrayExpression *, Update, (NewArrayExpression * __this, IEnumerable_1_System_Linq_Expressions_Expression_ * expressions));
}
