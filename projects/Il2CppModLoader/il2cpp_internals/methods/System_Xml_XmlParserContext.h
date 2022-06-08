using namespace app;

namespace app::methods::System::Xml::XmlParserContext {
IL2CPP_REGISTER_METHOD(0x016FF100, void, __ctor, (XmlParserContext * __this, XmlNameTable * nt, XmlNamespaceManager * nsMgr, String * xmlLang, XmlSpace__Enum xmlSpace));
IL2CPP_REGISTER_METHOD(0x016FF200, void, __ctor, (XmlParserContext * __this, XmlNameTable * nt, XmlNamespaceManager * nsMgr, String * docTypeName, String * pubId, String * sysId, String * internalSubset, String * baseURI, String * xmlLang, XmlSpace__Enum xmlSpace));
IL2CPP_REGISTER_METHOD(0x016FF270, void, __ctor, (XmlParserContext * __this, XmlNameTable * nt, XmlNamespaceManager * nsMgr, String * docTypeName, String * pubId, String * sysId, String * internalSubset, String * baseURI, String * xmlLang, XmlSpace__Enum xmlSpace, Encoding * enc));
IL2CPP_REGISTER_METHODINFO(0x04767D68, XmlParserContext__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, XmlNameTable *, get_NameTable, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlNamespaceManager *, get_NamespaceManager, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_DocTypeName, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_PublicId, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_SystemId, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_BaseURI, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_InternalSubset, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_XmlLang, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x006410F0, XmlSpace__Enum, get_XmlSpace, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, Encoding *, get_Encoding, (XmlParserContext * __this));
IL2CPP_REGISTER_METHOD(0x016FF4E0, bool, get_HasDtdInfo, (XmlParserContext * __this));
}
