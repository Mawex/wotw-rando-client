#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlReflectionMember {
IL2CPP_REGISTER_METHOD(0x025AB710, void, __ctor, (XmlReflectionMember * __this, String * name, Type * type, XmlAttributes * attributes));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReturnValue, (XmlReflectionMember * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_MemberName, (XmlReflectionMember * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_MemberType, (XmlReflectionMember * __this));
IL2CPP_REGISTER_METHOD(0x025AB720, XmlAttributes *, get_XmlAttributes, (XmlReflectionMember * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Type *, get_DeclaringType, (XmlReflectionMember * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_DeclaringType, (XmlReflectionMember * __this, Type * value));
}
