#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::TryExpression {
IL2CPP_REGISTER_METHOD(0x02FC52D0, void, __ctor, (app::TryExpression * this_ptr, app::Type * type, app::Expression * body, app::Expression * finally, app::Expression * fault, app::ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ * handlers));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (app::TryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E3D440, ExpressionType__Enum, get_NodeType, (app::TryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Body, (app::TryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ *, get_Handlers, (app::TryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Expression *, get_Finally, (app::TryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, Expression *, get_Fault, (app::TryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC53A0, Expression *, Accept, (app::TryExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x02FC53D0, TryExpression *, Update, (app::TryExpression * this_ptr, app::Expression * body, app::IEnumerable_1_System_Linq_Expressions_CatchBlock_ * handlers, app::Expression * finally, app::Expression * fault));
}
