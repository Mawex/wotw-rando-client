#include <interception_macros.h>

namespace app::methods::System::Xml::HtmlEncodedRawTextWriter {
IL2CPP_REGISTER_METHOD(0x021F89F0, void, __ctor, (HtmlEncodedRawTextWriter * __this, TextWriter * writer, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x021F8A20, void, __ctor, (HtmlEncodedRawTextWriter * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (HtmlEncodedRawTextWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (HtmlEncodedRawTextWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x021F8A50, void, WriteDocType, (HtmlEncodedRawTextWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x021F8E60, void, WriteStartElement, (HtmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021F9020, void, StartElementContent, (HtmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x021F9090, void, WriteEndElement, (HtmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021F9260, void, WriteFullEndElement, (HtmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021F9430, void, WriteStartAttribute, (HtmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x021F9670, void, WriteEndAttribute, (HtmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x021F9720, void, WriteProcessingInstruction, (HtmlEncodedRawTextWriter * __this, String * target, String * text));
IL2CPP_REGISTER_METHOD(0x021F98D0, void, WriteString, (HtmlEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x021F99C0, void, WriteEntityRef, (HtmlEncodedRawTextWriter * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0473C880, HtmlEncodedRawTextWriter_WriteEntityRef__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021F9A30, void, WriteCharEntity, (HtmlEncodedRawTextWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHODINFO(0x0471F200, HtmlEncodedRawTextWriter_WriteCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021F9AA0, void, WriteSurrogateCharEntity, (HtmlEncodedRawTextWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHODINFO(0x047759A8, HtmlEncodedRawTextWriter_WriteSurrogateCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DB1D60, void, WriteChars, (HtmlEncodedRawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x021F9B10, void, Init, (HtmlEncodedRawTextWriter * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x021F9EC0, void, WriteMetaElement, (HtmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x021FA080, void, WriteHtmlElementTextBlock, (HtmlEncodedRawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x021FA0A0, void, WriteHtmlAttributeTextBlock, (HtmlEncodedRawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x021FA0E0, void, WriteHtmlAttributeText, (HtmlEncodedRawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x021FA4A0, void, WriteUriAttributeText, (HtmlEncodedRawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x021FA920, void, OutputRestAmps, (HtmlEncodedRawTextWriter * __this));
}
