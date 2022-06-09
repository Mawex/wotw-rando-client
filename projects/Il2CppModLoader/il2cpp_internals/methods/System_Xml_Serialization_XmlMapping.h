#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlMapping {
IL2CPP_REGISTER_METHOD(0x00D09510, void, __ctor, (app::XmlMapping * this_ptr, app::String * element_name, app::String * ns));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ElementName, (app::XmlMapping * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Namespace, (app::XmlMapping * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetKey, (app::XmlMapping * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x002FA280, ObjectMap_1 *, get_ObjectMap, (app::XmlMapping * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ObjectMap, (app::XmlMapping * this_ptr, app::ObjectMap_1 * value));
IL2CPP_REGISTER_METHOD(0x002FB930, ArrayList *, get_RelatedMaps, (app::XmlMapping * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_RelatedMaps, (app::XmlMapping * this_ptr, app::ArrayList * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, SerializationFormat__Enum, get_Format, (app::XmlMapping * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Format, (app::XmlMapping * this_ptr, app::SerializationFormat__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBB00, SerializationSource *, get_Source, (app::XmlMapping * this_ptr));
}
