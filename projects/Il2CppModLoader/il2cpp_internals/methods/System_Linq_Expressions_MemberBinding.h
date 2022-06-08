#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MemberBinding {
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (MemberBinding * __this, MemberBindingType__Enum type, MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x002FC6D0, MemberBindingType__Enum, get_BindingType, (MemberBinding * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, MemberInfo_1 *, get_Member, (MemberBinding * __this));
IL2CPP_REGISTER_METHOD(0x02417C90, String *, ToString, (MemberBinding * __this));
IL2CPP_REGISTER_METHOD(0x02417CA0, void, ValidateAsDefinedHere, (MemberBinding * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04789178, MemberBinding_ValidateAsDefinedHere__MethodInfo);
}
