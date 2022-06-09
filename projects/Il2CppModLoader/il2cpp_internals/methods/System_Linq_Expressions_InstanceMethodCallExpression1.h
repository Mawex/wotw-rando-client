#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::InstanceMethodCallExpression1 {
IL2CPP_REGISTER_METHOD(0x022D0620, void, __ctor, (app::InstanceMethodCallExpression1 * this_ptr, app::MethodInfo_1 * method_1, app::Expression * instance, app::Expression * arg0));
IL2CPP_REGISTER_METHOD(0x022D0660, Expression *, GetArgument, (app::InstanceMethodCallExpression1 * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04731310, InstanceMethodCallExpression1_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (app::InstanceMethodCallExpression1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InstanceMethodCallExpression1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D0740, MethodCallExpression *, Rewrite, (app::InstanceMethodCallExpression1 * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
}
