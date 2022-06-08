using namespace app;

namespace app::methods::System::Xml::Serialization::XmlSerializer {
IL2CPP_REGISTER_METHOD(0x01949EF0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0194A0D0, void, __ctor, (XmlSerializer * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0194A100, void, __ctor, (XmlSerializer * __this, Type * type, XmlAttributeOverrides * overrides, Type__Array * extraTypes, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHODINFO(0x04779A40, XmlSerializer__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, XmlMapping *, get_Mapping, (XmlSerializer * __this));
IL2CPP_REGISTER_METHOD(0x0194A350, void, OnUnknownAttribute, (XmlSerializer * __this, XmlAttributeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0194A370, void, OnUnknownElement, (XmlSerializer * __this, XmlElementEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0194A390, void, OnUnknownNode, (XmlSerializer * __this, XmlNodeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0194A3B0, void, OnUnreferencedObject, (XmlSerializer * __this, UnreferencedObjectEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0194A3D0, XmlSerializationReader *, CreateReader, (XmlSerializer * __this));
IL2CPP_REGISTER_METHODINFO(0x0479A220, XmlSerializer_CreateReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0194A420, XmlSerializationWriter *, CreateWriter, (XmlSerializer * __this));
IL2CPP_REGISTER_METHODINFO(0x04721DE8, XmlSerializer_CreateWriter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0194A470, Object *, Deserialize, (XmlSerializer * __this, TextReader * textReader));
IL2CPP_REGISTER_METHOD(0x0194A5F0, Object *, Deserialize, (XmlSerializer * __this, XmlReader * xmlReader));
IL2CPP_REGISTER_METHOD(0x0194A7B0, Object *, Deserialize, (XmlSerializer * __this, XmlSerializationReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04779BD0, XmlSerializer_Deserialize_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0194AA00, void, Serialize, (XmlSerializer * __this, Object * o, XmlSerializationWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x04752FA0, XmlSerializer_Serialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0194AC50, void, Serialize, (XmlSerializer * __this, Stream * stream, Object * o));
IL2CPP_REGISTER_METHOD(0x0194AE20, void, Serialize, (XmlSerializer * __this, TextWriter * textWriter, Object * o));
IL2CPP_REGISTER_METHOD(0x0194AFB0, void, Serialize, (XmlSerializer * __this, XmlWriter * xmlWriter, Object * o));
IL2CPP_REGISTER_METHOD(0x0194AFD0, void, Serialize, (XmlSerializer * __this, XmlWriter * xmlWriter, Object * o, XmlSerializerNamespaces * namespaces));
IL2CPP_REGISTER_METHODINFO(0x04736930, XmlSerializer_Serialize_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0194B2D0, XmlSerializationWriter *, CreateWriter, (XmlSerializer * __this, XmlMapping * typeMapping));
IL2CPP_REGISTER_METHOD(0x0194B830, XmlSerializationReader *, CreateReader, (XmlSerializer * __this, XmlMapping * typeMapping));
}
