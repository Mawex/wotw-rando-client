#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::CatchBlock {
IL2CPP_REGISTER_METHOD(0x01FA0FE0, void, __ctor, (CatchBlock * __this, Type * test, ParameterExpression * variable, Expression * body, Expression * filter));
IL2CPP_REGISTER_METHOD(0x002FA280, ParameterExpression *, get_Variable, (CatchBlock * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_Test, (CatchBlock * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Expression *, get_Body, (CatchBlock * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Expression *, get_Filter, (CatchBlock * __this));
IL2CPP_REGISTER_METHOD(0x01FA1000, String *, ToString, (CatchBlock * __this));
IL2CPP_REGISTER_METHOD(0x01FA1010, CatchBlock *, Update, (CatchBlock * __this, ParameterExpression * variable, Expression * filter, Expression * body));
}
