#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpression2 {
IL2CPP_REGISTER_METHOD(0x022D0620, void, __ctor, (MethodCallExpression2 * __this, MethodInfo_1 * method_1, Expression * arg0, Expression * arg1));
IL2CPP_REGISTER_METHOD(0x02FBC4E0, Expression *, GetArgument, (MethodCallExpression2 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047418B8, MethodCallExpression2_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ArgumentCount, (MethodCallExpression2 * __this));
IL2CPP_REGISTER_METHOD(0x02FBC3B0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (MethodCallExpression2 * __this));
IL2CPP_REGISTER_METHOD(0x02FBC5C0, MethodCallExpression *, Rewrite, (MethodCallExpression2 * __this, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
}
