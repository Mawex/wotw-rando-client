using namespace app;

namespace app::methods::Mono::Xml::SecurityParser {
IL2CPP_REGISTER_METHOD(0x02286B70, void, __ctor, (SecurityParser * __this));
IL2CPP_REGISTER_METHOD(0x02286CC0, void, LoadXml, (SecurityParser * __this, String * xml));
IL2CPP_REGISTER_METHOD(0x002FBBA0, SecurityElement *, ToXml, (SecurityParser * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartParsing, (SecurityParser * __this, SmallXmlParser * parser));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessingInstruction, (SecurityParser * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnIgnorableWhitespace, (SecurityParser * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02286E50, void, OnStartElement, (SecurityParser * __this, String * name, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x02287100, void, OnEndElement, (SecurityParser * __this, String * name));
IL2CPP_REGISTER_METHOD(0x022871C0, void, OnChars, (SecurityParser * __this, String * ch));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndParsing, (SecurityParser * __this, SmallXmlParser * parser));
}
