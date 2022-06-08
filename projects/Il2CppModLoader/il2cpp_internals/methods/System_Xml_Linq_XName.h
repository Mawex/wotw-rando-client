#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XName {
IL2CPP_REGISTER_METHOD(0x03038AD0, void, __ctor, (XName * __this, XNamespace * ns, String * localName));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_LocalName, (XName * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, XNamespace *, get_Namespace, (XName * __this));
IL2CPP_REGISTER_METHOD(0x01052DF0, String *, get_NamespaceName, (XName * __this));
IL2CPP_REGISTER_METHOD(0x03038BD0, String *, ToString, (XName * __this));
IL2CPP_REGISTER_METHOD(0x03038CB0, XName *, Get, (String * expandedName));
IL2CPP_REGISTER_METHODINFO(0x04726EF0, XName_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03038F20, XName *, Get, (String * localName, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x03038F60, XName *, operator_, (String * expandedName));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (XName * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetHashCode, (XName * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (XName * left, XName * right));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (XName * left, XName * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, IEquatable_XName__Equals, (XName * __this, XName * other));
IL2CPP_REGISTER_METHOD(0x03038F70, void, ISerializable_GetObjectData, (XName * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04706200, XName_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03039090, void, __ctor, (XName * __this));
IL2CPP_REGISTER_METHODINFO(0x0472CB58, XName__ctor_1__MethodInfo);
}
