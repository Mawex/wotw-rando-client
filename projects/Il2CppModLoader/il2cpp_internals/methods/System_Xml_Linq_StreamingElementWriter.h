using namespace app;

namespace app::methods::System::Xml::Linq::StreamingElementWriter {
IL2CPP_REGISTER_METHOD(0x00241380, void, __ctor, (StreamingElementWriter__Boxed * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x00241390, void, FlushElement, (StreamingElementWriter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002413A0, String *, GetPrefixOfNamespace, (StreamingElementWriter__Boxed * __this, XNamespace * ns, bool allowDefaultNamespace));
IL2CPP_REGISTER_METHOD(0x002413B0, void, PushElement, (StreamingElementWriter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002413C0, void, Write, (StreamingElementWriter__Boxed * __this, Object * content));
IL2CPP_REGISTER_METHOD(0x002413D0, void, WriteAttribute, (StreamingElementWriter__Boxed * __this, XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x047558A8, StreamingElementWriter_WriteAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002413E0, void, WriteNode, (StreamingElementWriter__Boxed * __this, XNode * n));
IL2CPP_REGISTER_METHOD(0x00241430, void, WriteStreamingElement, (StreamingElementWriter__Boxed * __this, XStreamingElement * e));
IL2CPP_REGISTER_METHOD(0x00241440, void, WriteString, (StreamingElementWriter__Boxed * __this, String * s));
}
