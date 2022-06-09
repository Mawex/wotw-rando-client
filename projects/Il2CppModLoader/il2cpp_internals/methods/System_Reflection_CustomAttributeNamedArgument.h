#include <interception_macros.h>

namespace app::methods::System_Reflection::CustomAttributeNamedArgument {
IL2CPP_REGISTER_METHOD(0x001FC850, void, __ctor, (app::CustomAttributeNamedArgument__Boxed * this_ptr, app::MemberInfo_1 * member_info, app::Object * value));
IL2CPP_REGISTER_METHOD(0x00107C20, MemberInfo_1 *, get_MemberInfo, (app::CustomAttributeNamedArgument__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0010A980, CustomAttributeTypedArgument, get_TypedValue, (app::CustomAttributeNamedArgument__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001FC910, String *, ToString, (app::CustomAttributeNamedArgument__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001FC920, bool, Equals, (app::CustomAttributeNamedArgument__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x001FC930, int32_t, GetHashCode, (app::CustomAttributeNamedArgument__Boxed * this_ptr));
}
