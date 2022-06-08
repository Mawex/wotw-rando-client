#include <interception_macros.h>

namespace app::methods::System::Xml::HtmlUtf8RawTextWriter {
IL2CPP_REGISTER_METHOD(0x0199B690, void, __ctor, (HtmlUtf8RawTextWriter * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (HtmlUtf8RawTextWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteXmlDeclaration, (HtmlUtf8RawTextWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x0199B6C0, void, WriteDocType, (HtmlUtf8RawTextWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x0199BA90, void, WriteStartElement, (HtmlUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199BC30, void, StartElementContent, (HtmlUtf8RawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199BC90, void, WriteEndElement, (HtmlUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199BE20, void, WriteFullEndElement, (HtmlUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199BFB0, void, WriteStartAttribute, (HtmlUtf8RawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x0199C1C0, void, WriteEndAttribute, (HtmlUtf8RawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199C240, void, WriteProcessingInstruction, (HtmlUtf8RawTextWriter * __this, String * target, String * text));
IL2CPP_REGISTER_METHOD(0x0199C3B0, void, WriteString, (HtmlUtf8RawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x0199C450, void, WriteEntityRef, (HtmlUtf8RawTextWriter * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0473A360, HtmlUtf8RawTextWriter_WriteEntityRef__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199C4C0, void, WriteCharEntity, (HtmlUtf8RawTextWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHODINFO(0x0473E5F8, HtmlUtf8RawTextWriter_WriteCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199C530, void, WriteSurrogateCharEntity, (HtmlUtf8RawTextWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHODINFO(0x047415F8, HtmlUtf8RawTextWriter_WriteSurrogateCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199C5A0, void, WriteChars, (HtmlUtf8RawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x0199C600, void, Init, (HtmlUtf8RawTextWriter * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x0199C9B0, void, WriteMetaElement, (HtmlUtf8RawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x0199CB70, void, WriteHtmlElementTextBlock, (HtmlUtf8RawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x0199CB90, void, WriteHtmlAttributeTextBlock, (HtmlUtf8RawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x0199CBD0, void, WriteHtmlAttributeText, (HtmlUtf8RawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x0199CED0, void, WriteUriAttributeText, (HtmlUtf8RawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x0199D2F0, void, OutputRestAmps, (HtmlUtf8RawTextWriter * __this));
}
