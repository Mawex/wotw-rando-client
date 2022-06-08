using namespace app;

namespace app::methods::System::Xml::HtmlUtf8RawTextWriterIndent {
IL2CPP_REGISTER_METHOD(0x0199D3E0, void, __ctor, (HtmlUtf8RawTextWriterIndent * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x0199D440, void, WriteDocType, (HtmlUtf8RawTextWriterIndent * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x0199D470, void, WriteStartElement, (HtmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199D6D0, void, StartElementContent, (HtmlUtf8RawTextWriterIndent * __this));
IL2CPP_REGISTER_METHOD(0x0199D760, void, WriteEndElement, (HtmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199D800, void, WriteStartAttribute, (HtmlUtf8RawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199D8A0, void, FlushBuffer, (HtmlUtf8RawTextWriterIndent * __this));
IL2CPP_REGISTER_METHOD(0x0199D8C0, void, Init, (HtmlUtf8RawTextWriterIndent * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x0199D900, void, WriteIndent, (HtmlUtf8RawTextWriterIndent * __this));
}
