#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression5 {
IL2CPP_REGISTER_METHOD(0x02416A90, void, __ctor, (InvocationExpression5 * __this, Expression * lambda, Type * returnType, Expression * arg0, Expression * arg1, Expression * arg2, Expression * arg3, Expression * arg4));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpression5 * __this));
IL2CPP_REGISTER_METHOD(0x02416AE0, Expression *, GetArgument, (InvocationExpression5 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04787570, InvocationExpression5_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_ArgumentCount, (InvocationExpression5 * __this));
IL2CPP_REGISTER_METHOD(0x02416C00, InvocationExpression *, Rewrite, (InvocationExpression5 * __this, Expression * lambda, Expression__Array * arguments));
}
