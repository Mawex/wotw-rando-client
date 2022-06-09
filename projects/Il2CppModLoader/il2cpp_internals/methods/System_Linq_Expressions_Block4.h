#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Block4 {
IL2CPP_REGISTER_METHOD(0x01F9E9B0, void, __ctor, (app::Block4 * this_ptr, app::Expression * arg0, app::Expression * arg1, app::Expression * arg2, app::Expression * arg3));
IL2CPP_REGISTER_METHOD(0x01F9EA10, Expression *, GetExpression, (app::Block4 * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04752DD8, Block4_GetExpression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ExpressionCount, (app::Block4 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9E4F0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (app::Block4 * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F9EB00, BlockExpression *, Rewrite, (app::Block4 * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, app::Expression__Array * args));
}
