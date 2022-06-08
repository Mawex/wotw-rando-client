#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlRootAttribute {
IL2CPP_REGISTER_METHOD(0x00447ED0, void, __ctor, (XmlRootAttribute * __this));
IL2CPP_REGISTER_METHOD(0x025AB880, void, __ctor, (XmlRootAttribute * __this, String * elementName));
IL2CPP_REGISTER_METHOD(0x025AB890, String *, get_DataType, (XmlRootAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DataType, (XmlRootAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x025AB920, String *, get_ElementName, (XmlRootAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ElementName, (XmlRootAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsNullable, (XmlRootAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsNullable, (XmlRootAttribute * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Namespace, (XmlRootAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Namespace, (XmlRootAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x025AB9B0, void, AddKeyHash, (XmlRootAttribute * __this, StringBuilder * sb));
}
