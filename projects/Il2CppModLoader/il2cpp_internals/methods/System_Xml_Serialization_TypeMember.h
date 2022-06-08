#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::TypeMember {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (TypeMember * __this, Type * type, String * member));
IL2CPP_REGISTER_METHOD(0x01C93A10, int32_t, GetHashCode, (TypeMember * __this));
IL2CPP_REGISTER_METHOD(0x01C93A70, bool, Equals, (TypeMember * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01C93C00, bool, Equals, (TypeMember * tm1, TypeMember * tm2));
IL2CPP_REGISTER_METHOD(0x01C93D00, String *, ToString, (TypeMember * __this));
}
