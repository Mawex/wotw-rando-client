#include <interception_macros.h>

namespace app::methods::System::Reflection::CustomAttributeNamedArgument {
IL2CPP_REGISTER_METHOD(0x001FC850, void, __ctor, (CustomAttributeNamedArgument__Boxed * __this, MemberInfo_1 * memberInfo, Object * value));
IL2CPP_REGISTER_METHOD(0x00107C20, MemberInfo_1 *, get_MemberInfo, (CustomAttributeNamedArgument__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010A980, CustomAttributeTypedArgument, get_TypedValue, (CustomAttributeNamedArgument__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FC910, String *, ToString, (CustomAttributeNamedArgument__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FC920, bool, Equals, (CustomAttributeNamedArgument__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001FC930, int32_t, GetHashCode, (CustomAttributeNamedArgument__Boxed * __this));
}
