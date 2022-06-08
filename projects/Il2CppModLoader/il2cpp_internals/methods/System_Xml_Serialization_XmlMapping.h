using namespace app;

namespace app::methods::System::Xml::Serialization::XmlMapping {
IL2CPP_REGISTER_METHOD(0x00D09510, void, __ctor, (XmlMapping * __this, String * elementName, String * ns));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ElementName, (XmlMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Namespace, (XmlMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetKey, (XmlMapping * __this, String * key));
IL2CPP_REGISTER_METHOD(0x002FA280, ObjectMap_1 *, get_ObjectMap, (XmlMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ObjectMap, (XmlMapping * __this, ObjectMap_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB930, ArrayList *, get_RelatedMaps, (XmlMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_RelatedMaps, (XmlMapping * __this, ArrayList * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, SerializationFormat__Enum, get_Format, (XmlMapping * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Format, (XmlMapping * __this, SerializationFormat__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBB00, SerializationSource *, get_Source, (XmlMapping * __this));
}
