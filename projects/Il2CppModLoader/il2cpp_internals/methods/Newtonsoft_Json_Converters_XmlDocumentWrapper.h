using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::XmlDocumentWrapper {
IL2CPP_REGISTER_METHOD(0x01A59FC0, void, __ctor, (XmlDocumentWrapper * __this, XmlDocument * document));
IL2CPP_REGISTER_METHOD(0x01A5A100, IXmlNode *, CreateComment, (XmlDocumentWrapper * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01A5A270, IXmlNode *, CreateTextNode, (XmlDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A5A3E0, IXmlNode *, CreateCDataSection, (XmlDocumentWrapper * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01A5A550, IXmlNode *, CreateWhitespace, (XmlDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A5A6C0, IXmlNode *, CreateSignificantWhitespace, (XmlDocumentWrapper * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01A5A830, IXmlNode *, CreateXmlDeclaration, (XmlDocumentWrapper * __this, String * version, String * encoding, String * standalone));
IL2CPP_REGISTER_METHOD(0x01A5A9B0, IXmlNode *, CreateXmlDocumentType, (XmlDocumentWrapper * __this, String * name, String * publicId, String * systemId, String * internalSubset));
IL2CPP_REGISTER_METHOD(0x01A5AB40, IXmlNode *, CreateProcessingInstruction, (XmlDocumentWrapper * __this, String * target, String * data));
IL2CPP_REGISTER_METHOD(0x01A5ACC0, IXmlElement *, CreateElement, (XmlDocumentWrapper * __this, String * elementName));
IL2CPP_REGISTER_METHOD(0x01A5AE30, IXmlElement *, CreateElement, (XmlDocumentWrapper * __this, String * qualifiedName, String * namespaceUri));
IL2CPP_REGISTER_METHOD(0x01A5AFA0, IXmlNode *, CreateAttribute, (XmlDocumentWrapper * __this, String * name, String * value));
IL2CPP_REGISTER_METHOD(0x01A5B130, IXmlNode *, CreateAttribute, (XmlDocumentWrapper * __this, String * qualifiedName, String * namespaceUri, String * value));
IL2CPP_REGISTER_METHOD(0x01A5B2C0, IXmlElement *, get_DocumentElement, (XmlDocumentWrapper * __this));
}
