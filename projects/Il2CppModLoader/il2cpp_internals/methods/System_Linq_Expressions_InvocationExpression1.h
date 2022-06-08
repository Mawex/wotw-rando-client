#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression1 {
IL2CPP_REGISTER_METHOD(0x024160D0, void, __ctor, (InvocationExpression1 * __this, Expression * lambda, Type * returnType, Expression * arg0));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InvocationExpression1 * __this));
IL2CPP_REGISTER_METHOD(0x02416100, Expression *, GetArgument, (InvocationExpression1 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047387C0, InvocationExpression1_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (InvocationExpression1 * __this));
IL2CPP_REGISTER_METHOD(0x024161D0, InvocationExpression *, Rewrite, (InvocationExpression1 * __this, Expression * lambda, Expression__Array * arguments));
}
