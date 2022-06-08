#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpression3 {
IL2CPP_REGISTER_METHOD(0x022D0850, void, __ctor, (MethodCallExpression3 * __this, MethodInfo_1 * method_1, Expression * arg0, Expression * arg1, Expression * arg2));
IL2CPP_REGISTER_METHOD(0x02FBC6F0, Expression *, GetArgument, (MethodCallExpression3 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047055C8, MethodCallExpression3_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ArgumentCount, (MethodCallExpression3 * __this));
IL2CPP_REGISTER_METHOD(0x02FBC3B0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (MethodCallExpression3 * __this));
IL2CPP_REGISTER_METHOD(0x02FBC7E0, MethodCallExpression *, Rewrite, (MethodCallExpression3 * __this, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
}
