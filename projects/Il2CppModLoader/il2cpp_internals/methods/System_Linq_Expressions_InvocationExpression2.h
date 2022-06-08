#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression2 {
IL2CPP_REGISTER_METHOD(0x024162C0, void, __ctor, (InvocationExpression2 * __this, Expression * lambda, Type * returnType, Expression * arg0, Expression * arg1));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpression2 * __this));
IL2CPP_REGISTER_METHOD(0x024162F0, Expression *, GetArgument, (InvocationExpression2 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04790448, InvocationExpression2_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ArgumentCount, (InvocationExpression2 * __this));
IL2CPP_REGISTER_METHOD(0x024163D0, InvocationExpression *, Rewrite, (InvocationExpression2 * __this, Expression * lambda, Expression__Array * arguments));
}
