#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::SwitchExpression {
IL2CPP_REGISTER_METHOD(0x02FC4FE0, void, __ctor, (app::SwitchExpression * this_ptr, app::Type * type, app::Expression * switch_value, app::Expression * default_body, app::MethodInfo_1 * comparison, app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ * cases));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (app::SwitchExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E40920, ExpressionType__Enum, get_NodeType, (app::SwitchExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_SwitchValue, (app::SwitchExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ *, get_Cases, (app::SwitchExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Expression *, get_DefaultBody, (app::SwitchExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, MethodInfo_1 *, get_Comparison, (app::SwitchExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC50B0, Expression *, Accept, (app::SwitchExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC50E0, SwitchExpression *, Update, (app::SwitchExpression * this_ptr, app::Expression * switch_value, app::IEnumerable_1_System_Linq_Expressions_SwitchCase_ * cases, app::Expression * default_body));
}
