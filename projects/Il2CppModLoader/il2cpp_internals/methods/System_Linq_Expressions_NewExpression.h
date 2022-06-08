using namespace app;

namespace app::methods::System::Linq::Expressions::NewExpression {
IL2CPP_REGISTER_METHOD(0x02FBD690, void, __ctor, (NewExpression * __this, ConstructorInfo * constructor, IReadOnlyList_1_System_Linq_Expressions_Expression_ * arguments, ReadOnlyCollection_1_System_Reflection_MemberInfo_ * members));
IL2CPP_REGISTER_METHOD(0x02287F30, Type *, get_Type, (NewExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E3EE40, ExpressionType__Enum, get_NodeType, (NewExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ConstructorInfo *, get_Constructor, (NewExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBD750, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (NewExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBD7D0, Expression *, GetArgument, (NewExpression * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02FBD870, int32_t, get_ArgumentCount, (NewExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, ReadOnlyCollection_1_System_Reflection_MemberInfo_ *, get_Members, (NewExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FBD900, Expression *, Accept, (NewExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FBD930, NewExpression *, Update, (NewExpression * __this, IEnumerable_1_System_Linq_Expressions_Expression_ * arguments));
}
