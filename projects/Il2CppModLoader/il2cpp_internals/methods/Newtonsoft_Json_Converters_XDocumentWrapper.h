using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::XDocumentWrapper {
IL2CPP_REGISTER_METHOD(0x01A56F70, XDocument *, get_Document, (XDocumentWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XDocumentWrapper * __this, XDocument * document));
IL2CPP_REGISTER_METHOD(0x01A57040, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (XDocumentWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A57240, bool, get_HasChildNodes, (XDocumentWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A572A0, IXmlNode *, CreateComment, (XDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A574B0, IXmlNode *, CreateTextNode, (XDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A576C0, IXmlNode *, CreateCDataSection, (XDocumentWrapper * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01A578D0, IXmlNode *, CreateWhitespace, (XDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A57AE0, IXmlNode *, CreateSignificantWhitespace, (XDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A57CF0, IXmlNode *, CreateXmlDeclaration, (XDocumentWrapper * __this, String * version, String * encoding, String * standalone));
IL2CPP_REGISTER_METHOD(0x01A57F10, IXmlNode *, CreateXmlDocumentType, (XDocumentWrapper * __this, String * name, String * publicId, String * systemId, String * internalSubset));
IL2CPP_REGISTER_METHOD(0x01A58150, IXmlNode *, CreateProcessingInstruction, (XDocumentWrapper * __this, String * target, String * data));
IL2CPP_REGISTER_METHOD(0x01A58360, IXmlElement *, CreateElement, (XDocumentWrapper * __this, String * elementName));
IL2CPP_REGISTER_METHOD(0x01A58580, IXmlElement *, CreateElement, (XDocumentWrapper * __this, String * qualifiedName, String * namespaceUri));
IL2CPP_REGISTER_METHOD(0x01A587C0, IXmlNode *, CreateAttribute, (XDocumentWrapper * __this, String * name, String * value));
IL2CPP_REGISTER_METHOD(0x01A589F0, IXmlNode *, CreateAttribute, (XDocumentWrapper * __this, String * qualifiedName, String * namespaceUri, String * value));
IL2CPP_REGISTER_METHOD(0x01A58C40, IXmlElement *, get_DocumentElement, (XDocumentWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A58DF0, IXmlNode *, AppendChild, (XDocumentWrapper * __this, IXmlNode * newChild));
}
