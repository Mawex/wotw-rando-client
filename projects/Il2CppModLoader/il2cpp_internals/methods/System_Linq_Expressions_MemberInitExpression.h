#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::MemberInitExpression {
IL2CPP_REGISTER_METHOD(0x02418180, void, __ctor, (app::MemberInitExpression * this_ptr, app::NewExpression * new_expression, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * bindings));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (app::MemberInitExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReduce, (app::MemberInitExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3E570, ExpressionType__Enum, get_NodeType, (app::MemberInitExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, NewExpression *, get_NewExpression, (app::MemberInitExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ *, get_Bindings, (app::MemberInitExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02418230, Expression *, Accept, (app::MemberInitExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02418260, Expression *, Reduce, (app::MemberInitExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02418280, Expression *, ReduceMemberInit, (app::Expression * obj_expression, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * bindings, bool keep_on_stack));
IL2CPP_REGISTER_METHOD(0x02418640, Expression *, ReduceListInit, (app::Expression * list_expression, app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ * initializers, bool keep_on_stack));
IL2CPP_REGISTER_METHOD(0x024189E0, Expression *, ReduceMemberBinding, (app::ParameterExpression * obj_var, app::MemberBinding * binding));
IL2CPP_REGISTER_METHODINFO(0x04714878, MemberInitExpression_ReduceMemberBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02418BA0, MemberInitExpression *, Update, (app::MemberInitExpression * this_ptr, app::NewExpression * new_expression, app::IEnumerable_1_System_Linq_Expressions_MemberBinding_ * bindings));
}
