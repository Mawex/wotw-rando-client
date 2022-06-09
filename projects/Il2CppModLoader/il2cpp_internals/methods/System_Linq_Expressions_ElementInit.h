#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::ElementInit {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::ElementInit * this_ptr, app::MethodInfo_1 * add_method, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * arguments));
IL2CPP_REGISTER_METHOD(0x002FA280, MethodInfo_1 *, get_AddMethod, (app::ElementInit * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (app::ElementInit * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA9CB0, Expression *, GetArgument, (app::ElementInit * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01FA9D50, int32_t, get_ArgumentCount, (app::ElementInit * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA9E20, String *, ToString, (app::ElementInit * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FA9E30, ElementInit *, Update, (app::ElementInit * this_ptr, app::IEnumerable_1_System_Linq_Expressions_Expression_ * arguments));
}
