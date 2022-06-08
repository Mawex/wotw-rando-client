#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InstanceMethodCallExpressionN {
IL2CPP_REGISTER_METHOD(0x022D0620, void, __ctor, (InstanceMethodCallExpressionN * __this, MethodInfo_1 * method_1, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
IL2CPP_REGISTER_METHOD(0x022D0D80, Expression *, GetArgument, (InstanceMethodCallExpressionN * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x022D0E20, int32_t, get_ArgumentCount, (InstanceMethodCallExpressionN * __this));
IL2CPP_REGISTER_METHOD(0x022D0EB0, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InstanceMethodCallExpressionN * __this));
IL2CPP_REGISTER_METHOD(0x022D0F30, MethodCallExpression *, Rewrite, (InstanceMethodCallExpressionN * __this, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
}
