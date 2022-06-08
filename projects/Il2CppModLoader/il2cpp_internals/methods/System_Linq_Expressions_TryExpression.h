using namespace app;

namespace app::methods::System::Linq::Expressions::TryExpression {
IL2CPP_REGISTER_METHOD(0x02FC52D0, void, __ctor, (TryExpression * __this, Type * type, Expression * body, Expression * finally, Expression * fault, ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ * handlers));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (TryExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3D440, ExpressionType__Enum, get_NodeType, (TryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Body, (TryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ *, get_Handlers, (TryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Expression *, get_Finally, (TryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Expression *, get_Fault, (TryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC53A0, Expression *, Accept, (TryExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC53D0, TryExpression *, Update, (TryExpression * __this, Expression * body, IEnumerable_1_System_Linq_Expressions_CatchBlock_ * handlers, Expression * finally, Expression * fault));
}
