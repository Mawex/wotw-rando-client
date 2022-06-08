#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression3 {
IL2CPP_REGISTER_METHOD(0x02416500, void, __ctor, (InvocationExpression3 * __this, Expression * lambda, Type * returnType, Expression * arg0, Expression * arg1, Expression * arg2));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpression3 * __this));
IL2CPP_REGISTER_METHOD(0x02416540, Expression *, GetArgument, (InvocationExpression3 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0475E2B8, InvocationExpression3_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ArgumentCount, (InvocationExpression3 * __this));
IL2CPP_REGISTER_METHOD(0x02416630, InvocationExpression *, Rewrite, (InvocationExpression3 * __this, Expression * lambda, Expression__Array * arguments));
}
