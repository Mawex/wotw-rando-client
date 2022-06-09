#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::CatchBlock {
IL2CPP_REGISTER_METHOD(0x01FA0FE0, void, __ctor, (app::CatchBlock * this_ptr, app::Type * test, app::ParameterExpression * variable, app::Expression * body, app::Expression * filter));
IL2CPP_REGISTER_METHOD(0x002FA280, ParameterExpression *, get_Variable, (app::CatchBlock * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_Test, (app::CatchBlock * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Expression *, get_Body, (app::CatchBlock * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Expression *, get_Filter, (app::CatchBlock * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA1000, String *, ToString, (app::CatchBlock * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA1010, CatchBlock *, Update, (app::CatchBlock * this_ptr, app::ParameterExpression * variable, app::Expression * filter, app::Expression * body));
}
