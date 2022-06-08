using namespace app;

namespace app::methods::System::Xml::XmlEncodedRawTextWriter {
IL2CPP_REGISTER_METHOD(0x01DAF800, void, __ctor, (XmlEncodedRawTextWriter * __this, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01DAF930, void, __ctor, (XmlEncodedRawTextWriter * __this, TextWriter * writer, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01DAFA50, void, __ctor, (XmlEncodedRawTextWriter * __this, Stream * stream, XmlWriterSettings * settings));
IL2CPP_REGISTER_METHOD(0x01DAFE00, void, WriteXmlDeclaration, (XmlEncodedRawTextWriter * __this, XmlStandalone__Enum standalone));
IL2CPP_REGISTER_METHOD(0x01DB0040, void, WriteXmlDeclaration, (XmlEncodedRawTextWriter * __this, String * xmldecl));
IL2CPP_REGISTER_METHOD(0x01DB00F0, void, WriteDocType, (XmlEncodedRawTextWriter * __this, String * name, String * pubid, String * sysid, String * subset));
IL2CPP_REGISTER_METHOD(0x01DB04A0, void, WriteStartElement, (XmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB05B0, void, StartElementContent, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB0600, void, WriteEndElement, (XmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB0860, void, WriteFullEndElement, (XmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB0A00, void, WriteStartAttribute, (XmlEncodedRawTextWriter * __this, String * prefix, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01DB0BA0, void, WriteEndAttribute, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB0C20, void, WriteNamespaceDeclaration, (XmlEncodedRawTextWriter * __this, String * prefix, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsNamespaceDeclarationInChunks, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB0C80, void, WriteStartNamespaceDeclaration, (XmlEncodedRawTextWriter * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x01DB0E60, void, WriteEndNamespaceDeclaration, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB0EE0, void, WriteCData, (XmlEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB1270, void, WriteComment, (XmlEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB1490, void, WriteProcessingInstruction, (XmlEncodedRawTextWriter * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x01DB1670, void, WriteEntityRef, (XmlEncodedRawTextWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DB1780, void, WriteCharEntity, (XmlEncodedRawTextWriter * __this, uint16_t ch));
IL2CPP_REGISTER_METHODINFO(0x04769058, XmlEncodedRawTextWriter_WriteCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DB1A30, void, WriteWhitespace, (XmlEncodedRawTextWriter * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01DB1AB0, void, WriteString, (XmlEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB1B30, void, WriteSurrogateCharEntity, (XmlEncodedRawTextWriter * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01DB1D60, void, WriteChars, (XmlEncodedRawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DB1E00, void, WriteRaw, (XmlEncodedRawTextWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01950800, void, WriteRaw, (XmlEncodedRawTextWriter * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01DB1E90, void, Close, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB2170, void, Flush, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB21E0, void, FlushBuffer, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x047936C8, XmlEncodedRawTextWriter_FlushBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DB2470, void, EncodeChars, (XmlEncodedRawTextWriter * __this, int32_t startOffset, int32_t endOffset, bool writeAllToStream));
IL2CPP_REGISTER_METHOD(0x01DB2600, void, FlushEncoder, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB26E0, void, WriteAttributeTextBlock, (XmlEncodedRawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x01DB29E0, void, WriteElementTextBlock, (XmlEncodedRawTextWriter * __this, uint16_t * pSrc, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x01DB2D50, void, RawText, (XmlEncodedRawTextWriter * __this, String * s));
IL2CPP_REGISTER_METHOD(0x01DB2D80, void, RawText, (XmlEncodedRawTextWriter * __this, uint16_t * pSrcBegin, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x01DB2F80, void, WriteRawWithCharChecking, (XmlEncodedRawTextWriter * __this, uint16_t * pSrcBegin, uint16_t * pSrcEnd));
IL2CPP_REGISTER_METHOD(0x01DB32D0, void, WriteCommentOrPi, (XmlEncodedRawTextWriter * __this, String * text, int32_t stopChar));
IL2CPP_REGISTER_METHOD(0x01DB3750, void, WriteCDataSection, (XmlEncodedRawTextWriter * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DB3BA0, uint16_t *, EncodeSurrogate, (uint16_t * pSrc, uint16_t * pSrcEnd, uint16_t * pDst));
IL2CPP_REGISTER_METHODINFO(0x04767A38, XmlEncodedRawTextWriter_EncodeSurrogate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DB3D60, uint16_t *, InvalidXmlChar, (XmlEncodedRawTextWriter * __this, int32_t ch, uint16_t * pDst, bool entitize));
IL2CPP_REGISTER_METHODINFO(0x04763520, XmlEncodedRawTextWriter_InvalidXmlChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DB3F20, void, EncodeChar, (XmlEncodedRawTextWriter * __this, uint16_t * * pSrc, uint16_t * pSrcEnd, uint16_t * * pDst));
IL2CPP_REGISTER_METHOD(0x01DB3FB0, void, ChangeTextContentMark, (XmlEncodedRawTextWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01DB40F0, void, GrowTextContentMarks, (XmlEncodedRawTextWriter * __this));
IL2CPP_REGISTER_METHOD(0x01DB41C0, uint16_t *, WriteNewLine, (XmlEncodedRawTextWriter * __this, uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4240, uint16_t *, LtEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4260, uint16_t *, GtEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4280, uint16_t *, AmpEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB42A0, uint16_t *, QuoteEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB42C0, uint16_t *, TabEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB42E0, uint16_t *, LineFeedEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4300, uint16_t *, CarriageReturnEntity, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4320, uint16_t *, CharEntity, (uint16_t * pDst, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01DB4420, uint16_t *, RawStartCData, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4450, uint16_t *, RawEndCData, (uint16_t * pDst));
IL2CPP_REGISTER_METHOD(0x01DB4470, void, ValidateContentChars, (XmlEncodedRawTextWriter * __this, String * chars, String * propertyName, bool allowOnlyWhitespace));
IL2CPP_REGISTER_METHODINFO(0x047559F0, XmlEncodedRawTextWriter_ValidateContentChars__MethodInfo);
}
