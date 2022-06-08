#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Block5 {
IL2CPP_REGISTER_METHOD(0x01F9ED00, void, __ctor, (Block5 * __this, Expression * arg0, Expression * arg1, Expression * arg2, Expression * arg3, Expression * arg4));
IL2CPP_REGISTER_METHOD(0x01F9ED60, Expression *, GetExpression, (Block5 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0472F5E8, Block5_GetExpression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_ExpressionCount, (Block5 * __this));
IL2CPP_REGISTER_METHOD(0x01F9E4F0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (Block5 * __this));
IL2CPP_REGISTER_METHOD(0x01F9EE60, BlockExpression *, Rewrite, (Block5 * __this, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, Expression__Array * args));
}
