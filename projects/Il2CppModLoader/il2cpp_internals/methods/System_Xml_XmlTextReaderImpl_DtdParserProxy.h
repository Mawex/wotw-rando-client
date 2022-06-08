#include <interception_macros.h>

namespace app::methods::System::Xml::XmlTextReaderImpl_DtdParserProxy {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XmlTextReaderImpl_DtdParserProxy * __this, XmlTextReaderImpl * reader));
IL2CPP_REGISTER_METHOD(0x01FBB230, XmlNameTable *, IDtdParserAdapter_get_NameTable, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB250, IXmlNamespaceResolver *, IDtdParserAdapter_get_NamespaceResolver, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB270, Uri *, IDtdParserAdapter_get_BaseUri, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB370, bool, IDtdParserAdapter_get_IsEof, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01A88520, Char__Array *, IDtdParserAdapter_get_ParsingBuffer, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB390, int32_t, IDtdParserAdapter_get_ParsingBufferLength, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB3B0, int32_t, IDtdParserAdapter_get_CurrentPosition, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB3D0, void, IDtdParserAdapter_set_CurrentPosition, (XmlTextReaderImpl_DtdParserProxy * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01FBB3F0, int32_t, IDtdParserAdapter_get_EntityStackLength, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB410, bool, IDtdParserAdapter_get_IsEntityEolNormalized, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB430, void, IDtdParserAdapter_OnNewLine, (XmlTextReaderImpl_DtdParserProxy * __this, int32_t pos));
IL2CPP_REGISTER_METHOD(0x01FBB460, int32_t, IDtdParserAdapter_get_LineNo, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB480, int32_t, IDtdParserAdapter_get_LineStartPosition, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB4A0, int32_t, IDtdParserAdapter_ReadData, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBB4C0, int32_t, IDtdParserAdapter_ParseNumericCharRef, (XmlTextReaderImpl_DtdParserProxy * __this, StringBuilder * internalSubsetBuilder));
IL2CPP_REGISTER_METHOD(0x01FBB500, int32_t, IDtdParserAdapter_ParseNamedCharRef, (XmlTextReaderImpl_DtdParserProxy * __this, bool expand, StringBuilder * internalSubsetBuilder));
IL2CPP_REGISTER_METHOD(0x01FBB520, void, IDtdParserAdapter_ParsePI, (XmlTextReaderImpl_DtdParserProxy * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x01FBB580, void, IDtdParserAdapter_ParseComment, (XmlTextReaderImpl_DtdParserProxy * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x01FBB5A0, bool, IDtdParserAdapter_PushEntity, (XmlTextReaderImpl_DtdParserProxy * __this, IDtdEntityInfo * entity, int32_t * entityId));
IL2CPP_REGISTER_METHOD(0x01FBB6D0, bool, IDtdParserAdapter_PopEntity, (XmlTextReaderImpl_DtdParserProxy * __this, IDtdEntityInfo * * oldEntity, int32_t * newEntityId));
IL2CPP_REGISTER_METHOD(0x01FBB740, bool, IDtdParserAdapter_PushExternalSubset, (XmlTextReaderImpl_DtdParserProxy * __this, String * systemId, String * publicId));
IL2CPP_REGISTER_METHOD(0x01FBB8C0, void, IDtdParserAdapter_PushInternalDtd, (XmlTextReaderImpl_DtdParserProxy * __this, String * baseUri, String * internalDtd));
IL2CPP_REGISTER_METHOD(0x01FBB960, void, IDtdParserAdapter_Throw, (XmlTextReaderImpl_DtdParserProxy * __this, Exception * e));
IL2CPP_REGISTER_METHOD(0x01FBB990, void, IDtdParserAdapter_OnSystemId, (XmlTextReaderImpl_DtdParserProxy * __this, String * systemId, LineInfo keywordLineInfo, LineInfo systemLiteralLineInfo));
IL2CPP_REGISTER_METHOD(0x01FBBA70, void, IDtdParserAdapter_OnPublicId, (XmlTextReaderImpl_DtdParserProxy * __this, String * publicId, LineInfo keywordLineInfo, LineInfo publicLiteralLineInfo));
IL2CPP_REGISTER_METHOD(0x01FBBB50, bool, IDtdParserAdapterWithValidation_get_DtdValidation, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBBB80, IValidationEventHandling *, IDtdParserAdapterWithValidation_get_ValidationEventHandling, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x017176B0, bool, IDtdParserAdapterV1_get_Normalization, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01717690, bool, IDtdParserAdapterV1_get_Namespaces, (XmlTextReaderImpl_DtdParserProxy * __this));
IL2CPP_REGISTER_METHOD(0x01FBBBA0, bool, IDtdParserAdapterV1_get_V1CompatibilityMode, (XmlTextReaderImpl_DtdParserProxy * __this));
}
