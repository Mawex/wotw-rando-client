using namespace app;

namespace app::methods::System::Xml::DtdParser {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021E9AD0, void, __ctor, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021E9BE0, IDtdParser *, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021E9E00, void, Initialize, (DtdParser * __this, IDtdParserAdapter * readerAdapter));
IL2CPP_REGISTER_METHOD(0x021EA130, void, InitializeFreeFloatingDtd, (DtdParser * __this, String * baseUri, String * docTypeName, String * publicId, String * systemId, String * internalSubset, IDtdParserAdapter * adapter));
IL2CPP_REGISTER_METHODINFO(0x04786498, DtdParser_InitializeFreeFloatingDtd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021EA620, IDtdInfo *, IDtdParser_ParseInternalDtd, (DtdParser * __this, IDtdParserAdapter * adapter, bool saveInternalSubset));
IL2CPP_REGISTER_METHOD(0x021EA660, IDtdInfo *, IDtdParser_ParseFreeFloatingDtd, (DtdParser * __this, String * baseUri, String * docTypeName, String * publicId, String * systemId, String * internalSubset, IDtdParserAdapter * adapter));
IL2CPP_REGISTER_METHOD(0x021EA6B0, bool, get_ParsingInternalSubset, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EA6C0, bool, get_IgnoreEntityReferences, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EA6D0, bool, get_SaveInternalSubsetValue, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EA780, bool, get_ParsingTopLevelMarkup, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_SupportNamespaces, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_Normalize, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EA7A0, void, Parse, (DtdParser * __this, bool saveInternalSubset));
IL2CPP_REGISTER_METHOD(0x021EAAF0, void, ParseInDocumentDtd, (DtdParser * __this, bool saveInternalSubset));
IL2CPP_REGISTER_METHOD(0x021EAD50, void, ParseFreeFloatingDtd, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EADB0, void, ParseInternalSubset, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EADC0, void, ParseExternalSubset, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EAEE0, void, ParseSubset, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EB360, void, ParseAttlistDecl, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EBB80, void, ParseAttlistType, (DtdParser * __this, SchemaAttDef * attrDef, SchemaElementDecl * elementDecl, bool ignoreErrors));
IL2CPP_REGISTER_METHOD(0x021EC310, void, ParseAttlistDefault, (DtdParser * __this, SchemaAttDef * attrDef, bool ignoreErrors));
IL2CPP_REGISTER_METHOD(0x021EC610, void, ParseElementDecl, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021ECD30, void, ParseElementOnlyContent, (DtdParser * __this, ParticleContentValidator * pcv, int32_t startParenEntityId));
IL2CPP_REGISTER_METHOD(0x021ED3A0, void, ParseHowMany, (DtdParser * __this, ParticleContentValidator * pcv));
IL2CPP_REGISTER_METHOD(0x021ED420, void, ParseElementMixedContent, (DtdParser * __this, ParticleContentValidator * pcv, int32_t startParenEntityId));
IL2CPP_REGISTER_METHOD(0x021ED780, void, ParseEntityDecl, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EDC60, void, ParseNotationDecl, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EDF90, void, AddUndeclaredNotation, (DtdParser * __this, String * notationName));
IL2CPP_REGISTER_METHOD(0x021EE2F0, void, ParseComment, (DtdParser * __this));
IL2CPP_REGISTER_METHODINFO(0x047281A0, DtdParser_ParseComment__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021EE490, void, ParsePI, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EE590, void, ParseCondSection, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021EE810, void, ParseExternalId, (DtdParser * __this, DtdParser_Token__Enum idTokenType, DtdParser_Token__Enum declType, String * * publicId, String * * systemId));
IL2CPP_REGISTER_METHOD(0x021EED30, DtdParser_Token__Enum, GetToken, (DtdParser * __this, bool needWhiteSpace));
IL2CPP_REGISTER_METHOD(0x021F03E0, DtdParser_Token__Enum, ScanSubsetContent, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F0CD0, DtdParser_Token__Enum, ScanNameExpected, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F0D00, DtdParser_Token__Enum, ScanQNameExpected, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F0D30, DtdParser_Token__Enum, ScanNmtokenExpected, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F0D60, DtdParser_Token__Enum, ScanDoctype1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F0F00, DtdParser_Token__Enum, ScanDoctype2, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F1010, DtdParser_Token__Enum, ScanClosingTag, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F10F0, DtdParser_Token__Enum, ScanElement1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F1380, DtdParser_Token__Enum, ScanElement2, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F15B0, DtdParser_Token__Enum, ScanElement3, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F1640, DtdParser_Token__Enum, ScanElement4, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F1760, DtdParser_Token__Enum, ScanElement5, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F18C0, DtdParser_Token__Enum, ScanElement6, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F19E0, DtdParser_Token__Enum, ScanElement7, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F1A40, DtdParser_Token__Enum, ScanAttlist1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F1B60, DtdParser_Token__Enum, ScanAttlist2, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F2490, DtdParser_Token__Enum, ScanAttlist3, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F2580, DtdParser_Token__Enum, ScanAttlist4, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F26A0, DtdParser_Token__Enum, ScanAttlist5, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F27C0, DtdParser_Token__Enum, ScanAttlist6, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F2CA0, DtdParser_Token__Enum, ScanAttlist7, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F2DA0, DtdParser_Token__Enum, ScanLiteral, (DtdParser * __this, DtdParser_LiteralType__Enum literalType));
IL2CPP_REGISTER_METHOD(0x021F3DD0, XmlQualifiedName *, ScanEntityName, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F3F20, DtdParser_Token__Enum, ScanNotation1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F4060, DtdParser_Token__Enum, ScanSystemId, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F4160, DtdParser_Token__Enum, ScanEntity1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F41E0, DtdParser_Token__Enum, ScanEntity2, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F4360, DtdParser_Token__Enum, ScanEntity3, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F44C0, DtdParser_Token__Enum, ScanPublicId1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F45C0, DtdParser_Token__Enum, ScanPublicId2, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F4640, DtdParser_Token__Enum, ScanCondSection1, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F4A70, DtdParser_Token__Enum, ScanCondSection2, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F4B50, DtdParser_Token__Enum, ScanCondSection3, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5170, void, ScanName, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5180, void, ScanQName, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5190, void, ScanQName, (DtdParser * __this, bool isQName));
IL2CPP_REGISTER_METHOD(0x021F54B0, bool, ReadDataInName, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5500, void, ScanNmtoken, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F56E0, bool, EatPublicKeyword, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5840, bool, EatSystemKeyword, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F59A0, XmlQualifiedName *, GetNameQualified, (DtdParser * __this, bool canHavePrefix));
IL2CPP_REGISTER_METHOD(0x021F5CD0, String *, GetNameString, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5CD0, String *, GetNmtokenString, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5D00, String *, GetValue, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5D70, String *, GetValueWithStrippedSpaces, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5E70, int32_t, ReadData, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F5F30, void, LoadParsingBuffer, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F6080, void, SaveParsingBuffer, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F6090, void, SaveParsingBuffer, (DtdParser * __this, int32_t internalSubsetValueEndPos));
IL2CPP_REGISTER_METHOD(0x021F6190, bool, HandleEntityReference, (DtdParser * __this, bool paramEntity, bool inLiteral, bool inAttribute));
IL2CPP_REGISTER_METHOD(0x021F6200, bool, HandleEntityReference, (DtdParser * __this, XmlQualifiedName * entityName, bool paramEntity, bool inLiteral, bool inAttribute));
IL2CPP_REGISTER_METHOD(0x021F6450, bool, HandleEntityEnd, (DtdParser * __this, bool inLiteral));
IL2CPP_REGISTER_METHOD(0x021F65E0, SchemaEntity *, VerifyEntityReference, (DtdParser * __this, XmlQualifiedName * entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute));
IL2CPP_REGISTER_METHOD(0x021F6990, void, SendValidationEvent, (DtdParser * __this, int32_t pos, XmlSeverityType__Enum severity, String * code, String * arg));
IL2CPP_REGISTER_METHOD(0x021F6B60, void, SendValidationEvent, (DtdParser * __this, XmlSeverityType__Enum severity, String * code, String * arg));
IL2CPP_REGISTER_METHOD(0x021F6D20, void, SendValidationEvent, (DtdParser * __this, XmlSeverityType__Enum severity, XmlSchemaException * e));
IL2CPP_REGISTER_METHOD(0x021F6DE0, bool, IsAttributeValueType, (DtdParser * __this, DtdParser_Token__Enum token));
IL2CPP_REGISTER_METHOD(0x021F6DF0, int32_t, get_LineNo, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F6E80, int32_t, get_LinePos, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F6F30, String *, get_BaseUriStr, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F7010, void, OnUnexpectedError, (DtdParser * __this));
IL2CPP_REGISTER_METHOD(0x021F70A0, void, Throw, (DtdParser * __this, int32_t curPos, String * res));
IL2CPP_REGISTER_METHOD(0x021F7160, void, Throw, (DtdParser * __this, int32_t curPos, String * res, String * arg));
IL2CPP_REGISTER_METHOD(0x021F73F0, void, Throw, (DtdParser * __this, int32_t curPos, String * res, String__Array * args));
IL2CPP_REGISTER_METHOD(0x021F7690, void, Throw, (DtdParser * __this, String * res, String * arg, int32_t lineNo, int32_t linePos));
IL2CPP_REGISTER_METHOD(0x021F78A0, void, ThrowInvalidChar, (DtdParser * __this, int32_t pos, String * data, int32_t invCharPos));
IL2CPP_REGISTER_METHOD(0x021F79A0, void, ThrowInvalidChar, (DtdParser * __this, Char__Array * data, int32_t length, int32_t invCharPos));
IL2CPP_REGISTER_METHOD(0x021F7A70, void, ThrowUnexpectedToken, (DtdParser * __this, int32_t pos, String * expectedToken));
IL2CPP_REGISTER_METHOD(0x021F7A90, void, ThrowUnexpectedToken, (DtdParser * __this, int32_t pos, String * expectedToken1, String * expectedToken2));
IL2CPP_REGISTER_METHOD(0x021F7D40, String *, ParseUnexpectedToken, (DtdParser * __this, int32_t startPos));
IL2CPP_REGISTER_METHOD(0x021F7E60, String *, StripSpaces, (String * value));
}
