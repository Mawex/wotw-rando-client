#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializerNamespaces {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlSerializerNamespaces * __this));
IL2CPP_REGISTER_METHOD(0x0194C170, void, Add, (XmlSerializerNamespaces * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x0194C290, void, AddInternal, (XmlSerializerNamespaces * __this, String * prefix, String * ns));
IL2CPP_REGISTER_METHOD(0x0194C2E0, XmlQualifiedName__Array *, ToArray, (XmlSerializerNamespaces * __this));
IL2CPP_REGISTER_METHOD(0x0194C420, int32_t, get_Count, (XmlSerializerNamespaces * __this));
IL2CPP_REGISTER_METHOD(0x0194C450, ArrayList *, get_NamespaceList, (XmlSerializerNamespaces * __this));
IL2CPP_REGISTER_METHOD(0x0194C8F0, Hashtable *, get_Namespaces, (XmlSerializerNamespaces * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Namespaces, (XmlSerializerNamespaces * __this, Hashtable * value));
}
