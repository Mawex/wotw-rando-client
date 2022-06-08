using namespace app;

namespace app::methods::System::Xml::XmlWriter {
IL2CPP_REGISTER_METHOD(0x01FD5540, void, WriteStartElement, (XmlWriter * __this, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01FD5570, void, WriteAttributeString, (XmlWriter * __this, String * localName, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x01FD55E0, void, WriteAttributeString, (XmlWriter * __this, String * localName, String * value));
IL2CPP_REGISTER_METHOD(0x01FD5650, void, WriteAttributeString, (XmlWriter * __this, String * prefix, String * localName, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x01FD56A0, void, WriteBinHex, (XmlWriter * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, (XmlWriter * __this));
IL2CPP_REGISTER_METHOD(0x01FD56D0, void, WriteValue, (XmlWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01FD56F0, void, WriteAttributes, (XmlWriter * __this, XmlReader * reader, bool defattr));
IL2CPP_REGISTER_METHODINFO(0x04733868, XmlWriter_WriteAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD5A80, void, WriteNode, (XmlWriter * __this, XmlReader * reader, bool defattr));
IL2CPP_REGISTER_METHODINFO(0x047859C8, XmlWriter_WriteNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FD5F90, void, WriteElementString, (XmlWriter * __this, String * localName, String * ns, String * value));
IL2CPP_REGISTER_METHOD(0x01FD6000, void, Dispose, (XmlWriter * __this));
IL2CPP_REGISTER_METHOD(0x01FD6020, void, Dispose, (XmlWriter * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01FD6060, XmlWriter *, Create, (Stream * output, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01FD61D0, XmlWriter *, Create, (TextWriter * output, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlWriter * __this));
}
