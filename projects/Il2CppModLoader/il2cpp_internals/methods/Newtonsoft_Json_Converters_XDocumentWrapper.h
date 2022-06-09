#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Converters::XDocumentWrapper {
IL2CPP_REGISTER_METHOD(0x01A56F70, XDocument *, get_Document, (app::XDocumentWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XDocumentWrapper * this_ptr, app::XDocument * document));
IL2CPP_REGISTER_METHOD(0x01A57040, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (app::XDocumentWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A57240, bool, get_HasChildNodes, (app::XDocumentWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A572A0, IXmlNode *, CreateComment, (app::XDocumentWrapper * this_ptr, app::String * text));
IL2CPP_REGISTER_METHOD(0x01A574B0, IXmlNode *, CreateTextNode, (app::XDocumentWrapper * this_ptr, app::String * text));
IL2CPP_REGISTER_METHOD(0x01A576C0, IXmlNode *, CreateCDataSection, (app::XDocumentWrapper * this_ptr, app::String * data));
IL2CPP_REGISTER_METHOD(0x01A578D0, IXmlNode *, CreateWhitespace, (app::XDocumentWrapper * this_ptr, app::String * text));
IL2CPP_REGISTER_METHOD(0x01A57AE0, IXmlNode *, CreateSignificantWhitespace, (app::XDocumentWrapper * this_ptr, app::String * text));
IL2CPP_REGISTER_METHOD(0x01A57CF0, IXmlNode *, CreateXmlDeclaration, (app::XDocumentWrapper * this_ptr, app::String * version, app::String * encoding, app::String * standalone));
IL2CPP_REGISTER_METHOD(0x01A57F10, IXmlNode *, CreateXmlDocumentType, (app::XDocumentWrapper * this_ptr, app::String * name, app::String * public_id, app::String * system_id, app::String * internal_subset));
IL2CPP_REGISTER_METHOD(0x01A58150, IXmlNode *, CreateProcessingInstruction, (app::XDocumentWrapper * this_ptr, app::String * target, app::String * data));
IL2CPP_REGISTER_METHOD(0x01A58360, IXmlElement *, CreateElement_1, (app::XDocumentWrapper * this_ptr, app::String * element_name));
IL2CPP_REGISTER_METHOD(0x01A58580, IXmlElement *, CreateElement_2, (app::XDocumentWrapper * this_ptr, app::String * qualified_name, app::String * namespace_uri));
IL2CPP_REGISTER_METHOD(0x01A587C0, IXmlNode *, CreateAttribute_1, (app::XDocumentWrapper * this_ptr, app::String * name, app::String * value));
IL2CPP_REGISTER_METHOD(0x01A589F0, IXmlNode *, CreateAttribute_2, (app::XDocumentWrapper * this_ptr, app::String * qualified_name, app::String * namespace_uri, app::String * value));
IL2CPP_REGISTER_METHOD(0x01A58C40, IXmlElement *, get_DocumentElement, (app::XDocumentWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A58DF0, IXmlNode *, AppendChild, (app::XDocumentWrapper * this_ptr, app::IXmlNode * new_child));
}
