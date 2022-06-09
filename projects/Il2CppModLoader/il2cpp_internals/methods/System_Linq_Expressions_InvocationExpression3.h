#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::InvocationExpression3 {
IL2CPP_REGISTER_METHOD(0x02416500, void, __ctor, (app::InvocationExpression3 * this_ptr, app::Expression * lambda, app::Type * return_type, app::Expression * arg0, app::Expression * arg1, app::Expression * arg2));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InvocationExpression3 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02416540, Expression *, GetArgument, (app::InvocationExpression3 * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0475E2B8, InvocationExpression3_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ArgumentCount, (app::InvocationExpression3 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02416630, InvocationExpression *, Rewrite, (app::InvocationExpression3 * this_ptr, app::Expression * lambda, app::Expression__Array * arguments));
}
