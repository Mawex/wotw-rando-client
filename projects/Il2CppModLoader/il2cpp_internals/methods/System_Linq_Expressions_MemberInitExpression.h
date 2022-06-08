using namespace app;

namespace app::methods::System::Linq::Expressions::MemberInitExpression {
IL2CPP_REGISTER_METHOD(0x02418180, void, __ctor, (MemberInitExpression * __this, NewExpression * newExpression, ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * bindings));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (MemberInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReduce, (MemberInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3E570, ExpressionType__Enum, get_NodeType, (MemberInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, NewExpression *, get_NewExpression, (MemberInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ *, get_Bindings, (MemberInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x02418230, Expression *, Accept, (MemberInitExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02418260, Expression *, Reduce, (MemberInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x02418280, Expression *, ReduceMemberInit, (Expression * objExpression, ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * bindings, bool keepOnStack));
IL2CPP_REGISTER_METHOD(0x02418640, Expression *, ReduceListInit, (Expression * listExpression, ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ * initializers, bool keepOnStack));
IL2CPP_REGISTER_METHOD(0x024189E0, Expression *, ReduceMemberBinding, (ParameterExpression * objVar, MemberBinding * binding));
IL2CPP_REGISTER_METHODINFO(0x04714878, MemberInitExpression_ReduceMemberBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02418BA0, MemberInitExpression *, Update, (MemberInitExpression * __this, NewExpression * newExpression, IEnumerable_1_System_Linq_Expressions_MemberBinding_ * bindings));
}
