using namespace app;

namespace app::methods::System::Xml::Serialization::XmlSerializerFactory {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlSerializerFactory * __this));
IL2CPP_REGISTER_METHOD(0x0194BAD0, XmlSerializer *, CreateSerializer, (XmlSerializerFactory * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0194BB00, XmlSerializer *, CreateSerializer, (XmlSerializerFactory * __this, Type * type, XmlRootAttribute * root));
IL2CPP_REGISTER_METHOD(0x0194BB30, XmlSerializer *, CreateSerializer, (XmlSerializerFactory * __this, Type * type, XmlAttributeOverrides * overrides, Type__Array * extraTypes, XmlRootAttribute * root, String * defaultNamespace));
IL2CPP_REGISTER_METHOD(0x0194BFC0, void, __cctor, (MethodInfo * method));
}
