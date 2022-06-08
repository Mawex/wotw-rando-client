#include <interception_macros.h>

namespace app::methods::System::Xml::XmlQualifiedName {
IL2CPP_REGISTER_METHOD(0x016FF860, void, __ctor, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x016FF8F0, void, __ctor, (XmlQualifiedName * __this, String * name));
IL2CPP_REGISTER_METHOD(0x016FF990, void, __ctor, (XmlQualifiedName * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Namespace, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x016FFA60, int32_t, GetHashCode, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x016FFBB0, bool, get_IsEmpty, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x016FFBF0, String *, ToString, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x016FFCA0, bool, Equals, (XmlQualifiedName * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x016FFE20, bool, operator___, (XmlQualifiedName * a, XmlQualifiedName * b));
IL2CPP_REGISTER_METHOD(0x016FFEC0, bool, operator___, (XmlQualifiedName * a, XmlQualifiedName * b));
IL2CPP_REGISTER_METHOD(0x016FFF70, String *, ToString, (String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x01700020, XmlQualifiedName_HashCodeOfStringDelegate *, GetHashCodeDelegate, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsRandomizedHashingDisabled, ());
IL2CPP_REGISTER_METHOD(0x01700280, int32_t, GetHashCodeOfString, (String * s, int32_t length, int64_t additionalEntropy));
IL2CPP_REGISTER_METHODINFO(0x0474FC68, XmlQualifiedName_GetHashCodeOfString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017002B0, void, Init, (XmlQualifiedName * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetNamespace, (XmlQualifiedName * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x017002C0, void, Verify, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x017003B0, void, Atomize, (XmlQualifiedName * __this, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x01700410, XmlQualifiedName *, Parse, (String * s, IXmlNamespaceResolver * nsmgr, String * * prefix));
IL2CPP_REGISTER_METHODINFO(0x04707650, XmlQualifiedName_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01700630, XmlQualifiedName *, Clone, (XmlQualifiedName * __this));
IL2CPP_REGISTER_METHOD(0x01700780, void, __cctor, ());
}
