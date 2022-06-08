using namespace app;

namespace app::methods::System::Xml::ValidatingReaderNodeData {
IL2CPP_REGISTER_METHOD(0x01954890, void, __ctor, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x019548A0, void, __ctor, (ValidatingReaderNodeData * __this, XmlNodeType__Enum nodeType));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_LocalName, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_LocalName, (ValidatingReaderNodeData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Namespace, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Namespace, (ValidatingReaderNodeData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Prefix, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Prefix, (ValidatingReaderNodeData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x019548B0, String *, GetAtomizedNameWPrefix, (ValidatingReaderNodeData * __this, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_Depth, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_Depth, (ValidatingReaderNodeData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_RawValue, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_RawValue, (ValidatingReaderNodeData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_OriginalStringValue, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, XmlNodeType__Enum, get_NodeType, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_NodeType, (ValidatingReaderNodeData * __this, XmlNodeType__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, AttributePSVIInfo *, get_AttInfo, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_AttInfo, (ValidatingReaderNodeData * __this, AttributePSVIInfo * value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_LineNumber, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_LinePosition, (ValidatingReaderNodeData * __this));
IL2CPP_REGISTER_METHOD(0x019549A0, void, Clear, (ValidatingReaderNodeData * __this, XmlNodeType__Enum nodeType));
IL2CPP_REGISTER_METHOD(0x01954AA0, void, SetLineInfo, (ValidatingReaderNodeData * __this, int32_t lineNo, int32_t linePos));
IL2CPP_REGISTER_METHOD(0x01954AB0, void, SetLineInfo, (ValidatingReaderNodeData * __this, IXmlLineInfo * lineInfo));
IL2CPP_REGISTER_METHOD(0x01954B70, void, SetItemData, (ValidatingReaderNodeData * __this, String * localName, String * prefix, String * ns, int32_t depth));
IL2CPP_REGISTER_METHOD(0x01954C30, void, SetItemData, (ValidatingReaderNodeData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00D09510, void, SetItemData, (ValidatingReaderNodeData * __this, String * value, String * originalStringValue));
}
