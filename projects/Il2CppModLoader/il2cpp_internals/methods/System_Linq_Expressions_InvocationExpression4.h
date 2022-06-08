#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression4 {
IL2CPP_REGISTER_METHOD(0x024167A0, void, __ctor, (InvocationExpression4 * __this, Expression * lambda, Type * returnType, Expression * arg0, Expression * arg1, Expression * arg2, Expression * arg3));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpression4 * __this));
IL2CPP_REGISTER_METHOD(0x024167F0, Expression *, GetArgument, (InvocationExpression4 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04787400, InvocationExpression4_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ArgumentCount, (InvocationExpression4 * __this));
IL2CPP_REGISTER_METHOD(0x024168F0, InvocationExpression *, Rewrite, (InvocationExpression4 * __this, Expression * lambda, Expression__Array * arguments));
}
