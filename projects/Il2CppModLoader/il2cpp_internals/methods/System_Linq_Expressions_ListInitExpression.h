#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::ListInitExpression {
IL2CPP_REGISTER_METHOD(0x02417650, void, __ctor, (ListInitExpression * __this, NewExpression * newExpression, ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ * initializers));
IL2CPP_REGISTER_METHOD(0x00E3E310, ExpressionType__Enum, get_NodeType, (ListInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x01A488A0, Type *, get_Type, (ListInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReduce, (ListInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, NewExpression *, get_NewExpression, (ListInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ *, get_Initializers, (ListInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417700, Expression *, Accept, (ListInitExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02417730, Expression *, Reduce, (ListInitExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417750, ListInitExpression *, Update, (ListInitExpression * __this, NewExpression * newExpression, IEnumerable_1_System_Linq_Expressions_ElementInit_ * initializers));
}
