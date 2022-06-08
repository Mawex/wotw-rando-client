#include <interception_macros.h>

namespace app::methods::System::Xml::HtmlEncodedRawTextWriterIndent {
IL2CPP_REGISTER_METHOD(0x021FAA40, void, __ctor, (HtmlEncodedRawTextWriterIndent * __this, TextWriter * writer, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x021FAAA0, void, __ctor, (HtmlEncodedRawTextWriterIndent * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x021FAB00, void, WriteDocType, (HtmlEncodedRawTextWriterIndent * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x021FAB30, void, WriteStartElement, (HtmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021FADC0, void, StartElementContent, (HtmlEncodedRawTextWriterIndent * __this));
IL2CPP_REGISTER_METHOD(0x021FAE50, void, WriteEndElement, (HtmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021FAEF0, void, WriteStartAttribute, (HtmlEncodedRawTextWriterIndent * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021FAF90, void, FlushBuffer, (HtmlEncodedRawTextWriterIndent * __this));
IL2CPP_REGISTER_METHOD(0x021FAFB0, void, Init, (HtmlEncodedRawTextWriterIndent * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x021FAFF0, void, WriteIndent, (HtmlEncodedRawTextWriterIndent * __this));
}
