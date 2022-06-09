#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlSerializationReader_CollectionFixup {
IL2CPP_REGISTER_METHOD(0x025B2FE0, void, __ctor, (app::XmlSerializationReader_CollectionFixup * this_ptr, app::Object * collection, app::XmlSerializationCollectionFixupCallback * callback, app::String * id));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSerializationCollectionFixupCallback *, get_Callback, (app::XmlSerializationReader_CollectionFixup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_Collection, (app::XmlSerializationReader_CollectionFixup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object *, get_Id, (app::XmlSerializationReader_CollectionFixup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_CollectionItems, (app::XmlSerializationReader_CollectionFixup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_CollectionItems, (app::XmlSerializationReader_CollectionFixup * this_ptr, app::Object * value));
}
