#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::UnaryExpression {
IL2CPP_REGISTER_METHOD(0x02FC57F0, void, __ctor, (UnaryExpression * __this, ExpressionType__Enum nodeType, Expression * expression, Type * type, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, ExpressionType__Enum, get_NodeType, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Expression *, get_Operand, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, MethodInfo_1 *, get_Method, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC58C0, bool, get_IsLifted, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC5B40, bool, get_IsLiftedToNull, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC5B80, Expression *, Accept, (UnaryExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC5BB0, bool, get_CanReduce, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC5BE0, Expression *, Reduce, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC5C60, bool, get_IsPrefix, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC5CB0, UnaryExpression *, FunctionalOp, (UnaryExpression * __this, Expression * operand));
IL2CPP_REGISTER_METHOD(0x02FC5E90, Expression *, ReduceVariable, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC6380, Expression *, ReduceMember, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC6D10, Expression *, ReduceIndex, (UnaryExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC76B0, UnaryExpression *, Update, (UnaryExpression * __this, Expression * operand));
}
