#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Block4 {
IL2CPP_REGISTER_METHOD(0x01F9E9B0, void, __ctor, (Block4 * __this, Expression * arg0, Expression * arg1, Expression * arg2, Expression * arg3));
IL2CPP_REGISTER_METHOD(0x01F9EA10, Expression *, GetExpression, (Block4 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04752DD8, Block4_GetExpression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ExpressionCount, (Block4 * __this));
IL2CPP_REGISTER_METHOD(0x01F9E4F0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (Block4 * __this));
IL2CPP_REGISTER_METHOD(0x01F9EB00, BlockExpression *, Rewrite, (Block4 * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression__Array * args));
}
