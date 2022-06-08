#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MemberExpression {
IL2CPP_REGISTER_METHOD(0x005D2E60, MemberInfo_1 *, get_Member, (MemberExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Expression, (MemberExpression * __this));
IL2CPP_REGISTER_METHOD(0x02417CE0, void, __ctor, (MemberExpression * __this, Expression * expression));
IL2CPP_REGISTER_METHOD(0x02417D90, PropertyExpression *, Make, (Expression * expression, PropertyInfo_1 * property));
IL2CPP_REGISTER_METHOD(0x02417EE0, FieldExpression *, Make, (Expression * expression, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x00E3E350, ExpressionType__Enum, get_NodeType, (MemberExpression * __this));
IL2CPP_REGISTER_METHOD(0x02418030, MemberInfo_1 *, GetMember, (MemberExpression * __this));
IL2CPP_REGISTER_METHODINFO(0x04756328, MemberExpression_GetMember__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02418070, Expression *, Accept, (MemberExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x024180A0, MemberExpression *, Update, (MemberExpression * __this, Expression * expression));
}
