#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::InstanceMethodCallExpression1 {
IL2CPP_REGISTER_METHOD(0x022D0620, void, __ctor, (InstanceMethodCallExpression1 * __this, MethodInfo_1 * method_1, Expression * instance, Expression * arg0));
IL2CPP_REGISTER_METHOD(0x022D0660, Expression *, GetArgument, (InstanceMethodCallExpression1 * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04731310, InstanceMethodCallExpression1_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (InstanceMethodCallExpression1 * __this));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (InstanceMethodCallExpression1 * __this));
IL2CPP_REGISTER_METHOD(0x022D0740, MethodCallExpression *, Rewrite, (InstanceMethodCallExpression1 * __this, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
}
