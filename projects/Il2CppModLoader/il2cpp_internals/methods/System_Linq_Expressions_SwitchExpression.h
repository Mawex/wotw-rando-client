#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::SwitchExpression {
IL2CPP_REGISTER_METHOD(0x02FC4FE0, void, __ctor, (SwitchExpression * __this, Type * type, Expression * switchValue, Expression * defaultBody, MethodInfo_1 * comparison, ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ * cases));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (SwitchExpression * __this));
IL2CPP_REGISTER_METHOD(0x00E40920, ExpressionType__Enum, get_NodeType, (SwitchExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_SwitchValue, (SwitchExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ *, get_Cases, (SwitchExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Expression *, get_DefaultBody, (SwitchExpression * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, MethodInfo_1 *, get_Comparison, (SwitchExpression * __this));
IL2CPP_REGISTER_METHOD(0x02FC50B0, Expression *, Accept, (SwitchExpression * __this, ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC50E0, SwitchExpression *, Update, (SwitchExpression * __this, Expression * switchValue, IEnumerable_1_System_Linq_Expressions_SwitchCase_ * cases, Expression * defaultBody));
}
