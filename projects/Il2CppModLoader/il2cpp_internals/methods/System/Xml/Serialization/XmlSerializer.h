#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializer {
    IL2CPP_REGISTER_METHOD(0x01949EF0, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x0194A0D0, void, __ctor_1, (app::XmlSerializer * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x0194A100, void, __ctor_2, (app::XmlSerializer * this_ptr, app::Type * type, app::XmlAttributeOverrides * overrides, app::Type__Array * extra_types, app::XmlRootAttribute * root, app::String * default_namespace));
    IL2CPP_REGISTER_METHODINFO(0x04779A40, XmlSerializer__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlMapping *, get_Mapping, (app::XmlSerializer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0194A350, void, OnUnknownAttribute, (app::XmlSerializer * this_ptr, app::XmlAttributeEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x0194A370, void, OnUnknownElement, (app::XmlSerializer * this_ptr, app::XmlElementEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x0194A390, void, OnUnknownNode, (app::XmlSerializer * this_ptr, app::XmlNodeEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x0194A3B0, void, OnUnreferencedObject, (app::XmlSerializer * this_ptr, app::UnreferencedObjectEventArgs * e));
    IL2CPP_REGISTER_METHOD(0x0194A3D0, app::XmlSerializationReader *, CreateReader_1, (app::XmlSerializer * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0479A220, XmlSerializer_CreateReader__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0194A420, app::XmlSerializationWriter *, CreateWriter_1, (app::XmlSerializer * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04721DE8, XmlSerializer_CreateWriter__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0194A470, app::Object *, Deserialize_1, (app::XmlSerializer * this_ptr, app::TextReader * text_reader));
    IL2CPP_REGISTER_METHOD(0x0194A5F0, app::Object *, Deserialize_2, (app::XmlSerializer * this_ptr, app::XmlReader * xml_reader));
    IL2CPP_REGISTER_METHOD(0x0194A7B0, app::Object *, Deserialize_3, (app::XmlSerializer * this_ptr, app::XmlSerializationReader * reader));
    IL2CPP_REGISTER_METHODINFO(0x04779BD0, XmlSerializer_Deserialize_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0194AA00, void, Serialize_1, (app::XmlSerializer * this_ptr, app::Object * o, app::XmlSerializationWriter * writer));
    IL2CPP_REGISTER_METHODINFO(0x04752FA0, XmlSerializer_Serialize__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0194AC50, void, Serialize_2, (app::XmlSerializer * this_ptr, app::Stream * stream, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x0194AE20, void, Serialize_3, (app::XmlSerializer * this_ptr, app::TextWriter * text_writer, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x0194AFB0, void, Serialize_4, (app::XmlSerializer * this_ptr, app::XmlWriter * xml_writer, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x0194AFD0, void, Serialize_5, (app::XmlSerializer * this_ptr, app::XmlWriter * xml_writer, app::Object * o, app::XmlSerializerNamespaces * namespaces));
    IL2CPP_REGISTER_METHODINFO(0x04736930, XmlSerializer_Serialize_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0194B2D0, app::XmlSerializationWriter *, CreateWriter_2, (app::XmlSerializer * this_ptr, app::XmlMapping * type_mapping));
    IL2CPP_REGISTER_METHOD(0x0194B830, app::XmlSerializationReader *, CreateReader_2, (app::XmlSerializer * this_ptr, app::XmlMapping * type_mapping));
}
